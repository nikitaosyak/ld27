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
        health = 40;
        damage = 10;

        moveSpd = 205;
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

        lvlUpTime = 1;

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
