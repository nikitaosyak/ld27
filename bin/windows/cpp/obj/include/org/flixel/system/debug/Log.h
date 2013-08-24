#ifndef INCLUDED_org_flixel_system_debug_Log
#define INCLUDED_org_flixel_system_debug_Log

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
HX_DECLARE_CLASS4(org,flixel,system,debug,Log)
HX_DECLARE_CLASS4(org,flixel,system,debug,LogStyle)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Log_obj : public ::org::flixel::system::FlxWindow_obj{
	public:
		typedef ::org::flixel::system::FlxWindow_obj super;
		typedef Log_obj OBJ_;
		Log_obj();
		Void __construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor);

	public:
		static hx::ObjectPtr< Log_obj > __new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Log_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Log"); }

		virtual Void updateSize( );

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void add( Dynamic Data,::org::flixel::system::debug::LogStyle Style);
		Dynamic add_dyn();

		virtual Void destroy( );

		Array< ::String > _lines;
		::flash::text::TextField _text;
		static int MAX_LOG_LINES;
		static ::org::flixel::system::debug::LogStyle STYLE_NORMAL;
		static ::org::flixel::system::debug::LogStyle STYLE_WARNING;
		static ::org::flixel::system::debug::LogStyle STYLE_ERROR;
		static ::org::flixel::system::debug::LogStyle STYLE_NOTICE;
		static ::org::flixel::system::debug::LogStyle STYLE_CONSOLE;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_Log */ 
