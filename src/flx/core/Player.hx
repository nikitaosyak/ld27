package flx.core;
import haxe.ds.IntMap;
import flash.geom.Point;
import flash.geom.Point;
import motion.Actuate.ObjectHash;
import flx.state.level.LevelBase;
import org.flixel.FlxG;
import haxe.Timer;
import util.MathHelp;
import org.flixel.FlxSprite;
class Player extends FlxSprite {

    public static inline var ANIM_IDLE:String = 'idle';
    public static inline var ANIM_MOVE:String = 'move';
    public static inline var ANIM_SWING:String = 'swing';
    public static inline var ANIM_DEATH:String = 'death';

    public function new(level:LevelBase) {
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
        addAnimation(ANIM_DEATH, [16, 17, 18, 19, 20, 21, 22, 23, 24], 9, false);
        addAnimationCallback(onSwing);

        dead = false;
        this.level = level;

        hittableEnemies = new List<Enemy>();

        regenCountDown = 0;

        hp = Facade.I.health;
        maxHp = hp;
        xp = 0;
        lvlUpXp = Facade.I.xp;
        dmg = Facade.I.damage;
        regen = Facade.I.regen;
        moveSpd = Facade.I.moveSpd;
        attackSpd = Facade.I.attackSpd;

        lastFrame = 0;
        lastAni = '';
    }

    private var level:LevelBase;
    public var dead:Bool;
    public var hittableEnemies:List<Enemy>;

    public var maxHp:Float;
    public var hp:Float;

    public var xp:Float;
    public var lvlUpXp:Float;

    public var dmg:Float;
    public var regen:Float;
    public var moveSpd:Float;
    public var attackSpd:Float;

    private var regenCountDown:Float;

    public function initialize(spawnX:Float, spawnY:Float):Void {
        this.x = MathHelp.roundExp(spawnX, 0);
        this.y = MathHelp.roundExp(spawnY, 0);
    }

    override public function update():Void {
        super.update();

        regenCountDown += FlxG.elapsed;
        if (regenCountDown >= 1) {
//            Facade.I.health;
            regenCountDown = 0;
        }
    }

    private var lastFrame:Int;
    private var lastAni:String;

    private function onSwing(name:String, frame:Int, idx:Int):Void {
        if (name == ANIM_SWING) {
            if (frame == 4 || frame == 5) {
                var iter:Iterator<Enemy> = hittableEnemies.iterator();
                while (iter.hasNext()) {
                    var enemy:Enemy = iter.next();
                    enemy.receiveHit(dmg);
                }
            }
            if (frame == 6) {

                var iter:Iterator<Enemy> = hittableEnemies.iterator();
                while (iter.hasNext()) {
                    var enemy:Enemy = iter.next();
                    enemy.releaseFromHit();
                }
                Timer.delay(function():Void {
                    PlayerController.SWING_LOCK = false;
                }, 25);
            }
        }
        if (name == ANIM_DEATH) {
            if (frame == 1) {
                dead = true;
            }
            if (frame == 8) {
                pauseAnimation();
                Timer.delay(function():Void {
                    FlxG.resetGame();
                }, 1000);
            }
        }

        lastAni = name;
        lastFrame = frame;
    }

    private function lvlUp():Void {

    }
}
