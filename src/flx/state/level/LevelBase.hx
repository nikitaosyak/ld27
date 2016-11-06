package flx.state.level;

import flixel.*;
import flixel.group.FlxGroup;
import flixel.addons.editors.tiled.*;

import motion.easing.Linear;
import motion.Actuate;
import flx.core.Boss;
import flash.geom.Rectangle;
import flash.geom.Point;
import flx.core.Lever;
import flx.core.InvisibleCollider;
import flx.ui.Hud;
import flx.core.CameraOverride;
import haxe.Timer;
import util.MathHelp;
import util.MathHelp;
import flx.core.Facade;
import flx.core.PlayerController;
import openfl.Assets;
import flx.core.SpawnPlace;
import flx.core.Enemy;
import flx.core.Player;

class LevelBase extends FlxState {

    public function new() {
        super();
    }

    private var controller:PlayerController;
    public var level:TiledMap;

    public var player:Player;
    public var spawnPlaces:Array<SpawnPlace>;
    public var enemies:List<Enemy>;
    public var collideObjects:FlxTypedGroup<FlxSprite>;
    public var backGroundObjects:FlxTypedGroup<FlxSprite>;
    // public var layoutObjects:SortingGroup;

    public var bossDoors:List<InvisibleCollider>;
    public var bossReleaseImages:List<FlxSprite>;

    public var hud:Hud;
    public var boss:Boss;

    override public function create():Void {
        Lever.TOTAL_LEVERS = 0;
        SpawnPlace.currentEnemies = 0;

        controller = new PlayerController();
        spawnPlaces = new Array<SpawnPlace>();
        enemies = new List<Enemy>();
        collideObjects = new FlxTypedGroup<FlxSprite>();
        backGroundObjects = new FlxTypedGroup<FlxSprite>();
        hud = new Hud(this);
        bossDoors = new List<InvisibleCollider>();
        bossReleaseImages = new List<FlxSprite>();

        asRadian = MathHelp.deg2rad(45);
        level = new TiledMap("assets/tiled/testmap.tmx");

        // var cam:CameraOverride = new CameraOverride();
        // cam.setBounds(0, 0, level.fullWidth, level.fullHeight, true);
        // FlxG.resetCameras(cam);
        // hud.setAll("scrollFactor", new FlxPoint(0, 0));
        // hud.setAll("cameras", [FlxG.camera]);

        // add(level.backgroundTiles);
        // add(backGroundObjects);
//        add(level.foregroundTiles);

        // layoutObjects = new SortingGroup();
        // add(layoutObjects);
        // level.loadObjects(this);
        // layoutObjects.sort();

        add(hud);

        var left:FlxSprite = new FlxSprite(0, 0);
        left.makeGraphic(416, 640, 0xFF000000, false);
        // left.scrollFactor = new FlxPoint(0, 0);
        add(left);

        var right:FlxSprite = new FlxSprite(417, 0);
        right.makeGraphic(416, 640, 0xFF000000, false);
        // right.scrollFactor = new FlxPoint(0, 0);
        add(right);

        Actuate.tween(left, 2.5, {x: -420}, true).onComplete(function(state:FlxState):Void {
            state.remove(left, true);
        }, [this]).ease(Linear.easeNone);

        Actuate.tween(right, 2.5, {x: 840}, true).onComplete(function(state:FlxState):Void {
            state.remove(right, true);
        }, [this]).ease(Linear.easeNone);

        bossStage = false;
        bossOpened = false;

        fading = false;
    }

    private var bossStage:Bool;
    private var bossOpened:Bool;

    private static var asRadian:Float;
    private var fading:Bool;

    override public function update(dt:Float):Void {

        // if (hud.restartAllow) {
        //     if (FlxG.keys.pressed('X')) {
        //         if (fading) return;
        //         fading = true;
        //         FlxG.fade(0xFF000000, 0.5, false, function():Void {FlxG.resetState();});
        //     }
        // }
        var tt:Float = Timer.stamp();
        var timeDiff:Float = FlxG.elapsed;

        var moveSpd:Float = Facade.I.moveSpd * timeDiff;
        var wasMove:Bool = true;

        // if (player.frame == 24) {
        //     super.update();
        //     return;
        // }
        if (player.animation.curAnim.name == Player.ANIM_VICTORY) {
            super.update(dt);
            return;
        }
        if (player.animation.curAnim.name == Player.ANIM_DEATH) {

        } else
        if (PlayerController.SWING_LOCK) {
            wasMove = false;
            if (player.animation.curAnim.name != Player.ANIM_SWING) {
                player.animation.play(Player.ANIM_SWING);
            }
        } else
        if (controller.accX != 0 && controller.accY != 0) {

            var diffX:Float = (moveSpd * controller.accX) * Math.cos(asRadian);
            var diffY:Float = (moveSpd * controller.accY) * Math.sin(asRadian);

            player.x = MathHelp.roundExp(player.x + diffX, 5);
            player.y = MathHelp.roundExp(player.y + diffY, 5);

            if (controller.accX > 0) {
                player.facing = FlxObject.LEFT;
            } else {
                player.facing = FlxObject.RIGHT;
            }
            player.animation.play(Player.ANIM_MOVE);
        } else if (controller.accX != 0) {
            player.x = MathHelp.roundExp(player.x + controller.accX * moveSpd, 5);
            if (controller.accX > 0) {
                player.facing = FlxObject.LEFT;
            } else {
                player.facing = FlxObject.RIGHT;
            }
            player.animation.play(Player.ANIM_MOVE);
        } else if (controller.accY != 0) {
            player.y = MathHelp.roundExp(player.y + controller.accY * moveSpd, 5);
            player.animation.play(Player.ANIM_MOVE);
        } else {
            wasMove = false;
            player.animation.play(Player.ANIM_IDLE);
        }

        if (wasMove) {
            // level.collideWithLevel(player, onTileMapCollide, null);
        }

        if (wasMove) {
            FlxG.overlap(collideObjects, player, onObjectCollide, FlxObject.separate);
        }

        if (wasMove) {
            // layoutObjects.sort();
        }

        if (wasMove && !bossStage && bossOpened) {
            var myPt:Point = new Point(player.x + player.width/2, player.y + player.height/2);
            var bossPt:Point = new Point(boss.x + boss.width/2, boss.y + boss.height/2);

            if (Math.abs(Point.distance(myPt, bossPt)) < 280) {
                lockBossWalls();
                boss.activate();
                bossStage = true;
            }
        }

        super.update(dt);
    }

    public function openBoss():Void {
        var doorsI:Iterator<InvisibleCollider> = bossDoors.iterator();
        while (doorsI.hasNext()) {
            collideObjects.remove(doorsI.next(), true);
        }

        var pathObjI:Iterator<FlxSprite> = bossReleaseImages.iterator();
        while (pathObjI.hasNext()) {
            backGroundObjects.add(pathObjI.next());
        }

        bossOpened = true;
    }

    public function lockBossWalls():Void {
        var doorsI:Iterator<InvisibleCollider> = bossDoors.iterator();
        while (doorsI.hasNext()) {
            collideObjects.add(doorsI.next());
        }

        var pathObjI:Iterator<FlxSprite> = bossReleaseImages.iterator();
        while (pathObjI.hasNext()) {
            backGroundObjects.remove(pathObjI.next(), true);
        }
    }

    private function onTileMapCollide(some:FlxObject, some2:FlxObject):Void {
//        trace(some);
    }

    private function onObjectCollide(some:FlxObject, some2:FlxObject):Void {
//        trace(Type.typeof(some2), Type.typeof(player));

        var tt:FlxObject = cast(player, FlxObject);
        if (Type.getClass(some2) == Type.getClass(tt)) {
//            trace('player detected');
        }
//        if (Type.typeof(some))
//        player.play(Player.ANIM_DEATH);
    }

// this is purely for code completion

    override public function add(object:FlxBasic):FlxBasic {
        return super.add(object);
    }

// this is purely for code completion

    override public function remove(object:FlxBasic, Splice:Bool = false):FlxBasic {
        return super.remove(object, Splice);
    }

    override public function destroy():Void {
        controller.destroy();
    }
}