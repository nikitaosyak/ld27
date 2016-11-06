package ;

import openfl.display.FPS;
import openfl.display.StageScaleMode;
import openfl.display.StageAlign;

import openfl.events.Event;
import openfl.display.Sprite;
import openfl.Lib;

class Main extends Sprite {

    // entry point
    public static function main() {
        Lib.current.addChild(new Main());
    }

    public function new() {
        super();

        if (stage != null) {
            init();
        }
        else {
            addEventListener(Event.ADDED_TO_STAGE, init);
        }
    }

    private function init(?e:Event):Void {
        if (hasEventListener(Event.ADDED_TO_STAGE)) {
            removeEventListener(Event.ADDED_TO_STAGE, init);
        }

        Lib.current.stage.align = StageAlign.TOP_LEFT;
        Lib.current.stage.scaleMode = StageScaleMode.NO_SCALE;

        // addChild(new Game());
        addChild(new FPS(10, 10, 0xFFFFFF));
    }
}
