#ifndef INCLUDED_org_flixel_util_FlxTimer
#define INCLUDED_org_flixel_util_FlxTimer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS3(org,flixel,plugin,TimerManager)
HX_DECLARE_CLASS3(org,flixel,util,FlxTimer)
namespace org{
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxTimer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTimer_obj OBJ_;
		FlxTimer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxTimer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTimer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTimer"); }

		virtual Float get_progress( );
		Dynamic get_progress_dyn();

		Float progress;
		virtual int get_loopsLeft( );
		Dynamic get_loopsLeft_dyn();

		int loopsLeft;
		virtual Float get_timeLeft( );
		Dynamic get_timeLeft_dyn();

		Float timeLeft;
		virtual Void stop( );
		Dynamic stop_dyn();

		virtual ::org::flixel::util::FlxTimer start( hx::Null< Float >  Time,hx::Null< int >  Loops,Dynamic Callback);
		Dynamic start_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		int _loopsCounter;
		Float _timeCounter;
		Dynamic _callback;
		Dynamic &_callback_dyn() { return _callback;}
		bool finished;
		bool paused;
		int loops;
		Float time;
		static ::org::flixel::plugin::TimerManager manager;
		static ::org::flixel::plugin::TimerManager get_manager( );
		static Dynamic get_manager_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_org_flixel_util_FlxTimer */ 
