package flx.state.level;
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
    public var player:Player;

    private var layout:FlxTypedGroup<FlxBasic>;
    private var enemies:FlxTypedGroup<Enemy>;
    private var spawnPlaces:FlxTypedGroup<SpawnPlace>;
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
        controller = new PlayerController();

// Load the level's tilemaps
        var level:TiledLevel = new TiledLevel("assets/tiled/testmap.tmx");

        FlxG.camera.setBounds(0, 0, level.fullWidth, level.fullHeight);
//        FlxG.camera.followLerp = 0.5;
//        FlxG.camera.followAdjust(5, 5);
// Add tilemaps
        add(level.backgroundTiles);
        add(level.foregroundTiles);

        layoutObjects = new SortingGroup();
        add(layoutObjects);
        level.loadObjects(this);
        layoutObjects.sort();
    }


    override public function update():Void {
        var timeDiff:Float = FlxG.elapsed;

        var moveSpd:Float = Facade.I.getMoveSpd() * timeDiff;
        if (controller.accX != 0 && controller.accY != 0) {
            var asRadian:Float = 0;
            if (controller.accX == 1 && controller.accY == 1) {
                asRadian = MathHelp.deg2rad(45);
            } else
            if (controller.accX == 1 && controller.accY == -1) {
                asRadian = MathHelp.deg2rad(45);
            } else
            if (controller.accX == -1 && controller.accY == 1) {
                asRadian = MathHelp.deg2rad(45);
            } else
            if (controller.accX == -1 && controller.accY == -1) {
                asRadian = MathHelp.deg2rad(45);
            }

            player.x += (moveSpd * controller.accX) * Math.cos(asRadian);
            player.y += (moveSpd * controller.accY) * Math.sin(asRadian);
        } else if (controller.accX != 0) {
            player.x += controller.accX * moveSpd;
        } else if (controller.accY != 0) {
            player.y += controller.accY * moveSpd;
        }
//        var pastAccX = player.acceleration.x = 0;
//        var pastAccY = player.acceleration.y = 0;
//        if (FlxG.keys.pressed('LEFT') && FlxG.keys.pressed('RIGHT')) {
//            player.acceleration.x =
//        } else
//        if (FlxG.keys.pressed('LEFT')) {
//            player.acceleration.x = -player.maxVelocity.x * 4;
//        } else
//        if (FlxG.keys.pressed('RIGHT')) {
//            player.acceleration.x = player.maxVelocity.x * 4;
//        }
//        if (FlxG.keys.pressed('SPACE') && player.isTouching(FlxObject.FLOOR))
//        {
//            player.velocity.y = -player.maxVelocity.y / 2;
//        }

        layoutObjects.sort();
        super.update();

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