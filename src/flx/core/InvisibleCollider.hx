package flx.core;
import org.flixel.FlxG;
import org.flixel.FlxSprite;

class InvisibleCollider extends FlxSprite {
    public function new(x:Float, y:Float, width:Float, height:Float) {
        super(x, y);

//        this.makeGraphic(width, height, 0x00000);
        this.visible = false;

        immovable = true;
        this.width = width;
        this.height = height;
    }
}
