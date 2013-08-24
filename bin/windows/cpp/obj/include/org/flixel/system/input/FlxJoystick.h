#ifndef INCLUDED_org_flixel_system_input_FlxJoystick
#define INCLUDED_org_flixel_system_input_FlxJoystick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxJoyButton)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxJoystick)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace org{
namespace flixel{
namespace system{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxJoystick_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxJoystick_obj OBJ_;
		FlxJoystick_obj();
		Void __construct(int id,hx::Null< Float >  __o_globalDeadZone);

	public:
		static hx::ObjectPtr< FlxJoystick_obj > __new(int id,hx::Null< Float >  __o_globalDeadZone);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxJoystick_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxJoystick"); }

		virtual bool anyInput( );
		Dynamic anyInput_dyn();

		virtual bool anyButton( );
		Dynamic anyButton_dyn();

		virtual Float getAxis( int axeID);
		Dynamic getAxis_dyn();

		virtual bool justReleased( int buttonID);
		Dynamic justReleased_dyn();

		virtual bool justPressed( int buttonID);
		Dynamic justPressed_dyn();

		virtual bool pressed( int buttonID);
		Dynamic pressed_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual ::org::flixel::system::input::FlxJoyButton getButton( int buttonID);
		Dynamic getButton_dyn();

		Float deadZone;
		int id;
		::org::flixel::util::FlxPoint ball;
		::org::flixel::util::FlxPoint hat;
		Array< Float > axis;
		::haxe::ds::IntMap buttons;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_FlxJoystick */ 
