package flx.core;
class Facade {

    private function new() {

    }

    @:allow
    public static var I(default, null):Facade = new Facade();

    private var xp:Int;
    private var health:Int;
    private var armor:Int;

    private var moveSpd:Float; // per second!
    private var attackSpd:Float;// per second!
    private var regen:Float;    // per second!

    private var spawnTime:Float;
    private var spawnChance:Float;

    public function getXp():Int {
        return xp;
    }

    public function getHealth():Int {
        return health;
    }

    public function getArmor():Int {
        return armor;
    }

    public function getMoveSpd():Float {
        return moveSpd;
    }

    public function getAttackSpd():Float {
        return attackSpd;
    }

    public function getRegen():Float {
        return regen;
    }

    public function getSpawnTime():Float {
        return spawnTime;
    }

    public function getSpawnChance():Float {
        return spawnChance;
    }

    public function init():Void {
        xp = 0;
        health = 100;
        armor = 0;

        moveSpd = 200;
        attackSpd = 1.0;
        regen = 0.8;

        spawnTime = 10;
        spawnChance = 0.05;
    }
}
