package flx.core;
class Facade {

    private function new() {

    }

    @:allow
    public static var I(default, null):Facade = new Facade();

    public var xp:Int;
    public var health:Int;
    public var armor:Int;

    public var moveSpd:Float; // per second!
    public var attackSpd:Float;// per second!
    public var regen:Float;    // per second!

    public var spawnTime:Float;
    public var spawnChance:Float;
    public var maxMonsters:Int;

    public function init():Void {
        xp = 0;
        health = 100;
        armor = 0;

        moveSpd = 200;
        attackSpd = 1.0;
        regen = 0.8;

        spawnTime = 10;
        spawnChance = 0.05;
        maxMonsters = 10;
    }
}
