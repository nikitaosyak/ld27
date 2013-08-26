package flx.ui;
import org.flixel.util.FlxPoint;
import flx.core.Enemy;
import org.flixel.plugin.photonstorm.FlxBar;

class EnemyLifeBar extends FlxBar {

    public function new(enemy:Enemy) {
        super(0, 0, FlxBar.FILL_LEFT_TO_RIGHT, 64, 32, enemy, 'lifePercent');
        createImageBar(null, 'assets/an_lifeBar.png', 0x000000);

        trackParent(Std.int((enemy.width - 64)/2), Std.int(enemy.height - 16));
        currentValue = 100;
        fixedPosition = false;

        color = 0xCC0000;
        alpha = 0.8;
    }
}
