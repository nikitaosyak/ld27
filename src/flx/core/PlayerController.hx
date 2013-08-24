package flx.core;
import flash.ui.Keyboard;
import haxe.ds.IntMap;
import flash.events.KeyboardEvent;
import org.flixel.FlxBasic;
import org.flixel.FlxG;

enum KeyStatus {
    START;
    FINISH;
}

class PlayerController {
    public function new() {

        pressed = new IntMap<Int>();
        FlxG.stage.addEventListener(KeyboardEvent.KEY_UP, onUp);
        FlxG.stage.addEventListener(KeyboardEvent.KEY_DOWN, onDown);
    }

    private var pressed:IntMap<Int>;

    public var accX:Int;
    public var accY:Int;

    public function destroy():Void {
        pressed = null;
        FlxG.stage.removeEventListener(KeyboardEvent.KEY_UP, onUp);
        FlxG.stage.removeEventListener(KeyboardEvent.KEY_DOWN, onDown);
    }

    private function onDown(e:KeyboardEvent):Void {
        process(e.keyCode, KeyStatus.START);
    }

    private function onUp(e:KeyboardEvent):Void {
        process(e.keyCode, KeyStatus.FINISH);
    }

    private function process(keyCode:Int, status:KeyStatus):Void {
        var changed:Bool = false;

        var newYAccVal:Int = 100;
        var newXAccVal:Int = 100;
        var newFireVal:Bool = false;

        // вверх
        if (keyCode == 87 || keyCode == 38) {
            if (status == KeyStatus.START) {
                pressed.set(keyCode, keyCode);
                if (accY == -1) return;
                changed = true;
                newYAccVal = -1;
            }
            if (status == KeyStatus.FINISH) {
                if (accY == -1) {
                    if (pressed.exists(83) || pressed.exists(40)) {
                        newYAccVal = 1;
                    } else {
                        if (pressed.exists(87) && pressed.exists(38)) {
                            pressed.remove(keyCode);
                            return;
                        }
                        newYAccVal = 0;
                    }
                    changed = true;
                } else {
                    //skip
                }
                pressed.remove(keyCode);
            }
        }

        // вниз
        if (keyCode == 83 || keyCode == 40) {
            if (status == KeyStatus.START) {
                pressed.set(keyCode, keyCode);
                if (accY == 1) return;
                changed = true;
                newYAccVal = 1;
            }
            if (status == KeyStatus.FINISH) {
                if (accY == 1) {
                    if (pressed.exists(87) || pressed.exists(38)) {
                        newYAccVal = -1;
                    } else {
                        if (pressed.exists(83) && pressed.exists(40)) {
                            pressed.remove(keyCode);
                            return;
                        }
                        newYAccVal = 0;
                    }
                    changed = true;
                } else {
                    //skip
                }
                pressed.remove(keyCode);
            }
        }

        // вправо
        if (keyCode == 68 || keyCode == 39) {
            if (status == KeyStatus.START) {
                pressed.set(keyCode, keyCode);
                if (accX == 1) return;
                changed = true;
                newXAccVal = 1;
            }
            if (status == KeyStatus.FINISH) {
                if (accX == 1) {
                    if (pressed.exists(65) || pressed.exists(67)) {
                        newXAccVal = -1;
                    } else {
                        if (pressed.exists(68) && pressed.exists(39)) {
                            pressed.remove(keyCode);
                            return;
                        }
                        newXAccVal = 0;
                    }
                    changed = true;
                } else {
                    //skip
                }
                pressed.remove(keyCode);
            }
        }

        // влево
        if (keyCode == 65 || keyCode == 37) {
            if (status == KeyStatus.START) {
                pressed.set(keyCode, keyCode);
                if (accX == -1) return;
                newXAccVal = -1;
                changed = true;
            }
            if (status == KeyStatus.FINISH) {
                if (accX == -1) {
                    if (pressed.exists(68) || pressed.exists(39)) {
                        newXAccVal = 1;
                    } else {
                        if (pressed.exists(65) && pressed.exists(37)) {
                            pressed.remove(keyCode);
                            return;
                        }
                        newXAccVal = 0;
                    }
                    changed = true;
                } else {
                    //skip
                }
                pressed.remove(keyCode);
            }
        }

        if (keyCode == Keyboard.SPACE) {
            if (status == KeyStatus.START) {
                newFireVal = true;
                changed = true;
            }
        }

        if (changed) {
            if (newYAccVal != 100) {
                accY = newYAccVal;
            }
            if (newXAccVal != 100) {
                accX = newXAccVal;
            }
            if (newFireVal) {
            }
        }
    }
}
