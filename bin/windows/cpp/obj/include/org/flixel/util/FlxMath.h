#ifndef INCLUDED_org_flixel_util_FlxMath
#define INCLUDED_org_flixel_util_FlxMath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxTouch)
HX_DECLARE_CLASS3(org,flixel,util,FlxMath)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
HX_DECLARE_CLASS3(org,flixel,util,FlxRect)
namespace org{
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxMath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxMath_obj OBJ_;
		FlxMath_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxMath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxMath_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxMath"); }

		static Float roundDecimal( Float Value,int Precision);
		static Dynamic roundDecimal_dyn();

		static Float bound( Float Value,Float Min,Float Max);
		static Dynamic bound_dyn();

		static Float computeVelocity( Float Velocity,Float Acceleration,Float Drag,Float Max);
		static Dynamic computeVelocity_dyn();

		static Float getDistance( ::org::flixel::util::FlxPoint Point1,::org::flixel::util::FlxPoint Point2);
		static Dynamic getDistance_dyn();

		static bool isOdd( Float n);
		static Dynamic isOdd_dyn();

		static bool isEven( Float n);
		static Dynamic isEven_dyn();

		static int numericComparison( Float num1,Float num2);
		static Dynamic numericComparison_dyn();

		static bool pointInCoordinates( Float pointX,Float pointY,Float rectX,Float rectY,Float rectWidth,Float rectHeight);
		static Dynamic pointInCoordinates_dyn();

		static bool pointInFlxRect( Float pointX,Float pointY,::org::flixel::util::FlxRect rect);
		static Dynamic pointInFlxRect_dyn();

		static bool mouseInFlxRect( bool useWorldCoords,::org::flixel::util::FlxRect rect);
		static Dynamic mouseInFlxRect_dyn();

		static bool pointInRectangle( Float pointX,Float pointY,::flash::geom::Rectangle rect);
		static Dynamic pointInRectangle_dyn();

		static int maxAdd( int value,int amount,int max);
		static Dynamic maxAdd_dyn();

		static int wrapValue( int value,int amount,int max);
		static Dynamic wrapValue_dyn();

		static Float dotProduct( Float ax,Float ay,Float bx,Float by);
		static Dynamic dotProduct_dyn();

		static Float vectorLength( Float dx,Float dy);
		static Dynamic vectorLength_dyn();

		static int distanceBetween( ::org::flixel::FlxSprite SpriteA,::org::flixel::FlxSprite SpriteB);
		static Dynamic distanceBetween_dyn();

		static int distanceToPoint( ::org::flixel::FlxSprite Sprite,::org::flixel::util::FlxPoint Target);
		static Dynamic distanceToPoint_dyn();

		static int distanceToMouse( ::org::flixel::FlxSprite Sprite);
		static Dynamic distanceToMouse_dyn();

		static int distanceToTouch( ::org::flixel::FlxSprite Sprite,::org::flixel::system::input::FlxTouch Touch);
		static Dynamic distanceToTouch_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_org_flixel_util_FlxMath */ 
