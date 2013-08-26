package flx.ui;
import motion.Actuate;
import org.flixel.FlxText;
import flx.ui.EnemyLifeBar;
import haxe.ds.ObjectMap;
import flx.core.Enemy;
import haxe.ds.IntMap;
import flx.core.Facade;
import flx.core.Player;
import org.flixel.FlxG;
import org.flixel.util.FlxPoint;
import org.flixel.FlxGroup;
import org.flixel.FlxSprite;

class Hud extends FlxGroup {

    public function new() {
        super();

        model = Facade.I;
        enemies = new List<Enemy>();
        lifeBars = new ObjectMap<Enemy, EnemyLifeBar>();
    }

    private var player:Player;
    private var model:Facade;

    private var enemies:List<Enemy>;
    private var lifeBars:ObjectMap<Enemy, EnemyLifeBar>;

    public function injectPlayer(player:Player):Void {
        this.player = player;
    }

    public function emitIncorporeal(fromEnemy:Enemy):Void {
        var launchPoint:FlxPoint = new FlxPoint(fromEnemy.myPt.x - FlxG.camera.x, fromEnemy.myPt.y - FlxG.camera.y);

        var text:FlxText = new FlxText(launchPoint.x - 50, launchPoint.y - 20, 100, 'Incorpordseal', 12);
        text.setFormat(null, 12, 0xCCCCCCCC, 'center', 0xCC000000, true);

        add(text);
        Actuate.tween(text, 1.8, {y: text.y - 120, alpha: 0}).onComplete(function(hud:Hud, text:FlxText):Void {
            hud.remove(text);
        }, [this, text]);
    }

    override public function update():Void {
        super.update();
    }
}
