package flx.core;
import flixel.FlxSprite;
class SpriteFromAtlas extends FlxSprite {
    public function new(x:Float, y:Float, sourceImage:String, gid:Int, gidOffset:Int) {
        super(x, y);

        this.loadGraphic(sourceImage, true, 64, 64);
        this.animation.add('default', [gid - gidOffset], 1, false);
        // play('default');
    }
}
