#ifndef INCLUDED_org_flixel_system_input_FlxTouchManager
#define INCLUDED_org_flixel_system_input_FlxTouchManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/system/input/IFlxInput.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,events,TouchEvent)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxTouch)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxTouchManager)
HX_DECLARE_CLASS4(org,flixel,system,input,IFlxInput)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace org{
namespace flixel{
namespace system{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxTouchManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTouchManager_obj OBJ_;
		FlxTouchManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxTouchManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTouchManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::flixel::system::input::IFlxInput_obj *()
			{ return new ::org::flixel::system::input::IFlxInput_delegate_< FlxTouchManager_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxTouchManager"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual ::org::flixel::system::input::FlxTouch recycle( Float X,Float Y,int PointID);
		Dynamic recycle_dyn();

		virtual ::org::flixel::system::input::FlxTouch add( ::org::flixel::system::input::FlxTouch touch);
		Dynamic add_dyn();

		virtual Array< ::Dynamic > justReleasedTouches( Array< ::Dynamic > TouchArray);
		Dynamic justReleasedTouches_dyn();

		virtual Array< ::Dynamic > justStartedTouches( Array< ::Dynamic > TouchArray);
		Dynamic justStartedTouches_dyn();

		virtual Void handleTouchMove( ::flash::events::TouchEvent FlashEvent);
		Dynamic handleTouchMove_dyn();

		virtual Void handleTouchEnd( ::flash::events::TouchEvent FlashEvent);
		Dynamic handleTouchEnd_dyn();

		virtual Void handleTouchBegin( ::flash::events::TouchEvent FlashEvent);
		Dynamic handleTouchBegin_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::org::flixel::system::input::FlxTouch getFirstTouch( );
		Dynamic getFirstTouch_dyn();

		::haxe::ds::IntMap _touchesCache;
		Array< ::Dynamic > _inactiveTouches;
		Array< ::Dynamic > touches;
		static int maxTouchPoints;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_FlxTouchManager */ 
