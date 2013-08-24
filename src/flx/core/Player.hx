package flx.core;
import util.MathHelp;
import org.flixel.FlxSprite;
class Player extends FlxSprite {

    public static inline var ANIM_IDLE:String = 'idle';

    public function new() {
        super();
        loadGraphic('assets/char_tilesheet.png', true, false, 192, 192);
        this.antialiasing = true;
        immovable = false;

        width = 40;
        height = 32;
        offset.make(75, 96);
        setOriginToCenter();

        addAnimation(ANIM_IDLE, [0, 1, 2, 3], 10);

    }

    public function initialize(spawnX:Float, spawnY:Float):Void {
        this.x = MathHelp.roundExp(spawnX, 0);
        this.y = MathHelp.roundExp(spawnY, 0);

        play(ANIM_IDLE);
    }
}
