package flx.core;
import org.flixel.FlxSprite;
class Player extends FlxSprite {
    public function new() {
        super();
        loadGraphic('assets/an_hero.png', false, false, 64, 128);

    }

    public function initialize(spawnX:Float, spawnY:Float):Void {
        this.x = spawnX;
        this.y = spawnY;
    }
}
