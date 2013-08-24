package flx.state.level;
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


//        Parser.parseLevel(Assets.getText('assets/testMap/test.tmx'));
//        var tile:FlxTilemap = new FlxTilemap();
//        tile.loadMap('assets/testMap/test.txt', 'assets/testMap/testTile.png', 64, 64, 0, 1, 1, 0);
//        add(tile);

        var tmx:TmxMap = new TmxMap(Assets.getText('assets/testMap/test.tmx'));
        var mapCsv:String = tmx.getLayer('collidelayer').toCsv(tmx.getTileSet('testTile'));

        var t:FlxTilemap = new FlxTilemap();
        t.loadMap(mapCsv, "assets/testMap/testTile.png", 64, 64, 0, 1, 1, 0);
//        t.follow();
        add(t);
    }


    override public function update():Void {
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