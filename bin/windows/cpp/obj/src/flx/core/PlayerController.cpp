#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flash_ui_Keyboard
#include <flash/ui/Keyboard.h>
#endif
#ifndef INCLUDED_flx_core_KeyStatus
#include <flx/core/KeyStatus.h>
#endif
#ifndef INCLUDED_flx_core_PlayerController
#include <flx/core/PlayerController.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
namespace flx{
namespace core{

Void PlayerController_obj::__construct()
{
HX_STACK_PUSH("PlayerController::new","flx/core/PlayerController.hx",14);
{
	HX_STACK_LINE(15)
	this->pressed = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(16)
	::org::flixel::FlxG_obj::get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->onUp_dyn(),null(),null(),null());
	HX_STACK_LINE(17)
	::org::flixel::FlxG_obj::get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onDown_dyn(),null(),null(),null());
}
;
	return null();
}

PlayerController_obj::~PlayerController_obj() { }

Dynamic PlayerController_obj::__CreateEmpty() { return  new PlayerController_obj; }
hx::ObjectPtr< PlayerController_obj > PlayerController_obj::__new()
{  hx::ObjectPtr< PlayerController_obj > result = new PlayerController_obj();
	result->__construct();
	return result;}

Dynamic PlayerController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerController_obj > result = new PlayerController_obj();
	result->__construct();
	return result;}

Void PlayerController_obj::process( int keyCode,::flx::core::KeyStatus status){
{
		HX_STACK_PUSH("PlayerController::process","flx/core/PlayerController.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_ARG(keyCode,"keyCode");
		HX_STACK_ARG(status,"status");
		HX_STACK_LINE(40)
		bool changed = false;		HX_STACK_VAR(changed,"changed");
		HX_STACK_LINE(42)
		int newYAccVal = (int)100;		HX_STACK_VAR(newYAccVal,"newYAccVal");
		HX_STACK_LINE(43)
		int newXAccVal = (int)100;		HX_STACK_VAR(newXAccVal,"newXAccVal");
		HX_STACK_LINE(44)
		bool newFireVal = false;		HX_STACK_VAR(newFireVal,"newFireVal");
		HX_STACK_LINE(47)
		if (((bool((keyCode == (int)87)) || bool((keyCode == (int)38))))){
			HX_STACK_LINE(48)
			if (((status == ::flx::core::KeyStatus_obj::START))){
				HX_STACK_LINE(49)
				this->pressed->set(keyCode,keyCode);
				HX_STACK_LINE(50)
				if (((this->accY == (int)-1))){
					HX_STACK_LINE(50)
					return null();
				}
				HX_STACK_LINE(51)
				changed = true;
				HX_STACK_LINE(52)
				newYAccVal = (int)-1;
			}
			HX_STACK_LINE(54)
			if (((status == ::flx::core::KeyStatus_obj::FINISH))){
				HX_STACK_LINE(55)
				if (((this->accY == (int)-1))){
					HX_STACK_LINE(56)
					if (((bool(this->pressed->exists((int)83)) || bool(this->pressed->exists((int)40))))){
						HX_STACK_LINE(56)
						newYAccVal = (int)1;
					}
					else{
						HX_STACK_LINE(59)
						if (((bool(this->pressed->exists((int)87)) && bool(this->pressed->exists((int)38))))){
							HX_STACK_LINE(60)
							this->pressed->remove(keyCode);
							HX_STACK_LINE(61)
							return null();
						}
						HX_STACK_LINE(63)
						newYAccVal = (int)0;
					}
					HX_STACK_LINE(65)
					changed = true;
				}
				else{
				}
				HX_STACK_LINE(69)
				this->pressed->remove(keyCode);
			}
		}
		HX_STACK_LINE(74)
		if (((bool((keyCode == (int)83)) || bool((keyCode == (int)40))))){
			HX_STACK_LINE(75)
			if (((status == ::flx::core::KeyStatus_obj::START))){
				HX_STACK_LINE(76)
				this->pressed->set(keyCode,keyCode);
				HX_STACK_LINE(77)
				if (((this->accY == (int)1))){
					HX_STACK_LINE(77)
					return null();
				}
				HX_STACK_LINE(78)
				changed = true;
				HX_STACK_LINE(79)
				newYAccVal = (int)1;
			}
			HX_STACK_LINE(81)
			if (((status == ::flx::core::KeyStatus_obj::FINISH))){
				HX_STACK_LINE(82)
				if (((this->accY == (int)1))){
					HX_STACK_LINE(83)
					if (((bool(this->pressed->exists((int)87)) || bool(this->pressed->exists((int)38))))){
						HX_STACK_LINE(83)
						newYAccVal = (int)-1;
					}
					else{
						HX_STACK_LINE(86)
						if (((bool(this->pressed->exists((int)83)) && bool(this->pressed->exists((int)40))))){
							HX_STACK_LINE(87)
							this->pressed->remove(keyCode);
							HX_STACK_LINE(88)
							return null();
						}
						HX_STACK_LINE(90)
						newYAccVal = (int)0;
					}
					HX_STACK_LINE(92)
					changed = true;
				}
				else{
				}
				HX_STACK_LINE(96)
				this->pressed->remove(keyCode);
			}
		}
		HX_STACK_LINE(101)
		if (((bool((keyCode == (int)68)) || bool((keyCode == (int)39))))){
			HX_STACK_LINE(102)
			if (((status == ::flx::core::KeyStatus_obj::START))){
				HX_STACK_LINE(103)
				this->pressed->set(keyCode,keyCode);
				HX_STACK_LINE(104)
				if (((this->accX == (int)1))){
					HX_STACK_LINE(104)
					return null();
				}
				HX_STACK_LINE(105)
				changed = true;
				HX_STACK_LINE(106)
				newXAccVal = (int)1;
			}
			HX_STACK_LINE(108)
			if (((status == ::flx::core::KeyStatus_obj::FINISH))){
				HX_STACK_LINE(109)
				if (((this->accX == (int)1))){
					HX_STACK_LINE(110)
					if (((bool(this->pressed->exists((int)65)) || bool(this->pressed->exists((int)67))))){
						HX_STACK_LINE(110)
						newXAccVal = (int)-1;
					}
					else{
						HX_STACK_LINE(113)
						if (((bool(this->pressed->exists((int)68)) && bool(this->pressed->exists((int)39))))){
							HX_STACK_LINE(114)
							this->pressed->remove(keyCode);
							HX_STACK_LINE(115)
							return null();
						}
						HX_STACK_LINE(117)
						newXAccVal = (int)0;
					}
					HX_STACK_LINE(119)
					changed = true;
				}
				else{
				}
				HX_STACK_LINE(123)
				this->pressed->remove(keyCode);
			}
		}
		HX_STACK_LINE(128)
		if (((bool((keyCode == (int)65)) || bool((keyCode == (int)37))))){
			HX_STACK_LINE(129)
			if (((status == ::flx::core::KeyStatus_obj::START))){
				HX_STACK_LINE(130)
				this->pressed->set(keyCode,keyCode);
				HX_STACK_LINE(131)
				if (((this->accX == (int)-1))){
					HX_STACK_LINE(131)
					return null();
				}
				HX_STACK_LINE(132)
				newXAccVal = (int)-1;
				HX_STACK_LINE(133)
				changed = true;
			}
			HX_STACK_LINE(135)
			if (((status == ::flx::core::KeyStatus_obj::FINISH))){
				HX_STACK_LINE(136)
				if (((this->accX == (int)-1))){
					HX_STACK_LINE(137)
					if (((bool(this->pressed->exists((int)68)) || bool(this->pressed->exists((int)39))))){
						HX_STACK_LINE(137)
						newXAccVal = (int)1;
					}
					else{
						HX_STACK_LINE(140)
						if (((bool(this->pressed->exists((int)65)) && bool(this->pressed->exists((int)37))))){
							HX_STACK_LINE(141)
							this->pressed->remove(keyCode);
							HX_STACK_LINE(142)
							return null();
						}
						HX_STACK_LINE(144)
						newXAccVal = (int)0;
					}
					HX_STACK_LINE(146)
					changed = true;
				}
				else{
				}
				HX_STACK_LINE(150)
				this->pressed->remove(keyCode);
			}
		}
		HX_STACK_LINE(154)
		if (((keyCode == ::flash::ui::Keyboard_obj::SPACE))){
			HX_STACK_LINE(154)
			if (((status == ::flx::core::KeyStatus_obj::START))){
				HX_STACK_LINE(156)
				newFireVal = true;
				HX_STACK_LINE(157)
				changed = true;
			}
		}
		HX_STACK_LINE(161)
		if ((changed)){
			HX_STACK_LINE(162)
			if (((newYAccVal != (int)100))){
				HX_STACK_LINE(162)
				this->accY = newYAccVal;
			}
			HX_STACK_LINE(165)
			if (((newXAccVal != (int)100))){
				HX_STACK_LINE(165)
				this->accX = newXAccVal;
			}
			HX_STACK_LINE(168)
			if ((newFireVal)){
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayerController_obj,process,(void))

Void PlayerController_obj::onUp( ::flash::events::KeyboardEvent e){
{
		HX_STACK_PUSH("PlayerController::onUp","flx/core/PlayerController.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(35)
		this->process(e->keyCode,::flx::core::KeyStatus_obj::FINISH);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerController_obj,onUp,(void))

Void PlayerController_obj::onDown( ::flash::events::KeyboardEvent e){
{
		HX_STACK_PUSH("PlayerController::onDown","flx/core/PlayerController.hx",31);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(31)
		this->process(e->keyCode,::flx::core::KeyStatus_obj::START);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerController_obj,onDown,(void))

Void PlayerController_obj::destroy( ){
{
		HX_STACK_PUSH("PlayerController::destroy","flx/core/PlayerController.hx",25);
		HX_STACK_THIS(this);
		HX_STACK_LINE(26)
		this->pressed = null();
		HX_STACK_LINE(27)
		::org::flixel::FlxG_obj::get_stage()->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->onUp_dyn(),null());
		HX_STACK_LINE(28)
		::org::flixel::FlxG_obj::get_stage()->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onDown_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerController_obj,destroy,(void))


PlayerController_obj::PlayerController_obj()
{
}

void PlayerController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerController);
	HX_MARK_MEMBER_NAME(accY,"accY");
	HX_MARK_MEMBER_NAME(accX,"accX");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_END_CLASS();
}

void PlayerController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(accY,"accY");
	HX_VISIT_MEMBER_NAME(accX,"accX");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
}

Dynamic PlayerController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp_dyn(); }
		if (HX_FIELD_EQ(inName,"accY") ) { return accY; }
		if (HX_FIELD_EQ(inName,"accX") ) { return accX; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"accY") ) { accY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accX") ) { accX=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("accY"));
	outFields->push(HX_CSTRING("accX"));
	outFields->push(HX_CSTRING("pressed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("process"),
	HX_CSTRING("onUp"),
	HX_CSTRING("onDown"),
	HX_CSTRING("destroy"),
	HX_CSTRING("accY"),
	HX_CSTRING("accX"),
	HX_CSTRING("pressed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerController_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerController_obj::__mClass,"__mClass");
};

Class PlayerController_obj::__mClass;

void PlayerController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flx.core.PlayerController"), hx::TCanCast< PlayerController_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PlayerController_obj::__boot()
{
}

} // end namespace flx
} // end namespace core
