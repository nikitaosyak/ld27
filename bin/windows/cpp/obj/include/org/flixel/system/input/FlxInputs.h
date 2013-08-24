#ifndef INCLUDED_org_flixel_system_input_FlxInputs
#define INCLUDED_org_flixel_system_input_FlxInputs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flixel,system,input,FlxInputs)
HX_DECLARE_CLASS4(org,flixel,system,input,IFlxInput)
namespace org{
namespace flixel{
namespace system{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxInputs_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxInputs_obj OBJ_;
		FlxInputs_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxInputs_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxInputs_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxInputs"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		static Array< ::Dynamic > inputs;
		static Void init( );
		static Dynamic init_dyn();

		static ::org::flixel::system::input::IFlxInput addInput( ::org::flixel::system::input::IFlxInput input);
		static Dynamic addInput_dyn();

		static Void updateInputs( );
		static Dynamic updateInputs_dyn();

		static Void onFocusLost( );
		static Dynamic onFocusLost_dyn();

		static Void onFocus( );
		static Dynamic onFocus_dyn();

		static Void resetInputs( );
		static Dynamic resetInputs_dyn();

		static Void initJoystick( );
		static Dynamic initJoystick_dyn();

		static Void initKeyboard( );
		static Dynamic initKeyboard_dyn();

		static Void initMouse( );
		static Dynamic initMouse_dyn();

		static Void initTouch( );
		static Dynamic initTouch_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_FlxInputs */ 
