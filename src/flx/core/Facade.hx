package flx.core;
class Facade {

    private function new() {

    }

    @:allow
    public static var I(default, null):Facade = new Facade();

    public var xp:Int;
    public var health:Float;
    public var damage:Float;

    public var moveSpd:Float; // per second!
    public var attackSpd:Float;// per second!
    public var regen:Float;    // per second!

    public var xpMultiplier:Float;
    public var healthMultiplier:Float;
    public var damageMultiplier:Float;
    public var moveSpdMultiplier:Float;
    public var regenMultiplier:Float;

    public var spawnTime:Float;
    public var spawnChance:Float;
    public var maxMonsters:Int;

    public var initialMonsterSped:Float;
    public var monsterSpeedMultiplier:Float;
    public var initialMonsterDmg:Float;
    public var monsterDmgMultiplier:Float;
    public var initialMonsterHealth:Float;
    public var monsterHealthMultiplier:Float;
    public var monsterExp:Float;
    public var monsterExpMultiplier:Float;

    public function init():Void {
        xp = 40;
        health = 40;
        damage = 10;

        moveSpd = 200;
        attackSpd = 1.0;
        regen = 0.8;

        xpMultiplier = 1.8;
        damageMultiplier = 1.2;
        healthMultiplier = 1.2;
        moveSpdMultiplier = 1.05;
        regenMultiplier = 1.05;

        spawnTime = 10;
        spawnChance = 0.05;
        maxMonsters = 1;

        initialMonsterDmg = 2;
        monsterDmgMultiplier = 1.2;

        initialMonsterSped = 100;
        monsterSpeedMultiplier = 1.05;

        initialMonsterHealth = 20;
        monsterHealthMultiplier = 1.3;

        monsterExp = 10;
        monsterExpMultiplier = 1.5;
    }
}
