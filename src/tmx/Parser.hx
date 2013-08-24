package tmx;
import haxe.xml.Fast;
class Parser {
    public function new() {
    }

    public static function parseLevel(xmlString:String):String {
        var source:Fast = new Fast(Xml.parse(xmlString));

        var width:Int = Std.parseInt(source.att.width);
        var height:Int = Std.parseInt(source.att.height);
        var tileWidth:Int = Std.parseInt(source.att.tilewidth);
        var tileHeight:Int = Std.parseInt(source.att.tileheight);

        var iter:Int = 0;

        for (node in source.nodes.layer) {
            if (node.name == 'collidelayer') {

            }
        }
//read properties
//        for (node in s.nodes.properties)
//            properties.extend(node);

//load tilesets
//        for (node in s.nodes.tileset)
//            tilesets.set(node.att.name, new TmxTileSet(node));

//load layer
//        for (node in s.nodes.layer)
//            layers.set(node.att.name, new TmxLayer(node, this));

//load object group
//        for (node in s.nodes.objectgroup)
//            objectGroups.set(node.att.name, new TmxObjectGroup(node, this));
        return 'stfu';
    }
}
