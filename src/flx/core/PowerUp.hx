package flx.core;
import flash.geom.Point;
import flx.state.level.LevelBase;
import org.flixel.FlxSprite;

class PowerUp extends FlxSprite {

    public function new(x:Float, y:Float, type:String, level:LevelBase) {
        super(x, y);

        this.type = type;
        this.loadGraphic('assets/powerUps.png', true, false, 64, 64);
        if (type == 'damage') {
            this.addAnimation('float', [0, 1, 2, 3], 4);
        } else
        if (type == 'health') {
            this.addAnimation('float', [4, 5, 6, 7], 4);
        } else {
            throw 'wrong type powerup';
        }

        play('float');

        lvl = level;

        myPt = new Point(x + width/2, y + width/2);
    }

    private var type:String;
    private var lvl:LevelBase;
    private var myPt:Point;

    override public function update():Void {
        super.update();

        var _heroFl:Point = new Point(lvl.player.x + lvl.player.width / 2, lvl.player.y + lvl.player.height / 2);
        var distance:Float = Point.distance(_heroFl, myPt);

        if (distance < 60) {
            if (type == 'damage') {
                lvl.player.upDmgLevel();
            } else
            if (type == 'health') {
                lvl.player.upHealthLevel();
            }

            lvl.layoutObjects.remove(this, true);
        }
    }
}
