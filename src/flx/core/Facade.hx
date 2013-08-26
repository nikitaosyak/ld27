package flx.core;
class Facade {

    private function new() {

    }

    @:allow
    public static var I(default, null):Facade = new Facade();

    public var xp:Int;
    public var xpMultiplier:Float;

    public var health:Float;
    public var healthMultiplier:Float;
    public var maxHealth:Float;

    public var damage:Float;
    public var damageMultiplier:Float;
    public var maxDamage:Float;

    public var moveSpd:Float; // pixels per second
    public var moveSpdMultiplier:Float;
    public var maxMoveSpd:Float; // pixels per second

    public var attackSpd:Float;// frames per second
    public var attackSpdMultiplier:Float;
    public var maxAttackSpd:Float;// frames per second

    public var regen:Float;    // per second!
    public var regenMultiplier:Float;
    public var maxRegen:Float;    // per second!


    public var spawnTime:Float;
    public var spawnChance:Float;
    public var maxMonsters:Int;

    public var lvlUpTime:Float;

    public var initialMonsterSpeed:Float;
    public var monsterSpeedMultiplier:Float;
    public var monsterMaxSpeed:Float;

    public var initialMonsterDmg:Float;
    public var monsterDmgMultiplier:Float;
    public var monsterMaxDmg:Float;

    public var initialMonsterHealth:Float;
    public var monsterHealthMultiplier:Float;
    public var initialMonsterExp:Float;
    public var monsterExpMultiplier:Float;

    public var monsterInitialAttackSpeed:Int;
    public var monsterAttackSpeedMultiplier:Float;
    public var monsterMaxAttackSpeed:Int;

    public var colors:Array<Int>;
    public var alphas:Array<Float>;
    public var incorporeal:Array<Float>;
    public var sizes:Array<Float>;

    public function init():Void {
        colors = [0xFFFFFF, 0x0e0f11, 0xf26900, 0xf23a3a, 0xf20000];
        alphas = [1, 1, 1, 1, 0.8];
        incorporeal = [0, 0.1, 0.25, 0.35, 0.5];
        sizes = [1, 1.1, 1.2, 1.3, 1.4];

        xp = 40;
        xpMultiplier = 1.8;

        health = 50;
        healthMultiplier = 1.2;
        maxHealth = 200;

        damage = 10;
        damageMultiplier = 1.2;
        maxDamage = 200;

        moveSpd = 205;
        moveSpdMultiplier = 1.05;

        attackSpd = 20;
        attackSpdMultiplier = 1.05;
        maxAttackSpd = 30;

        regen = 0.8;
        regenMultiplier = 1.05;
        maxRegen = 5;

        spawnTime = 10;
        spawnChance = 0.2;
        maxMonsters = 10;

        lvlUpTime = 10;

        initialMonsterDmg = 5;
        monsterDmgMultiplier = 1.2;
        monsterMaxDmg = 100;

        initialMonsterSpeed = 120;
        monsterSpeedMultiplier = 1.05;
        monsterMaxSpeed = 180;

        initialMonsterHealth = 20;
        monsterHealthMultiplier = 1.3;

        initialMonsterExp = 10;
        monsterExpMultiplier = 1.5;

        monsterInitialAttackSpeed = 8;
        monsterAttackSpeedMultiplier = 1.05;
        monsterMaxAttackSpeed = 20;
    }
}
