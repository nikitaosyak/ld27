package flx.core;
import org.flixel.FlxG;
import org.flixel.FlxSprite;
class SpawnPlace extends FlxSprite {
    public function new(x:Int, y:Int) {
        super();

        if (FlxG.visualDebug) {
            this.makeGraphic(64, 64, 0x0000CC, false);
        }

        this.x = x;
        this.y = y;
    }
}
