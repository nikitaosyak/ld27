#ifndef INCLUDED_org_flixel_system_input_FlxKeyboard
#define INCLUDED_org_flixel_system_input_FlxKeyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/system/input/FlxInputStates.h>
#include <org/flixel/system/input/IFlxInput.h>
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxInputStates)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxKeyboard)
HX_DECLARE_CLASS4(org,flixel,system,input,IFlxInput)
namespace org{
namespace flixel{
namespace system{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxKeyboard_obj : public ::org::flixel::system::input::FlxInputStates_obj{
	public:
		typedef ::org::flixel::system::input::FlxInputStates_obj super;
		typedef FlxKeyboard_obj OBJ_;
		FlxKeyboard_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxKeyboard_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxKeyboard_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::flixel::system::input::IFlxInput_obj *()
			{ return new ::org::flixel::system::input::IFlxInput_delegate_< FlxKeyboard_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxKeyboard"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onKeyDown( ::flash::events::KeyboardEvent FlashEvent);
		Dynamic onKeyDown_dyn();

		virtual Void onKeyUp( ::flash::events::KeyboardEvent FlashEvent);
		Dynamic onKeyUp_dyn();

		virtual bool get_RIGHT( );
		Dynamic get_RIGHT_dyn();

		virtual bool get_LEFT( );
		Dynamic get_LEFT_dyn();

		virtual bool get_DOWN( );
		Dynamic get_DOWN_dyn();

		virtual bool get_UP( );
		Dynamic get_UP_dyn();

		virtual bool get_SPACE( );
		Dynamic get_SPACE_dyn();

		virtual bool get_ALT( );
		Dynamic get_ALT_dyn();

		virtual bool get_CONTROL( );
		Dynamic get_CONTROL_dyn();

		virtual bool get_NUMPADSLASH( );
		Dynamic get_NUMPADSLASH_dyn();

		virtual bool get_SLASH( );
		Dynamic get_SLASH_dyn();

		virtual bool get_NUMPADPERIOD( );
		Dynamic get_NUMPADPERIOD_dyn();

		virtual bool get_PERIOD( );
		Dynamic get_PERIOD_dyn();

		virtual bool get_COMMA( );
		Dynamic get_COMMA_dyn();

		virtual bool get_M( );
		Dynamic get_M_dyn();

		virtual bool get_N( );
		Dynamic get_N_dyn();

		virtual bool get_B( );
		Dynamic get_B_dyn();

		virtual bool get_V( );
		Dynamic get_V_dyn();

		virtual bool get_C( );
		Dynamic get_C_dyn();

		virtual bool get_X( );
		Dynamic get_X_dyn();

		virtual bool get_Z( );
		Dynamic get_Z_dyn();

		virtual bool get_SHIFT( );
		Dynamic get_SHIFT_dyn();

		virtual bool get_ENTER( );
		Dynamic get_ENTER_dyn();

		virtual bool get_QUOTE( );
		Dynamic get_QUOTE_dyn();

		virtual bool get_SEMICOLON( );
		Dynamic get_SEMICOLON_dyn();

		virtual bool get_L( );
		Dynamic get_L_dyn();

		virtual bool get_K( );
		Dynamic get_K_dyn();

		virtual bool get_J( );
		Dynamic get_J_dyn();

		virtual bool get_H( );
		Dynamic get_H_dyn();

		virtual bool get_G( );
		Dynamic get_G_dyn();

		virtual bool get_F( );
		Dynamic get_F_dyn();

		virtual bool get_D( );
		Dynamic get_D_dyn();

		virtual bool get_S( );
		Dynamic get_S_dyn();

		virtual bool get_A( );
		Dynamic get_A_dyn();

		virtual bool get_CAPSLOCK( );
		Dynamic get_CAPSLOCK_dyn();

		virtual bool get_BACKSLASH( );
		Dynamic get_BACKSLASH_dyn();

		virtual bool get_RBRACKET( );
		Dynamic get_RBRACKET_dyn();

		virtual bool get_LBRACKET( );
		Dynamic get_LBRACKET_dyn();

		virtual bool get_P( );
		Dynamic get_P_dyn();

		virtual bool get_O( );
		Dynamic get_O_dyn();

		virtual bool get_I( );
		Dynamic get_I_dyn();

		virtual bool get_U( );
		Dynamic get_U_dyn();

		virtual bool get_Y( );
		Dynamic get_Y_dyn();

		virtual bool get_T( );
		Dynamic get_T_dyn();

		virtual bool get_R( );
		Dynamic get_R_dyn();

		virtual bool get_E( );
		Dynamic get_E_dyn();

		virtual bool get_W( );
		Dynamic get_W_dyn();

		virtual bool get_Q( );
		Dynamic get_Q_dyn();

		virtual bool get_TAB( );
		Dynamic get_TAB_dyn();

		virtual bool get_BACKSPACE( );
		Dynamic get_BACKSPACE_dyn();

		virtual bool get_DELETE( );
		Dynamic get_DELETE_dyn();

		virtual bool get_NUMPADPLUS( );
		Dynamic get_NUMPADPLUS_dyn();

		virtual bool get_PLUS( );
		Dynamic get_PLUS_dyn();

		virtual bool get_NUMPADMINUS( );
		Dynamic get_NUMPADMINUS_dyn();

		virtual bool get_MINUS( );
		Dynamic get_MINUS_dyn();

		virtual bool get_INSERT( );
		Dynamic get_INSERT_dyn();

		virtual bool get_END( );
		Dynamic get_END_dyn();

		virtual bool get_HOME( );
		Dynamic get_HOME_dyn();

		virtual bool get_PAGEDOWN( );
		Dynamic get_PAGEDOWN_dyn();

		virtual bool get_PAGEUP( );
		Dynamic get_PAGEUP_dyn();

		virtual bool get_NUMPADZERO( );
		Dynamic get_NUMPADZERO_dyn();

		virtual bool get_NUMPADNINE( );
		Dynamic get_NUMPADNINE_dyn();

		virtual bool get_NUMPADEIGHT( );
		Dynamic get_NUMPADEIGHT_dyn();

		virtual bool get_NUMPADSEVEN( );
		Dynamic get_NUMPADSEVEN_dyn();

		virtual bool get_NUMPADSIX( );
		Dynamic get_NUMPADSIX_dyn();

		virtual bool get_NUMPADFIVE( );
		Dynamic get_NUMPADFIVE_dyn();

		virtual bool get_NUMPADFOUR( );
		Dynamic get_NUMPADFOUR_dyn();

		virtual bool get_NUMPADTHREE( );
		Dynamic get_NUMPADTHREE_dyn();

		virtual bool get_NUMPADTWO( );
		Dynamic get_NUMPADTWO_dyn();

		virtual bool get_NUMPADONE( );
		Dynamic get_NUMPADONE_dyn();

		virtual bool get_ZERO( );
		Dynamic get_ZERO_dyn();

		virtual bool get_NINE( );
		Dynamic get_NINE_dyn();

		virtual bool get_EIGHT( );
		Dynamic get_EIGHT_dyn();

		virtual bool get_SEVEN( );
		Dynamic get_SEVEN_dyn();

		virtual bool get_SIX( );
		Dynamic get_SIX_dyn();

		virtual bool get_FIVE( );
		Dynamic get_FIVE_dyn();

		virtual bool get_FOUR( );
		Dynamic get_FOUR_dyn();

		virtual bool get_THREE( );
		Dynamic get_THREE_dyn();

		virtual bool get_TWO( );
		Dynamic get_TWO_dyn();

		virtual bool get_ONE( );
		Dynamic get_ONE_dyn();

		virtual bool get_F12( );
		Dynamic get_F12_dyn();

		virtual bool get_F11( );
		Dynamic get_F11_dyn();

		virtual bool get_F10( );
		Dynamic get_F10_dyn();

		virtual bool get_F9( );
		Dynamic get_F9_dyn();

		virtual bool get_F8( );
		Dynamic get_F8_dyn();

		virtual bool get_F7( );
		Dynamic get_F7_dyn();

		virtual bool get_F6( );
		Dynamic get_F6_dyn();

		virtual bool get_F5( );
		Dynamic get_F5_dyn();

		virtual bool get_F4( );
		Dynamic get_F4_dyn();

		virtual bool get_F3( );
		Dynamic get_F3_dyn();

		virtual bool get_F2( );
		Dynamic get_F2_dyn();

		virtual bool get_F1( );
		Dynamic get_F1_dyn();

		virtual bool get_ESCAPE( );
		Dynamic get_ESCAPE_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_FlxKeyboard */ 
