#ifndef INCLUDED_org_flixel_util_FlxColor
#define INCLUDED_org_flixel_util_FlxColor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(org,flixel,util,FlxColor)
namespace org{
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxColor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxColor_obj OBJ_;
		FlxColor_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxColor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxColor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxColor"); }

		static int makeFromRGBA( int Red,int Green,int Blue,hx::Null< Float >  Alpha);
		static Dynamic makeFromRGBA_dyn();

		static int makeFromHSBA( Float Hue,Float Saturation,Float Brightness,hx::Null< Float >  Alpha);
		static Dynamic makeFromHSBA_dyn();

		static Dynamic getRGBA( int Color,Dynamic Results);
		static Dynamic getRGBA_dyn();

		static Dynamic getHSBA( int Color,Dynamic Results);
		static Dynamic getHSBA_dyn();

		static int getAlpha( int color);
		static Dynamic getAlpha_dyn();

		static Float getAlphaFloat( int color);
		static Dynamic getAlphaFloat_dyn();

		static int getRed( int color);
		static Dynamic getRed_dyn();

		static int getGreen( int color);
		static Dynamic getGreen_dyn();

		static int getBlue( int color);
		static Dynamic getBlue_dyn();

		static int getRandomColor( hx::Null< int >  min,hx::Null< int >  max,hx::Null< int >  alpha);
		static Dynamic getRandomColor_dyn();

		static int getColor32( int alpha,int red,int green,int blue);
		static Dynamic getColor32_dyn();

		static int getColor24( int red,int green,int blue);
		static Dynamic getColor24_dyn();

		static Array< int > getHSVColorWheel( hx::Null< int >  Alpha);
		static Dynamic getHSVColorWheel_dyn();

		static int getComplementHarmony( int Color);
		static Dynamic getComplementHarmony_dyn();

		static Dynamic getAnalogousHarmony( int Color,hx::Null< int >  Threshold);
		static Dynamic getAnalogousHarmony_dyn();

		static Dynamic getSplitComplementHarmony( int Color,hx::Null< int >  Threshold);
		static Dynamic getSplitComplementHarmony_dyn();

		static Dynamic getTriadicHarmony( int Color);
		static Dynamic getTriadicHarmony_dyn();

		static ::String getColorInfo( int Color);
		static Dynamic getColorInfo_dyn();

		static ::String RGBtoHexString( int Color);
		static Dynamic RGBtoHexString_dyn();

		static ::String RGBtoWebString( int Color);
		static Dynamic RGBtoWebString_dyn();

		static ::String colorToHexString( int Color);
		static Dynamic colorToHexString_dyn();

		static int HSVtoRGB( Float H,Float S,Float V,hx::Null< int >  Alpha);
		static Dynamic HSVtoRGB_dyn();

		static Dynamic RGBtoHSV( int Color);
		static Dynamic RGBtoHSV_dyn();

		static int interpolateColor( int Color1,int Color2,int Steps,int CurrentStep,hx::Null< int >  Alpha);
		static Dynamic interpolateColor_dyn();

		static int interpolateColorWithRGB( int Color,int R2,int G2,int B2,int Steps,int CurrentStep);
		static Dynamic interpolateColorWithRGB_dyn();

		static int interpolateRGB( int R1,int G1,int B1,int R2,int G2,int B2,int Steps,int CurrentStep);
		static Dynamic interpolateRGB_dyn();

		static Dynamic getRGB( int Color);
		static Dynamic getRGB_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_org_flixel_util_FlxColor */ 
