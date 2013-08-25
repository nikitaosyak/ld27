package flx.core;
import org.flixel.FlxSprite;
class SpriteFromAtlas extends FlxSprite {
    public function new(x:Float, y:Float, sourceImage:String, gid:Int, gidOffset:Int) {
        super(x, y);

        this.loadGraphic(sourceImage, true, false, 64, 64);
        addAnimation('default', [gid - gidOffset], 1, false);
        play('default');
    }
}
