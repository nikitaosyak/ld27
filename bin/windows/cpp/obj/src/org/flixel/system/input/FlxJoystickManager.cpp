#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_events_JoystickEvent
#include <openfl/events/JoystickEvent.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxJoyButton
#include <org/flixel/system/input/FlxJoyButton.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxJoystick
#include <org/flixel/system/input/FlxJoystick.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxJoystickManager
#include <org/flixel/system/input/FlxJoystickManager.h>
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

Void FlxJoystickManager_obj::__construct()
{
HX_STACK_PUSH("FlxJoystickManager::new","org/flixel/system/input/FlxJoystickManager.hx",36);
{
	HX_STACK_LINE(37)
	this->joysticks = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(38)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("axisMove"),this->handleAxisMove_dyn(),null(),null(),null());
	HX_STACK_LINE(39)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("ballMove"),this->handleBallMove_dyn(),null(),null(),null());
	HX_STACK_LINE(40)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("buttonDown"),this->handleButtonDown_dyn(),null(),null(),null());
	HX_STACK_LINE(41)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("buttonUp"),this->handleButtonUp_dyn(),null(),null(),null());
	HX_STACK_LINE(42)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("hatMove"),this->handleHatMove_dyn(),null(),null(),null());
}
;
	return null();
}

FlxJoystickManager_obj::~FlxJoystickManager_obj() { }

Dynamic FlxJoystickManager_obj::__CreateEmpty() { return  new FlxJoystickManager_obj; }
hx::ObjectPtr< FlxJoystickManager_obj > FlxJoystickManager_obj::__new()
{  hx::ObjectPtr< FlxJoystickManager_obj > result = new FlxJoystickManager_obj();
	result->__construct();
	return result;}

Dynamic FlxJoystickManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxJoystickManager_obj > result = new FlxJoystickManager_obj();
	result->__construct();
	return result;}

hx::Object *FlxJoystickManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::flixel::system::input::IFlxInput_obj)) return operator ::org::flixel::system::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

::String FlxJoystickManager_obj::toString( ){
	HX_STACK_PUSH("FlxJoystickManager::toString","org/flixel/system/input/FlxJoystickManager.hx",263);
	HX_STACK_THIS(this);
	HX_STACK_LINE(263)
	return HX_CSTRING("FlxJoyStickManager");
}


HX_DEFINE_DYNAMIC_FUNC0(FlxJoystickManager_obj,toString,return )

Void FlxJoystickManager_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxJoystickManager::onFocusLost","org/flixel/system/input/FlxJoystickManager.hx",258);
		HX_STACK_THIS(this);
		HX_STACK_LINE(258)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxJoystickManager_obj,onFocusLost,(void))

Void FlxJoystickManager_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxJoystickManager::onFocus","org/flixel/system/input/FlxJoystickManager.hx",253);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxJoystickManager_obj,onFocus,(void))

Float FlxJoystickManager_obj::set_globalDeadZone( Float DeadZone){
	HX_STACK_PUSH("FlxJoystickManager::set_globalDeadZone","org/flixel/system/input/FlxJoystickManager.hx",243);
	HX_STACK_THIS(this);
	HX_STACK_ARG(DeadZone,"DeadZone");
	HX_STACK_LINE(244)
	this->globalDeadZone = DeadZone;
	struct _Function_1_1{
		inline static Dynamic Block( ::org::flixel::system::input::FlxJoystickManager_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/system/input/FlxJoystickManager.hx",245);
			{
				HX_STACK_LINE(245)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->joysticks);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","org/flixel/system/input/FlxJoystickManager.hx",245);
					{
						HX_STACK_LINE(245)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(245)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(245)
	for(::cpp::FastIterator_obj< ::org::flixel::system::input::FlxJoystick > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::input::FlxJoystick >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::org::flixel::system::input::FlxJoystick joy = __it->next();
		joy->deadZone = DeadZone;
	}
	HX_STACK_LINE(249)
	return this->globalDeadZone;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxJoystickManager_obj,set_globalDeadZone,return )

Void FlxJoystickManager_obj::handleHatMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxJoystickManager::handleHatMove","org/flixel/system/input/FlxJoystickManager.hx",230);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(231)
		::org::flixel::system::input::FlxJoystick joy = this->joystick(FlashEvent->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(232)
		joy->hat->x = (  (((::Math_obj::abs(FlashEvent->x) < joy->deadZone))) ? Float((int)0) : Float(FlashEvent->x) );
		HX_STACK_LINE(233)
		joy->hat->y = (  (((::Math_obj::abs(FlashEvent->y) < joy->deadZone))) ? Float((int)0) : Float(FlashEvent->y) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxJoystickManager_obj,handleHatMove,(void))

Void FlxJoystickManager_obj::handleBallMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxJoystickManager::handleBallMove","org/flixel/system/input/FlxJoystickManager.hx",219);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(220)
		::org::flixel::system::input::FlxJoystick joy = this->joystick(FlashEvent->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(221)
		joy->ball->x = (  (((::Math_obj::abs(FlashEvent->x) < joy->deadZone))) ? Float((int)0) : Float(FlashEvent->x) );
		HX_STACK_LINE(222)
		joy->ball->y = (  (((::Math_obj::abs(FlashEvent->y) < joy->deadZone))) ? Float((int)0) : Float(FlashEvent->y) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxJoystickManager_obj,handleBallMove,(void))

Void FlxJoystickManager_obj::handleAxisMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxJoystickManager::handleAxisMove","org/flixel/system/input/FlxJoystickManager.hx",209);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(210)
		::org::flixel::system::input::FlxJoystick joy = this->joystick(FlashEvent->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(211)
		joy->axis = FlashEvent->axis;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxJoystickManager_obj,handleAxisMove,(void))

Void FlxJoystickManager_obj::handleButtonUp( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxJoystickManager::handleButtonUp","org/flixel/system/input/FlxJoystickManager.hx",195);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(196)
		::org::flixel::system::input::FlxJoystick joy = this->joystick(FlashEvent->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(198)
		::org::flixel::system::input::FlxJoyButton object = joy->getButton(FlashEvent->id);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(199)
		if (((object == null()))){
			HX_STACK_LINE(199)
			return null();
		}
		HX_STACK_LINE(200)
		if (((object->current > (int)0))){
			HX_STACK_LINE(200)
			object->current = (int)-1;
		}
		else{
			HX_STACK_LINE(201)
			object->current = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxJoystickManager_obj,handleButtonUp,(void))

Void FlxJoystickManager_obj::handleButtonDown( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxJoystickManager::handleButtonDown","org/flixel/system/input/FlxJoystickManager.hx",181);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(182)
		::org::flixel::system::input::FlxJoystick joy = this->joystick(FlashEvent->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(184)
		::org::flixel::system::input::FlxJoyButton o = joy->getButton(FlashEvent->id);		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(185)
		if (((o == null()))){
			HX_STACK_LINE(185)
			return null();
		}
		HX_STACK_LINE(186)
		if (((o->current > (int)0))){
			HX_STACK_LINE(186)
			o->current = (int)1;
		}
		else{
			HX_STACK_LINE(187)
			o->current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxJoystickManager_obj,handleButtonDown,(void))

Void FlxJoystickManager_obj::destroy( ){
{
		HX_STACK_PUSH("FlxJoystickManager::destroy","org/flixel/system/input/FlxJoystickManager.hx",166);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::org::flixel::system::input::FlxJoystickManager_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/input/FlxJoystickManager.hx",167);
				{
					HX_STACK_LINE(167)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->joysticks);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","org/flixel/system/input/FlxJoystickManager.hx",167);
						{
							HX_STACK_LINE(167)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(167)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(167)
		for(::cpp::FastIterator_obj< ::org::flixel::system::input::FlxJoystick > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::input::FlxJoystick >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::org::flixel::system::input::FlxJoystick joy = __it->next();
			joy->destroy();
		}
		HX_STACK_LINE(172)
		this->joysticks = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(173)
		this->numActiveJoysticks = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxJoystickManager_obj,destroy,(void))

Void FlxJoystickManager_obj::reset( ){
{
		HX_STACK_PUSH("FlxJoystickManager::reset","org/flixel/system/input/FlxJoystickManager.hx",155);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::org::flixel::system::input::FlxJoystickManager_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/input/FlxJoystickManager.hx",156);
				{
					HX_STACK_LINE(156)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->joysticks);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","org/flixel/system/input/FlxJoystickManager.hx",156);
						{
							HX_STACK_LINE(156)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(156)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(155)
		for(::cpp::FastIterator_obj< ::org::flixel::system::input::FlxJoystick > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::input::FlxJoystick >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::org::flixel::system::input::FlxJoystick joy = __it->next();
			joy->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxJoystickManager_obj,reset,(void))

Void FlxJoystickManager_obj::update( ){
{
		HX_STACK_PUSH("FlxJoystickManager::update","org/flixel/system/input/FlxJoystickManager.hx",144);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::org::flixel::system::input::FlxJoystickManager_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/input/FlxJoystickManager.hx",145);
				{
					HX_STACK_LINE(145)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->joysticks);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","org/flixel/system/input/FlxJoystickManager.hx",145);
						{
							HX_STACK_LINE(145)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(145)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(144)
		for(::cpp::FastIterator_obj< ::org::flixel::system::input::FlxJoystick > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::input::FlxJoystick >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::org::flixel::system::input::FlxJoystick joy = __it->next();
			joy->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxJoystickManager_obj,update,(void))

int FlxJoystickManager_obj::get_numActiveJoysticks( ){
	HX_STACK_PUSH("FlxJoystickManager::get_numActiveJoysticks","org/flixel/system/input/FlxJoystickManager.hx",133);
	HX_STACK_THIS(this);
	HX_STACK_LINE(134)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	struct _Function_1_1{
		inline static Dynamic Block( ::org::flixel::system::input::FlxJoystickManager_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/system/input/FlxJoystickManager.hx",135);
			{
				HX_STACK_LINE(135)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->joysticks);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","org/flixel/system/input/FlxJoystickManager.hx",135);
					{
						HX_STACK_LINE(135)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(135)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(135)
	for(::cpp::FastIterator_obj< ::org::flixel::system::input::FlxJoystick > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::input::FlxJoystick >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::org::flixel::system::input::FlxJoystick joy = __it->next();
		(count)++;
	}
	HX_STACK_LINE(137)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxJoystickManager_obj,get_numActiveJoysticks,return )

bool FlxJoystickManager_obj::anyJoyJustReleased( int buttonID){
	HX_STACK_PUSH("FlxJoystickManager::anyJoyJustReleased","org/flixel/system/input/FlxJoystickManager.hx",117);
	HX_STACK_THIS(this);
	HX_STACK_ARG(buttonID,"buttonID");
	HX_STACK_LINE(118)
	Dynamic it = this->joysticks->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(119)
	::org::flixel::system::input::FlxJoystick joy = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(joy,"joy");
	HX_STACK_LINE(120)
	while(((joy != null()))){
		HX_STACK_LINE(122)
		if ((joy->justReleased(buttonID))){
			HX_STACK_LINE(123)
			return true;
		}
		HX_STACK_LINE(124)
		joy = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(126)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxJoystickManager_obj,anyJoyJustReleased,return )

bool FlxJoystickManager_obj::anyJoyJustPressed( int buttonID){
	HX_STACK_PUSH("FlxJoystickManager::anyJoyJustPressed","org/flixel/system/input/FlxJoystickManager.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_ARG(buttonID,"buttonID");
	HX_STACK_LINE(100)
	Dynamic it = this->joysticks->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(101)
	::org::flixel::system::input::FlxJoystick joy = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(joy,"joy");
	HX_STACK_LINE(102)
	while(((joy != null()))){
		HX_STACK_LINE(104)
		if ((joy->justPressed(buttonID))){
			HX_STACK_LINE(105)
			return true;
		}
		HX_STACK_LINE(106)
		joy = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(108)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxJoystickManager_obj,anyJoyJustPressed,return )

bool FlxJoystickManager_obj::anyJoyPressed( int buttonID){
	HX_STACK_PUSH("FlxJoystickManager::anyJoyPressed","org/flixel/system/input/FlxJoystickManager.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_ARG(buttonID,"buttonID");
	HX_STACK_LINE(82)
	Dynamic it = this->joysticks->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(83)
	::org::flixel::system::input::FlxJoystick joy = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(joy,"joy");
	HX_STACK_LINE(84)
	while(((joy != null()))){
		HX_STACK_LINE(86)
		if ((joy->pressed(buttonID))){
			HX_STACK_LINE(87)
			return true;
		}
		HX_STACK_LINE(88)
		joy = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(90)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxJoystickManager_obj,anyJoyPressed,return )

bool FlxJoystickManager_obj::anyButton( ){
	HX_STACK_PUSH("FlxJoystickManager::anyButton","org/flixel/system/input/FlxJoystickManager.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_LINE(64)
	Dynamic it = this->joysticks->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(65)
	::org::flixel::system::input::FlxJoystick joy = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(joy,"joy");
	HX_STACK_LINE(66)
	while(((joy != null()))){
		HX_STACK_LINE(68)
		if ((joy->anyButton())){
			HX_STACK_LINE(69)
			return true;
		}
		HX_STACK_LINE(70)
		joy = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(72)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxJoystickManager_obj,anyButton,return )

::org::flixel::system::input::FlxJoystick FlxJoystickManager_obj::joystick( int joystickID){
	HX_STACK_PUSH("FlxJoystickManager::joystick","org/flixel/system/input/FlxJoystickManager.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_ARG(joystickID,"joystickID");
	HX_STACK_LINE(50)
	::org::flixel::system::input::FlxJoystick joy = this->joysticks->get(joystickID);		HX_STACK_VAR(joy,"joy");
	HX_STACK_LINE(51)
	if (((joy == null()))){
		HX_STACK_LINE(53)
		joy = ::org::flixel::system::input::FlxJoystick_obj::__new(joystickID,this->globalDeadZone);
		HX_STACK_LINE(54)
		this->joysticks->set(joystickID,joy);
	}
	HX_STACK_LINE(56)
	return joy;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxJoystickManager_obj,joystick,return )


FlxJoystickManager_obj::FlxJoystickManager_obj()
{
}

void FlxJoystickManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxJoystickManager);
	HX_MARK_MEMBER_NAME(joysticks,"joysticks");
	HX_MARK_MEMBER_NAME(numActiveJoysticks,"numActiveJoysticks");
	HX_MARK_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_MARK_END_CLASS();
}

void FlxJoystickManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(joysticks,"joysticks");
	HX_VISIT_MEMBER_NAME(numActiveJoysticks,"numActiveJoysticks");
	HX_VISIT_MEMBER_NAME(globalDeadZone,"globalDeadZone");
}

Dynamic FlxJoystickManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"joystick") ) { return joystick_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		if (HX_FIELD_EQ(inName,"joysticks") ) { return joysticks; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleHatMove") ) { return handleHatMove_dyn(); }
		if (HX_FIELD_EQ(inName,"anyJoyPressed") ) { return anyJoyPressed_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"handleBallMove") ) { return handleBallMove_dyn(); }
		if (HX_FIELD_EQ(inName,"handleAxisMove") ) { return handleAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"handleButtonUp") ) { return handleButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { return globalDeadZone; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleButtonDown") ) { return handleButtonDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"anyJoyJustPressed") ) { return anyJoyJustPressed_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_globalDeadZone") ) { return set_globalDeadZone_dyn(); }
		if (HX_FIELD_EQ(inName,"anyJoyJustReleased") ) { return anyJoyJustReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"numActiveJoysticks") ) { return inCallProp ? get_numActiveJoysticks() : numActiveJoysticks; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_numActiveJoysticks") ) { return get_numActiveJoysticks_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxJoystickManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"joysticks") ) { joysticks=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { if (inCallProp) return set_globalDeadZone(inValue);globalDeadZone=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"numActiveJoysticks") ) { numActiveJoysticks=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxJoystickManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("joysticks"));
	outFields->push(HX_CSTRING("numActiveJoysticks"));
	outFields->push(HX_CSTRING("globalDeadZone"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("set_globalDeadZone"),
	HX_CSTRING("handleHatMove"),
	HX_CSTRING("handleBallMove"),
	HX_CSTRING("handleAxisMove"),
	HX_CSTRING("handleButtonUp"),
	HX_CSTRING("handleButtonDown"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("get_numActiveJoysticks"),
	HX_CSTRING("anyJoyJustReleased"),
	HX_CSTRING("anyJoyJustPressed"),
	HX_CSTRING("anyJoyPressed"),
	HX_CSTRING("anyButton"),
	HX_CSTRING("joystick"),
	HX_CSTRING("joysticks"),
	HX_CSTRING("numActiveJoysticks"),
	HX_CSTRING("globalDeadZone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxJoystickManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxJoystickManager_obj::__mClass,"__mClass");
};

Class FlxJoystickManager_obj::__mClass;

void FlxJoystickManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.FlxJoystickManager"), hx::TCanCast< FlxJoystickManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxJoystickManager_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
