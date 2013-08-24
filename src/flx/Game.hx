package flx;
import flx.core.Facade;
import flx.state.level.LevelBase;
import flash.Lib;
import org.flixel.FlxGame;

class Game extends FlxGame {

    public function new() {
        Facade.I.init();
        super (
            Lib.current.stage.stageWidth,
            Lib.current.stage.stageHeight,
            LevelBase, 1, 60, 60
        );
    }
}
