#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxDebugger
#include <org/flixel/system/FlxDebugger.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Watch
#include <org/flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxInputStates
#include <org/flixel/system/input/FlxInputStates.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxKeyboard
#include <org/flixel/system/input/FlxKeyboard.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxMapObject
#include <org/flixel/system/input/FlxMapObject.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_IFlxInput
#include <org/flixel/system/input/IFlxInput.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

Void FlxKeyboard_obj::__construct()
{
HX_STACK_PUSH("FlxKeyboard::new","org/flixel/system/input/FlxKeyboard.hx",106);
{
	HX_STACK_LINE(107)
	super::__construct();
	HX_STACK_LINE(109)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(112)
	i = (int)65;
	HX_STACK_LINE(113)
	while(((i <= (int)90))){
		HX_STACK_LINE(115)
		this->addKey(::String::fromCharCode(i),i);
		HX_STACK_LINE(116)
		(i)++;
	}
	HX_STACK_LINE(120)
	i = (int)48;
	HX_STACK_LINE(121)
	this->addKey(HX_CSTRING("ZERO"),(i)++);
	HX_STACK_LINE(122)
	this->addKey(HX_CSTRING("ONE"),(i)++);
	HX_STACK_LINE(123)
	this->addKey(HX_CSTRING("TWO"),(i)++);
	HX_STACK_LINE(124)
	this->addKey(HX_CSTRING("THREE"),(i)++);
	HX_STACK_LINE(125)
	this->addKey(HX_CSTRING("FOUR"),(i)++);
	HX_STACK_LINE(126)
	this->addKey(HX_CSTRING("FIVE"),(i)++);
	HX_STACK_LINE(127)
	this->addKey(HX_CSTRING("SIX"),(i)++);
	HX_STACK_LINE(128)
	this->addKey(HX_CSTRING("SEVEN"),(i)++);
	HX_STACK_LINE(129)
	this->addKey(HX_CSTRING("EIGHT"),(i)++);
	HX_STACK_LINE(130)
	this->addKey(HX_CSTRING("NINE"),(i)++);
	HX_STACK_LINE(144)
	this->addKey(HX_CSTRING("PAGEUP"),(int)33);
	HX_STACK_LINE(145)
	this->addKey(HX_CSTRING("PAGEDOWN"),(int)34);
	HX_STACK_LINE(146)
	this->addKey(HX_CSTRING("HOME"),(int)36);
	HX_STACK_LINE(147)
	this->addKey(HX_CSTRING("END"),(int)35);
	HX_STACK_LINE(148)
	this->addKey(HX_CSTRING("INSERT"),(int)45);
	HX_STACK_LINE(160)
	this->addKey(HX_CSTRING("ESCAPE"),(int)27);
	HX_STACK_LINE(161)
	this->addKey(HX_CSTRING("MINUS"),(int)189);
	HX_STACK_LINE(162)
	this->addKey(HX_CSTRING("PLUS"),(int)187);
	HX_STACK_LINE(163)
	this->addKey(HX_CSTRING("DELETE"),(int)46);
	HX_STACK_LINE(164)
	this->addKey(HX_CSTRING("BACKSPACE"),(int)8);
	HX_STACK_LINE(165)
	this->addKey(HX_CSTRING("LBRACKET"),(int)219);
	HX_STACK_LINE(166)
	this->addKey(HX_CSTRING("RBRACKET"),(int)221);
	HX_STACK_LINE(167)
	this->addKey(HX_CSTRING("BACKSLASH"),(int)220);
	HX_STACK_LINE(168)
	this->addKey(HX_CSTRING("CAPSLOCK"),(int)20);
	HX_STACK_LINE(169)
	this->addKey(HX_CSTRING("SEMICOLON"),(int)186);
	HX_STACK_LINE(170)
	this->addKey(HX_CSTRING("QUOTE"),(int)222);
	HX_STACK_LINE(171)
	this->addKey(HX_CSTRING("ENTER"),(int)13);
	HX_STACK_LINE(172)
	this->addKey(HX_CSTRING("SHIFT"),(int)16);
	HX_STACK_LINE(173)
	this->addKey(HX_CSTRING("COMMA"),(int)188);
	HX_STACK_LINE(174)
	this->addKey(HX_CSTRING("PERIOD"),(int)190);
	HX_STACK_LINE(175)
	this->addKey(HX_CSTRING("SLASH"),(int)191);
	HX_STACK_LINE(176)
	this->addKey(HX_CSTRING("NUMPADSLASH"),(int)191);
	HX_STACK_LINE(177)
	this->addKey(HX_CSTRING("CONTROL"),(int)17);
	HX_STACK_LINE(178)
	this->addKey(HX_CSTRING("ALT"),(int)18);
	HX_STACK_LINE(179)
	this->addKey(HX_CSTRING("SPACE"),(int)32);
	HX_STACK_LINE(180)
	this->addKey(HX_CSTRING("UP"),(int)38);
	HX_STACK_LINE(181)
	this->addKey(HX_CSTRING("DOWN"),(int)40);
	HX_STACK_LINE(182)
	this->addKey(HX_CSTRING("LEFT"),(int)37);
	HX_STACK_LINE(183)
	this->addKey(HX_CSTRING("RIGHT"),(int)39);
	HX_STACK_LINE(184)
	this->addKey(HX_CSTRING("TAB"),(int)9);
	HX_STACK_LINE(192)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null(),null(),null());
	HX_STACK_LINE(193)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
}
;
	return null();
}

FlxKeyboard_obj::~FlxKeyboard_obj() { }

Dynamic FlxKeyboard_obj::__CreateEmpty() { return  new FlxKeyboard_obj; }
hx::ObjectPtr< FlxKeyboard_obj > FlxKeyboard_obj::__new()
{  hx::ObjectPtr< FlxKeyboard_obj > result = new FlxKeyboard_obj();
	result->__construct();
	return result;}

Dynamic FlxKeyboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKeyboard_obj > result = new FlxKeyboard_obj();
	result->__construct();
	return result;}

hx::Object *FlxKeyboard_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::flixel::system::input::IFlxInput_obj)) return operator ::org::flixel::system::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

::String FlxKeyboard_obj::toString( ){
	HX_STACK_PUSH("FlxKeyboard::toString","org/flixel/system/input/FlxKeyboard.hx",341);
	HX_STACK_THIS(this);
	HX_STACK_LINE(341)
	return HX_CSTRING("Keyboard");
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,toString,return )

Void FlxKeyboard_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxKeyboard::onFocusLost","org/flixel/system/input/FlxKeyboard.hx",336);
		HX_STACK_THIS(this);
		HX_STACK_LINE(336)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,onFocusLost,(void))

Void FlxKeyboard_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxKeyboard::onFocus","org/flixel/system/input/FlxKeyboard.hx",331);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,onFocus,(void))

Void FlxKeyboard_obj::onKeyDown( ::flash::events::KeyboardEvent FlashEvent){
{
		HX_STACK_PUSH("FlxKeyboard::onKeyDown","org/flixel/system/input/FlxKeyboard.hx",286);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(289)
		if (((bool(::org::flixel::FlxG_obj::_game->_debuggerUp) && bool(::org::flixel::FlxG_obj::_game->_debugger->watch->editing)))){
			HX_STACK_LINE(290)
			return null();
		}
		HX_STACK_LINE(293)
		if (((bool((bool((bool((bool(::org::flixel::FlxG_obj::_game->_replaying) && bool((::org::flixel::FlxG_obj::_game->_replayCancelKeys != null())))) && bool((::org::flixel::FlxG_obj::_game->_debugger == null())))) && bool((FlashEvent->keyCode != (int)192)))) && bool((FlashEvent->keyCode != (int)220))))){
			HX_STACK_LINE(298)
			bool cancel = false;		HX_STACK_VAR(cancel,"cancel");
			HX_STACK_LINE(299)
			::String replayCancelKey;		HX_STACK_VAR(replayCancelKey,"replayCancelKey");
			HX_STACK_LINE(300)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(301)
			int l = ::org::flixel::FlxG_obj::_game->_replayCancelKeys->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(302)
			while(((i < l))){
				HX_STACK_LINE(304)
				replayCancelKey = ::org::flixel::FlxG_obj::_game->_replayCancelKeys->__get((i)++);
				HX_STACK_LINE(305)
				if (((bool((replayCancelKey == HX_CSTRING("ANY"))) || bool((this->getKeyCode(replayCancelKey) == ::Std_obj::_int(FlashEvent->keyCode)))))){
					HX_STACK_LINE(307)
					if (((::org::flixel::FlxG_obj::_game->_replayCallback != null()))){
						HX_STACK_LINE(309)
						::org::flixel::FlxG_obj::_game->_replayCallback();
						HX_STACK_LINE(310)
						::org::flixel::FlxG_obj::_game->_replayCallback = null();
					}
					else{
						HX_STACK_LINE(313)
						::org::flixel::FlxG_obj::stopReplay();
					}
					HX_STACK_LINE(316)
					break;
				}
			}
			HX_STACK_LINE(319)
			return null();
		}
		HX_STACK_LINE(323)
		::org::flixel::system::input::FlxMapObject o = this->_keyMap->__get(FlashEvent->keyCode).StaticCast< ::org::flixel::system::input::FlxMapObject >();		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(324)
		if (((o == null()))){
			HX_STACK_LINE(324)
			return null();
		}
		HX_STACK_LINE(325)
		if (((o->current > (int)0))){
			HX_STACK_LINE(325)
			o->current = (int)1;
		}
		else{
			HX_STACK_LINE(326)
			o->current = (int)2;
		}
		HX_STACK_LINE(327)
		this->_keyBools->set(o->name,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,onKeyDown,(void))

Void FlxKeyboard_obj::onKeyUp( ::flash::events::KeyboardEvent FlashEvent){
{
		HX_STACK_PUSH("FlxKeyboard::onKeyUp","org/flixel/system/input/FlxKeyboard.hx",201);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(203)
		if (((bool(::org::flixel::FlxG_obj::_game->_debuggerUp) && bool(::org::flixel::FlxG_obj::_game->_debugger->watch->editing)))){
			HX_STACK_LINE(204)
			return null();
		}
		HX_STACK_LINE(208)
		if ((!(::org::flixel::FlxG_obj::mobile))){
			HX_STACK_LINE(210)
			int c = FlashEvent->keyCode;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(213)
			if (((bool((::org::flixel::FlxG_obj::_game->_debugger != null())) && bool(((bool((::org::flixel::FlxG_obj::keyDebugger != null())) && bool((::Lambda_obj::indexOf(::org::flixel::FlxG_obj::keyDebugger,c) != (int)-1)))))))){
				HX_STACK_LINE(215)
				::org::flixel::FlxG_obj::_game->_debugger->set_visible(!(::org::flixel::FlxG_obj::_game->_debugger->get_visible()));
				HX_STACK_LINE(216)
				::org::flixel::FlxG_obj::_game->_debuggerUp = ::org::flixel::FlxG_obj::_game->_debugger->get_visible();
				HX_STACK_LINE(218)
				return null();
			}
			HX_STACK_LINE(222)
			if ((!(::org::flixel::FlxG_obj::_game->tempDisableSoundHotKeys))){
				HX_STACK_LINE(224)
				::String code = ::String::fromCharCode(FlashEvent->charCode);		HX_STACK_VAR(code,"code");
				HX_STACK_LINE(225)
				if (((bool((::org::flixel::FlxG_obj::keyMute != null())) && bool((::Lambda_obj::indexOf(::org::flixel::FlxG_obj::keyMute,c) != (int)-1))))){
					HX_STACK_LINE(227)
					::org::flixel::FlxG_obj::mute = !(::org::flixel::FlxG_obj::mute);
					HX_STACK_LINE(228)
					if (((::org::flixel::FlxG_obj::volumeHandler_dyn() != null()))){
						HX_STACK_LINE(229)
						::org::flixel::FlxG_obj::volumeHandler((  ((::org::flixel::FlxG_obj::mute)) ? Float((int)0) : Float(::org::flixel::FlxG_obj::volume) ));
					}
					HX_STACK_LINE(234)
					::org::flixel::FlxG_obj::_game->showSoundTray(null());
					HX_STACK_LINE(237)
					return null();
				}
				else{
					HX_STACK_LINE(239)
					if (((bool((::org::flixel::FlxG_obj::keyVolumeDown != null())) && bool((::Lambda_obj::indexOf(::org::flixel::FlxG_obj::keyVolumeDown,c) != (int)-1))))){
						HX_STACK_LINE(241)
						::org::flixel::FlxG_obj::mute = false;
						HX_STACK_LINE(242)
						::org::flixel::FlxG_obj::set_volume((::org::flixel::FlxG_obj::volume - 0.1));
						HX_STACK_LINE(245)
						::org::flixel::FlxG_obj::_game->showSoundTray(null());
						HX_STACK_LINE(248)
						return null();
					}
					else{
						HX_STACK_LINE(250)
						if (((bool((::org::flixel::FlxG_obj::keyVolumeUp != null())) && bool((::Lambda_obj::indexOf(::org::flixel::FlxG_obj::keyVolumeUp,c) != (int)-1))))){
							HX_STACK_LINE(252)
							::org::flixel::FlxG_obj::mute = false;
							HX_STACK_LINE(253)
							::org::flixel::FlxG_obj::set_volume((::org::flixel::FlxG_obj::volume + 0.1));
							HX_STACK_LINE(256)
							::org::flixel::FlxG_obj::_game->showSoundTray(null());
							HX_STACK_LINE(259)
							return null();
						}
						else{
						}
					}
				}
			}
		}
		HX_STACK_LINE(268)
		if ((::org::flixel::FlxG_obj::_game->_replaying)){
			HX_STACK_LINE(269)
			return null();
		}
		HX_STACK_LINE(274)
		::org::flixel::system::input::FlxMapObject object = this->_keyMap->__get(FlashEvent->keyCode).StaticCast< ::org::flixel::system::input::FlxMapObject >();		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(275)
		if (((object == null()))){
			HX_STACK_LINE(275)
			return null();
		}
		HX_STACK_LINE(276)
		if (((object->current > (int)0))){
			HX_STACK_LINE(276)
			object->current = (int)-1;
		}
		else{
			HX_STACK_LINE(277)
			object->current = (int)0;
		}
		HX_STACK_LINE(278)
		this->_keyBools->set(object->name,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,onKeyUp,(void))

bool FlxKeyboard_obj::get_RIGHT( ){
	HX_STACK_PUSH("FlxKeyboard::get_RIGHT","org/flixel/system/input/FlxKeyboard.hx",103);
	HX_STACK_THIS(this);
	HX_STACK_LINE(103)
	return this->pressed(HX_CSTRING("RIGHT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_RIGHT,return )

bool FlxKeyboard_obj::get_LEFT( ){
	HX_STACK_PUSH("FlxKeyboard::get_LEFT","org/flixel/system/input/FlxKeyboard.hx",102);
	HX_STACK_THIS(this);
	HX_STACK_LINE(102)
	return this->pressed(HX_CSTRING("LEFT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_LEFT,return )

bool FlxKeyboard_obj::get_DOWN( ){
	HX_STACK_PUSH("FlxKeyboard::get_DOWN","org/flixel/system/input/FlxKeyboard.hx",101);
	HX_STACK_THIS(this);
	HX_STACK_LINE(101)
	return this->pressed(HX_CSTRING("DOWN"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_DOWN,return )

bool FlxKeyboard_obj::get_UP( ){
	HX_STACK_PUSH("FlxKeyboard::get_UP","org/flixel/system/input/FlxKeyboard.hx",100);
	HX_STACK_THIS(this);
	HX_STACK_LINE(100)
	return this->pressed(HX_CSTRING("UP"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_UP,return )

bool FlxKeyboard_obj::get_SPACE( ){
	HX_STACK_PUSH("FlxKeyboard::get_SPACE","org/flixel/system/input/FlxKeyboard.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_LINE(99)
	return this->pressed(HX_CSTRING("SPACE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_SPACE,return )

bool FlxKeyboard_obj::get_ALT( ){
	HX_STACK_PUSH("FlxKeyboard::get_ALT","org/flixel/system/input/FlxKeyboard.hx",98);
	HX_STACK_THIS(this);
	HX_STACK_LINE(98)
	return this->pressed(HX_CSTRING("ALT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_ALT,return )

bool FlxKeyboard_obj::get_CONTROL( ){
	HX_STACK_PUSH("FlxKeyboard::get_CONTROL","org/flixel/system/input/FlxKeyboard.hx",97);
	HX_STACK_THIS(this);
	HX_STACK_LINE(97)
	return this->pressed(HX_CSTRING("CONTROL"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_CONTROL,return )

bool FlxKeyboard_obj::get_NUMPADSLASH( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADSLASH","org/flixel/system/input/FlxKeyboard.hx",96);
	HX_STACK_THIS(this);
	HX_STACK_LINE(96)
	return this->pressed(HX_CSTRING("NUMPADSLASH"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADSLASH,return )

bool FlxKeyboard_obj::get_SLASH( ){
	HX_STACK_PUSH("FlxKeyboard::get_SLASH","org/flixel/system/input/FlxKeyboard.hx",95);
	HX_STACK_THIS(this);
	HX_STACK_LINE(95)
	return this->pressed(HX_CSTRING("SLASH"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_SLASH,return )

bool FlxKeyboard_obj::get_NUMPADPERIOD( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADPERIOD","org/flixel/system/input/FlxKeyboard.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_LINE(94)
	return this->pressed(HX_CSTRING("NUMPADPERIOD"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADPERIOD,return )

bool FlxKeyboard_obj::get_PERIOD( ){
	HX_STACK_PUSH("FlxKeyboard::get_PERIOD","org/flixel/system/input/FlxKeyboard.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_LINE(93)
	return this->pressed(HX_CSTRING("PERIOD"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_PERIOD,return )

bool FlxKeyboard_obj::get_COMMA( ){
	HX_STACK_PUSH("FlxKeyboard::get_COMMA","org/flixel/system/input/FlxKeyboard.hx",92);
	HX_STACK_THIS(this);
	HX_STACK_LINE(92)
	return this->pressed(HX_CSTRING("COMMA"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_COMMA,return )

bool FlxKeyboard_obj::get_M( ){
	HX_STACK_PUSH("FlxKeyboard::get_M","org/flixel/system/input/FlxKeyboard.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_LINE(91)
	return this->pressed(HX_CSTRING("M"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_M,return )

bool FlxKeyboard_obj::get_N( ){
	HX_STACK_PUSH("FlxKeyboard::get_N","org/flixel/system/input/FlxKeyboard.hx",90);
	HX_STACK_THIS(this);
	HX_STACK_LINE(90)
	return this->pressed(HX_CSTRING("N"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_N,return )

bool FlxKeyboard_obj::get_B( ){
	HX_STACK_PUSH("FlxKeyboard::get_B","org/flixel/system/input/FlxKeyboard.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_LINE(89)
	return this->pressed(HX_CSTRING("B"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_B,return )

bool FlxKeyboard_obj::get_V( ){
	HX_STACK_PUSH("FlxKeyboard::get_V","org/flixel/system/input/FlxKeyboard.hx",88);
	HX_STACK_THIS(this);
	HX_STACK_LINE(88)
	return this->pressed(HX_CSTRING("V"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_V,return )

bool FlxKeyboard_obj::get_C( ){
	HX_STACK_PUSH("FlxKeyboard::get_C","org/flixel/system/input/FlxKeyboard.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_LINE(87)
	return this->pressed(HX_CSTRING("C"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_C,return )

bool FlxKeyboard_obj::get_X( ){
	HX_STACK_PUSH("FlxKeyboard::get_X","org/flixel/system/input/FlxKeyboard.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	return this->pressed(HX_CSTRING("X"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_X,return )

bool FlxKeyboard_obj::get_Z( ){
	HX_STACK_PUSH("FlxKeyboard::get_Z","org/flixel/system/input/FlxKeyboard.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_LINE(85)
	return this->pressed(HX_CSTRING("Z"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_Z,return )

bool FlxKeyboard_obj::get_SHIFT( ){
	HX_STACK_PUSH("FlxKeyboard::get_SHIFT","org/flixel/system/input/FlxKeyboard.hx",84);
	HX_STACK_THIS(this);
	HX_STACK_LINE(84)
	return this->pressed(HX_CSTRING("SHIFT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_SHIFT,return )

bool FlxKeyboard_obj::get_ENTER( ){
	HX_STACK_PUSH("FlxKeyboard::get_ENTER","org/flixel/system/input/FlxKeyboard.hx",83);
	HX_STACK_THIS(this);
	HX_STACK_LINE(83)
	return this->pressed(HX_CSTRING("ENTER"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_ENTER,return )

bool FlxKeyboard_obj::get_QUOTE( ){
	HX_STACK_PUSH("FlxKeyboard::get_QUOTE","org/flixel/system/input/FlxKeyboard.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_LINE(82)
	return this->pressed(HX_CSTRING("QUOTE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_QUOTE,return )

bool FlxKeyboard_obj::get_SEMICOLON( ){
	HX_STACK_PUSH("FlxKeyboard::get_SEMICOLON","org/flixel/system/input/FlxKeyboard.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_LINE(81)
	return this->pressed(HX_CSTRING("SEMICOLON"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_SEMICOLON,return )

bool FlxKeyboard_obj::get_L( ){
	HX_STACK_PUSH("FlxKeyboard::get_L","org/flixel/system/input/FlxKeyboard.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_LINE(80)
	return this->pressed(HX_CSTRING("L"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_L,return )

bool FlxKeyboard_obj::get_K( ){
	HX_STACK_PUSH("FlxKeyboard::get_K","org/flixel/system/input/FlxKeyboard.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_LINE(79)
	return this->pressed(HX_CSTRING("K"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_K,return )

bool FlxKeyboard_obj::get_J( ){
	HX_STACK_PUSH("FlxKeyboard::get_J","org/flixel/system/input/FlxKeyboard.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_LINE(78)
	return this->pressed(HX_CSTRING("J"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_J,return )

bool FlxKeyboard_obj::get_H( ){
	HX_STACK_PUSH("FlxKeyboard::get_H","org/flixel/system/input/FlxKeyboard.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_LINE(77)
	return this->pressed(HX_CSTRING("H"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_H,return )

bool FlxKeyboard_obj::get_G( ){
	HX_STACK_PUSH("FlxKeyboard::get_G","org/flixel/system/input/FlxKeyboard.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_LINE(76)
	return this->pressed(HX_CSTRING("G"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_G,return )

bool FlxKeyboard_obj::get_F( ){
	HX_STACK_PUSH("FlxKeyboard::get_F","org/flixel/system/input/FlxKeyboard.hx",75);
	HX_STACK_THIS(this);
	HX_STACK_LINE(75)
	return this->pressed(HX_CSTRING("F"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_F,return )

bool FlxKeyboard_obj::get_D( ){
	HX_STACK_PUSH("FlxKeyboard::get_D","org/flixel/system/input/FlxKeyboard.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_LINE(74)
	return this->pressed(HX_CSTRING("D"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_D,return )

bool FlxKeyboard_obj::get_S( ){
	HX_STACK_PUSH("FlxKeyboard::get_S","org/flixel/system/input/FlxKeyboard.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_LINE(73)
	return this->pressed(HX_CSTRING("S"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_S,return )

bool FlxKeyboard_obj::get_A( ){
	HX_STACK_PUSH("FlxKeyboard::get_A","org/flixel/system/input/FlxKeyboard.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_LINE(72)
	return this->pressed(HX_CSTRING("A"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_A,return )

bool FlxKeyboard_obj::get_CAPSLOCK( ){
	HX_STACK_PUSH("FlxKeyboard::get_CAPSLOCK","org/flixel/system/input/FlxKeyboard.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_LINE(71)
	return this->pressed(HX_CSTRING("CAPSLOCK"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_CAPSLOCK,return )

bool FlxKeyboard_obj::get_BACKSLASH( ){
	HX_STACK_PUSH("FlxKeyboard::get_BACKSLASH","org/flixel/system/input/FlxKeyboard.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_LINE(70)
	return this->pressed(HX_CSTRING("BACKSLASH"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_BACKSLASH,return )

bool FlxKeyboard_obj::get_RBRACKET( ){
	HX_STACK_PUSH("FlxKeyboard::get_RBRACKET","org/flixel/system/input/FlxKeyboard.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_LINE(69)
	return this->pressed(HX_CSTRING("RBRACKET"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_RBRACKET,return )

bool FlxKeyboard_obj::get_LBRACKET( ){
	HX_STACK_PUSH("FlxKeyboard::get_LBRACKET","org/flixel/system/input/FlxKeyboard.hx",68);
	HX_STACK_THIS(this);
	HX_STACK_LINE(68)
	return this->pressed(HX_CSTRING("LBRACKET"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_LBRACKET,return )

bool FlxKeyboard_obj::get_P( ){
	HX_STACK_PUSH("FlxKeyboard::get_P","org/flixel/system/input/FlxKeyboard.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_LINE(67)
	return this->pressed(HX_CSTRING("P"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_P,return )

bool FlxKeyboard_obj::get_O( ){
	HX_STACK_PUSH("FlxKeyboard::get_O","org/flixel/system/input/FlxKeyboard.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_LINE(66)
	return this->pressed(HX_CSTRING("O"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_O,return )

bool FlxKeyboard_obj::get_I( ){
	HX_STACK_PUSH("FlxKeyboard::get_I","org/flixel/system/input/FlxKeyboard.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_LINE(65)
	return this->pressed(HX_CSTRING("I"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_I,return )

bool FlxKeyboard_obj::get_U( ){
	HX_STACK_PUSH("FlxKeyboard::get_U","org/flixel/system/input/FlxKeyboard.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_LINE(64)
	return this->pressed(HX_CSTRING("U"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_U,return )

bool FlxKeyboard_obj::get_Y( ){
	HX_STACK_PUSH("FlxKeyboard::get_Y","org/flixel/system/input/FlxKeyboard.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_LINE(63)
	return this->pressed(HX_CSTRING("Y"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_Y,return )

bool FlxKeyboard_obj::get_T( ){
	HX_STACK_PUSH("FlxKeyboard::get_T","org/flixel/system/input/FlxKeyboard.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	return this->pressed(HX_CSTRING("T"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_T,return )

bool FlxKeyboard_obj::get_R( ){
	HX_STACK_PUSH("FlxKeyboard::get_R","org/flixel/system/input/FlxKeyboard.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_LINE(61)
	return this->pressed(HX_CSTRING("R"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_R,return )

bool FlxKeyboard_obj::get_E( ){
	HX_STACK_PUSH("FlxKeyboard::get_E","org/flixel/system/input/FlxKeyboard.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_LINE(60)
	return this->pressed(HX_CSTRING("E"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_E,return )

bool FlxKeyboard_obj::get_W( ){
	HX_STACK_PUSH("FlxKeyboard::get_W","org/flixel/system/input/FlxKeyboard.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_LINE(59)
	return this->pressed(HX_CSTRING("W"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_W,return )

bool FlxKeyboard_obj::get_Q( ){
	HX_STACK_PUSH("FlxKeyboard::get_Q","org/flixel/system/input/FlxKeyboard.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_LINE(58)
	return this->pressed(HX_CSTRING("Q"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_Q,return )

bool FlxKeyboard_obj::get_TAB( ){
	HX_STACK_PUSH("FlxKeyboard::get_TAB","org/flixel/system/input/FlxKeyboard.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_LINE(57)
	return this->pressed(HX_CSTRING("TAB"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_TAB,return )

bool FlxKeyboard_obj::get_BACKSPACE( ){
	HX_STACK_PUSH("FlxKeyboard::get_BACKSPACE","org/flixel/system/input/FlxKeyboard.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_LINE(56)
	return this->pressed(HX_CSTRING("BACKSPACE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_BACKSPACE,return )

bool FlxKeyboard_obj::get_DELETE( ){
	HX_STACK_PUSH("FlxKeyboard::get_DELETE","org/flixel/system/input/FlxKeyboard.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_LINE(55)
	return this->pressed(HX_CSTRING("DELETE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_DELETE,return )

bool FlxKeyboard_obj::get_NUMPADPLUS( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADPLUS","org/flixel/system/input/FlxKeyboard.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_LINE(54)
	return this->pressed(HX_CSTRING("NUMPADPLUS"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADPLUS,return )

bool FlxKeyboard_obj::get_PLUS( ){
	HX_STACK_PUSH("FlxKeyboard::get_PLUS","org/flixel/system/input/FlxKeyboard.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_LINE(53)
	return this->pressed(HX_CSTRING("PLUS"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_PLUS,return )

bool FlxKeyboard_obj::get_NUMPADMINUS( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADMINUS","org/flixel/system/input/FlxKeyboard.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_LINE(52)
	return this->pressed(HX_CSTRING("NUMPADMINUS"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADMINUS,return )

bool FlxKeyboard_obj::get_MINUS( ){
	HX_STACK_PUSH("FlxKeyboard::get_MINUS","org/flixel/system/input/FlxKeyboard.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	return this->pressed(HX_CSTRING("MINUS"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_MINUS,return )

bool FlxKeyboard_obj::get_INSERT( ){
	HX_STACK_PUSH("FlxKeyboard::get_INSERT","org/flixel/system/input/FlxKeyboard.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(50)
	return this->pressed(HX_CSTRING("INSERT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_INSERT,return )

bool FlxKeyboard_obj::get_END( ){
	HX_STACK_PUSH("FlxKeyboard::get_END","org/flixel/system/input/FlxKeyboard.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_LINE(49)
	return this->pressed(HX_CSTRING("END"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_END,return )

bool FlxKeyboard_obj::get_HOME( ){
	HX_STACK_PUSH("FlxKeyboard::get_HOME","org/flixel/system/input/FlxKeyboard.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_LINE(48)
	return this->pressed(HX_CSTRING("HOME"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_HOME,return )

bool FlxKeyboard_obj::get_PAGEDOWN( ){
	HX_STACK_PUSH("FlxKeyboard::get_PAGEDOWN","org/flixel/system/input/FlxKeyboard.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_LINE(47)
	return this->pressed(HX_CSTRING("PAGEDOWN"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_PAGEDOWN,return )

bool FlxKeyboard_obj::get_PAGEUP( ){
	HX_STACK_PUSH("FlxKeyboard::get_PAGEUP","org/flixel/system/input/FlxKeyboard.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_LINE(46)
	return this->pressed(HX_CSTRING("PAGEUP"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_PAGEUP,return )

bool FlxKeyboard_obj::get_NUMPADZERO( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADZERO","org/flixel/system/input/FlxKeyboard.hx",45);
	HX_STACK_THIS(this);
	HX_STACK_LINE(45)
	return this->pressed(HX_CSTRING("NUMPADZERO"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADZERO,return )

bool FlxKeyboard_obj::get_NUMPADNINE( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADNINE","org/flixel/system/input/FlxKeyboard.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_LINE(44)
	return this->pressed(HX_CSTRING("NUMPADNINE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADNINE,return )

bool FlxKeyboard_obj::get_NUMPADEIGHT( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADEIGHT","org/flixel/system/input/FlxKeyboard.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_LINE(43)
	return this->pressed(HX_CSTRING("NUMPADEIGHT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADEIGHT,return )

bool FlxKeyboard_obj::get_NUMPADSEVEN( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADSEVEN","org/flixel/system/input/FlxKeyboard.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_LINE(42)
	return this->pressed(HX_CSTRING("NUMPADSEVEN"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADSEVEN,return )

bool FlxKeyboard_obj::get_NUMPADSIX( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADSIX","org/flixel/system/input/FlxKeyboard.hx",41);
	HX_STACK_THIS(this);
	HX_STACK_LINE(41)
	return this->pressed(HX_CSTRING("NUMPADSIX"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADSIX,return )

bool FlxKeyboard_obj::get_NUMPADFIVE( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADFIVE","org/flixel/system/input/FlxKeyboard.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_LINE(40)
	return this->pressed(HX_CSTRING("NUMPADFIVE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADFIVE,return )

bool FlxKeyboard_obj::get_NUMPADFOUR( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADFOUR","org/flixel/system/input/FlxKeyboard.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_LINE(39)
	return this->pressed(HX_CSTRING("NUMPADFOUR"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADFOUR,return )

bool FlxKeyboard_obj::get_NUMPADTHREE( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADTHREE","org/flixel/system/input/FlxKeyboard.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_LINE(38)
	return this->pressed(HX_CSTRING("NUMPADTHREE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADTHREE,return )

bool FlxKeyboard_obj::get_NUMPADTWO( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADTWO","org/flixel/system/input/FlxKeyboard.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_LINE(37)
	return this->pressed(HX_CSTRING("NUMPADTWO"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADTWO,return )

bool FlxKeyboard_obj::get_NUMPADONE( ){
	HX_STACK_PUSH("FlxKeyboard::get_NUMPADONE","org/flixel/system/input/FlxKeyboard.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_LINE(36)
	return this->pressed(HX_CSTRING("NUMPADONE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NUMPADONE,return )

bool FlxKeyboard_obj::get_ZERO( ){
	HX_STACK_PUSH("FlxKeyboard::get_ZERO","org/flixel/system/input/FlxKeyboard.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_LINE(35)
	return this->pressed(HX_CSTRING("ZERO"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_ZERO,return )

bool FlxKeyboard_obj::get_NINE( ){
	HX_STACK_PUSH("FlxKeyboard::get_NINE","org/flixel/system/input/FlxKeyboard.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_LINE(34)
	return this->pressed(HX_CSTRING("NINE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_NINE,return )

bool FlxKeyboard_obj::get_EIGHT( ){
	HX_STACK_PUSH("FlxKeyboard::get_EIGHT","org/flixel/system/input/FlxKeyboard.hx",33);
	HX_STACK_THIS(this);
	HX_STACK_LINE(33)
	return this->pressed(HX_CSTRING("EIGHT"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_EIGHT,return )

bool FlxKeyboard_obj::get_SEVEN( ){
	HX_STACK_PUSH("FlxKeyboard::get_SEVEN","org/flixel/system/input/FlxKeyboard.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_LINE(32)
	return this->pressed(HX_CSTRING("SEVEN"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_SEVEN,return )

bool FlxKeyboard_obj::get_SIX( ){
	HX_STACK_PUSH("FlxKeyboard::get_SIX","org/flixel/system/input/FlxKeyboard.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_LINE(31)
	return this->pressed(HX_CSTRING("SIX"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_SIX,return )

bool FlxKeyboard_obj::get_FIVE( ){
	HX_STACK_PUSH("FlxKeyboard::get_FIVE","org/flixel/system/input/FlxKeyboard.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_LINE(30)
	return this->pressed(HX_CSTRING("FIVE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_FIVE,return )

bool FlxKeyboard_obj::get_FOUR( ){
	HX_STACK_PUSH("FlxKeyboard::get_FOUR","org/flixel/system/input/FlxKeyboard.hx",29);
	HX_STACK_THIS(this);
	HX_STACK_LINE(29)
	return this->pressed(HX_CSTRING("FOUR"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_FOUR,return )

bool FlxKeyboard_obj::get_THREE( ){
	HX_STACK_PUSH("FlxKeyboard::get_THREE","org/flixel/system/input/FlxKeyboard.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_LINE(28)
	return this->pressed(HX_CSTRING("THREE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_THREE,return )

bool FlxKeyboard_obj::get_TWO( ){
	HX_STACK_PUSH("FlxKeyboard::get_TWO","org/flixel/system/input/FlxKeyboard.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return this->pressed(HX_CSTRING("TWO"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_TWO,return )

bool FlxKeyboard_obj::get_ONE( ){
	HX_STACK_PUSH("FlxKeyboard::get_ONE","org/flixel/system/input/FlxKeyboard.hx",26);
	HX_STACK_THIS(this);
	HX_STACK_LINE(26)
	return this->pressed(HX_CSTRING("ONE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_ONE,return )

bool FlxKeyboard_obj::get_F12( ){
	HX_STACK_PUSH("FlxKeyboard::get_F12","org/flixel/system/input/FlxKeyboard.hx",25);
	HX_STACK_THIS(this);
	HX_STACK_LINE(25)
	return this->pressed(HX_CSTRING("F12"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_F12,return )

bool FlxKeyboard_obj::get_F11( ){
	HX_STACK_PUSH("FlxKeyboard::get_F11","org/flixel/system/input/FlxKeyboard.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return this->pressed(HX_CSTRING("F11"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_F11,return )

bool FlxKeyboard_obj::get_F10( ){
	HX_STACK_PUSH("FlxKeyboard::get_F10","org/flixel/system/input/FlxKeyboard.hx",23);
	HX_STACK_THIS(this);
	HX_STACK_LINE(23)
	return this->pressed(HX_CSTRING("F10"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_F10,return )

bool FlxKeyboard_obj::get_F9( ){
	HX_STACK_PUSH("FlxKeyboard::get_F9","org/flixel/system/input/FlxKeyboard.hx",22);
	HX_STACK_THIS(this);
	HX_STACK_LINE(22)
	return this->pressed(HX_CSTRING("F9"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_F9,return )

bool FlxKeyboard_obj::get_F8( ){
	HX_STACK_PUSH("FlxKeyboard::get_F8","org/flixel/system/input/FlxKeyboard.hx",21);
	HX_STACK_THIS(this);
	HX_STACK_LINE(21)
	return this->pressed(HX_CSTRING("F8"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_F8,return )

bool FlxKeyboard_obj::get_F7( ){
	HX_STACK_PUSH("FlxKeyboard::get_F7","org/flixel/system/input/FlxKeyboard.hx",20);
	HX_STACK_THIS(this);
	HX_STACK_LINE(20)
	return this->pressed(HX_CSTRING("F7"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_F7,return )

bool FlxKeyboard_obj::get_F6( ){
	HX_STACK_PUSH("FlxKeyboard::get_F6","org/flixel/system/input/FlxKeyboard.hx",19);
	HX_STACK_THIS(this);
	HX_STACK_LINE(19)
	return this->pressed(HX_CSTRING("F6"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_F6,return )

bool FlxKeyboard_obj::get_F5( ){
	HX_STACK_PUSH("FlxKeyboard::get_F5","org/flixel/system/input/FlxKeyboard.hx",18);
	HX_STACK_THIS(this);
	HX_STACK_LINE(18)
	return this->pressed(HX_CSTRING("F5"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_F5,return )

bool FlxKeyboard_obj::get_F4( ){
	HX_STACK_PUSH("FlxKeyboard::get_F4","org/flixel/system/input/FlxKeyboard.hx",17);
	HX_STACK_THIS(this);
	HX_STACK_LINE(17)
	return this->pressed(HX_CSTRING("F4"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_F4,return )

bool FlxKeyboard_obj::get_F3( ){
	HX_STACK_PUSH("FlxKeyboard::get_F3","org/flixel/system/input/FlxKeyboard.hx",16);
	HX_STACK_THIS(this);
	HX_STACK_LINE(16)
	return this->pressed(HX_CSTRING("F3"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_F3,return )

bool FlxKeyboard_obj::get_F2( ){
	HX_STACK_PUSH("FlxKeyboard::get_F2","org/flixel/system/input/FlxKeyboard.hx",15);
	HX_STACK_THIS(this);
	HX_STACK_LINE(15)
	return this->pressed(HX_CSTRING("F2"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_F2,return )

bool FlxKeyboard_obj::get_F1( ){
	HX_STACK_PUSH("FlxKeyboard::get_F1","org/flixel/system/input/FlxKeyboard.hx",14);
	HX_STACK_THIS(this);
	HX_STACK_LINE(14)
	return this->pressed(HX_CSTRING("F1"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_F1,return )

bool FlxKeyboard_obj::get_ESCAPE( ){
	HX_STACK_PUSH("FlxKeyboard::get_ESCAPE","org/flixel/system/input/FlxKeyboard.hx",13);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13)
	return this->pressed(HX_CSTRING("ESCAPE"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,get_ESCAPE,return )


FlxKeyboard_obj::FlxKeyboard_obj()
{
}

void FlxKeyboard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyboard);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxKeyboard_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxKeyboard_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"M") ) { return get_M(); }
		if (HX_FIELD_EQ(inName,"N") ) { return get_N(); }
		if (HX_FIELD_EQ(inName,"B") ) { return get_B(); }
		if (HX_FIELD_EQ(inName,"V") ) { return get_V(); }
		if (HX_FIELD_EQ(inName,"C") ) { return get_C(); }
		if (HX_FIELD_EQ(inName,"X") ) { return get_X(); }
		if (HX_FIELD_EQ(inName,"Z") ) { return get_Z(); }
		if (HX_FIELD_EQ(inName,"L") ) { return get_L(); }
		if (HX_FIELD_EQ(inName,"K") ) { return get_K(); }
		if (HX_FIELD_EQ(inName,"J") ) { return get_J(); }
		if (HX_FIELD_EQ(inName,"H") ) { return get_H(); }
		if (HX_FIELD_EQ(inName,"G") ) { return get_G(); }
		if (HX_FIELD_EQ(inName,"F") ) { return get_F(); }
		if (HX_FIELD_EQ(inName,"D") ) { return get_D(); }
		if (HX_FIELD_EQ(inName,"S") ) { return get_S(); }
		if (HX_FIELD_EQ(inName,"A") ) { return get_A(); }
		if (HX_FIELD_EQ(inName,"P") ) { return get_P(); }
		if (HX_FIELD_EQ(inName,"O") ) { return get_O(); }
		if (HX_FIELD_EQ(inName,"I") ) { return get_I(); }
		if (HX_FIELD_EQ(inName,"U") ) { return get_U(); }
		if (HX_FIELD_EQ(inName,"Y") ) { return get_Y(); }
		if (HX_FIELD_EQ(inName,"T") ) { return get_T(); }
		if (HX_FIELD_EQ(inName,"R") ) { return get_R(); }
		if (HX_FIELD_EQ(inName,"E") ) { return get_E(); }
		if (HX_FIELD_EQ(inName,"W") ) { return get_W(); }
		if (HX_FIELD_EQ(inName,"Q") ) { return get_Q(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { return get_UP(); }
		if (HX_FIELD_EQ(inName,"F9") ) { return get_F9(); }
		if (HX_FIELD_EQ(inName,"F8") ) { return get_F8(); }
		if (HX_FIELD_EQ(inName,"F7") ) { return get_F7(); }
		if (HX_FIELD_EQ(inName,"F6") ) { return get_F6(); }
		if (HX_FIELD_EQ(inName,"F5") ) { return get_F5(); }
		if (HX_FIELD_EQ(inName,"F4") ) { return get_F4(); }
		if (HX_FIELD_EQ(inName,"F3") ) { return get_F3(); }
		if (HX_FIELD_EQ(inName,"F2") ) { return get_F2(); }
		if (HX_FIELD_EQ(inName,"F1") ) { return get_F1(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ALT") ) { return get_ALT(); }
		if (HX_FIELD_EQ(inName,"TAB") ) { return get_TAB(); }
		if (HX_FIELD_EQ(inName,"END") ) { return get_END(); }
		if (HX_FIELD_EQ(inName,"SIX") ) { return get_SIX(); }
		if (HX_FIELD_EQ(inName,"TWO") ) { return get_TWO(); }
		if (HX_FIELD_EQ(inName,"ONE") ) { return get_ONE(); }
		if (HX_FIELD_EQ(inName,"F12") ) { return get_F12(); }
		if (HX_FIELD_EQ(inName,"F11") ) { return get_F11(); }
		if (HX_FIELD_EQ(inName,"F10") ) { return get_F10(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { return get_LEFT(); }
		if (HX_FIELD_EQ(inName,"DOWN") ) { return get_DOWN(); }
		if (HX_FIELD_EQ(inName,"PLUS") ) { return get_PLUS(); }
		if (HX_FIELD_EQ(inName,"HOME") ) { return get_HOME(); }
		if (HX_FIELD_EQ(inName,"ZERO") ) { return get_ZERO(); }
		if (HX_FIELD_EQ(inName,"NINE") ) { return get_NINE(); }
		if (HX_FIELD_EQ(inName,"FIVE") ) { return get_FIVE(); }
		if (HX_FIELD_EQ(inName,"FOUR") ) { return get_FOUR(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { return get_RIGHT(); }
		if (HX_FIELD_EQ(inName,"SPACE") ) { return get_SPACE(); }
		if (HX_FIELD_EQ(inName,"SLASH") ) { return get_SLASH(); }
		if (HX_FIELD_EQ(inName,"COMMA") ) { return get_COMMA(); }
		if (HX_FIELD_EQ(inName,"get_M") ) { return get_M_dyn(); }
		if (HX_FIELD_EQ(inName,"get_N") ) { return get_N_dyn(); }
		if (HX_FIELD_EQ(inName,"get_B") ) { return get_B_dyn(); }
		if (HX_FIELD_EQ(inName,"get_V") ) { return get_V_dyn(); }
		if (HX_FIELD_EQ(inName,"get_C") ) { return get_C_dyn(); }
		if (HX_FIELD_EQ(inName,"get_X") ) { return get_X_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Z") ) { return get_Z_dyn(); }
		if (HX_FIELD_EQ(inName,"SHIFT") ) { return get_SHIFT(); }
		if (HX_FIELD_EQ(inName,"ENTER") ) { return get_ENTER(); }
		if (HX_FIELD_EQ(inName,"QUOTE") ) { return get_QUOTE(); }
		if (HX_FIELD_EQ(inName,"get_L") ) { return get_L_dyn(); }
		if (HX_FIELD_EQ(inName,"get_K") ) { return get_K_dyn(); }
		if (HX_FIELD_EQ(inName,"get_J") ) { return get_J_dyn(); }
		if (HX_FIELD_EQ(inName,"get_H") ) { return get_H_dyn(); }
		if (HX_FIELD_EQ(inName,"get_G") ) { return get_G_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F") ) { return get_F_dyn(); }
		if (HX_FIELD_EQ(inName,"get_D") ) { return get_D_dyn(); }
		if (HX_FIELD_EQ(inName,"get_S") ) { return get_S_dyn(); }
		if (HX_FIELD_EQ(inName,"get_A") ) { return get_A_dyn(); }
		if (HX_FIELD_EQ(inName,"get_P") ) { return get_P_dyn(); }
		if (HX_FIELD_EQ(inName,"get_O") ) { return get_O_dyn(); }
		if (HX_FIELD_EQ(inName,"get_I") ) { return get_I_dyn(); }
		if (HX_FIELD_EQ(inName,"get_U") ) { return get_U_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Y") ) { return get_Y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_T") ) { return get_T_dyn(); }
		if (HX_FIELD_EQ(inName,"get_R") ) { return get_R_dyn(); }
		if (HX_FIELD_EQ(inName,"get_E") ) { return get_E_dyn(); }
		if (HX_FIELD_EQ(inName,"get_W") ) { return get_W_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Q") ) { return get_Q_dyn(); }
		if (HX_FIELD_EQ(inName,"MINUS") ) { return get_MINUS(); }
		if (HX_FIELD_EQ(inName,"EIGHT") ) { return get_EIGHT(); }
		if (HX_FIELD_EQ(inName,"SEVEN") ) { return get_SEVEN(); }
		if (HX_FIELD_EQ(inName,"THREE") ) { return get_THREE(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_UP") ) { return get_UP_dyn(); }
		if (HX_FIELD_EQ(inName,"PERIOD") ) { return get_PERIOD(); }
		if (HX_FIELD_EQ(inName,"DELETE") ) { return get_DELETE(); }
		if (HX_FIELD_EQ(inName,"INSERT") ) { return get_INSERT(); }
		if (HX_FIELD_EQ(inName,"PAGEUP") ) { return get_PAGEUP(); }
		if (HX_FIELD_EQ(inName,"get_F9") ) { return get_F9_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F8") ) { return get_F8_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F7") ) { return get_F7_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F6") ) { return get_F6_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F5") ) { return get_F5_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F4") ) { return get_F4_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F3") ) { return get_F3_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F2") ) { return get_F2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F1") ) { return get_F1_dyn(); }
		if (HX_FIELD_EQ(inName,"ESCAPE") ) { return get_ESCAPE(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ALT") ) { return get_ALT_dyn(); }
		if (HX_FIELD_EQ(inName,"CONTROL") ) { return get_CONTROL(); }
		if (HX_FIELD_EQ(inName,"get_TAB") ) { return get_TAB_dyn(); }
		if (HX_FIELD_EQ(inName,"get_END") ) { return get_END_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SIX") ) { return get_SIX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_TWO") ) { return get_TWO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ONE") ) { return get_ONE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F12") ) { return get_F12_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F11") ) { return get_F11_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F10") ) { return get_F10_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_LEFT") ) { return get_LEFT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_DOWN") ) { return get_DOWN_dyn(); }
		if (HX_FIELD_EQ(inName,"CAPSLOCK") ) { return get_CAPSLOCK(); }
		if (HX_FIELD_EQ(inName,"RBRACKET") ) { return get_RBRACKET(); }
		if (HX_FIELD_EQ(inName,"LBRACKET") ) { return get_LBRACKET(); }
		if (HX_FIELD_EQ(inName,"get_PLUS") ) { return get_PLUS_dyn(); }
		if (HX_FIELD_EQ(inName,"get_HOME") ) { return get_HOME_dyn(); }
		if (HX_FIELD_EQ(inName,"PAGEDOWN") ) { return get_PAGEDOWN(); }
		if (HX_FIELD_EQ(inName,"get_ZERO") ) { return get_ZERO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NINE") ) { return get_NINE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_FIVE") ) { return get_FIVE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_FOUR") ) { return get_FOUR_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_RIGHT") ) { return get_RIGHT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SPACE") ) { return get_SPACE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SLASH") ) { return get_SLASH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_COMMA") ) { return get_COMMA_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SHIFT") ) { return get_SHIFT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ENTER") ) { return get_ENTER_dyn(); }
		if (HX_FIELD_EQ(inName,"get_QUOTE") ) { return get_QUOTE_dyn(); }
		if (HX_FIELD_EQ(inName,"SEMICOLON") ) { return get_SEMICOLON(); }
		if (HX_FIELD_EQ(inName,"BACKSLASH") ) { return get_BACKSLASH(); }
		if (HX_FIELD_EQ(inName,"BACKSPACE") ) { return get_BACKSPACE(); }
		if (HX_FIELD_EQ(inName,"get_MINUS") ) { return get_MINUS_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADSIX") ) { return get_NUMPADSIX(); }
		if (HX_FIELD_EQ(inName,"NUMPADTWO") ) { return get_NUMPADTWO(); }
		if (HX_FIELD_EQ(inName,"NUMPADONE") ) { return get_NUMPADONE(); }
		if (HX_FIELD_EQ(inName,"get_EIGHT") ) { return get_EIGHT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SEVEN") ) { return get_SEVEN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_THREE") ) { return get_THREE_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_PERIOD") ) { return get_PERIOD_dyn(); }
		if (HX_FIELD_EQ(inName,"get_DELETE") ) { return get_DELETE_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADPLUS") ) { return get_NUMPADPLUS(); }
		if (HX_FIELD_EQ(inName,"get_INSERT") ) { return get_INSERT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PAGEUP") ) { return get_PAGEUP_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADZERO") ) { return get_NUMPADZERO(); }
		if (HX_FIELD_EQ(inName,"NUMPADNINE") ) { return get_NUMPADNINE(); }
		if (HX_FIELD_EQ(inName,"NUMPADFIVE") ) { return get_NUMPADFIVE(); }
		if (HX_FIELD_EQ(inName,"NUMPADFOUR") ) { return get_NUMPADFOUR(); }
		if (HX_FIELD_EQ(inName,"get_ESCAPE") ) { return get_ESCAPE_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"get_CONTROL") ) { return get_CONTROL_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADSLASH") ) { return get_NUMPADSLASH(); }
		if (HX_FIELD_EQ(inName,"NUMPADMINUS") ) { return get_NUMPADMINUS(); }
		if (HX_FIELD_EQ(inName,"NUMPADEIGHT") ) { return get_NUMPADEIGHT(); }
		if (HX_FIELD_EQ(inName,"NUMPADSEVEN") ) { return get_NUMPADSEVEN(); }
		if (HX_FIELD_EQ(inName,"NUMPADTHREE") ) { return get_NUMPADTHREE(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"NUMPADPERIOD") ) { return get_NUMPADPERIOD(); }
		if (HX_FIELD_EQ(inName,"get_CAPSLOCK") ) { return get_CAPSLOCK_dyn(); }
		if (HX_FIELD_EQ(inName,"get_RBRACKET") ) { return get_RBRACKET_dyn(); }
		if (HX_FIELD_EQ(inName,"get_LBRACKET") ) { return get_LBRACKET_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PAGEDOWN") ) { return get_PAGEDOWN_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_SEMICOLON") ) { return get_SEMICOLON_dyn(); }
		if (HX_FIELD_EQ(inName,"get_BACKSLASH") ) { return get_BACKSLASH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_BACKSPACE") ) { return get_BACKSPACE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADSIX") ) { return get_NUMPADSIX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADTWO") ) { return get_NUMPADTWO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADONE") ) { return get_NUMPADONE_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_NUMPADPLUS") ) { return get_NUMPADPLUS_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADZERO") ) { return get_NUMPADZERO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADNINE") ) { return get_NUMPADNINE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADFIVE") ) { return get_NUMPADFIVE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADFOUR") ) { return get_NUMPADFOUR_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_NUMPADSLASH") ) { return get_NUMPADSLASH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADMINUS") ) { return get_NUMPADMINUS_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADEIGHT") ) { return get_NUMPADEIGHT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADSEVEN") ) { return get_NUMPADSEVEN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADTHREE") ) { return get_NUMPADTHREE_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_NUMPADPERIOD") ) { return get_NUMPADPERIOD_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKeyboard_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyboard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("RIGHT"));
	outFields->push(HX_CSTRING("LEFT"));
	outFields->push(HX_CSTRING("DOWN"));
	outFields->push(HX_CSTRING("UP"));
	outFields->push(HX_CSTRING("SPACE"));
	outFields->push(HX_CSTRING("ALT"));
	outFields->push(HX_CSTRING("CONTROL"));
	outFields->push(HX_CSTRING("NUMPADSLASH"));
	outFields->push(HX_CSTRING("SLASH"));
	outFields->push(HX_CSTRING("NUMPADPERIOD"));
	outFields->push(HX_CSTRING("PERIOD"));
	outFields->push(HX_CSTRING("COMMA"));
	outFields->push(HX_CSTRING("M"));
	outFields->push(HX_CSTRING("N"));
	outFields->push(HX_CSTRING("B"));
	outFields->push(HX_CSTRING("V"));
	outFields->push(HX_CSTRING("C"));
	outFields->push(HX_CSTRING("X"));
	outFields->push(HX_CSTRING("Z"));
	outFields->push(HX_CSTRING("SHIFT"));
	outFields->push(HX_CSTRING("ENTER"));
	outFields->push(HX_CSTRING("QUOTE"));
	outFields->push(HX_CSTRING("SEMICOLON"));
	outFields->push(HX_CSTRING("L"));
	outFields->push(HX_CSTRING("K"));
	outFields->push(HX_CSTRING("J"));
	outFields->push(HX_CSTRING("H"));
	outFields->push(HX_CSTRING("G"));
	outFields->push(HX_CSTRING("F"));
	outFields->push(HX_CSTRING("D"));
	outFields->push(HX_CSTRING("S"));
	outFields->push(HX_CSTRING("A"));
	outFields->push(HX_CSTRING("CAPSLOCK"));
	outFields->push(HX_CSTRING("BACKSLASH"));
	outFields->push(HX_CSTRING("RBRACKET"));
	outFields->push(HX_CSTRING("LBRACKET"));
	outFields->push(HX_CSTRING("P"));
	outFields->push(HX_CSTRING("O"));
	outFields->push(HX_CSTRING("I"));
	outFields->push(HX_CSTRING("U"));
	outFields->push(HX_CSTRING("Y"));
	outFields->push(HX_CSTRING("T"));
	outFields->push(HX_CSTRING("R"));
	outFields->push(HX_CSTRING("E"));
	outFields->push(HX_CSTRING("W"));
	outFields->push(HX_CSTRING("Q"));
	outFields->push(HX_CSTRING("TAB"));
	outFields->push(HX_CSTRING("BACKSPACE"));
	outFields->push(HX_CSTRING("DELETE"));
	outFields->push(HX_CSTRING("NUMPADPLUS"));
	outFields->push(HX_CSTRING("PLUS"));
	outFields->push(HX_CSTRING("NUMPADMINUS"));
	outFields->push(HX_CSTRING("MINUS"));
	outFields->push(HX_CSTRING("INSERT"));
	outFields->push(HX_CSTRING("END"));
	outFields->push(HX_CSTRING("HOME"));
	outFields->push(HX_CSTRING("PAGEDOWN"));
	outFields->push(HX_CSTRING("PAGEUP"));
	outFields->push(HX_CSTRING("NUMPADZERO"));
	outFields->push(HX_CSTRING("NUMPADNINE"));
	outFields->push(HX_CSTRING("NUMPADEIGHT"));
	outFields->push(HX_CSTRING("NUMPADSEVEN"));
	outFields->push(HX_CSTRING("NUMPADSIX"));
	outFields->push(HX_CSTRING("NUMPADFIVE"));
	outFields->push(HX_CSTRING("NUMPADFOUR"));
	outFields->push(HX_CSTRING("NUMPADTHREE"));
	outFields->push(HX_CSTRING("NUMPADTWO"));
	outFields->push(HX_CSTRING("NUMPADONE"));
	outFields->push(HX_CSTRING("ZERO"));
	outFields->push(HX_CSTRING("NINE"));
	outFields->push(HX_CSTRING("EIGHT"));
	outFields->push(HX_CSTRING("SEVEN"));
	outFields->push(HX_CSTRING("SIX"));
	outFields->push(HX_CSTRING("FIVE"));
	outFields->push(HX_CSTRING("FOUR"));
	outFields->push(HX_CSTRING("THREE"));
	outFields->push(HX_CSTRING("TWO"));
	outFields->push(HX_CSTRING("ONE"));
	outFields->push(HX_CSTRING("F12"));
	outFields->push(HX_CSTRING("F11"));
	outFields->push(HX_CSTRING("F10"));
	outFields->push(HX_CSTRING("F9"));
	outFields->push(HX_CSTRING("F8"));
	outFields->push(HX_CSTRING("F7"));
	outFields->push(HX_CSTRING("F6"));
	outFields->push(HX_CSTRING("F5"));
	outFields->push(HX_CSTRING("F4"));
	outFields->push(HX_CSTRING("F3"));
	outFields->push(HX_CSTRING("F2"));
	outFields->push(HX_CSTRING("F1"));
	outFields->push(HX_CSTRING("ESCAPE"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("get_RIGHT"),
	HX_CSTRING("get_LEFT"),
	HX_CSTRING("get_DOWN"),
	HX_CSTRING("get_UP"),
	HX_CSTRING("get_SPACE"),
	HX_CSTRING("get_ALT"),
	HX_CSTRING("get_CONTROL"),
	HX_CSTRING("get_NUMPADSLASH"),
	HX_CSTRING("get_SLASH"),
	HX_CSTRING("get_NUMPADPERIOD"),
	HX_CSTRING("get_PERIOD"),
	HX_CSTRING("get_COMMA"),
	HX_CSTRING("get_M"),
	HX_CSTRING("get_N"),
	HX_CSTRING("get_B"),
	HX_CSTRING("get_V"),
	HX_CSTRING("get_C"),
	HX_CSTRING("get_X"),
	HX_CSTRING("get_Z"),
	HX_CSTRING("get_SHIFT"),
	HX_CSTRING("get_ENTER"),
	HX_CSTRING("get_QUOTE"),
	HX_CSTRING("get_SEMICOLON"),
	HX_CSTRING("get_L"),
	HX_CSTRING("get_K"),
	HX_CSTRING("get_J"),
	HX_CSTRING("get_H"),
	HX_CSTRING("get_G"),
	HX_CSTRING("get_F"),
	HX_CSTRING("get_D"),
	HX_CSTRING("get_S"),
	HX_CSTRING("get_A"),
	HX_CSTRING("get_CAPSLOCK"),
	HX_CSTRING("get_BACKSLASH"),
	HX_CSTRING("get_RBRACKET"),
	HX_CSTRING("get_LBRACKET"),
	HX_CSTRING("get_P"),
	HX_CSTRING("get_O"),
	HX_CSTRING("get_I"),
	HX_CSTRING("get_U"),
	HX_CSTRING("get_Y"),
	HX_CSTRING("get_T"),
	HX_CSTRING("get_R"),
	HX_CSTRING("get_E"),
	HX_CSTRING("get_W"),
	HX_CSTRING("get_Q"),
	HX_CSTRING("get_TAB"),
	HX_CSTRING("get_BACKSPACE"),
	HX_CSTRING("get_DELETE"),
	HX_CSTRING("get_NUMPADPLUS"),
	HX_CSTRING("get_PLUS"),
	HX_CSTRING("get_NUMPADMINUS"),
	HX_CSTRING("get_MINUS"),
	HX_CSTRING("get_INSERT"),
	HX_CSTRING("get_END"),
	HX_CSTRING("get_HOME"),
	HX_CSTRING("get_PAGEDOWN"),
	HX_CSTRING("get_PAGEUP"),
	HX_CSTRING("get_NUMPADZERO"),
	HX_CSTRING("get_NUMPADNINE"),
	HX_CSTRING("get_NUMPADEIGHT"),
	HX_CSTRING("get_NUMPADSEVEN"),
	HX_CSTRING("get_NUMPADSIX"),
	HX_CSTRING("get_NUMPADFIVE"),
	HX_CSTRING("get_NUMPADFOUR"),
	HX_CSTRING("get_NUMPADTHREE"),
	HX_CSTRING("get_NUMPADTWO"),
	HX_CSTRING("get_NUMPADONE"),
	HX_CSTRING("get_ZERO"),
	HX_CSTRING("get_NINE"),
	HX_CSTRING("get_EIGHT"),
	HX_CSTRING("get_SEVEN"),
	HX_CSTRING("get_SIX"),
	HX_CSTRING("get_FIVE"),
	HX_CSTRING("get_FOUR"),
	HX_CSTRING("get_THREE"),
	HX_CSTRING("get_TWO"),
	HX_CSTRING("get_ONE"),
	HX_CSTRING("get_F12"),
	HX_CSTRING("get_F11"),
	HX_CSTRING("get_F10"),
	HX_CSTRING("get_F9"),
	HX_CSTRING("get_F8"),
	HX_CSTRING("get_F7"),
	HX_CSTRING("get_F6"),
	HX_CSTRING("get_F5"),
	HX_CSTRING("get_F4"),
	HX_CSTRING("get_F3"),
	HX_CSTRING("get_F2"),
	HX_CSTRING("get_F1"),
	HX_CSTRING("get_ESCAPE"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
};

Class FlxKeyboard_obj::__mClass;

void FlxKeyboard_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.FlxKeyboard"), hx::TCanCast< FlxKeyboard_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxKeyboard_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
