package flx.ui;
import org.flixel.plugin.photonstorm.FlxBar;
import flx.state.level.LevelBase;
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

    public function new(level:LevelBase) {
        super();

        model = Facade.I;
        this.level = level;
    }

    private var level:LevelBase;
    private var player:Player;
    private var model:Facade;

    public function injectPlayer(player:Player):Void {
        this.player = player;

        var playerHp:FlxBar = new FlxBar(46, 26, FlxBar.FILL_LEFT_TO_RIGHT, 256, 16, player, 'hp', 0, 200, false);
        playerHp.createImageBar(null, 'assets/an_hero_lifeBar.png', 0x000000);
        playerHp.currentValue = player.hp;
        playerHp.color = 0xCC0000;
        playerHp.scrollFactor = new FlxPoint(0, 0);
        add(playerHp);

        var heart:FlxSprite = new FlxSprite(10, 10);
        heart.loadGraphic('assets/HUD_tilesheet.png', true, false, 64, 64, false);
        heart.addAnimation('normal', [0, 1, 2, 3], 4);
        heart.play('normal');
        heart.scrollFactor = new FlxPoint(0, 0);
        add(heart);

        var sword:FlxSprite = new FlxSprite(10, 74);
        sword.loadGraphic('assets/HUD_tilesheet.png', true, false, 64, 64, false);
        sword.addAnimation('normal', [4, 5, 6, 7], 4);
        sword.play('normal');
        sword.scrollFactor = new FlxPoint(0, 0);
        add(sword);
    }

    public function emitIncorporeal(fromEnemy:Enemy):Void {
        var launchPoint:FlxPoint = new FlxPoint(fromEnemy.myPt.x - FlxG.camera.x, fromEnemy.myPt.y - FlxG.camera.y);

        var text:FlxText = new FlxText(launchPoint.x - 60, launchPoint.y - 20, 120, 'Incorporeal', 12);
        text.setFormat(null, 12, 0xCCCCCCCC, 'center', 0xCC000000, true);

        level.layoutObjects.add(text);
        Actuate.tween(text, 1.8, {y: text.y - 120, alpha: 0}).onComplete(function(text:FlxText):Void {
            level.layoutObjects.remove(text);
        }, [text]);
    }

    override public function update():Void {
        super.update();
    }
}
