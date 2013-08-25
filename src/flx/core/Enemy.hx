package flx.core;
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

        this.x = x - this.width/2;
        this.y = y - this.height/2;

        _moving = false;
        _chasing = false;
        _spawnPts = spawnPlaces;
        _level = map;
        _hero = hero;

        _lastHeroFl = new Point(0, 0);
    }

    private var _level:TiledLevel;
    private var _spawnPts:Array<SpawnPlace>;

    var _stopFl:Point;
    private var _nextStop:SpawnPlace;

    private var _patrolPath:FlxPath;
    private var _moving:Bool;
    private var _hero:Player;

    private var _chasePath:FlxPath;
    private var _chasing:Bool;
    private var _lastHeroFl:Point;
    private var _heroFl:Point;
    private var _chaseTween:MultiVarTween;

    public function isIdle():Bool { return _patrolPath == null; }

    override public function update():Void {

        if (last.x < this.x) {
            this.facing = FlxObject.LEFT;
        } else {
            this.facing = FlxObject.RIGHT;
        }

        super.update();

        _heroFl = new Point(_hero.x + _hero.width/2, _hero.y + _hero.height/2);
        var myPt:Point = new Point(x + width/2, y + height/2);

        var chasePath:Float = Math.abs(Point.distance(_heroFl, myPt));
        if (chasePath < 300) {
            if (chasePath >= 30) {
                if (!_chasing) {
                    _chasing = true;
                    _patrolPath = null;
                    _moving = false;
                } else {
                    if (_lastHeroFl.x != 0 && _lastHeroFl.y != 0) {
                        if (Math.abs(Point.distance(_heroFl, _lastHeroFl)) > 20) {
                            _chasePath = null;
                            _lastHeroFl.setTo(_heroFl.x, _heroFl.y);
                        }
                    } else {
                        _lastHeroFl.setTo(_heroFl.x, _heroFl.y);
                    }
                }
            }
        } else {
            if (_chasing) {
                _chasing = false;
                _chasePath = null;
                _patrolPath = null;
                _moving = false;
                Actuate.stop(this);
            }
        }


        if (_chasing) {
            if (_chasePath == null) {
                findChasePath();
            } else {
                if (!_moving) {
                    tweenChase();
                }
            }
        } else {
            if (_patrolPath == null) {
                findPatrolPath();
            } else {
                if (!_moving) {
                    tweenPatrol();
                }
            }
        }
    }

    private function findPatrolPath():Void {
        _nextStop = _spawnPts[MathHelp.randomIntRange(0, _spawnPts.length-1)];
        _stopFl = new Point(_nextStop.x + _nextStop.width/2, _nextStop.y + _nextStop.height/2);

        _patrolPath = _level.findCollidePath(new FlxPoint(this.x + this.width/2, this.y + this.height/2), new FlxPoint(_nextStop.x + _nextStop.width/2, _nextStop.y+ _nextStop.height/2));
        if (_patrolPath != null) {
            _patrolPath.ignoreDrawDebug = true;
        }
    }

    private function findChasePath():Void {
        _chasePath = _level.findCollidePath(new FlxPoint(this.x + this.width/2, this.y + this.height/2), new FlxPoint(_hero.x + _hero.width/2, _hero.y + _hero.height/2), true);
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
                var fl1:Point = new Point(tt.x - this.width/2, tt.y - this.height/2);
                var fl2:Point = new Point(this.x + this.width/2, this.y + this.height/2);

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
                    var time:Float = Math.abs(dist) / 30;

                    FlxG.tween(this, {x:fl1.x, y:fl1.y}, time, {complete: tweenPatrol});
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
                var fl1:Point = new Point(tt.x - this.width/2, tt.y - this.height/2);
                var fl2:Point = new Point(this.x + this.width/2, this.y + this.height/2);

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
                    var time:Float = Math.abs(dist) / 30;

                    Actuate.stop(this);
                    Actuate.tween(this, time, {x:fl1.x, y:fl1.y}, true).onComplete(tweenChase);
//                    _chaseTween = FlxG.tween();
                    _chasePath.removeAt(0);
                }
            } else {
                _moving = false;
            }
        }
    }
}
