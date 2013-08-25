package flx.core;
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
        _spawnPts = spawnPlaces;
        _level = map;
        _hero = hero;
    }

    private var _level:TiledLevel;
    private var _spawnPts:Array<SpawnPlace>;

    var _stopFl:Point;
    private var _nextStop:SpawnPlace;

    private var _path:FlxPath;
    private var _moving:Bool;
    private var _hero:Player;

    public function isIdle():Bool { return _path == null; }

    override public function update():Void {

        if (last.x < this.x) {
            this.facing = FlxObject.LEFT;
        } else {
            this.facing = FlxObject.RIGHT;
        }

        super.update();

        if (_path == null) {
            findNewPath();
        } else {
            if (!_moving) {
                tweenNext();
            }
        }
    }

    private function findNewPath():Void {
        _nextStop = _spawnPts[MathHelp.randomIntRange(0, _spawnPts.length-1)];
        _stopFl = new Point(_nextStop.x + _nextStop.width/2, _nextStop.y + _nextStop.height/2);

        _path = _level.findCollidePath(new FlxPoint(this.x + this.width/2, this.y + this.height/2), new FlxPoint(_nextStop.x + _nextStop.width/2, _nextStop.y+ _nextStop.height/2));
        if (_path != null) {
            _path.ignoreDrawDebug = true;
        }
    }

    private function tweenNext():Void {
        if (_path != null) {
            _moving = true;
            var tt:FlxPoint = _path.head();
            if (tt != null) {
                var fl1:Point = new Point(tt.x - this.width/2, tt.y - this.height/2);
                var fl2:Point = new Point(this.x + this.width/2, this.y + this.height/2);

                if (Math.abs(Point.distance(fl2, _stopFl)) < 150) {
                    _path = _nextStop.makePathAround(new FlxPoint(this.x, this.y));
                    if (_path != null) {
                        _path.ignoreDrawDebug = true;
                    }
                    _moving = false;
                } else {
                    var dist:Float = Point.distance(fl1, fl2);
                    if (dist == 0) {
                        _path.removeAt(0);
                        tweenNext();
                    }
                    var time:Float = Math.abs(dist) / 100;

                    FlxG.tween(this, {x:fl1.x, y:fl1.y}, time, {complete: tweenNext});
                    _path.removeAt(0);
                }
            } else {
                _moving = false;
//                trace(_nextStop.x, _nextStop, y, this.x, this.y);
//                trace('done move');
            }
        }
    }
}
