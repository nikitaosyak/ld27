package flx.core;
import haxe.Timer;
import org.flixel.FlxObject;
import flx.ui.EnemyLifeBar;
import flash.geom.Point;
import org.flixel.FlxPath;
import org.flixel.util.FlxPoint;
import util.MathHelp;
import flx.state.level.LevelBase;
import flash.events.TimerEvent;
import org.flixel.FlxG;
import org.flixel.FlxSprite;

class SpawnPlace extends FlxSprite implements IHitable {

    public static var currentEnemies:Int;

    public function new(x:Int, y:Int, parentState:LevelBase) {
        super();

        this.loadGraphic('assets/grave2_tilesheet.png', false, false, 128, 128);
        frame = 0;

        setOriginToCenter();

        this.x = x;
        this.y = y - 64;

        _aggregateTime = 0;
        _level = parentState;

        var cent:Point = new Point(this.x + 32, this.y + 96);
        _spawnRanges = new Array<Point>();
        _spawnRanges.push(new Point(cent.x, cent.y - 64));
        _spawnRanges.push(new Point(cent.x + 64, cent.y - 64));
        _spawnRanges.push(new Point(cent.x + 128, cent.y - 64));
        _spawnRanges.push(new Point(cent.x + 128, cent.y));
        _spawnRanges.push(new Point(cent.x + 128, cent.y + 64));
        _spawnRanges.push(new Point(cent.x + 64, cent.y + 64));
        _spawnRanges.push(new Point(cent.x, cent.y + 64));
        _spawnRanges.push(new Point(cent.x - 64, cent.y + 64));
        _spawnRanges.push(new Point(cent.x - 64, cent.y));
        _spawnRanges.push(new Point(cent.x - 64, cent.y - 64));

        if (Math.random() > 0.5) {
            spawnEnemy();
        }

        myPt = new Point(this.x + 64, this.y + 96);

        _health = 3;
        hitLock = false;
    }

    public function makePathAround(fromPt:FlxPoint):FlxPath {
        return null;
    }

    private var _aggregateTime:Float;
    private var _level:LevelBase;
    private var _spawnRanges:Array<Point>;

    private var _health:Int;
    private var myPt:Point;

    private var hitLock:Bool;
    private var redTime:Float;

    override public function update():Void {
        super.update();

        if (_health <= 0) {
            frame = 1;
            return;
        }

        if (Timer.stamp() - redTime > 0.130) {
            color = 0x00ffffff;
            redTime = 0;
        }

        var _hero:Player = _level.player;
        var _heroFl:Point = new Point(_level.player.x + _level.player.width / 2, _level.player.y + _level.player.height / 2);

        var heroDist:Float = Math.abs(Point.distance(_heroFl, myPt));
        if (heroDist <= 70) {
            var tt:Point = new Point(myPt.x - _heroFl.x, myPt.y - _heroFl.y);

            var angle:Float = MathHelp.rad2deg(Math.atan2(tt.y, tt.x));

            if (MathHelp.isInRange(angle, -42, 42) && _hero.facing == FlxObject.LEFT) {
                _hero.hittableEnemies.add(this);
            }else
            if (angle < -138 && _hero.facing == FlxObject.RIGHT) {
                _hero.hittableEnemies.add(this);
            }else
            if (angle > 138 && _hero.facing == FlxObject.RIGHT) {
                _hero.hittableEnemies.add(this);
            } else {
                _hero.hittableEnemies.remove(this);
            }
        } else {
            _hero.hittableEnemies.remove(this);
        }

        _aggregateTime += FlxG.elapsed;
        if (_aggregateTime > Facade.I.spawnTime) {
            if (Math.random() > Facade.I.spawnChance) {
                var newSeed:Float = Math.random();
                if (newSeed < 0.7) {
                    spawnEnemy();
                } else {
                    spawnEnemy();
                    spawnEnemy();
                }
            }
            _aggregateTime = 0;
        }
    }

    public function receiveHit(damage:Float):Void {
        if (hitLock) return;
        hitLock = true;

        _health--;

        if (_health == 0) {
            frame = 1;
            color = 0x00ffffff;
            _level.player.hittableEnemies.remove(this);

            if (Math.random() < 0.3) {
                var targ:Point = _spawnRanges[MathHelp.randomIntRange(0, _spawnRanges.length-1)];
                targ.x -= 32;
                targ.y -= 32;

                var type:String;
                if (Math.random() < 0.3) type = "damage" else type = "health";
                var powerUp:PowerUp = new PowerUp(x, y, type, _level);
                _level.layoutObjects.add(powerUp);
            }
        } else if (_health > 0) {
            color = 0xf20000;
            redTime = Timer.stamp();
        }
    }

    public function releaseFromHit():Void {
        hitLock = false;
    }

    private function spawnEnemy():Void {
        if (currentEnemies >= Facade.I.maxMonsters) return;
        var targ:Point = _spawnRanges[MathHelp.randomIntRange(0, _spawnRanges.length-1)];
        var enemyGen:Enemy = new Enemy(targ.x, targ.y, _level);
        _level.enemies.push(enemyGen);
        _level.layoutObjects.add(enemyGen);

        var enemyBar:EnemyLifeBar = new EnemyLifeBar(enemyGen);
        _level.layoutObjects.add(enemyBar);
        enemyGen.bar = enemyBar;
        currentEnemies++;
    }

}
