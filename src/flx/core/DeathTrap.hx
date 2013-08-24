package flx.core;
import org.flixel.FlxSprite;
import org.flixel.FlxG;
class DeathTrap extends FlxSprite {
    public function new(x:Int, y:Int) {
        super();

        this.makeGraphic(64, 64, 0xFF0000, false);
        this.visible = FlxG.visualDebug;
        this.immovable = true;

        this.x = x;
        this.y = y;
    }
}
