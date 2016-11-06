// package flx.core;
// import flixel.group.FlxGroup;
// import flixel.FlxSprite;
// class SortingGroup extends FlxTypedGroup<FlxSprite>{
//     public function new() {
//         super();
//     }

//     override private function sortHandler(Obj1:FlxSprite, Obj2:FlxSprite):Int {
//         if (Obj1 == null) return _sortOrder;
//         if (Obj2 == null) return -_sortOrder;

//         var prop1 = Obj1.y + Obj1.height;
//         var prop2 = Obj2.y + Obj2.height;

//         if (prop1 < prop2)
//         {
//             return _sortOrder;
//         }
//         else if (prop1 > prop2)
//         {
//             return -_sortOrder;
//         }
//         return 0;
//     }

// }
