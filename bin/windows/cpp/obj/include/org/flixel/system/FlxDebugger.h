#ifndef INCLUDED_org_flixel_system_FlxDebugger
#define INCLUDED_org_flixel_system_FlxDebugger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS3(org,flixel,system,FlxDebugger)
HX_DECLARE_CLASS3(org,flixel,system,FlxWindow)
HX_DECLARE_CLASS4(org,flixel,system,debug,Console)
HX_DECLARE_CLASS4(org,flixel,system,debug,Log)
HX_DECLARE_CLASS4(org,flixel,system,debug,Perf)
HX_DECLARE_CLASS4(org,flixel,system,debug,VCR)
HX_DECLARE_CLASS4(org,flixel,system,debug,Vis)
HX_DECLARE_CLASS4(org,flixel,system,debug,Watch)
namespace org{
namespace flixel{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  FlxDebugger_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef FlxDebugger_obj OBJ_;
		FlxDebugger_obj();
		Void __construct(Float Width,Float Height);

	public:
		static hx::ObjectPtr< FlxDebugger_obj > __new(Float Width,Float Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxDebugger_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxDebugger"); }

		virtual Void resetLayout( );
		Dynamic resetLayout_dyn();

		virtual Void setLayout( int Layout);
		Dynamic setLayout_dyn();

		virtual Void onMouseOut( ::flash::events::MouseEvent E);
		Dynamic onMouseOut_dyn();

		virtual Void onMouseOver( ::flash::events::MouseEvent E);
		Dynamic onMouseOver_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		int _gutter;
		::flash::geom::Point _screen;
		int _layout;
		bool hasMouse;
		::org::flixel::system::debug::Console console;
		::org::flixel::system::debug::Vis vis;
		::org::flixel::system::debug::VCR vcr;
		::org::flixel::system::debug::Watch watch;
		::org::flixel::system::debug::Log log;
		::org::flixel::system::debug::Perf perf;
		static int pointPrecision;
};

} // end namespace org
} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_org_flixel_system_FlxDebugger */ 
