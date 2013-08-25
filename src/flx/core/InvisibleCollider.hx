package flx.core;
import org.flixel.FlxG;
import org.flixel.FlxSprite;

class InvisibleCollider extends FlxSprite {
    public function new(x:Float, y:Float, width:Float, height:Float) {
        super(x, y);

        if (FlxG.debug) {
//            this.makeGraphic(width, height, 0, false);
        }

        this.width = width;
        this.height = height;
    }
}
