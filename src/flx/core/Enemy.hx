package flx.core;
import flash.geom.Point;
import org.flixel.tweens.util.Ease.EaseFunction;
import org.flixel.FlxG;
import org.flixel.util.FlxPoint;
import org.flixel.FlxPath;
import flx.state.level.LevelBase;
import org.flixel.FlxSprite;
class Enemy extends FlxSprite {

    public function new(x:Float, y:Float, level:LevelBase) {
        super();

        loadGraphic('assets/an_enemy.png', false, false, 64, 64);
        this.antialiasing = true;
        immovable = false;

        width = 60;
        height = 30;
        offset.make(2, 32);
        setOriginToCenter();

        this.x = x;
        this.y = y;

        _moving = false;
        _level = level;
        _path = _level.level.findCollidePath(new FlxPoint(this.x + this.width/2, this.y + this.height/2), new FlxPoint(this.x + this.width/2 + 500, this.y + this.height/2 + 500));
    }

    private var _level:LevelBase;
    private var _path:FlxPath;
    private var _moving:Bool;

    public function isIdle():Bool { return _path == null; }

    override public function update():Void {
        super.update();

        if (_path == null) {

        } else {
            if (!_moving) {
                tweenNext();
            }
        }
    }

    private function tweenNext():Void {
//        FlxG.tween(object, { x: 500, y: 350 }, 2.0, { ease: easeFunction, complete: onComplete } );
        if (_path != null) {
            _moving = true;
            var tt:FlxPoint = _path.head();
            if (tt != null) {
                var fl1:Point = new Point(tt.x, tt.y);
                var fl2:Point = new Point(this.x, this.y);
                var dist:Float = Point.distance(fl1, fl2);
                var time:Float = dist / 100;

                FlxG.tween(this, {x:tt.x - this.width/2, y:tt.y - this.height/2}, time, {complete: tweenNext});
                _path.removeAt(0);
            } else {
                trace('nowhere to go');
            }
        }
    }
}
