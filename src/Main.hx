package ;
import flash.display.Sprite;
import flash.Lib;
class Main extends Sprite{

    public function new() {
        super();
        trace('all ok');
    }

    public static function main() {
        Lib.current.addChild(new Main());
    }
}
