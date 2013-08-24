#ifndef INCLUDED_org_flixel_system_debug_ConsoleCommands
#define INCLUDED_org_flixel_system_debug_ConsoleCommands

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS3(org,flixel,system,FlxWindow)
HX_DECLARE_CLASS4(org,flixel,system,debug,Console)
HX_DECLARE_CLASS4(org,flixel,system,debug,ConsoleCommands)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  ConsoleCommands_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConsoleCommands_obj OBJ_;
		ConsoleCommands_obj();
		Void __construct(::org::flixel::system::debug::Console console);

	public:
		static hx::ObjectPtr< ConsoleCommands_obj > __new(::org::flixel::system::debug::Console console);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ConsoleCommands_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ConsoleCommands"); }

		virtual Void cLog( Dynamic Text);
		Dynamic cLog_dyn();

		virtual Dynamic resolveObjectAndVariable( ::String ObjectAndVariable,::String CommandName);
		Dynamic resolveObjectAndVariable_dyn();

		virtual Dynamic attemptToCreateInstance( ::String ClassName,Dynamic _Type,::String CommandName,Array< ::String > Params);
		Dynamic attemptToCreateInstance_dyn();

		virtual Void unwatch( ::String ObjectAndVariable,::String VariableName);
		Dynamic unwatch_dyn();

		virtual Void watch( ::String ObjectAndVariable,::String DisplayName);
		Dynamic watch_dyn();

		virtual Void listFunctions( );
		Dynamic listFunctions_dyn();

		virtual Void listObjects( );
		Dynamic listObjects_dyn();

		virtual Void call( ::String FunctionAlias,Array< ::String > Params);
		Dynamic call_dyn();

		virtual Void set( ::String ObjectAndVariable,Dynamic NewVariableValue,::String WatchName);
		Dynamic set_dyn();

		virtual Void create( ::String ClassName,hx::Null< bool >  MousePos,Array< ::String > Params);
		Dynamic create_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void shake( hx::Null< Float >  Intensity,hx::Null< Float >  Duration);
		Dynamic shake_dyn();

		virtual Void bgColor( Dynamic Color);
		Dynamic bgColor_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void visualDebug( );
		Dynamic visualDebug_dyn();

		virtual Void watchMouse( );
		Dynamic watchMouse_dyn();

		virtual Void resetGame( );
		Dynamic resetGame_dyn();

		virtual Void switchState( ::String ClassName);
		Dynamic switchState_dyn();

		virtual Void resetState( );
		Dynamic resetState_dyn();

		virtual Void clearHistory( );
		Dynamic clearHistory_dyn();

		virtual Void help( ::String Command);
		Dynamic help_dyn();

		bool watchingMouse;
		::org::flixel::system::debug::Console _console;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_ConsoleCommands */ 
