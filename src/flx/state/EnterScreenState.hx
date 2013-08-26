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

        var startButton:FlxText = new FlxText(366 - 50, 400, 200,  'wasd or arrows to move', 12);
        startButton.setFormat(null, 12, 0xFFFFFF, 'center', 0xFF000000, true);
        add(startButton);

        var startButton:FlxText = new FlxText(366 - 50, 425, 200,  'x or space to hit', 12);
        startButton.setFormat(null, 12, 0xFFFFFF, 'center', 0xFF000000, true);
        add(startButton);


        var startButton:FlxText = new FlxText(366 - 100, 475, 300,  'press floor plates to get to the boss', 13);
        startButton.setFormat(null, 12, 0xFFFFFF, 'center', 0xFF000000, true);
        add(startButton);

        var startButton:FlxText = new FlxText(366 - 150, 500, 400,  'destroy tombstones to stop ghost spawning', 13);
        startButton.setFormat(null, 12, 0xFFFFFF, 'center', 0xFF000000, true);
        add(startButton);

        var startButton:FlxText = new FlxText(366 - 150, 525, 400,  'ghosts become fore fierce every 10 seconds', 13);
        startButton.setFormat(null, 12, 0xFFFFFF, 'center', 0xFF000000, true);
        add(startButton);

        var startButton:FlxText = new FlxText(366 - 50, 600, 200,  'press x to play', 13);
        startButton.setFormat(null, 14, 0xFFFFFF, 'center', 0xFF000000, true);
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
