#ifndef INCLUDED_org_flixel_FlxAssets
#define INCLUDED_org_flixel_FlxAssets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(org,flixel,FlxAssets)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxAssets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAssets_obj OBJ_;
		FlxAssets_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxAssets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxAssets_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxAssets"); }

		static ::String imgDefaultButton;
		static ::String imgLogo;
		static ::String imgDefault;
		static ::String imgAuto;
		static ::String imgAutoAlt;
		static ::String imgLogoCorners;
		static ::String imgLogoLight;
		static ::String imgHandle;
		static ::String imgDefaultCursor;
		static ::String imgBounds;
		static ::String imgOpen;
		static ::String imgRecordOff;
		static ::String imgRecordOn;
		static ::String imgStop;
		static ::String imgFlixel;
		static ::String imgRestart;
		static ::String imgPause;
		static ::String imgPlay;
		static ::String imgStep;
		static ::String imgBase;
		static ::String imgStick;
		static ::String imgButtonA;
		static ::String imgButtonB;
		static ::String imgButtonC;
		static ::String imgButtonX;
		static ::String imgButtonY;
		static ::String imgButtonUp;
		static ::String imgButtonDown;
		static ::String imgButtonLeft;
		static ::String imgButtonRight;
		static ::String debuggerFont;
		static ::String defaultFont;
		static ::String sndBeep;
		static Void drawLogo( ::flash::display::Graphics graph);
		static Dynamic drawLogo_dyn();

		static ::flash::display::BitmapData getBitmapData( ::String id);
		static Dynamic getBitmapData_dyn();

		static Void cacheSounds( );
		static Dynamic cacheSounds_dyn();

		static Void addBitmapDataToCache( ::String key,::flash::display::BitmapData bmd);
		static Dynamic addBitmapDataToCache_dyn();

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxAssets */ 
