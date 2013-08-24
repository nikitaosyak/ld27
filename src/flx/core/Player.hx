package flx.core;
import util.MathHelp;
import org.flixel.FlxSprite;
class Player extends FlxSprite {
    public function new() {
        super();
        loadGraphic('assets/an_hero.png', false, false, 64, 128);
        this.antialiasing = true;
        immovable = false;

        width = 64;
        height = 64;
        offset.make(0, 64);
        setOriginToCenter();
    }

    public function initialize(spawnX:Float, spawnY:Float):Void {
        this.x = MathHelp.roundExp(spawnX, 0);
        this.y = MathHelp.roundExp(spawnY, 0);
    }
}
