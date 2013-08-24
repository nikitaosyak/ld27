package flx.core;
import util.MathHelp;
import flx.state.level.LevelBase;
import flash.events.TimerEvent;
import flash.utils.Timer;
import org.flixel.FlxG;
import org.flixel.FlxSprite;

class SpawnPlace extends FlxSprite {

    public function new(x:Int, y:Int, parentState:LevelBase) {
        super();

        this.makeGraphic(64, 64, 0x0000CC, false);
        this.visible = FlxG.visualDebug;

        this.x = x;
        this.y = y;

        _aggregateTime = 0;
        _level = parentState;
    }

    private var _aggregateTime:Float;
    private var _level:LevelBase;

    override public function update():Void {
        super.update();

        _aggregateTime += FlxG.elapsed;
        if (_aggregateTime > Facade.I.getSpawnTime()) {
            if (Math.random() > Facade.I.getSpawnChance()) {
                var newSeed:Float = Math.random();
                if (newSeed < 0.6) {
                    _level.layoutObjects.add(new Enemy(this.x + MathHelp.randomRange(-64, 64) + 32, this.y + MathHelp.randomRange(-64, 64) + 32, _level));
                } else
                if (newSeed < 0.95) {
                    _level.layoutObjects.add(new Enemy(this.x + MathHelp.randomRange(-64, 64) + 32, this.y + MathHelp.randomRange(-64, 64) + 32, _level));
                    _level.layoutObjects.add(new Enemy(this.x + MathHelp.randomRange(-64, 64) + 32, this.y + MathHelp.randomRange(-64, 64) + 32, _level));
                } else {
                    _level.layoutObjects.add(new Enemy(this.x + MathHelp.randomRange(-64, 64) + 32, this.y + MathHelp.randomRange(-64, 64) + 32, _level));
                    _level.layoutObjects.add(new Enemy(this.x + MathHelp.randomRange(-64, 64) + 32, this.y + MathHelp.randomRange(-64, 64) + 32, _level));
                    _level.layoutObjects.add(new Enemy(this.x + MathHelp.randomRange(-64, 64) + 32, this.y + MathHelp.randomRange(-64, 64) + 32, _level));
                }
            }
            _aggregateTime = 0;
        }
    }

}
