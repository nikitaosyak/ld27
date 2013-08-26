package flx.core;
import flash.geom.Point;
import flx.state.level.LevelBase;
import org.flixel.FlxSprite;
class Log extends FlxSprite {
    public function new(x:Float, y:Float, level:LevelBase) {
        super(x, y);

        loadGraphic('assets/wood.png', false, false, 64, 64);

        myPt = new Point(this.x + 32, this.y + 32);

        lvl = level;

        scale.make(1.2, 1.2);
    }

    private var lvl:LevelBase;
    private var myPt:Point;

    override public function update():Void {
        super.update();

        if (frame == 1) return;

        var _heroFl:Point = new Point(lvl.player.x + lvl.player.width / 2, lvl.player.y + lvl.player.height / 2);
        var distance:Float = Point.distance(_heroFl, myPt);

        if (distance < 32) {
            lvl.player.play(Player.ANIM_VICTORY, true);
            lvl.layoutObjects.remove(this, true);
        }
    }
}
