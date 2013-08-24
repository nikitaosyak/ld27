#ifndef INCLUDED_org_flixel_system_input_FlxJoystickManager
#define INCLUDED_org_flixel_system_input_FlxJoystickManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/system/input/IFlxInput.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,events,JoystickEvent)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxJoystick)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxJoystickManager)
HX_DECLARE_CLASS4(org,flixel,system,input,IFlxInput)
namespace org{
namespace flixel{
namespace system{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxJoystickManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxJoystickManager_obj OBJ_;
		FlxJoystickManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxJoystickManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxJoystickManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::flixel::system::input::IFlxInput_obj *()
			{ return new ::org::flixel::system::input::IFlxInput_delegate_< FlxJoystickManager_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxJoystickManager"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Float set_globalDeadZone( Float DeadZone);
		Dynamic set_globalDeadZone_dyn();

		virtual Void handleHatMove( ::openfl::events::JoystickEvent FlashEvent);
		Dynamic handleHatMove_dyn();

		virtual Void handleBallMove( ::openfl::events::JoystickEvent FlashEvent);
		Dynamic handleBallMove_dyn();

		virtual Void handleAxisMove( ::openfl::events::JoystickEvent FlashEvent);
		Dynamic handleAxisMove_dyn();

		virtual Void handleButtonUp( ::openfl::events::JoystickEvent FlashEvent);
		Dynamic handleButtonUp_dyn();

		virtual Void handleButtonDown( ::openfl::events::JoystickEvent FlashEvent);
		Dynamic handleButtonDown_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual int get_numActiveJoysticks( );
		Dynamic get_numActiveJoysticks_dyn();

		virtual bool anyJoyJustReleased( int buttonID);
		Dynamic anyJoyJustReleased_dyn();

		virtual bool anyJoyJustPressed( int buttonID);
		Dynamic anyJoyJustPressed_dyn();

		virtual bool anyJoyPressed( int buttonID);
		Dynamic anyJoyPressed_dyn();

		virtual bool anyButton( );
		Dynamic anyButton_dyn();

		virtual ::org::flixel::system::input::FlxJoystick joystick( int joystickID);
		Dynamic joystick_dyn();

		::haxe::ds::IntMap joysticks;
		int numActiveJoysticks;
		Float globalDeadZone;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_FlxJoystickManager */ 
