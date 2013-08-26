package flx.core;
import haxe.ds.ObjectMap;
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

        hpLevel = 0;
        dmgLevel = 0;

        attackSpd = Facade.I.attackSpeeds[dmgLevel];

        addAnimation(ANIM_IDLE, [0, 1, 2, 3], 5);
        addAnimation(ANIM_MOVE, [4, 5, 6, 7], 10);
        addAnimation(ANIM_SWING, [8, 9, 10, 11, 12, 13, 14, 14, 14], attackSpd, false);
        addAnimation(ANIM_DEATH, [16, 17, 18, 19, 20, 21, 22, 23, 24], 9, false);
        addAnimationCallback(onSwing);

        dead = false;
        this.level = level;

        hittableEnemies = new List<IHitable>();

        hp = Facade.I.healths[hpLevel];
        maxHp = hp;
        dmg = Facade.I.damages[dmgLevel];

        moveSpd = Facade.I.moveSpd;

        lastFrame = 0;
        lastAni = '';
        lastHit = 0;

        hitLock = false;
        enemiesLocked = new ObjectMap<IHitable, IHitable>();
    }

    private var hpLevel:Int;
    private var dmgLevel:Int;

    private var level:LevelBase;

    public var dead:Bool;
    public var hittableEnemies:List<IHitable>;

    public var maxHp:Float;
    public var hp:Float;

    public var dmg:Float;
    public var moveSpd:Float;
    public var attackSpd:Int;

    public var lastHit:Float;

    private var hitLock:Bool;
    private var enemiesLocked:ObjectMap<IHitable, IHitable>;

    public function initialize(spawnX:Float, spawnY:Float):Void {
        this.x = MathHelp.roundExp(spawnX, 0);
        this.y = MathHelp.roundExp(spawnY, 0);
    }

    override public function update():Void {
        if (Timer.stamp() - lastHit > 0.130) {
            color = 0x00ffffff;
            lastHit = 0;
        }

        super.update();
    }

    public function receiveHit(damage:Float, fromEnemy:IHitable):Void {
        if (frame == 24) return;
        if (enemiesLocked.exists(fromEnemy)) {
            return;
        } else {
            enemiesLocked.set(fromEnemy, fromEnemy);
        }
        hp -= damage;

        if (hp <= 0) {
            play(ANIM_DEATH, false);
        } else {
            lastHit = Timer.stamp();
            color = 0xf20000;
        }
    }

    public function releaseHitLock(enemy:IHitable):Void {
        if (enemiesLocked.exists(enemy)) {
            enemiesLocked.remove(enemy);
        }
    }

    public function upDmgLevel():Void {
        dmgLevel = Std.int(Math.min(dmgLevel + 1, 6));
        dmg = Facade.I.damages[dmgLevel];
        attackSpd = Facade.I.attackSpeeds[dmgLevel];
        addAnimation(ANIM_SWING, [8, 9, 10, 11, 12, 13, 14, 14, 14], attackSpd, false);
    }

    public function upHealthLevel():Void {
        hpLevel++;
        maxHp = Facade.I.healths[Std.int(Math.min(hpLevel, Facade.I.healths.length-1))];
        hp = maxHp;
    }

    private var lastFrame:Int;
    private var lastAni:String;

    private function onSwing(name:String, frame:Int, idx:Int):Void {
        if (name == ANIM_SWING) {
            if (frame == 5 || frame == 6 || frame == 7) {
                var iter:Iterator<IHitable> = hittableEnemies.iterator();
                while (iter.hasNext()) {
                    var hitable:IHitable = iter.next();
                    hitable.receiveHit(dmg);
                }
            }
            if (frame == 8) {
                var iter:Iterator<IHitable> = hittableEnemies.iterator();
                while (iter.hasNext()) {
                    var hitable:IHitable = iter.next();
                    hitable.releaseFromHit();
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
                frame = 24;
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
