package flx.core;
import util.MathHelp;
import org.flixel.FlxObject;
import org.flixel.FlxG;
import flash.geom.Point;
import flx.state.level.LevelBase;
import org.flixel.FlxSprite;
import haxe.Timer;
class Boss extends FlxSprite implements IHitable {

    public static inline var ANIM_MOVE:String = 'move';
    public static inline var ANIM_ATTACK:String = 'attack';
    public static inline var ANIM_ATTACK2:String = 'attack2';
    public static inline var ANIM_DEATH:String = 'death';
    public static inline var ANIM_STAGGER:String = 'stagger';
    public static inline var ANIM_APPEAR:String = 'appear';

    public function new(x:Float, y:Float, state:LevelBase) {
        super();

        level = state;
        _hero = state.player;

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
        addAnimation(ANIM_ATTACK, [0, 0, 4, 5, 6, 7, 8, 8, 8, 8], 7);
        addAnimation(ANIM_ATTACK2, [4, 5, 6, 7, 7, 6, 5, 4, 4], 13);
        addAnimation(ANIM_DEATH, [12, 13, 14, 15, 15, 15, 15, 15, 15, 16, 17, 18, 19, 20], 5);
        addAnimation(ANIM_STAGGER, [12, 14, 14, 14], 6);
        addAnimation(ANIM_APPEAR, [20, 19, 18, 17, 16, 15, 14, 13, 12, 12, 0, 0, 0], 5);

        frame = 20;

        addAnimationCallback(onAnimation);
        suspended = true;
        staggered = false;

        myPt = new Point();
        heroPt = new Point();

        _health = 450;
        _speed = 180;
        _damage = 80;
    }

    public var lastHit:Float;


    private var _health:Float;
    private var _speed:Float;
    private var _damage:Float;

    private var _hero:Player;
    private var level:LevelBase;

    public var myPt:Point;
    public var heroPt:Point;
    public var hitLock:Bool;

    public var suspended:Bool;
    public var staggered:Bool;

    public function activate():Void {
        play(ANIM_APPEAR);
    }

    override public function update():Void {

if (Timer.stamp() - lastHit > 0.130) {
color = 0x00ffffff;
lastHit = 0;
}

        if (frame == 20) {
            super.update();
            return;
        }
        if (suspended) {
            super.update();
            return;
        };
        if (curAnim == ANIM_DEATH) {
            _hero.hittableEnemies.remove(this);
            super.update();
            return;
        }

        if (curAnim == ANIM_STAGGER) {
            _hero.releaseHitLock(this);
            super.update();
            return;
        }

        heroPt.setTo(_hero.x + _hero.width/2, _hero.y + _hero.height/2);
        myPt.setTo(x + width/2, y + height/2);

        if (Math.abs(Point.distance(heroPt, myPt)) < 90) {
            var tt:Point = new Point(myPt.x - heroPt.x, myPt.y - heroPt.y);

            var angle:Float = MathHelp.rad2deg(Math.atan2(tt.y, tt.x));

            if (MathHelp.isInRange(angle, -45, 45) && _hero.facing == FlxObject.LEFT) {
                _hero.hittableEnemies.add(this);
            }else
            if (angle < -135 && _hero.facing == FlxObject.RIGHT) {
                _hero.hittableEnemies.add(this);
            }else
            if (angle > 135 && _hero.facing == FlxObject.RIGHT) {
                _hero.hittableEnemies.add(this);
            } else {
                _hero.hittableEnemies.remove(this);
            }
        } else {
            _hero.hittableEnemies.remove(this);
        }

        if (Math.abs(Point.distance(heroPt, myPt)) <= 80) {
            if (curAnim == ANIM_ATTACK || curAnim == ANIM_ATTACK2) {
            super.update();
            return;
            }

            if (Math.random() < 0.4) {
                play(ANIM_ATTACK);
            } else {
                play(ANIM_ATTACK2);
            }
        } else {
            if (curAnim == ANIM_ATTACK || curAnim == ANIM_ATTACK2) {
                super.update();
                return;
            }

            _hero.releaseHitLock(this);
            var accX:Int = 0;
            var accY:Int = 0;
            if (myPt.x < heroPt.x) {
                accX = 1;
                this.facing = FlxObject.LEFT;
            } else if (myPt.x > heroPt.x) {
                accX = -1;
                this.facing = FlxObject.RIGHT;
            } else {
                accX = 0;
            }

            var tt:Point = new Point(heroPt.x - myPt.x, heroPt.y - myPt.y);

            this.x += FlxG.elapsed * _speed * Math.cos(Math.atan2(tt.y, tt.x));
            this.y += FlxG.elapsed * _speed * Math.sin(Math.atan2(tt.y, tt.x));
            this.x = MathHelp.roundExp(x, 2);
            this.y = MathHelp.roundExp(y, 2);
        }

        super.update();
    }

    public function receiveHit(damage:Float):Void {
        if (hitLock) return;
        hitLock = true;

        _health -= damage;
        if (_health <= 0) {
            play(ANIM_DEATH, false);
            _hero.releaseHitLock(this);
        } else {
lastHit = Timer.stamp();
color = 0xf20000;
            if (Math.random() < 0.3) {
                play(ANIM_STAGGER);
            }
        }
    }

    public function releaseFromHit():Void {
        hitLock = false;
    }

    private function onAnimation(name:String, frame:Int, idx:Int):Void {
        if (name == ANIM_APPEAR) {
            if (frame == 12) {
                suspended = false;
                play(ANIM_MOVE);
            }
        }

        if (suspended) return;

        if (name == ANIM_STAGGER) {
            if (frame == 3) {
                play(ANIM_MOVE);
            }
        }

        if (name == ANIM_ATTACK) {
            if (frame == 7) {
                FlxG.camera.shake(0.005, 0.8);
                heroPt.setTo(_hero.x + _hero.width/2, _hero.y + _hero.height/2);
                myPt.setTo(x + width/2, y + height/2);
                if (Math.abs(Point.distance(heroPt, myPt))<80) {
                    _hero.receiveHit(_damage, this);
                }
            }
            if (frame == 9) {
                play(ANIM_MOVE);
                _hero.releaseHitLock(this);
            }
        }

        if (name == ANIM_ATTACK2) {
            if (frame == 3) {
                heroPt.setTo(_hero.x + _hero.width/2, _hero.y + _hero.height/2);
                myPt.setTo(x + width/2, y + height/2);
                if (Math.abs(Point.distance(heroPt, myPt))<80) {
                    _hero.receiveHit(_damage/2, this);
                }
            }
            if (frame == 8) {
                play(ANIM_MOVE);
                _hero.releaseHitLock(this);
            }
        }

        if (name == ANIM_DEATH) {
            if (frame == 13) {
                pauseAnimation();
                frame = 20;
                level.collideObjects.remove(this, true);
            }
        }
    }
}
