package flx.state.level;
import flash.geom.Rectangle;
import flash.geom.Point;
import flx.core.Lever;
import flx.core.InvisibleCollider;
import org.flixel.util.FlxPoint;
import flx.ui.Hud;
import flx.core.CameraOverride;
import haxe.Timer;
import util.MathHelp;
import util.MathHelp;
import flx.core.Facade;
import flx.core.PlayerController;
import flx.core.SortingGroup;
import org.flixel.FlxObject;
import org.flixel.FlxSprite;
import tmx.TiledLevel;
import org.flixel.FlxG;
import openfl.Assets;
import org.flixel.FlxTilemap;
import flx.core.SpawnPlace;
import org.flixel.FlxText;
import org.flixel.FlxGroup;
import org.flixel.FlxTypedGroup;
import flx.core.Enemy;
import flx.core.Player;
import org.flixel.FlxBasic;
import org.flixel.FlxState;

class LevelBase extends FlxState {

    public function new() {
        super();
    }

// Major game object storage
//    private var _decorations:FlxGroup;
//    private var _bullets:FlxTypedGroup<Bullet>;

    private var controller:PlayerController;
    public var level:TiledLevel;

    public var player:Player;
    public var spawnPlaces:Array<SpawnPlace>;
    public var enemies:List<Enemy>;
    public var collideObjects:FlxTypedGroup<FlxSprite>;
    public var backGroundObjects:FlxTypedGroup<FlxSprite>;
    public var layoutObjects:SortingGroup;

    public var bossDoors:List<InvisibleCollider>;
    public var bossReleaseImages:List<FlxSprite>;

    public var hud:Hud;

    override public function create():Void {
        Lever.TOTAL_LEVERS = 0;
        SpawnPlace.currentEnemies = 0;
        FlxG.visualDebug = false;
        controller = new PlayerController();
        spawnPlaces = new Array<SpawnPlace>();
        enemies = new List<Enemy>();
        collideObjects = new FlxTypedGroup<FlxSprite>();
        backGroundObjects = new FlxTypedGroup<FlxSprite>();
        hud = new Hud(this);
        bossDoors = new List<InvisibleCollider>();
        bossReleaseImages = new List<FlxSprite>();

        asRadian = MathHelp.deg2rad(45);
        level = new TiledLevel("assets/tiled/testmap.tmx");

        var cam:CameraOverride = new CameraOverride();
        cam.setBounds(0, 0, level.fullWidth, level.fullHeight, true);
        FlxG.resetCameras(cam);
        hud.setAll("scrollFactor", new FlxPoint(0, 0));
        hud.setAll("cameras", [FlxG.camera]);

        add(level.backgroundTiles);
        add(backGroundObjects);
//        add(level.foregroundTiles);

        layoutObjects = new SortingGroup();
        add(layoutObjects);
        level.loadObjects(this);
        layoutObjects.sort();

        add(hud);

        bossStage = false;
    }

    private var bossStage:Bool;

    private static var asRadian:Float;

    override public function update():Void {
        var tt:Float = Timer.stamp();
        var timeDiff:Float = FlxG.elapsed;

        var moveSpd:Float = Facade.I.moveSpd * timeDiff;
        var wasMove:Bool = true;

        if (player.curAnim == Player.ANIM_DEATH) {

        } else
        if (PlayerController.SWING_LOCK) {
            wasMove = false;
            if (player.curAnim != Player.ANIM_SWING) {
                player.play(Player.ANIM_SWING);
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
            player.play(Player.ANIM_MOVE);
        } else if (controller.accX != 0) {
            player.x = MathHelp.roundExp(player.x + controller.accX * moveSpd, 5);
            if (controller.accX > 0) {
                player.facing = FlxObject.LEFT;
            } else {
                player.facing = FlxObject.RIGHT;
            }
            player.play(Player.ANIM_MOVE);
        } else if (controller.accY != 0) {
            player.y = MathHelp.roundExp(player.y + controller.accY * moveSpd, 5);
            player.play(Player.ANIM_MOVE);
        } else {
            wasMove = false;
            player.play(Player.ANIM_IDLE);
        }

        if (wasMove) {
            level.collideWithLevel(player, onTileMapCollide, null);
        }

        if (wasMove) {
            FlxG.overlap(collideObjects, player, onObjectCollide, FlxObject.separate);
        }

        if (wasMove) {
            layoutObjects.sort();
        }

        if (wasMove && !bossStage) {
            if (FlxG.camera.x == 1792 && FlxG.camera.y == 1408) {
                var pl:Point = new Point(player.x + player.width/2, player.y + player.height/2);
                var cam:Rectangle = new Rectangle(1664, 1280, 576, 384);

                if (cam.contains(pl.x, pl.y)) {
                    lockBossWalls();
                    bossStage = true;
                }
            }

        }

        super.update();
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