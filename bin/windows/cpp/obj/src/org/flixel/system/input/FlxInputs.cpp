#include <hxcpp.h>

#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxInputStates
#include <org/flixel/system/input/FlxInputStates.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxInputs
#include <org/flixel/system/input/FlxInputs.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxJoystickManager
#include <org/flixel/system/input/FlxJoystickManager.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxKeyboard
#include <org/flixel/system/input/FlxKeyboard.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxMouse
#include <org/flixel/system/input/FlxMouse.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxTouchManager
#include <org/flixel/system/input/FlxTouchManager.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_IFlxInput
#include <org/flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

Void FlxInputs_obj::__construct()
{
HX_STACK_PUSH("FlxInputs::new","org/flixel/system/input/FlxInputs.hx",16);
{
}
;
	return null();
}

FlxInputs_obj::~FlxInputs_obj() { }

Dynamic FlxInputs_obj::__CreateEmpty() { return  new FlxInputs_obj; }
hx::ObjectPtr< FlxInputs_obj > FlxInputs_obj::__new()
{  hx::ObjectPtr< FlxInputs_obj > result = new FlxInputs_obj();
	result->__construct();
	return result;}

Dynamic FlxInputs_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxInputs_obj > result = new FlxInputs_obj();
	result->__construct();
	return result;}

Void FlxInputs_obj::destroy( ){
{
		HX_STACK_PUSH("FlxInputs::destroy","org/flixel/system/input/FlxInputs.hx",157);
		HX_STACK_THIS(this);
		HX_STACK_LINE(158)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(159)
		int l = ::org::flixel::system::input::FlxInputs_obj::inputs->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(160)
		while(((i < l))){
			HX_STACK_LINE(162)
			::org::flixel::system::input::IFlxInput input = ::org::flixel::system::input::FlxInputs_obj::inputs->__get((i)++).StaticCast< ::org::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(163)
			input->destroy();
			HX_STACK_LINE(164)
			input = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputs_obj,destroy,(void))

Array< ::Dynamic > FlxInputs_obj::inputs;

Void FlxInputs_obj::init( ){
{
		HX_STACK_PUSH("FlxInputs::init","org/flixel/system/input/FlxInputs.hx",22);
		HX_STACK_LINE(23)
		::org::flixel::system::input::FlxInputs_obj::inputs = null();
		HX_STACK_LINE(24)
		::org::flixel::system::input::FlxInputs_obj::inputs = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(27)
		::org::flixel::system::input::FlxInputs_obj::initKeyboard();
		HX_STACK_LINE(31)
		::org::flixel::system::input::FlxInputs_obj::initMouse();
		HX_STACK_LINE(35)
		::org::flixel::system::input::FlxInputs_obj::initTouch();
		HX_STACK_LINE(39)
		::org::flixel::system::input::FlxInputs_obj::initJoystick();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxInputs_obj,init,(void))

::org::flixel::system::input::IFlxInput FlxInputs_obj::addInput( ::org::flixel::system::input::IFlxInput input){
	HX_STACK_PUSH("FlxInputs::addInput","org/flixel/system/input/FlxInputs.hx",48);
	HX_STACK_ARG(input,"input");
	HX_STACK_LINE(50)
	int l = ::org::flixel::system::input::FlxInputs_obj::inputs->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		while(((_g < l))){
			HX_STACK_LINE(51)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(53)
			if (((::org::flixel::system::input::FlxInputs_obj::inputs->__get(i).StaticCast< ::org::flixel::system::input::IFlxInput >()->toString() == ::org::flixel::system::input::FlxInputs_obj::inputs->toString()))){
				HX_STACK_LINE(54)
				return input;
			}
		}
	}
	HX_STACK_LINE(59)
	::org::flixel::system::input::FlxInputs_obj::inputs->push(input);
	HX_STACK_LINE(60)
	return input;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxInputs_obj,addInput,return )

Void FlxInputs_obj::updateInputs( ){
{
		HX_STACK_PUSH("FlxInputs::updateInputs","org/flixel/system/input/FlxInputs.hx",67);
		HX_STACK_LINE(68)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(69)
		int l = ::org::flixel::system::input::FlxInputs_obj::inputs->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(70)
		while(((i < l))){
			HX_STACK_LINE(72)
			::org::flixel::system::input::IFlxInput input = ::org::flixel::system::input::FlxInputs_obj::inputs->__get((i)++).StaticCast< ::org::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(73)
			input->update();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxInputs_obj,updateInputs,(void))

Void FlxInputs_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxInputs::onFocusLost","org/flixel/system/input/FlxInputs.hx",80);
		HX_STACK_LINE(81)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(82)
		int l = ::org::flixel::system::input::FlxInputs_obj::inputs->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(83)
		while(((i < l))){
			HX_STACK_LINE(85)
			::org::flixel::system::input::IFlxInput input = ::org::flixel::system::input::FlxInputs_obj::inputs->__get((i)++).StaticCast< ::org::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(86)
			input->onFocusLost();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxInputs_obj,onFocusLost,(void))

Void FlxInputs_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxInputs::onFocus","org/flixel/system/input/FlxInputs.hx",93);
		HX_STACK_LINE(94)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(95)
		int l = ::org::flixel::system::input::FlxInputs_obj::inputs->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(96)
		while(((i < l))){
			HX_STACK_LINE(98)
			::org::flixel::system::input::IFlxInput input = ::org::flixel::system::input::FlxInputs_obj::inputs->__get((i)++).StaticCast< ::org::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(99)
			input->onFocus();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxInputs_obj,onFocus,(void))

Void FlxInputs_obj::resetInputs( ){
{
		HX_STACK_PUSH("FlxInputs::resetInputs","org/flixel/system/input/FlxInputs.hx",107);
		HX_STACK_LINE(108)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(109)
		int l = ::org::flixel::system::input::FlxInputs_obj::inputs->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(110)
		while(((i < l))){
			HX_STACK_LINE(112)
			::org::flixel::system::input::IFlxInput input = ::org::flixel::system::input::FlxInputs_obj::inputs->__get((i)++).StaticCast< ::org::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(113)
			input->reset();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxInputs_obj,resetInputs,(void))

Void FlxInputs_obj::initJoystick( ){
{
		HX_STACK_PUSH("FlxInputs::initJoystick","org/flixel/system/input/FlxInputs.hx",119);
		HX_STACK_LINE(120)
		::org::flixel::system::input::FlxJoystickManager joy = ::org::flixel::system::input::FlxJoystickManager_obj::__new();		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(121)
		::org::flixel::FlxG_obj::joystickManager = joy;
		HX_STACK_LINE(122)
		::org::flixel::system::input::FlxInputs_obj::inputs->push(joy);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxInputs_obj,initJoystick,(void))

Void FlxInputs_obj::initKeyboard( ){
{
		HX_STACK_PUSH("FlxInputs::initKeyboard","org/flixel/system/input/FlxInputs.hx",128);
		HX_STACK_LINE(129)
		::org::flixel::system::input::FlxKeyboard key = ::org::flixel::system::input::FlxKeyboard_obj::__new();		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(130)
		::org::flixel::FlxG_obj::keys = key;
		HX_STACK_LINE(131)
		::org::flixel::system::input::FlxInputs_obj::inputs->push(key);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxInputs_obj,initKeyboard,(void))

Void FlxInputs_obj::initMouse( ){
{
		HX_STACK_PUSH("FlxInputs::initMouse","org/flixel/system/input/FlxInputs.hx",137);
		HX_STACK_LINE(138)
		::org::flixel::system::input::FlxMouse mouse = ::org::flixel::system::input::FlxMouse_obj::__new(::org::flixel::FlxG_obj::_game->_inputContainer);		HX_STACK_VAR(mouse,"mouse");
		HX_STACK_LINE(139)
		::org::flixel::FlxG_obj::mouse = mouse;
		HX_STACK_LINE(140)
		::org::flixel::system::input::FlxInputs_obj::inputs->push(mouse);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxInputs_obj,initMouse,(void))

Void FlxInputs_obj::initTouch( ){
{
		HX_STACK_PUSH("FlxInputs::initTouch","org/flixel/system/input/FlxInputs.hx",146);
		HX_STACK_LINE(147)
		::org::flixel::system::input::FlxTouchManager touch = ::org::flixel::system::input::FlxTouchManager_obj::__new();		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(148)
		::org::flixel::FlxG_obj::touchManager = touch;
		HX_STACK_LINE(149)
		::org::flixel::system::input::FlxInputs_obj::inputs->push(touch);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxInputs_obj,initTouch,(void))


FlxInputs_obj::FlxInputs_obj()
{
}

void FlxInputs_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxInputs);
	HX_MARK_END_CLASS();
}

void FlxInputs_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxInputs_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inputs") ) { return inputs; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addInput") ) { return addInput_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initMouse") ) { return initMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"initTouch") ) { return initTouch_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"resetInputs") ) { return resetInputs_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateInputs") ) { return updateInputs_dyn(); }
		if (HX_FIELD_EQ(inName,"initJoystick") ) { return initJoystick_dyn(); }
		if (HX_FIELD_EQ(inName,"initKeyboard") ) { return initKeyboard_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxInputs_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"inputs") ) { inputs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxInputs_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("inputs"),
	HX_CSTRING("init"),
	HX_CSTRING("addInput"),
	HX_CSTRING("updateInputs"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("resetInputs"),
	HX_CSTRING("initJoystick"),
	HX_CSTRING("initKeyboard"),
	HX_CSTRING("initMouse"),
	HX_CSTRING("initTouch"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxInputs_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxInputs_obj::inputs,"inputs");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxInputs_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxInputs_obj::inputs,"inputs");
};

Class FlxInputs_obj::__mClass;

void FlxInputs_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.FlxInputs"), hx::TCanCast< FlxInputs_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxInputs_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
