package util;
class MathHelp {

    public static inline function roundExp(value:Float, exp:Int = 0):Float {
        var expVal:Float = Math.pow(10, exp);
        return Math.floor(value * expVal) / expVal;
    }

    public static inline function deg2rad(degValue:Float):Float {
        return degValue * Math.PI / 180;
    }

    public static inline function rad2deg(radValue:Float):Float {
        return radValue * 180 / Math.PI;
    }

    public static inline function angleApproxDeg(value:Float):Float {
        if (value > 180) {
            value -= 360;
        } else if (value < -180) {
            value += 360;
        }
        return value;
    }

    public static inline function angleApproxRad(value:Float):Float {
        if (value > Math.PI) {
            value -= Math.PI * 2;
        } else if (value < -Math.PI) {
            value += Math.PI * 2;
        }
        return value;
    }

    public static inline function atanAngleApprox(value:Float):Float {
        if (value > Math.PI / 2) {
            value -= Math.PI;
        } else if (value < Math.PI / 2) {
            value += Math.PI;
        }
        return value;
    }

    public static inline function isInRange(value:Float, lowerVal:Float, upperVal:Float):Bool {
        return value >= lowerVal && value <= upperVal;
    }

    public static inline function randomRange(lowerBound:Float, upperBound:Float):Float {
        return (Math.random()*(upperBound - lowerBound)) + lowerBound;
    }

    public static inline function randomIntRange(lowerBound:Int, upperBound:Int):Int {
        return Math.round((Math.random()*(upperBound - lowerBound)) + lowerBound);
    }
}
