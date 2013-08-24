package flx.core;
class Facade {

    @:allow
    public static var I(default, null):Facade = new Facade();

    private var xp:Int;
    private var health:Int;
    private var armor:Int;

    private var moveSpd:Float;  // per second!
    private var attackSpd:Float;// per second!
    private var regen:Float;    // per second!

    public function init():Void {
        xp = 0;
        health = 100;
        armor = 0;

        moveSpd = 100;
        attackSpd = 1.0;
        regen = 0.8;
    }
}
