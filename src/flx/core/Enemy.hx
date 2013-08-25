package flx.core;
import util.MathHelp;
import motion.easing.Linear;
import motion.Actuate;
import org.flixel.tweens.misc.MultiVarTween;
import util.MathHelp;
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

    public function new(x:Float, y:Float, spawnPlaces:Array<SpawnPlace>, map:TiledLevel, hero:Player) {
        super();

        loadGraphic('assets/monster1_tilesheet.png', false, true, 192, 192);
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
        _spawnPts = spawnPlaces;
        _level = map;
        _hero = hero;

        _lastHeroFl = new Point(0, 0);
        _currentFl = new Point(-1000, -1000);

        _speed = Facade.I.initialMonsterSped;
        _damage = Facade.I.initialMonsterDmg;
        _exp = Facade.I.monsterExp;
        _health = Facade.I.initialMonsterHealth;

//        this.scale.make(1.5, 1.5);
    }

    private var _level:TiledLevel;
    private var _spawnPts:Array<SpawnPlace>;

    var _stopFl:Point;
    private var _nextStop:SpawnPlace;

    private var _patrolPath:FlxPath;
    private var _currentFl:Point;
    private var _moving:Bool;
    private var _hero:Player;

    private var _chasePath:FlxPath;
    private var _chasing:Bool;
    private var _lastHeroFl:Point;
    private var _heroFl:Point;
    private var _chaseTween:MultiVarTween;

    private var _speed:Float;
    private var _exp:Float;
    private var _damage:Float;
    private var _health:Float;

    public function isIdle():Bool { return _patrolPath == null; }

    override public function update():Void {

        if (last.x < this.x) {
            this.facing = FlxObject.LEFT;
        } else if (last.x > this.x) {
            this.facing = FlxObject.RIGHT;
        }

        _heroFl = new Point(_hero.x + _hero.width / 2, _hero.y + _hero.height / 2);
        var myPt:Point = new Point(x + width/2, y + width/2);

        var chasePath:Float = Math.abs(Point.distance(_heroFl, myPt));
        if (chasePath < 200) {
            _patrolPath = null;
            _currentFl.setTo(-1000, -1000);
            if (chasePath <= 30) {
                trace('aquired');
            } else {
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

                trace(MathHelp.roundExp(MathHelp.rad2deg(Math.atan2(tt.y, tt.x)), 2));
                this.x += FlxG.elapsed * _speed * Math.cos(Math.atan2(tt.y, tt.x));
                this.y += FlxG.elapsed * _speed * Math.sin(Math.atan2(tt.y, tt.x));
                this.x = MathHelp.roundExp(x, 2);
                this.y = MathHelp.roundExp(y, 2);
            }
        } else {
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

    private function findPatrolPath():Void {
        _nextStop = _spawnPts[MathHelp.randomIntRange(0, _spawnPts.length - 1)];
        _stopFl = new Point(_nextStop.x + _nextStop.width / 2, _nextStop.y + _nextStop.height / 2);

        _patrolPath = _level.findCollidePath(new FlxPoint(this.x + this.width / 2, this.y + this.height / 2), new FlxPoint(_nextStop.x + _nextStop.width / 2, _nextStop.y + _nextStop.height / 2), true);
        if (_patrolPath != null) {
            _patrolPath.ignoreDrawDebug = false;
        }
    }

    private function findChasePath():Void {
        _chasePath = _level.findCollidePath(new FlxPoint(this.x + this.width / 2, this.y + this.height / 2), new FlxPoint(_hero.x + _hero.width / 2, _hero.y + _hero.height / 2), false);
        if (_patrolPath != null) {
            _patrolPath.ignoreDrawDebug = false;
        }
    }

    private function tweenPatrol():Void {
        if (_patrolPath != null) {
            trace('tween patrol', _moving, _chasing);
            _moving = true;
            var tt:FlxPoint = _patrolPath.head();
            if (tt != null) {
                var fl1:Point = new Point(tt.x - this.width / 2, tt.y - this.height / 2);
                var fl2:Point = new Point(this.x + this.width / 2, this.y + this.height / 2);

                if (Math.abs(Point.distance(fl2, _stopFl)) < 150) {
                    _patrolPath = _nextStop.makePathAround(new FlxPoint(this.x, this.y));
                    if (_patrolPath != null) {
                        _patrolPath.ignoreDrawDebug = true;
                    }
                    _moving = false;
                } else {
                    var dist:Float = Point.distance(fl1, fl2);
                    if (dist == 0) {
                        _patrolPath.removeAt(0);
                        tweenPatrol();
                    }
                    var time:Float = Math.abs(dist) / _speed;

                    Actuate.tween(this, time, {x:fl1.x, y:fl1.y}, true).ease(Linear.easeNone).onComplete(tweenPatrol);
                    _patrolPath.removeAt(0);
                }
            } else {
                _moving = false;
            }
        }
    }

    private function tweenChase():Void {
        if (_chasePath != null) {
            trace('tween chase', _moving, _chasing);
            _moving = true;
            var tt:FlxPoint = _chasePath.head();
            if (tt != null) {
                var fl1:Point = new Point(tt.x - this.width / 2, tt.y - this.height / 2);
                var fl2:Point = new Point(this.x + this.width / 2, this.y + this.height / 2);

                if (Math.abs(Point.distance(fl2, _heroFl)) < 30) {
//                    _patrolPath = _nextStop.makePathAround(new FlxPoint(this.x, this.y));
//                    if (_patrolPath != null) {
//                        _patrolPath.ignoreDrawDebug = true;
//                    }
                    _moving = false;
                    trace('subject aquired');
                } else {
                    var dist:Float = Point.distance(fl1, fl2);
                    if (dist == 0) {
                        _chasePath.removeAt(0);
                        tweenChase();
                    }
                    var time:Float = Math.abs(dist) / 50;

                    Actuate.stop(this);
                    Actuate.tween(this, time, {x:fl1.x, y:fl1.y}, true).ease(Linear.easeNone).onComplete(tweenChase);
//                    _chaseTween = FlxG.tween();
                    _chasePath.removeAt(0);
                }
            } else {
                _chasePath = null;
                _moving = false;
            }
        }
    }
}
