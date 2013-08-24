package flx.state.level;
import tmx.TiledLevel;
import org.flixel.FlxG;
import org.flixel.tmx.TmxMap;
import tmx.Parser;
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
    private var layout:FlxTypedGroup<FlxTilemap>;
    private var player:Player;
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
//    private var _score2:FlxText;
//    private var _scoreTimer:Float;
//    private var _jamTimer:Float;

    override public function create():Void {
        layout = new FlxTypedGroup<FlxTilemap>();
        add(layout);


//        var tmxMap:TmxMap = new TmxMap(Assets.getText('assets/testmap.tmx'));
//        var mapCsv:String = tmxMap.getLayer('grass').toCsv(tmxMap.getTileSet('grass'));
//
//        var collideMap:FlxTilemap = new FlxTilemap();
//        collideMap.loadMap(mapCsv, "assets/grass.png", 64, 64, 0, 1, 1, 0);
//        layout.add(collideMap);
//
//        var mapCsv1:String = tmxMap.getLayer('CollideLayer').toCsv(tmxMap.getTileSet('collider'));
//
//        var collideMap1:FlxTilemap = new FlxTilemap();
//        collideMap1.loadMap(mapCsv1, "assets/collider.png", 64, 64, 0, 1, 1, 0);
//        layout.add(collideMap1);
//
//        var mapCsv2:String = tmxMap.getLayer('stuff').toCsv(tmxMap.getTileSet('rock'));
//
//        var collideMap2:FlxTilemap = new FlxTilemap();
//        collideMap2.loadMap(mapCsv2, "assets/rock.png", 64, 128, 0, 1, 1, 0, 0, 0);
//        layout.add(collideMap2);

// Load the level's tilemaps
        var level:TiledLevel = new TiledLevel("assets/testmap.tmx");

// Add tilemaps
        add(level.foregroundTiles);

// Draw coins first
//        coins = new FlxGroup();
//        add(coins);

// Load player objects
//        level.loadObjects(this);

//Add background tiles after adding level objects, so these tiles render on top of player
//        add(level.backgroundTiles);

//        var hero:Player = new Player();
//        add(hero)
//        hero.follo

//        var mapCsv:String = tmxMap.getLayer('collidelayer').toCsv(tmxMap.getTileSet('testTile'));
//        var t1:FlxTilemap = new FlxTilemap();
//        t1.loadMap(mapCsv, "assets/testMap/testTile.png", 64, 64, 0, 1, 1, 0);
//        add(t1);
    }


    override public function update():Void {
// Tilemaps can be collided just like any other FlxObject, and flixel
// automatically collides each individual tile with the object.
//        FlxG.collide(_player, _collisionMap);
//
//        _highlightBox.x = Math.floor(FlxG.mouse.x / TILE_WIDTH) * TILE_WIDTH;
//        _highlightBox.y = Math.floor(FlxG.mouse.y / TILE_HEIGHT) * TILE_HEIGHT;
//
//        if (FlxG.mouse.pressed)
//        {
// FlxTilemaps can be manually edited at runtime as well.
// Setting a tile to 0 removes it, and setting it to anything else will place a tile.
// If auto map is on, the map will automatically update all surrounding tiles.
//            _collisionMap.setTile(Std.int(FlxG.mouse.x / TILE_WIDTH), Std.int(FlxG.mouse.y / TILE_HEIGHT), FlxG.keys.pressed.SHIFT ? 0 : 1);
//        }

        super.update();
    }

// this is purely for code completion

    override public function add(object:FlxBasic):FlxBasic {
        return super.add(object);
    }

// this is purely for code completion

    override public function remove(object:FlxBasic, Splice:Bool = false):FlxBasic {
        return super.remove(object, Splice);
    }
}