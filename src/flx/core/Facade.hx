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

    public var monsterScaleMultiplier:Float;
    public var monsterMaxScale:Float;

    public var monsterInitialAttackSpeed:Int;
    public var monsterAttackSpeedMultiplier:Float;
    public var monsterMaxAttackSpeed:Int;

    public var colors:Array<Int>;
    public var alphas:Array<Float>;

    public function init():Void {
        colors = [0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00DDCCCC, 0x00CCBBBB, 0x00CCAAAA, 0x00DD9999, 0x00DD8888, 0x00DD7777, 0x00CC6666, 0x00DD5555, 0x00DD4444, 0x00DD3333, 0x00DD2222, 0x00DD1111, 0x00CC1111];
        alphas = [1, 1, 1, 0.95, 0.93, 0.9, 0.87, 0.85, 0.82, 0.8, 0.75];

        xp = 40;
        xpMultiplier = 1.8;

        health = 40;
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

        monsterScaleMultiplier = 1.02;
        monsterMaxScale = 1.4;

        monsterInitialAttackSpeed = 8;
        monsterAttackSpeedMultiplier = 1.05;
        monsterMaxAttackSpeed = 20;
    }
}
