package flx.core;
import org.flixel.plugin.photonstorm.FlxBar;
import haxe.Timer;
import util.MathHelp;
import motion.easing.Linear;
import motion.Actuate;
import org.flixel.tweens.misc.MultiVarTween;
import tmx.TiledLevel;
import org.flixel.FlxPath;
import org.flixel.FlxObject;
import flash.geom.Point;
import org.flixel.tweens.util.Ease.EaseFunction;
import org.flixel.FlxG;
import org.flixel.util.FlxPoint;
import org.flixel.FlxPath;
import flx.state.level.LevelBase;
import org.flixel.FlxSprite;

class Enemy extends FlxSprite {

    public static inline var ANIM_MOVE:String = 'move';
    public static inline var ANIM_ATTACK:String = 'attack';
    public static inline var ANIM_DEATH:String = 'death';
    public static inline var ANIM_STAGGER:String = 'stagger';

    public function new(x:Float, y:Float, level:LevelBase) {
        super();

        loadGraphic('assets/monster1_tilesheet.png', true, true, 192, 192);
        this.antialiasing = true;
        immovable = false;

        width = 50;
        height = 40;
        offset.make(66, 90);
        setOriginToCenter();

        this.x = x - this.width / 2;
        this.y = y - this.height / 2;

        _moving = false;
        _chasing = false;
        _spawnPts = level.spawnPlaces;
        _level = level.level;
        _hero = level.player;
        _levelBase = level;

        _lastHeroFl = new Point(0, 0);
        _currentFl = new Point(-1000, -1000);

        _attackSpeed = Facade.I.monsterInitialAttackSpeed;
        _speed = Facade.I.initialMonsterSpeed;
        _damage = Facade.I.initialMonsterDmg;
        _exp = Facade.I.initialMonsterExp;
        maxHealth = Facade.I.initialMonsterHealth;
        currentHealth = maxHealth;


        _heroFl = new Point();
        myPt = new Point();

        addAnimationCallback(onAnimation);

        _currLevel = 0;
        _lvlUpTimer = 0;

        addAnimation(ANIM_MOVE, [0, 1, 2, 3], 4);
        addAnimation(ANIM_ATTACK, [0, 0, 4, 5, 6, 7], Math.floor(_attackSpeed));
        addAnimation(ANIM_DEATH, [8, 9, 10, 11, 12], 7);
        addAnimation(ANIM_STAGGER, [8, 9, 8], 12);

        hitLock = false;
        lifePercent = 100;
    }

    public var bar:FlxBar;

    public var myPt:Point;

    private var _level:TiledLevel;
    private var _spawnPts:Array<SpawnPlace>;

    var _stopFl:Point;
    private var _nextStop:SpawnPlace;

    private var _patrolPath:FlxPath;
    private var _currentFl:Point;
    private var _moving:Bool;
    private var _hero:Player;
    private var _levelBase:LevelBase;

    private var _chasePath:FlxPath;
    private var _chasing:Bool;
    private var _lastHeroFl:Point;
    private var _heroFl:Point;
    private var _chaseTween:MultiVarTween;

    private var _currLevel:Int;
    private var _incorporeal:Float;
    private var _speed:Float;
    private var _attackSpeed:Float;
    private var _exp:Float;
    private var _damage:Float;
    public var maxHealth:Float;
    public var currentHealth:Float;

    public var lifePercent:Float;

    private var _lvlUpTimer:Float;

    public var hitLock:Bool;

    public function isIdle():Bool { return _patrolPath == null; }

    override public function update():Void {
        if (curAnim == ANIM_DEATH) {
            _hero.hittableEnemies.remove(this);
            super.update();
            return;
        }

        if (curAnim == ANIM_STAGGER) {
            super.update();
            return;
        }

        _lvlUpTimer += FlxG.elapsed;
        if (_lvlUpTimer > Facade.I.lvlUpTime) {
            lvlUp();
            _lvlUpTimer = 0;
            super.update();
            return;
        }

        _heroFl.setTo(_hero.x + _hero.width / 2, _hero.y + _hero.height / 2);
        myPt = new Point(x + width/2, y + width/2);

        var chasePath:Float = Math.abs(Point.distance(_heroFl, myPt));
        if (!_hero.dead && chasePath < 200) {
            _patrolPath = null;
            _currentFl.setTo(-1000, -1000);
            if (chasePath <= 50) {
                var tt:Point = new Point(myPt.x - _heroFl.x, myPt.y - _heroFl.y);

                var angle:Float = MathHelp.rad2deg(Math.atan2(tt.y, tt.x));

                if (MathHelp.isInRange(angle, -40, 40) && _hero.facing == FlxObject.LEFT) {
                    _hero.hittableEnemies.add(this);
                }else
                if (angle < -140 && _hero.facing == FlxObject.RIGHT) {
                    _hero.hittableEnemies.add(this);
                }else
                if (angle > 140 && _hero.facing == FlxObject.RIGHT) {
                    _hero.hittableEnemies.add(this);
                }
            } else {
                if (_hero.hittableEnemies.remove(this)) {

                }
            }
            if (chasePath <= 40) {
                play(ANIM_ATTACK);
            } else {
                play(ANIM_MOVE);
                var accX:Int = 0;
                var accY:Int = 0;
                if (myPt.x < _heroFl.x) {
                    accX = 1;
                    this.facing = FlxObject.LEFT;
                } else if (myPt.x > _heroFl.x) {
                    accX = -1;
                    this.facing = FlxObject.RIGHT;
                } else {
                    accX = 0;
                }

                var tt:Point = new Point(_heroFl.x - myPt.x, _heroFl.y - myPt.y);

                this.x += FlxG.elapsed * _speed * Math.cos(Math.atan2(tt.y, tt.x));
                this.y += FlxG.elapsed * _speed * Math.sin(Math.atan2(tt.y, tt.x));
                this.x = MathHelp.roundExp(x, 2);
                this.y = MathHelp.roundExp(y, 2);
            }
        } else {
            play(ANIM_MOVE);
            if (_patrolPath == null) {
                findPatrolPath();
            } else {
                if (_patrolPath.head() != null) {
                    if ((_currentFl.x == -1000 && _currentFl.y == -1000) || Math.abs(Point.distance(myPt, _currentFl)) < 1) {
                        _currentFl.setTo(_patrolPath.head().x, _patrolPath.head().y);
                        _patrolPath.removeAt(0);
                    }

                    if (Math.abs(Point.distance(myPt, _stopFl)) < 50) {
                        findPatrolPath();
                    } else {

                        var accX:Int = 0;
                        var accY:Int = 0;
                        if (myPt.x < _currentFl.x) {
                            accX = 1;
                            this.facing = FlxObject.LEFT;
                        } else if (myPt.x > _currentFl.x) {
                            accX = -1;
                            this.facing = FlxObject.RIGHT;
                        } else {
                            accX = 0;
                        }
                        var tt:Point = new Point(_currentFl.x - myPt.x, _currentFl.y - myPt.y);

                        this.x += FlxG.elapsed * _speed * Math.cos(Math.atan2(tt.y, tt.x));
                        this.y += FlxG.elapsed * _speed * Math.sin(Math.atan2(tt.y, tt.x));
                        this.x = MathHelp.roundExp(x, 2);
                        this.y = MathHelp.roundExp(y, 2);
                    }
                } else {
                    _patrolPath = null;
                    _currentFl.setTo(-1000, -1000);
                }
            }
        }

        super.update();
    }

    public function receiveHit(damage:Float):Void {
        if (hitLock) return;
        hitLock = true;

        // incorporeal chance :
        if (Math.random() < _incorporeal) {
            _levelBase.hud.emitIncorporeal(this);
            return;
        }

        currentHealth -= damage;
        lifePercent = currentHealth/ maxHealth * 100;
        if (currentHealth <= 0) {
            play(ANIM_DEATH, false);
        } else {
            play(ANIM_STAGGER, true);
        }
    }

    public function releaseFromHit():Void {
        hitLock = false;
    }

    private function findPatrolPath():Void {
        _nextStop = _spawnPts[MathHelp.randomIntRange(0, _spawnPts.length - 1)];
        _stopFl = new Point(_nextStop.x + _nextStop.width / 2, _nextStop.y + _nextStop.height / 2);

        _patrolPath = _level.findCollidePath(new FlxPoint(this.x + this.width / 2, this.y + this.height / 2), new FlxPoint(_nextStop.x + _nextStop.width / 2, _nextStop.y + _nextStop.height / 2), true);
        if (_patrolPath != null) {
            _patrolPath.ignoreDrawDebug = true;
        }
    }

    private function lvlUp():Void {
        _currLevel++;
        color = Facade.I.colors[Std.int(Math.min(_currLevel, Facade.I.colors.length-1))];
        alpha = Facade.I.alphas[Std.int(Math.min(_currLevel, Facade.I.alphas.length-1))];
        _incorporeal = Facade.I.incorporeal[Std.int(Math.min(_currLevel, Facade.I.incorporeal.length-1))];

        _speed = Math.min(_speed * Facade.I.monsterSpeedMultiplier, Facade.I.monsterMaxSpeed);
        _damage = Math.min(_damage * Facade.I.monsterDmgMultiplier, Facade.I.monsterMaxDmg);

        _exp = _exp * Facade.I.monsterExpMultiplier;

        var healthM:Float = currentHealth / maxHealth;
        maxHealth = maxHealth * Facade.I.monsterHealthMultiplier;
        currentHealth = maxHealth * healthM;
        lifePercent = currentHealth/ maxHealth * 100;

        _attackSpeed *= Facade.I.monsterAttackSpeedMultiplier;
        addAnimation(ANIM_ATTACK, [0, 0, 4, 5, 6, 7], Math.floor(Math.min(_attackSpeed, Facade.I.monsterMaxAttackSpeed)));

        var scale:Float = Facade.I.sizes[Std.int(Math.min(_currLevel, Facade.I.sizes.length-1))];
        this.scale.make(scale, scale);
    }

    private function onAnimation(name:String, frame:Int, idx:Int):Void {

        if (name == ANIM_ATTACK) {
            if (frame == 3) {
                this._hero.play(Player.ANIM_DEATH);
            }
        }

        if (name == ANIM_STAGGER) {
            if (frame == 3) {
                play(ANIM_MOVE);
            }
        }

        if (name == ANIM_DEATH) {
            if (frame == 4) {
                Timer.delay(function():Void {
                    _levelBase.layoutObjects.remove(this);
                    _levelBase.collideObjects.remove(this, true);
                    _levelBase.enemies.remove(this);
                    _levelBase.layoutObjects.remove(bar);
                    SpawnPlace.currentEnemies--;
                }, 40);
            }
        }
    }
}
