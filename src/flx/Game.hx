package flx;

import flixel.*;

import flx.state.EnterScreenState;
import flx.core.Facade;
import flx.state.level.LevelBase;
import flash.Lib;

class Game extends FlxGame {

    public function new() {
        Facade.I.init();
        super (
            Lib.current.stage.stageWidth,
            Lib.current.stage.stageHeight,
            EnterScreenState, 1, 60, 60
        );
    }
}
