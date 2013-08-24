package tmx;
import flx.core.Player;
import flx.state.level.LevelBase;
import org.flixel.FlxG;
import org.flixel.FlxState;
import flixel.addons.editors.tiled.TiledMap;
import org.flixel.FlxObject;
import org.flixel.FlxSprite;
import flixel.addons.editors.tiled.TiledObjectGroup;
import flixel.addons.editors.tiled.TiledObject;
import haxe.io.Path;
import flixel.addons.editors.tiled.TiledTileSet;
import org.flixel.FlxTilemap;
import org.flixel.FlxGroup;

class TiledLevel extends TiledMap {
// For each "Tile Layer" in the map, you must define a "tileset" property which contains the name of a tile sheet image
// used to draw tiles in that layer (without file extension). The image file must be located in the directory specified bellow.
    private inline static var c_PATH_LEVEL_TILESHEETS = "assets/tiled/";

// Array of tilemaps used for collision
    public var foregroundTiles:FlxGroup;
    public var backgroundTiles:FlxGroup;
    private var collidableTileLayers:Array<FlxTilemap>;

    public function new(tiledLevel:Dynamic) {
        super(tiledLevel);

        foregroundTiles = new FlxGroup();
        backgroundTiles = new FlxGroup();

//        FlxG.camera.setBounds(0, 0, fullWidth, fullHeight, true);

// Load Tile Maps
        for (tileLayer in layers) {
            var tileSheetName:String = tileLayer.properties.get("tileset");

            if (tileSheetName == null)
                throw "'tileset' property not defined for the '" + tileLayer.name + "' layer. Please add the property to the layer.";

            var tileSet:TiledTileSet = null;
            for (ts in tilesets) {
                if (ts.name == tileSheetName) {
                    tileSet = ts;
                    break;
                }
            }

            if (tileSet == null)
                throw "Tileset '" + tileSheetName + " not found. Did you mispell the 'tilesheet' property in " + tileLayer.name + "' layer?";

            var imagePath = new Path(tileSet.imageSource);
            var processedPath = c_PATH_LEVEL_TILESHEETS + imagePath.file + "." + imagePath.ext;

            var tilemap:FlxTilemap = new FlxTilemap();
            tilemap.widthInTiles = width;
            tilemap.heightInTiles = height;
            tilemap.loadMap(tileLayer.tileArray, processedPath, tileSet.tileWidth, tileSet.tileHeight, 0, 1, 1, 1);

            if (tileLayer.properties.contains("nocollide")) {
                backgroundTiles.add(tilemap);
            }
            else {
                if (collidableTileLayers == null)
                    collidableTileLayers = new Array<FlxTilemap>();

                foregroundTiles.add(tilemap);
                collidableTileLayers.push(tilemap);
            }
        }
    }

    public function loadObjects(state:LevelBase) {
        for (group in objectGroups) {
            for (o in group.objects) {
                loadObject(o, group, state);
            }
        }
    }

    private function loadObject(o:TiledObject, g:TiledObjectGroup, state:LevelBase) {
        var x:Int = o.x;
        var y:Int = o.y;

//objects in tiled are aligned bottom-left (top-left in flixel)
        if (o.gid != -1)
            y -= g.map.getGidOwner(o.gid).tileHeight;

        switch (o.type.toLowerCase()) {
            case "rocks":
                var tileset:TiledTileSet = g.map.getGidOwner(o.gid);
                var rock = new FlxSprite(x, y, c_PATH_LEVEL_TILESHEETS + tileset.imageSource);
                state.layoutObjects.add(rock);

            case "trees":
                var tileset:TiledTileSet = g.map.getGidOwner(o.gid);
                var rock = new FlxSprite(x, y, c_PATH_LEVEL_TILESHEETS + tileset.imageSource);
                state.layoutObjects.add(rock);

            case "player":
                var player:Player = new Player();
                player.initialize(x, y - player.height/2);
                FlxG.camera.follow(player, 0, null, 2);
                state.layoutObjects.add(player);
                state.player = player;
//            case "player":
//                var ti


//            case "player_start":
//                var player = new FlxSprite(x, y);
//                player.makeGraphic(32, 32, 0xffaa1111);
//                player.maxVelocity.x = 160;
//                player.maxVelocity.y = 400;
//                player.acceleration.y = 400;
//                player.drag.x = player.maxVelocity.x * 4;
//                FlxG.camera.follow(player);
//                state.player = player;
//                state.add(player);

//            case "floor":
//                var floor = new FlxObject(x, y, o.width, o.height);
//                state.floor = floor;

//            case "coin":
//                var tileset = g.map.getGidOwner(o.gid);
//                var coin = new FlxSprite(x, y, c_PATH_LEVEL_TILESHEETS + tileset.imageSource);
//                state.coins.add(coin);

//            case "exit":
//Create the level exit
//                var exit = new FlxSprite(x, y);
//                exit.makeGraphic(32, 32, 0xff3f3f3f);
//                exit.exists = false;
//                state.exit = exit;
//                state.add(exit);
        }
    }

    public function collideWithLevel(obj:FlxObject, ?notifyCallback:FlxObject -> FlxObject -> Void, ?processCallback:FlxObject -> FlxObject -> Bool):Bool {
        if (collidableTileLayers != null) {
            for (map in collidableTileLayers) {
                // IMPORTANT: Always collide the map with objects, not the other way around.
                //			  This prevents odd collision errors (collision separation code off by 1 px).
                return FlxG.overlap(map, obj, notifyCallback, processCallback != null ? processCallback : FlxObject.separate);
            }
        }
        return false;
    }
}
