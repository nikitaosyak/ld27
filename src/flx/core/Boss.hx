package flx.core;
import flash.geom.Point;
import flx.state.level.LevelBase;
import org.flixel.FlxSprite;
class Boss extends FlxSprite {

    public static inline var ANIM_MOVE:String = 'move';
    public static inline var ANIM_ATTACK:String = 'attack';
    public static inline var ANIM_DEATH:String = 'death';
    public static inline var ANIM_STAGGER:String = 'stagger';
    public static inline var ANIM_APPEAR:String = 'appear';

    public function new(x:Float, y:Float, state:LevelBase) {
        super();

        loadGraphic('assets/boss_tilesheet.png', true, true, 192, 192);
        this.antialiasing = true;
        immovable = true;

        offset.make(63, 130);
        width = 65;
        height = 36;

        setOriginToCenter();

        this.x = x - this.width / 2;
        this.y = y - this.height / 2;

        addAnimation(ANIM_MOVE, [0, 1, 2, 3], 5);
        addAnimation(ANIM_ATTACK, [0, 0, 0, 4, 5, 6, 7, 8, 8, 8, 8], 10);
        addAnimation(ANIM_DEATH, [12, 13, 14, 15, 15, 15, 15, 15, 15, 16, 17, 18, 19, 20], 5);
        addAnimation(ANIM_STAGGER, [13, 12, 13], 10);
        addAnimation(ANIM_APPEAR, [20, 19, 18, 17, 16, 15, 14, 13, 12, 12, 0, 0], 5);

        frame = 20;
    }

    public var myPt:Point;
    public var hitLock:Bool;

    public function activate():Void {
        play(ANIM_APPEAR);
    }
}
