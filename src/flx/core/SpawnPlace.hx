package flx.core;
import flx.ui.EnemyLifeBar;
import flash.geom.Point;
import org.flixel.FlxPath;
import org.flixel.util.FlxPoint;
import util.MathHelp;
import flx.state.level.LevelBase;
import flash.events.TimerEvent;
import flash.utils.Timer;
import org.flixel.FlxG;
import org.flixel.FlxSprite;

class SpawnPlace extends FlxSprite {

    public static var currentEnemies:Int;

    public function new(x:Int, y:Int, parentState:LevelBase) {
        super();

        this.loadGraphic('assets/tiled/grave1.png', false, false, 64, 64);
        this.visible = FlxG.visualDebug;
        this.immovable = true;

        setOriginToCenter();

        this.x = x;
        this.y = y;

        _aggregateTime = 0;
        _level = parentState;

        var cent:Point = new Point(this.x + 32, this.y + 32);
        _spawnRanges = new Array<Point>();
        _spawnRanges.push(new Point(cent.x, cent.y - 64));
        _spawnRanges.push(new Point(cent.x + 64, cent.y - 64));
        _spawnRanges.push(new Point(cent.x + 64, cent.y));
        _spawnRanges.push(new Point(cent.x + 64, cent.y + 64));
        _spawnRanges.push(new Point(cent.x, cent.y + 64));
        _spawnRanges.push(new Point(cent.x - 64, cent.y + 64));
        _spawnRanges.push(new Point(cent.x - 64, cent.y));
        _spawnRanges.push(new Point(cent.x - 64, cent.y - 64));
    }

    public function makePathAround(fromPt:FlxPoint):FlxPath {
//        trace(fromPt, this.x, this.y);

//        trace(Math.atan2())
        return null;
    }

    private var _aggregateTime:Float;
    private var _level:LevelBase;
    private var _spawnRanges:Array<Point>;

    override public function update():Void {
        super.update();

        _aggregateTime += FlxG.elapsed;
        if (currentEnemies >= Facade.I.maxMonsters) return;
        if (_aggregateTime > Facade.I.spawnTime) {
            if (Math.random() > Facade.I.spawnChance) {
                var newSeed:Float = Math.random();
                if (newSeed < 0.6) {
                    spawnEnemy();
                } else
                if (newSeed < 0.95) {
                    spawnEnemy();
                    spawnEnemy();
                } else {
                    spawnEnemy();
                    spawnEnemy();
                    spawnEnemy();
                }
            }
            _aggregateTime = 0;
        }
    }

    private function spawnEnemy():Void {
        if (currentEnemies >= Facade.I.maxMonsters) return;
        var targ:Point = _spawnRanges[MathHelp.randomIntRange(0, _spawnRanges.length-1)];
        var enemyGen:Enemy = new Enemy(targ.x, targ.y, _level);
        _level.enemies.push(enemyGen);
        _level.layoutObjects.add(enemyGen);

        var enemyBar:EnemyLifeBar = new EnemyLifeBar(enemyGen);
        _level.layoutObjects.add(enemyBar);
        enemyGen.bar = enemyBar;
        currentEnemies++;
    }

}
