package flx.core;
import org.flixel.util.FlxRandom;
import org.flixel.FlxCamera;
import org.flixel.FlxSprite;
import org.flixel.FlxG;
import org.flixel.util.FlxPoint;
import org.flixel.FlxCamera;
class CameraOverride extends FlxCamera {
    public function new() {
        super(0, 0, FlxG.width, FlxG.height);
    }

    override public function update():Void {
        if (FlxG.paused) return;

//Either follow the object closely,
//or doublecheck our deadzone and update accordingly.
        if (target != null) {
            if (deadzone == null) {
                focusOn(target.getMidpoint(_point));
            }
            else {
                var target:FlxSprite = cast(this.target, FlxSprite);
                var edge:Float;
                var targetX:Float = target.x + target.width/2;
                var targetY:Float = target.y - 10;

                if (style == FlxCamera.STYLE_SCREEN_BY_SCREEN) {
                    if (targetX > scroll.x + width + 32) {
                        _scrollTarget.x += width + 64;
                    }
                    else if (targetX < scroll.x - 32) {
                        _scrollTarget.x -= width + 64;
                    }

                    if (targetY > scroll.y + height + 32) {
                        _scrollTarget.y += height + 64;
                    }
                    else if (targetY < scroll.y - 32) {
                        _scrollTarget.y -= height + 64;
                    }
                }
                else {
                    edge = targetX - deadzone.x;
                    if (_scrollTarget.x > edge) {
                        _scrollTarget.x = edge;
                    }
                    edge = targetX + target.width - deadzone.x - deadzone.width;
                    if (_scrollTarget.x < edge) {
                        _scrollTarget.x = edge;
                    }

                    edge = targetY - deadzone.y;
                    if (_scrollTarget.y > edge) {
                        _scrollTarget.y = edge;
                    }
                    edge = targetY + target.height - deadzone.y - deadzone.height;
                    if (_scrollTarget.y < edge) {
                        _scrollTarget.y = edge;
                    }
                }

                if ((followLead != null) && (Std.is(target, FlxSprite))) {
                    if (_lastTargetPosition == null) {
                        _lastTargetPosition = new FlxPoint(target.x, target.y); // Creates this point.
                    }
                    _scrollTarget.x += (target.x - _lastTargetPosition.x ) * followLead.x;
                    _scrollTarget.y += (target.y - _lastTargetPosition.y ) * followLead.y;

                    _lastTargetPosition.x = target.x;
                    _lastTargetPosition.y = target.y;
                }
                                     //1792, 1408

                if (followLerp == 0) {
                    scroll.x = _scrollTarget.x; // Prevents Camera Jittering with no lerp.
                    scroll.y = _scrollTarget.y; // Prevents Camera Jittering with no lerp.
                } else {
                    scroll.x += (_scrollTarget.x - scroll.x) * FlxG.elapsed / (FlxG.elapsed + followLerp * FlxG.elapsed);
                    scroll.y += (_scrollTarget.y - scroll.y) * FlxG.elapsed / (FlxG.elapsed + followLerp * FlxG.elapsed);
                }

            }
        }

//Make sure we didn't go outside the camera's bounds
        if (bounds != null) {
            if (scroll.x < bounds.left) {
                scroll.x = bounds.left;
            }
            if (scroll.x > bounds.right - width) {
                scroll.x = bounds.right - width;
            }
            if (scroll.y < bounds.top) {
                scroll.y = bounds.top;
            }
            if (scroll.y > bounds.bottom - height) {
                scroll.y = bounds.bottom - height;
            }
        }

//Update the "flash" special effect
        if (_fxFlashAlpha > 0.0) {
            _fxFlashAlpha -= FlxG.elapsed / _fxFlashDuration;
            if ((_fxFlashAlpha <= 0) && (_fxFlashComplete != null)) {
                _fxFlashComplete();
            }
        }

//Update the "fade" special effect
        if ((_fxFadeAlpha > 0.0) && (_fxFadeAlpha < 1.0)) {
            if (_fxFadeIn) {
                _fxFadeAlpha -= FlxG.elapsed / _fxFadeDuration;
                if (_fxFadeAlpha <= 0.0) {
                    _fxFadeAlpha = 0.0;
                    if (_fxFadeComplete != null) {
                        _fxFadeComplete();
                    }
                }
            }
            else {
                _fxFadeAlpha += FlxG.elapsed / _fxFadeDuration;
                if (_fxFadeAlpha >= 1.0) {
                    _fxFadeAlpha = 1.0;
                    if (_fxFadeComplete != null) {
                        _fxFadeComplete();
                    }
                }
            }
        }

//Update the "shake" special effect
        if (_fxShakeDuration > 0) {
            _fxShakeDuration -= FlxG.elapsed;
            if (_fxShakeDuration <= 0) {
                _fxShakeOffset.make();
                if (_fxShakeComplete != null) {

                    _fxShakeComplete();
                }
            }
            else {
                if ((_fxShakeDirection == FlxCamera.SHAKE_BOTH_AXES) || (_fxShakeDirection == FlxCamera.SHAKE_HORIZONTAL_ONLY)) {
                    _fxShakeOffset.x = (FlxRandom.float() * _fxShakeIntensity * width * 2 - _fxShakeIntensity * width) * zoom;
                }
                if ((_fxShakeDirection == FlxCamera.SHAKE_BOTH_AXES) || (_fxShakeDirection == FlxCamera.SHAKE_VERTICAL_ONLY)) {
                    _fxShakeOffset.y = (FlxRandom.float() * _fxShakeIntensity * height * 2 - _fxShakeIntensity * height) * zoom;
                }
            }

// Camera shake fix for target follow.
            if (target != null) {
                _flashSprite.x = x + _flashOffsetX;
                _flashSprite.y = y + _flashOffsetY;
            }
        }
    }
}
