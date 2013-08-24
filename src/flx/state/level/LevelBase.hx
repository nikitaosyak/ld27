package flx.state.level;
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
    private var level:TiledLevel;

    public var player:Player;
    public var spawnPlaces:FlxTypedGroup<SpawnPlace>;

    private var layout:FlxTypedGroup<FlxBasic>;
    private var enemies:FlxTypedGroup<Enemy>;
//    private var _enemyBullets:FlxTypedGroup<EnemyBullet>;
//    private var _littleGibs:FlxEmitter;
//    private var _bigGibs:FlxEmitter;
    private var hud:FlxGroup;
//    private var _gunjam:FlxGroup;

// Meta groups, to help speed up collisions-+
    private var objects:FlxGroup;
    private var hazards:FlxGroup;

// HUD/User Interface stuff
    private var helpText:FlxText;
    public var layoutObjects:SortingGroup;
//    private var _score2:FlxText;
//    private var _scoreTimer:Float;
//    private var _jamTimer:Float;

    override public function create():Void {
        FlxG.visualDebug = true;
        controller = new PlayerController();
        spawnPlaces = new FlxTypedGroup<SpawnPlace>();

        asRadian = MathHelp.deg2rad(45);
//        this.persistantUpdate = true;
//        this.persistantDraw = true;
// Load the level's tilemaps
        level = new TiledLevel("assets/tiled/testmap.tmx");

        var cam:CameraOverride = new CameraOverride();
        cam.setBounds(0, 0, level.fullWidth, level.fullHeight, true);
        FlxG.resetCameras(cam);
// Add tilemaps
        add(level.backgroundTiles);
        add(level.foregroundTiles);

        layoutObjects = new SortingGroup();
        add(layoutObjects);
        level.loadObjects(this);
        layoutObjects.sort();

        add(spawnPlaces);
    }

    private static var asRadian:Float;

    override public function update():Void {
        var tt:Float = Timer.stamp();
        var timeDiff:Float = FlxG.elapsed;

        var moveSpd:Float = Facade.I.getMoveSpd() * timeDiff;
        var wasMove:Bool = true;

        if (PlayerController.SWING_LOCK) {
            wasMove = false;
            if (player.curAnim != Player.ANIM_SWING) {
                player.play(Player.ANIM_SWING);
            }
        } else
        if (controller.accX != 0 && controller.accY != 0) {

            var diffX:Float = (moveSpd * controller.accX) * Math.cos(asRadian);
            var diffY:Float = (moveSpd * controller.accY) * Math.cos(asRadian);

            player.x = MathHelp.roundExp(player.x + diffX, 5);
            player.y = MathHelp.roundExp(player.y + diffY, 5);

            if (controller.accX > 0) {
                player.facing = FlxObject.LEFT;
            } else {
                player.facing = FlxObject.RIGHT;
            }
            player.play(Player.ANIM_MOVE);
        } else if (controller.accX != 0) {
//            trace(PlayerController.SWING_LOCK);
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
            level.collideWithLevel(player, onCollide, null);
        }

        if (wasMove) {
            layoutObjects.sort();
        }

        super.update();
//        trace('time took: ' + (Timer.stamp() - tt));


//        FlxG.overlap(coins, player, getCoin);

// Collide with foreground tile layer
//        level.collideWithLevel(player);

//        FlxG.overlap(exit, player, win);

//        if (FlxG.overlap(player, floor))
//        {
//            youDied = true;
//            FlxG.resetState();
//        }

//        super.update();
    }

    private function onCollide(some:FlxObject, some2:FlxObject):Void {
//        trace(some);
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