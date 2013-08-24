package flx.core;
import haxe.Timer;
import util.MathHelp;
import org.flixel.FlxSprite;
class Player extends FlxSprite {

    public static inline var ANIM_IDLE:String = 'idle';
    public static inline var ANIM_MOVE:String = 'move';
    public static inline var ANIM_SWING:String = 'swing';

    public function new() {
        super();
        loadGraphic('assets/char_tilesheet.png', true, true, 192, 192);
        this.antialiasing = true;
        immovable = false;

        width = 40;
        height = 32;
        offset.make(74, 96);
        setOriginToCenter();

        addAnimation(ANIM_IDLE, [0, 1, 2, 3], 5);
        addAnimation(ANIM_MOVE, [4, 5, 6, 7], 10);
        addAnimation(ANIM_SWING, [8, 9, 10, 11, 12, 13, 14], 25, false);
        addAnimationCallback(onSwing);
    }

    public function initialize(spawnX:Float, spawnY:Float):Void {
        this.x = MathHelp.roundExp(spawnX, 0);
        this.y = MathHelp.roundExp(spawnY, 0);
    }

    private function onSwing(name:String, frame:Int, idx:Int):Void {
        if (name != ANIM_SWING) return;

        if (frame == 6) {
            Timer.delay(function():Void {
                PlayerController.SWING_LOCK = false;
            }, 25);
        }
    }
}
