package flx.state;
import org.flixel.FlxText;
import flx.state.level.LevelBase;
import org.flixel.FlxG;
import org.flixel.FlxButton;
import org.flixel.FlxSprite;
import org.flixel.FlxState;
class EnterScreenState extends FlxState {
    public function new() {
        super();
    }

    override public function create():Void {
        super.create();

        var title:FlxSprite = new FlxSprite(195, 200, 'assets/rumble.png');
        add(title);

        var startButton:FlxText = new FlxText(366 - 50, 400, 200,  'press x to play', 13);
        startButton.setFormat(null, 13, 0xFFFFFF, 'center', 0xFF000000, true);
        add(startButton);

        fading = false;
    }

    private var fading:Bool;

    override public function update():Void {
        super.update();

        if (FlxG.keys.justPressed('X')) {
            if (fading) return;
            fading = true;
            FlxG.fade(0xFF000000, 0.7, false, function():Void { FlxG.switchState(new LevelBase()); });
        }
    }
}
