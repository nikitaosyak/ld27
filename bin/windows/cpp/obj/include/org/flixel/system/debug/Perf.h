#ifndef INCLUDED_org_flixel_system_debug_Perf
#define INCLUDED_org_flixel_system_debug_Perf

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/system/FlxWindow.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS3(org,flixel,system,FlxWindow)
HX_DECLARE_CLASS4(org,flixel,system,debug,Perf)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Perf_obj : public ::org::flixel::system::FlxWindow_obj{
	public:
		typedef ::org::flixel::system::FlxWindow_obj super;
		typedef Perf_obj OBJ_;
		Perf_obj();
		Void __construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor);

	public:
		static hx::ObjectPtr< Perf_obj > __new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Perf_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Perf"); }

		virtual Void drawCalls( int Drawcalls);
		Dynamic drawCalls_dyn();

		virtual Void visibleObjects( int Count);
		Dynamic visibleObjects_dyn();

		virtual Void activeObjects( int Count);
		Dynamic activeObjects_dyn();

		virtual Void flash( int Time);
		Dynamic flash_dyn();

		virtual Void flixelDraw( int Time);
		Dynamic flixelDraw_dyn();

		virtual Void flixelUpdate( int Time);
		Dynamic flixelUpdate_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );

		int _drawCallsMarker;
		Array< int > _drawCalls;
		Array< int > _visibleObject;
		Array< Float > _flash;
		Array< int > _activeObject;
		int _flashMarker;
		int _objectMarker;
		int _visibleObjectMarker;
		int _flixelDrawMarker;
		Array< int > _flixelDraw;
		int _flixelUpdateMarker;
		Array< int > _flixelUpdate;
		int _updateTimer;
		int _lastTime;
		::flash::text::TextField _text;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_Perf */ 
