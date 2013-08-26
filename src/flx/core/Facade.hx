package flx.core;
import org.flixel.util.FlxPoint;
class Facade {

    private function new() {

    }

    @:allow
    public static var I(default, null):Facade = new Facade();

    public var moveSpd:Float; // pixels per second

    public var spawnTime:Float;
    public var spawnChance:Float;
    public var maxMonsters:Int;

    public var lvlUpTime:Float;

    public var monsterColors:Array<Int>;
    public var monsterSpeeds:Array<Int>;
    public var monsterDamages:Array<Int>;
    public var monsterAttackSpeed:Array<Int>;
    public var monsterHealth:Array<Int>;
    public var monsterAlphas:Array<Float>;
    public var incorporeal:Array<Float>;
    public var sizes:Array<Float>;
    public var monsterOffsets:Array<FlxPoint>;

    public var healths:Array<Float>;
    public var damages:Array<Float>;
    public var attackSpeeds:Array<Int>;

    public function init():Void {
        monsterDamages = [25, 35, 45, 60, 85];
        monsterAttackSpeed = [7, 8, 9, 11, 14];
        monsterHealth = [20, 60, 100, 150, 200];
        monsterSpeeds = [120, 130, 140, 150, 160];
        monsterColors = [0xFFFFFF, 0xff9a4c, 0xf26900, 0xf23a3a, 0xf20000];
        monsterAlphas = [1, 1, 1, 1, 0.85];
        incorporeal = [0, 0.1, 0.25, 0.35, 0.5];

        healths =      [50, 75, 100, 125, 150, 175, 200];
        damages =      [10, 15,  20,  25,  30,  35,  40];
        attackSpeeds = [15, 17,  19,  21,  23,  25,  27];

        sizes = [1, 1.1, 1.2, 1.3, 1.4];
        monsterOffsets = [new FlxPoint(77, 105), new FlxPoint(84, 115), new FlxPoint(92, 125), new FlxPoint(100, 136), new FlxPoint(107, 147)];



        moveSpd = 205;

        spawnTime = 10;
        spawnChance = 0.2;
        maxMonsters = 10;

        lvlUpTime = 10;
    }
}
