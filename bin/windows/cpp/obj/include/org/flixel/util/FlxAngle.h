#ifndef INCLUDED_org_flixel_util_FlxAngle
#define INCLUDED_org_flixel_util_FlxAngle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxTouch)
HX_DECLARE_CLASS3(org,flixel,util,FlxAngle)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace org{
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxAngle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAngle_obj OBJ_;
		FlxAngle_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxAngle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxAngle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxAngle"); }

		static Array< Float > cosTable;
		static Array< Float > sinTable;
		static Float DEG;
		static Float RAD;
		static Float coefficient1;
		static ::org::flixel::util::FlxPoint rotatePoint( Float X,Float Y,Float PivotX,Float PivotY,Float Angle,::org::flixel::util::FlxPoint point);
		static Dynamic rotatePoint_dyn();

		static Float getAngle( ::org::flixel::util::FlxPoint Point1,::org::flixel::util::FlxPoint Point2);
		static Dynamic getAngle_dyn();

		static Float atan2( Float y,Float x);
		static Dynamic atan2_dyn();

		static Array< Float > sinCosGenerator( int length,hx::Null< Float >  sinAmplitude,hx::Null< Float >  cosAmplitude,hx::Null< Float >  frequency);
		static Dynamic sinCosGenerator_dyn();

		static Array< Float > getSinTable( );
		static Dynamic getSinTable_dyn();

		static Array< Float > getCosTable( );
		static Dynamic getCosTable_dyn();

		static int wrapAngle( Float angle);
		static Dynamic wrapAngle_dyn();

		static int angleLimit( int angle,int min,int max);
		static Dynamic angleLimit_dyn();

		static Float asDegrees( Float radians);
		static Dynamic asDegrees_dyn();

		static Float asRadians( Float degrees);
		static Dynamic asRadians_dyn();

		static Float angleBetween( ::org::flixel::FlxSprite SpriteA,::org::flixel::FlxSprite SpriteB,hx::Null< bool >  AsDegrees);
		static Dynamic angleBetween_dyn();

		static Float angleBetweenPoint( ::org::flixel::FlxSprite Sprite,::org::flixel::util::FlxPoint Target,hx::Null< bool >  AsDegrees);
		static Dynamic angleBetweenPoint_dyn();

		static Float angleBetweenMouse( ::org::flixel::FlxObject Object,hx::Null< bool >  AsDegrees);
		static Dynamic angleBetweenMouse_dyn();

		static Float angleBetweenTouch( ::org::flixel::FlxObject Object,::org::flixel::system::input::FlxTouch Touch,hx::Null< bool >  AsDegrees);
		static Dynamic angleBetweenTouch_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_org_flixel_util_FlxAngle */ 
