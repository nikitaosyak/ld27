package flx.core;
interface IHitable {

    function receiveHit(damage:Float):Void;
    function releaseFromHit():Void;
}
