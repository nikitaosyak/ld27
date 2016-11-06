// package tmx;

// import flixel.*;
// import flixel.tile.*;
// import flixel.group.*;
// import flixel.math.*;
// import flixel.util.*;
// import flixel.addons.editors.tiled.*;

// import flx.core.Boss;
// import flx.core.Lever;
// import flx.core.PowerUp;
// import flx.core.SpriteFromAtlas;
// import flx.core.InvisibleCollider;
// import flx.core.DeathTrap;
// import flx.core.SpawnPlace;
// import flx.core.Player;
// import flx.state.level.LevelBase;
// import haxe.io.Path;

// class TiledLevel extends TiledMap {
// // For each "Tile Layer" in the map, you must define a "tileset" property which contains the name of a tile sheet image
// // used to draw tiles in that layer (without file extension). The image file must be located in the directory specified bellow.
//     private inline static var c_PATH_LEVEL_TILESHEETS = "assets/tiled/";

// // Array of tilemaps used for collision
//     public var foregroundTiles:FlxGroup;
//     public var backgroundTiles:FlxGroup;
//     private var collidableTileLayers:Array<FlxTilemap>;

//     public function new(tiledLevel:Dynamic) {
//         super(tiledLevel);

//         foregroundTiles = new FlxGroup();
//         backgroundTiles = new FlxGroup();

// // Load Tile Maps
//         for (tileLayer in layers) {
//             var tileSheetName:String = tileLayer.properties.get("tileset");

//             if (tileSheetName == null)
//                 throw "'tileset' property not defined for the '" + tileLayer.name + "' layer. Please add the property to the layer.";

//             var tileSet:TiledTileSet = null;
//             for (ts in tilesets) {
//                 if (ts.name == tileSheetName) {
//                     tileSet = ts;
//                     break;
//                 }
//             }

//             if (tileSet == null)
//                 throw "Tileset '" + tileSheetName + " not found. Did you mispell the 'tilesheet' property in " + tileLayer.name + "' layer?";

//             var imagePath = new Path(tileSet.imageSource);
//             var processedPath = c_PATH_LEVEL_TILESHEETS + imagePath.file + "." + imagePath.ext;

//             var tilemap:FlxTilemap = new FlxTilemap();
//             tilemap.widthInTiles = width;
//             tilemap.heightInTiles = height;
//             tilemap.loadMap(tileLayer.tileArray, processedPath, tileSet.tileWidth, tileSet.tileHeight, 0, 1, 1, 1);

//             if (tileLayer.properties.contains("nocollide")) {
//                 backgroundTiles.add(tilemap);
//             }
//             else {
//                 if (collidableTileLayers == null)
//                     collidableTileLayers = new Array<FlxTilemap>();

//                 foregroundTiles.add(tilemap);
//                 collidableTileLayers.push(tilemap);
//             }
//         }
//     }

//     public function loadObjects(state:LevelBase) {
//         // for (group in objectGroups) {
//         //     for (o in group.objects) {
//         //         loadObject(o, group, state);
//         //     }
//         // }
//     }

//     private function loadObject(o:TiledObject, state:LevelBase) {
//         var x:Int = o.x;
//         var y:Int = o.y;

//         //objects in tiled are aligned bottom-left (top-left in flixel)
//         if (o.gid != -1)
//             y -= getGidOwner(o.gid).tileHeight;

//         switch (o.type.toLowerCase()) {
//             case "edgescollide":
//                 var coll:InvisibleCollider = new InvisibleCollider(o.x, o.y, o.width, o.height);
//                 state.collideObjects.add(coll);
//                 state.add(coll);
//                 if (o.name == 'boss_door') {
//                     state.bossDoors.add(coll);
//                 }

//             case "trees":
//                 var tileset:TiledTileSet = getGidOwner(o.gid);
//                 var tree = new FlxSprite(x, y, c_PATH_LEVEL_TILESHEETS + tileset.imageSource);
//                 tree.setOriginToCenter();
//                 tree.offset.make(40, 155);
//                 tree.width = 40;
//                 tree.height = 30;
//                 tree.immovable = true;
//                 tree.x += tree.offset.x;
//                 tree.y += tree.offset.y;
//                 state.layoutObjects.add(tree);
//                 state.collideObjects.add(tree);

//             case "bushes":
//                 var tileset:TiledTileSet = getGidOwner(o.gid);
//                 var rock = new FlxSprite(x, y, c_PATH_LEVEL_TILESHEETS + tileset.imageSource);
//                 state.layoutObjects.add(rock);

//             case "graves1":
//                 var tileset:TiledTileSet = getGidOwner(o.gid);
//                 var grave = new FlxSprite(x, y, c_PATH_LEVEL_TILESHEETS + tileset.imageSource);
//                 grave.setOriginToCenter();
//                 grave.offset.make(35, 90);
//                 grave.width = 58;
//                 grave.height = 33;
//                 grave.immovable = true;
//                 grave.x += grave.offset.x;
//                 grave.y += grave.offset.y;
//                 state.layoutObjects.add(grave);
//                 state.collideObjects.add(grave);

//             case "player":
//                 var player:Player = new Player(state);
//                 player.initialize(x, y - player.height/2);
//                 FlxG.camera.follow(player, 4, null, 0);
//                 state.layoutObjects.add(player);
//                 state.player = player;
//                 state.hud.injectPlayer(player);

//             case 'spawn':
//                 var spawnPl:SpawnPlace = new SpawnPlace(x, y, state);
//                 state.spawnPlaces.push(spawnPl);
//                 state.layoutObjects.add(spawnPl);

//             case 'powerups':
//                 var powerUp:PowerUp = new PowerUp(x, y, o.name, state);
//                 state.layoutObjects.add(powerUp);
// //                state.collideObjects.add(powerUp);
//             case 'levers':
//                 Lever.TOTAL_LEVERS++;
//                 var lever:Lever = new Lever(x, y, state);
//                 state.backGroundObjects.add(lever);

//             case 'boss_opened':
//                 var tileset:TiledTileSet = getGidOwner(o.gid);
//                 var releaseSprite:FlxSprite = new FlxSprite(x, y);
//                 releaseSprite.loadGraphic(c_PATH_LEVEL_TILESHEETS + tileset.imageSource, false, false, 64, 64);
//                 releaseSprite.frame = o.gid - tileset.firstGID;
//                 releaseSprite.immovable = true;
//                 state.bossReleaseImages.add(releaseSprite);

//             case 'boss':
//                 var boss:Boss = new Boss(x, y, state);
//                 state.boss = boss;
//                 state.layoutObjects.add(boss);
//                 state.collideObjects.add(boss);
//         }
//     }

//     public function collideWithLevel(obj:FlxObject, ?notifyCallback:FlxObject -> FlxObject -> Void, ?processCallback:FlxObject -> FlxObject -> Bool):Bool {
//         if (collidableTileLayers != null) {
//             for (map in collidableTileLayers) {
//                 // IMPORTANT: Always collide the map with objects, not the other way around.
//                 //			  This prevents odd collision errors (collision separation code off by 1 px).
//                 return FlxG.overlap(map, obj, notifyCallback, processCallback != null ? processCallback : FlxObject.separate);
//             }
//         }
//         return false;
//     }

//     public function findCollidePath(start:FlxPoint, end:FlxPoint, simple:Bool = false):FlxPath {
//         if (collidableTileLayers != null) {
//             for (map in collidableTileLayers) {
//                 return map.findPath(start, end, simple, false, true);
//             }
//         }
//         return null;
//     }
// }
