#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
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
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSound
#include <org/flixel/FlxSound.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSubState
#include <org/flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_DebugPathDisplay
#include <org/flixel/plugin/DebugPathDisplay.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_TimerManager
#include <org/flixel/plugin/TimerManager.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_pxText_PxBitmapFont
#include <org/flixel/plugin/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxDebugger
#include <org/flixel/system/FlxDebugger.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxQuadTree
#include <org/flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxReplay
#include <org/flixel/system/FlxReplay.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Console
#include <org/flixel/system/debug/Console.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Log
#include <org/flixel/system/debug/Log.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_LogStyle
#include <org/flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_VCR
#include <org/flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Watch
#include <org/flixel/system/debug/Watch.h>
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
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_DrawStackItem
#include <org/flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#include <org/flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_org_flixel_tweens_FlxTween
#include <org/flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_org_flixel_tweens_misc_MultiVarTween
#include <org/flixel/tweens/misc/MultiVarTween.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRandom
#include <org/flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRect
#include <org/flixel/util/FlxRect.h>
#endif
namespace org{
namespace flixel{

Void FlxG_obj::__construct()
{
HX_STACK_PUSH("FlxG::new","org/flixel/FlxG.hx",79);
{
}
;
	return null();
}

FlxG_obj::~FlxG_obj() { }

Dynamic FlxG_obj::__CreateEmpty() { return  new FlxG_obj; }
hx::ObjectPtr< FlxG_obj > FlxG_obj::__new()
{  hx::ObjectPtr< FlxG_obj > result = new FlxG_obj();
	result->__construct();
	return result;}

Dynamic FlxG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxG_obj > result = new FlxG_obj();
	result->__construct();
	return result;}

bool FlxG_obj::supportsTouchEvents;

::org::flixel::FlxBasic FlxG_obj::tweener;

::org::flixel::FlxGame FlxG_obj::_game;

bool FlxG_obj::paused;

bool FlxG_obj::autoPause;

bool FlxG_obj::debug;

Float FlxG_obj::elapsed;

Float FlxG_obj::timeScale;

int FlxG_obj::width;

int FlxG_obj::height;

::org::flixel::util::FlxRect FlxG_obj::worldBounds;

int FlxG_obj::worldDivisions;

bool FlxG_obj::visualDebug;

::org::flixel::system::debug::Console FlxG_obj::console;

bool FlxG_obj::mobile;

::org::flixel::FlxSound FlxG_obj::music;

::org::flixel::FlxTypedGroup FlxG_obj::sounds;

bool FlxG_obj::mute;

Array< ::Dynamic > FlxG_obj::cameras;

::org::flixel::FlxCamera FlxG_obj::camera;

bool FlxG_obj::useBufferLocking;

::flash::geom::Rectangle FlxG_obj::_cameraRect;

Array< ::Dynamic > FlxG_obj::plugins;

Dynamic FlxG_obj::volumeHandler;

::flash::display::Sprite FlxG_obj::flashGfxSprite;

::flash::display::Graphics FlxG_obj::flashGfx;

::haxe::ds::StringMap FlxG_obj::_cache;

::String FlxG_obj::_lastBitmapDataKey;

::org::flixel::system::input::FlxMouse FlxG_obj::mouse;

::org::flixel::system::input::FlxKeyboard FlxG_obj::keys;

Array< int > FlxG_obj::keyDebugger;

Array< int > FlxG_obj::keyVolumeUp;

Array< int > FlxG_obj::keyVolumeDown;

Array< int > FlxG_obj::keyMute;

::org::flixel::system::input::FlxTouchManager FlxG_obj::touchManager;

::org::flixel::system::input::FlxJoystickManager FlxG_obj::joystickManager;

::String FlxG_obj::getLibraryName( ){
	HX_STACK_PUSH("FlxG::getLibraryName","org/flixel/FlxG.hx",305);
	HX_STACK_LINE(305)
	return ((((HX_CSTRING("HaxeFlixel") + HX_CSTRING(" v")) + HX_CSTRING("2")) + HX_CSTRING(".")) + HX_CSTRING("0.0-alpha.3"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,getLibraryName,return )

Void FlxG_obj::toggleDebugger( ){
{
		HX_STACK_PUSH("FlxG::toggleDebugger","org/flixel/FlxG.hx",313);
		HX_STACK_LINE(313)
		if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->get_debugger() != null()))))){
			HX_STACK_LINE(317)
			::org::flixel::FlxG_obj::_game->_debuggerUp = !(::org::flixel::FlxG_obj::_game->get_debugger()->get_visible());
			HX_STACK_LINE(318)
			::org::flixel::FlxG_obj::_game->get_debugger()->set_visible(!(::org::flixel::FlxG_obj::_game->get_debugger()->get_visible()));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,toggleDebugger,(void))

Void FlxG_obj::showDebugger( ){
{
		HX_STACK_PUSH("FlxG::showDebugger","org/flixel/FlxG.hx",327);
		HX_STACK_LINE(327)
		if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->get_debugger() != null()))))){
			HX_STACK_LINE(331)
			::org::flixel::FlxG_obj::_game->_debuggerUp = true;
			HX_STACK_LINE(332)
			::org::flixel::FlxG_obj::_game->get_debugger()->set_visible(true);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,showDebugger,(void))

Void FlxG_obj::hideDebugger( ){
{
		HX_STACK_PUSH("FlxG::hideDebugger","org/flixel/FlxG.hx",341);
		HX_STACK_LINE(341)
		if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->get_debugger() != null()))))){
			HX_STACK_LINE(345)
			::org::flixel::FlxG_obj::_game->_debuggerUp = false;
			HX_STACK_LINE(346)
			::org::flixel::FlxG_obj::_game->get_debugger()->set_visible(false);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,hideDebugger,(void))

Dynamic FlxG_obj::log;

Void FlxG_obj::_log( Dynamic Data){
{
		HX_STACK_PUSH("FlxG::_log","org/flixel/FlxG.hx",358);
		HX_STACK_ARG(Data,"Data");
		HX_STACK_LINE(358)
		if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->get_debugger() != null()))))){
			HX_STACK_LINE(361)
			::org::flixel::FlxG_obj::advancedLog(Data,::org::flixel::system::debug::Log_obj::STYLE_NORMAL);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,_log,(void))

Dynamic FlxG_obj::warn;

Void FlxG_obj::_warn( Dynamic Data){
{
		HX_STACK_PUSH("FlxG::_warn","org/flixel/FlxG.hx",372);
		HX_STACK_ARG(Data,"Data");
		HX_STACK_LINE(372)
		if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->get_debugger() != null()))))){
			HX_STACK_LINE(375)
			::org::flixel::FlxG_obj::advancedLog(Data,::org::flixel::system::debug::Log_obj::STYLE_WARNING);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,_warn,(void))

Dynamic FlxG_obj::error;

Void FlxG_obj::_error( Dynamic Data){
{
		HX_STACK_PUSH("FlxG::_error","org/flixel/FlxG.hx",386);
		HX_STACK_ARG(Data,"Data");
		HX_STACK_LINE(386)
		if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->get_debugger() != null()))))){
			HX_STACK_LINE(389)
			::org::flixel::FlxG_obj::advancedLog(Data,::org::flixel::system::debug::Log_obj::STYLE_ERROR);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,_error,(void))

Dynamic FlxG_obj::notice;

Void FlxG_obj::_notice( Dynamic Data){
{
		HX_STACK_PUSH("FlxG::_notice","org/flixel/FlxG.hx",400);
		HX_STACK_ARG(Data,"Data");
		HX_STACK_LINE(400)
		if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->get_debugger() != null()))))){
			HX_STACK_LINE(403)
			::org::flixel::FlxG_obj::advancedLog(Data,::org::flixel::system::debug::Log_obj::STYLE_NOTICE);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,_notice,(void))

Void FlxG_obj::advancedLog( Dynamic Data,::org::flixel::system::debug::LogStyle Style){
{
		HX_STACK_PUSH("FlxG::advancedLog","org/flixel/FlxG.hx",413);
		HX_STACK_ARG(Data,"Data");
		HX_STACK_ARG(Style,"Style");
		HX_STACK_LINE(413)
		if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->get_debugger() != null()))))){
			HX_STACK_LINE(417)
			if ((!(::Std_obj::is(Data,hx::ClassOf< Array<int> >())))){
				HX_STACK_LINE(418)
				Data = Dynamic( Array_obj<Dynamic>::__new().Add(Data));
			}
			HX_STACK_LINE(420)
			::org::flixel::FlxG_obj::_game->get_debugger()->log->add(Data,Style);
			HX_STACK_LINE(422)
			if (((Style->errorSound != null()))){
				HX_STACK_LINE(423)
				::org::flixel::FlxG_obj::play(Style->errorSound,null(),null(),null(),null());
			}
			HX_STACK_LINE(424)
			if ((Style->openConsole)){
				HX_STACK_LINE(425)
				::org::flixel::FlxG_obj::_game->get_debugger()->set_visible(::org::flixel::FlxG_obj::_game->_debuggerUp = true);
			}
			HX_STACK_LINE(426)
			if ((::Reflect_obj::isFunction(Style->callbackFunction))){
				HX_STACK_LINE(427)
				::Reflect_obj::callMethod(null(),Style->callbackFunction,Dynamic( Array_obj<Dynamic>::__new()));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,advancedLog,(void))

Void FlxG_obj::clearLog( ){
{
		HX_STACK_PUSH("FlxG::clearLog","org/flixel/FlxG.hx",436);
		HX_STACK_LINE(436)
		if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->get_debugger() != null()))))){
			HX_STACK_LINE(439)
			::org::flixel::FlxG_obj::_game->get_debugger()->log->clear();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,clearLog,(void))

Void FlxG_obj::watch( Dynamic AnyObject,::String VariableName,::String DisplayName){
{
		HX_STACK_PUSH("FlxG::watch","org/flixel/FlxG.hx",453);
		HX_STACK_ARG(AnyObject,"AnyObject");
		HX_STACK_ARG(VariableName,"VariableName");
		HX_STACK_ARG(DisplayName,"DisplayName");
		HX_STACK_LINE(453)
		if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->_debugger != null()))))){
			HX_STACK_LINE(456)
			::org::flixel::FlxG_obj::_game->_debugger->watch->add(AnyObject,VariableName,DisplayName);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxG_obj,watch,(void))

Void FlxG_obj::unwatch( Dynamic AnyObject,::String VariableName){
{
		HX_STACK_PUSH("FlxG::unwatch","org/flixel/FlxG.hx",469);
		HX_STACK_ARG(AnyObject,"AnyObject");
		HX_STACK_ARG(VariableName,"VariableName");
		HX_STACK_LINE(469)
		if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->_debugger != null()))))){
			HX_STACK_LINE(472)
			::org::flixel::FlxG_obj::_game->_debugger->watch->remove(AnyObject,VariableName,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,unwatch,(void))

Void FlxG_obj::quickWatch( ::String Name,Dynamic NewValue){
{
		HX_STACK_PUSH("FlxG::quickWatch","org/flixel/FlxG.hx",486);
		HX_STACK_ARG(Name,"Name");
		HX_STACK_ARG(NewValue,"NewValue");
		HX_STACK_LINE(486)
		if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->_debugger != null()))))){
			HX_STACK_LINE(489)
			::org::flixel::FlxG_obj::_game->get_debugger()->watch->updateQuickWatch(Name,NewValue);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,quickWatch,(void))

Void FlxG_obj::removeQuickWatch( ::String Name){
{
		HX_STACK_PUSH("FlxG::removeQuickWatch","org/flixel/FlxG.hx",500);
		HX_STACK_ARG(Name,"Name");
		HX_STACK_LINE(500)
		if (((bool((::org::flixel::FlxG_obj::_game != null())) && bool((::org::flixel::FlxG_obj::_game->_debugger != null()))))){
			HX_STACK_LINE(503)
			::org::flixel::FlxG_obj::_game->get_debugger()->watch->remove(null(),null(),Name);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,removeQuickWatch,(void))

int FlxG_obj::get_framerate( ){
	HX_STACK_PUSH("FlxG::get_framerate","org/flixel/FlxG.hx",517);
	HX_STACK_LINE(517)
	return ::Std_obj::_int((Float((int)1000) / Float(::org::flixel::FlxG_obj::_game->_step)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_framerate,return )

int FlxG_obj::set_framerate( int Framerate){
	HX_STACK_PUSH("FlxG::set_framerate","org/flixel/FlxG.hx",525);
	HX_STACK_ARG(Framerate,"Framerate");
	HX_STACK_LINE(526)
	::org::flixel::FlxG_obj::_game->_step = ::Std_obj::_int(::Math_obj::abs((Float((int)1000) / Float(Framerate))));
	HX_STACK_LINE(527)
	::org::flixel::FlxG_obj::_game->_stepSeconds = (Float(::org::flixel::FlxG_obj::_game->_step) / Float((int)1000));
	HX_STACK_LINE(528)
	if (((::org::flixel::FlxG_obj::_game->_maxAccumulation < ::org::flixel::FlxG_obj::_game->_step))){
		HX_STACK_LINE(529)
		::org::flixel::FlxG_obj::_game->_maxAccumulation = ::org::flixel::FlxG_obj::_game->_step;
	}
	HX_STACK_LINE(532)
	return Framerate;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_framerate,return )

int FlxG_obj::get_flashFramerate( ){
	HX_STACK_PUSH("FlxG::get_flashFramerate","org/flixel/FlxG.hx",541);
	HX_STACK_LINE(542)
	if (((::org::flixel::FlxG_obj::_game->get_stage() != null()))){
		HX_STACK_LINE(543)
		return ::Std_obj::_int(::org::flixel::FlxG_obj::_game->get_stage()->frameRate);
	}
	HX_STACK_LINE(544)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_flashFramerate,return )

int FlxG_obj::set_flashFramerate( int Framerate){
	HX_STACK_PUSH("FlxG::set_flashFramerate","org/flixel/FlxG.hx",551);
	HX_STACK_ARG(Framerate,"Framerate");
	HX_STACK_LINE(552)
	::org::flixel::FlxG_obj::_game->_flashFramerate = ::Std_obj::_int(::Math_obj::abs(Framerate));
	HX_STACK_LINE(553)
	if (((::org::flixel::FlxG_obj::_game->get_stage() != null()))){
		HX_STACK_LINE(554)
		::org::flixel::FlxG_obj::_game->get_stage()->set_frameRate(::org::flixel::FlxG_obj::_game->_flashFramerate);
	}
	HX_STACK_LINE(557)
	::org::flixel::FlxG_obj::_game->_maxAccumulation = (::Std_obj::_int((Float((int)2000) / Float(::org::flixel::FlxG_obj::_game->_flashFramerate))) - (int)1);
	HX_STACK_LINE(558)
	if (((::org::flixel::FlxG_obj::_game->_maxAccumulation < ::org::flixel::FlxG_obj::_game->_step))){
		HX_STACK_LINE(559)
		::org::flixel::FlxG_obj::_game->_maxAccumulation = ::org::flixel::FlxG_obj::_game->_step;
	}
	HX_STACK_LINE(562)
	return Framerate;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_flashFramerate,return )

Void FlxG_obj::loadReplay( ::String Data,::org::flixel::FlxState State,Array< ::String > CancelKeys,hx::Null< Float >  __o_Timeout,Dynamic Callback){
Float Timeout = __o_Timeout.Default(0);
	HX_STACK_PUSH("FlxG::loadReplay","org/flixel/FlxG.hx",589);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(State,"State");
	HX_STACK_ARG(CancelKeys,"CancelKeys");
	HX_STACK_ARG(Timeout,"Timeout");
	HX_STACK_ARG(Callback,"Callback");
{
		HX_STACK_LINE(590)
		::org::flixel::FlxG_obj::_game->_replay->load(Data);
		HX_STACK_LINE(591)
		if (((State == null()))){
			HX_STACK_LINE(592)
			::org::flixel::FlxG_obj::resetGame();
		}
		else{
			HX_STACK_LINE(596)
			::org::flixel::FlxG_obj::switchState(State);
		}
		HX_STACK_LINE(599)
		::org::flixel::FlxG_obj::_game->_replayCancelKeys = CancelKeys;
		HX_STACK_LINE(600)
		::org::flixel::FlxG_obj::_game->_replayTimer = ::Std_obj::_int((Timeout * (int)1000));
		HX_STACK_LINE(601)
		::org::flixel::FlxG_obj::_game->_replayCallback = Callback;
		HX_STACK_LINE(602)
		::org::flixel::FlxG_obj::_game->_replayRequested = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxG_obj,loadReplay,(void))

Void FlxG_obj::reloadReplay( hx::Null< bool >  __o_StandardMode){
bool StandardMode = __o_StandardMode.Default(true);
	HX_STACK_PUSH("FlxG::reloadReplay","org/flixel/FlxG.hx",611);
	HX_STACK_ARG(StandardMode,"StandardMode");
{
		HX_STACK_LINE(612)
		if ((StandardMode)){
			HX_STACK_LINE(613)
			::org::flixel::FlxG_obj::resetGame();
		}
		else{
			HX_STACK_LINE(617)
			::org::flixel::FlxG_obj::resetState();
		}
		HX_STACK_LINE(622)
		if (((::org::flixel::FlxG_obj::_game->_replay->frameCount > (int)0))){
			HX_STACK_LINE(623)
			::org::flixel::FlxG_obj::_game->_replayRequested = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,reloadReplay,(void))

Void FlxG_obj::stopReplay( ){
{
		HX_STACK_PUSH("FlxG::stopReplay","org/flixel/FlxG.hx",634);
		HX_STACK_LINE(635)
		::org::flixel::FlxG_obj::_game->_replaying = false;
		HX_STACK_LINE(637)
		if (((::org::flixel::FlxG_obj::_game->_debugger != null()))){
			HX_STACK_LINE(638)
			::org::flixel::FlxG_obj::_game->_debugger->vcr->stopped();
		}
		HX_STACK_LINE(642)
		::org::flixel::FlxG_obj::resetInput();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,stopReplay,(void))

Void FlxG_obj::recordReplay( hx::Null< bool >  __o_StandardMode){
bool StandardMode = __o_StandardMode.Default(true);
	HX_STACK_PUSH("FlxG::recordReplay","org/flixel/FlxG.hx",650);
	HX_STACK_ARG(StandardMode,"StandardMode");
{
		HX_STACK_LINE(651)
		if ((StandardMode)){
			HX_STACK_LINE(652)
			::org::flixel::FlxG_obj::resetGame();
		}
		else{
			HX_STACK_LINE(656)
			::org::flixel::FlxG_obj::resetState();
		}
		HX_STACK_LINE(659)
		::org::flixel::FlxG_obj::_game->_recordingRequested = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,recordReplay,(void))

::String FlxG_obj::stopRecording( ){
	HX_STACK_PUSH("FlxG::stopRecording","org/flixel/FlxG.hx",667);
	HX_STACK_LINE(668)
	::org::flixel::FlxG_obj::_game->_recording = false;
	HX_STACK_LINE(670)
	if (((::org::flixel::FlxG_obj::_game->_debugger != null()))){
		HX_STACK_LINE(671)
		::org::flixel::FlxG_obj::_game->_debugger->vcr->stopped();
	}
	HX_STACK_LINE(675)
	return ::org::flixel::FlxG_obj::_game->_replay->save();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,stopRecording,return )

Void FlxG_obj::resetState( ){
{
		HX_STACK_PUSH("FlxG::resetState","org/flixel/FlxG.hx",683);
		struct _Function_1_1{
			inline static ::String Block( ){
				HX_STACK_PUSH("*::closure","org/flixel/FlxG.hx",684);
				{
					HX_STACK_LINE(684)
					::String s = ::Type_obj::getClassName(::Type_obj::getClass(::org::flixel::FlxG_obj::_game->_state));		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(684)
					if (((s != null()))){
						HX_STACK_LINE(684)
						s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
						HX_STACK_LINE(684)
						{
						}
					}
					HX_STACK_LINE(684)
					return s;
				}
				return null();
			}
		};
		HX_STACK_LINE(684)
		::org::flixel::FlxG_obj::_game->_requestedState = ::Type_obj::createInstance(::Type_obj::resolveClass(_Function_1_1::Block()),Dynamic( Array_obj<Dynamic>::__new()));
		HX_STACK_LINE(687)
		if ((::Std_obj::is(::org::flixel::FlxG_obj::_game->_requestedState,hx::ClassOf< ::org::flixel::FlxSubState >()))){
			HX_STACK_LINE(688)
			hx::Throw (HX_CSTRING("You can't set FlxSubState class instance as the state for your game"));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetState,(void))

Void FlxG_obj::resetGame( ){
{
		HX_STACK_PUSH("FlxG::resetGame","org/flixel/FlxG.hx",698);
		HX_STACK_LINE(698)
		::org::flixel::FlxG_obj::_game->_requestedReset = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetGame,(void))

Void FlxG_obj::resetInput( ){
{
		HX_STACK_PUSH("FlxG::resetInput","org/flixel/FlxG.hx",706);
		HX_STACK_LINE(706)
		::org::flixel::system::input::FlxInputs_obj::resetInputs();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetInput,(void))

Void FlxG_obj::playMusic( Dynamic Music,hx::Null< Float >  __o_Volume){
Float Volume = __o_Volume.Default(1.0);
	HX_STACK_PUSH("FlxG::playMusic","org/flixel/FlxG.hx",717);
	HX_STACK_ARG(Music,"Music");
	HX_STACK_ARG(Volume,"Volume");
{
		HX_STACK_LINE(719)
		if (((::org::flixel::FlxG_obj::music == null()))){
			HX_STACK_LINE(720)
			::org::flixel::FlxG_obj::music = ::org::flixel::FlxSound_obj::__new();
		}
		else{
			HX_STACK_LINE(723)
			if ((::org::flixel::FlxG_obj::music->active)){
				HX_STACK_LINE(724)
				::org::flixel::FlxG_obj::music->stop();
			}
		}
		HX_STACK_LINE(727)
		::org::flixel::FlxG_obj::music->loadEmbedded(Music,true,null(),null());
		HX_STACK_LINE(728)
		::org::flixel::FlxG_obj::music->set_volume(Volume);
		HX_STACK_LINE(729)
		::org::flixel::FlxG_obj::music->survive = true;
		HX_STACK_LINE(730)
		::org::flixel::FlxG_obj::music->play(null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,playMusic,(void))

::org::flixel::FlxSound FlxG_obj::loadSound( Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,hx::Null< bool >  __o_AutoPlay,::String URL,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1.0);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
bool AutoPlay = __o_AutoPlay.Default(false);
	HX_STACK_PUSH("FlxG::loadSound","org/flixel/FlxG.hx",745);
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound");
	HX_STACK_ARG(Volume,"Volume");
	HX_STACK_ARG(Looped,"Looped");
	HX_STACK_ARG(AutoDestroy,"AutoDestroy");
	HX_STACK_ARG(AutoPlay,"AutoPlay");
	HX_STACK_ARG(URL,"URL");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(747)
		if (((bool((EmbeddedSound == null())) && bool((URL == null()))))){
			HX_STACK_LINE(749)
			::org::flixel::FlxG_obj::warn(HX_CSTRING("FlxG.loadSound() requires either\nan embedded sound or a URL to work."));
			HX_STACK_LINE(750)
			return null();
		}
		HX_STACK_LINE(752)
		::org::flixel::FlxSound sound = ::org::flixel::FlxG_obj::sounds->recycle(hx::ClassOf< ::org::flixel::FlxSound >(),null());		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(753)
		if (((EmbeddedSound != null()))){
			HX_STACK_LINE(754)
			sound->loadEmbedded(EmbeddedSound,Looped,AutoDestroy,OnComplete);
		}
		else{
			HX_STACK_LINE(758)
			sound->loadStream(URL,Looped,AutoDestroy,OnComplete);
		}
		HX_STACK_LINE(761)
		sound->set_volume(Volume);
		HX_STACK_LINE(762)
		if ((AutoPlay)){
			HX_STACK_LINE(763)
			sound->play(null());
		}
		HX_STACK_LINE(766)
		return sound;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxG_obj,loadSound,return )

::org::flixel::FlxSound FlxG_obj::play( Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1.0);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_PUSH("FlxG::play","org/flixel/FlxG.hx",829);
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound");
	HX_STACK_ARG(Volume,"Volume");
	HX_STACK_ARG(Looped,"Looped");
	HX_STACK_ARG(AutoDestroy,"AutoDestroy");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(829)
		return ::org::flixel::FlxG_obj::loadSound(EmbeddedSound,Volume,Looped,AutoDestroy,true,null(),OnComplete);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxG_obj,play,return )

::org::flixel::FlxSound FlxG_obj::stream( ::String URL,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1.0);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_PUSH("FlxG::stream","org/flixel/FlxG.hx",848);
	HX_STACK_ARG(URL,"URL");
	HX_STACK_ARG(Volume,"Volume");
	HX_STACK_ARG(Looped,"Looped");
	HX_STACK_ARG(AutoDestroy,"AutoDestroy");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(848)
		return ::org::flixel::FlxG_obj::loadSound(null(),Volume,Looped,AutoDestroy,true,URL,OnComplete);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxG_obj,stream,return )

Float FlxG_obj::volume;

Float FlxG_obj::set_volume( Float Volume){
	HX_STACK_PUSH("FlxG::set_volume","org/flixel/FlxG.hx",868);
	HX_STACK_ARG(Volume,"Volume");
	HX_STACK_LINE(869)
	::org::flixel::FlxG_obj::volume = Volume;
	HX_STACK_LINE(870)
	if (((::org::flixel::FlxG_obj::volume < (int)0))){
		HX_STACK_LINE(871)
		::org::flixel::FlxG_obj::volume = (int)0;
	}
	else{
		HX_STACK_LINE(874)
		if (((::org::flixel::FlxG_obj::volume > (int)1))){
			HX_STACK_LINE(875)
			::org::flixel::FlxG_obj::volume = (int)1;
		}
	}
	HX_STACK_LINE(878)
	if (((::org::flixel::FlxG_obj::volumeHandler_dyn() != null()))){
		HX_STACK_LINE(880)
		Float param = (  ((::org::flixel::FlxG_obj::mute)) ? Float((int)0) : Float(::org::flixel::FlxG_obj::volume) );		HX_STACK_VAR(param,"param");
		HX_STACK_LINE(881)
		::org::flixel::FlxG_obj::volumeHandler(param);
	}
	HX_STACK_LINE(883)
	return Volume;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_volume,return )

Void FlxG_obj::destroySounds( hx::Null< bool >  __o_ForceDestroy){
bool ForceDestroy = __o_ForceDestroy.Default(false);
	HX_STACK_PUSH("FlxG::destroySounds","org/flixel/FlxG.hx",892);
	HX_STACK_ARG(ForceDestroy,"ForceDestroy");
{
		HX_STACK_LINE(893)
		if (((bool((::org::flixel::FlxG_obj::music != null())) && bool(((bool(ForceDestroy) || bool(!(::org::flixel::FlxG_obj::music->survive)))))))){
			HX_STACK_LINE(895)
			::org::flixel::FlxG_obj::music->destroy();
			HX_STACK_LINE(896)
			::org::flixel::FlxG_obj::music = null();
		}
		HX_STACK_LINE(898)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(899)
		::org::flixel::FlxSound sound;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(900)
		int l = ::org::flixel::FlxG_obj::sounds->members->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(901)
		while(((i < l))){
			HX_STACK_LINE(903)
			sound = ::org::flixel::FlxG_obj::sounds->members->__GetItem((i)++);
			HX_STACK_LINE(904)
			if (((bool((sound != null())) && bool(((bool(ForceDestroy) || bool(!(sound->survive)))))))){
				HX_STACK_LINE(905)
				sound->destroy();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,destroySounds,(void))

Void FlxG_obj::updateSounds( ){
{
		HX_STACK_PUSH("FlxG::updateSounds","org/flixel/FlxG.hx",915);
		HX_STACK_LINE(916)
		if (((bool((::org::flixel::FlxG_obj::music != null())) && bool(::org::flixel::FlxG_obj::music->active)))){
			HX_STACK_LINE(917)
			::org::flixel::FlxG_obj::music->update();
		}
		HX_STACK_LINE(920)
		if (((bool((::org::flixel::FlxG_obj::sounds != null())) && bool(::org::flixel::FlxG_obj::sounds->active)))){
			HX_STACK_LINE(921)
			::org::flixel::FlxG_obj::sounds->update();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,updateSounds,(void))

Void FlxG_obj::pauseSounds( ){
{
		HX_STACK_PUSH("FlxG::pauseSounds","org/flixel/FlxG.hx",930);
		HX_STACK_LINE(931)
		if (((bool((bool((::org::flixel::FlxG_obj::music != null())) && bool(::org::flixel::FlxG_obj::music->exists))) && bool(::org::flixel::FlxG_obj::music->active)))){
			HX_STACK_LINE(932)
			::org::flixel::FlxG_obj::music->pause();
		}
		HX_STACK_LINE(935)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(936)
		::org::flixel::FlxSound sound;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(937)
		int l = ::org::flixel::FlxG_obj::sounds->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(938)
		while(((i < l))){
			HX_STACK_LINE(940)
			sound = ::org::flixel::FlxG_obj::sounds->members->__GetItem((i)++);
			HX_STACK_LINE(941)
			if (((bool((bool((sound != null())) && bool(sound->exists))) && bool(sound->active)))){
				HX_STACK_LINE(942)
				sound->pause();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,pauseSounds,(void))

Void FlxG_obj::resumeSounds( ){
{
		HX_STACK_PUSH("FlxG::resumeSounds","org/flixel/FlxG.hx",952);
		HX_STACK_LINE(953)
		if (((bool((::org::flixel::FlxG_obj::music != null())) && bool(::org::flixel::FlxG_obj::music->exists)))){
			HX_STACK_LINE(954)
			::org::flixel::FlxG_obj::music->play(null());
		}
		HX_STACK_LINE(957)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(958)
		::org::flixel::FlxSound sound;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(959)
		int l = ::org::flixel::FlxG_obj::sounds->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(960)
		while(((i < l))){
			HX_STACK_LINE(962)
			sound = ::org::flixel::FlxG_obj::sounds->members->__GetItem((i)++);
			HX_STACK_LINE(963)
			if (((bool((sound != null())) && bool(sound->exists)))){
				HX_STACK_LINE(964)
				sound->resume();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resumeSounds,(void))

bool FlxG_obj::checkBitmapCache( ::String Key){
	HX_STACK_PUSH("FlxG::checkBitmapCache","org/flixel/FlxG.hx",976);
	HX_STACK_ARG(Key,"Key");
	HX_STACK_LINE(976)
	return (bool(::org::flixel::FlxG_obj::_cache->exists(Key)) && bool((::org::flixel::FlxG_obj::_cache->get(Key) != null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,checkBitmapCache,return )

::flash::display::BitmapData FlxG_obj::createBitmap( int Width,int Height,int Color,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxG::createBitmap","org/flixel/FlxG.hx",990);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(991)
		::String key = Key;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(992)
		if (((key == null()))){
			HX_STACK_LINE(994)
			key = ((((Width + HX_CSTRING("x")) + Height) + HX_CSTRING(":")) + Color);
			HX_STACK_LINE(995)
			if (((bool(Unique) && bool(::org::flixel::FlxG_obj::checkBitmapCache(key))))){
				HX_STACK_LINE(996)
				key = ::org::flixel::FlxG_obj::getUniqueBitmapKey(key);
			}
		}
		HX_STACK_LINE(1000)
		if ((!(::org::flixel::FlxG_obj::checkBitmapCache(key)))){
			HX_STACK_LINE(1001)
			::org::flixel::FlxG_obj::_cache->set(key,::flash::display::BitmapData_obj::__new(Width,Height,true,Color,null()));
		}
		HX_STACK_LINE(1004)
		::org::flixel::FlxG_obj::_lastBitmapDataKey = key;
		HX_STACK_LINE(1005)
		return ::org::flixel::FlxG_obj::_cache->get(key);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxG_obj,createBitmap,return )

::flash::display::BitmapData FlxG_obj::addBitmap( Dynamic Graphic,hx::Null< bool >  __o_Reverse,hx::Null< bool >  __o_Unique,::String Key,hx::Null< int >  __o_FrameWidth,hx::Null< int >  __o_FrameHeight,hx::Null< int >  __o_SpacingX,hx::Null< int >  __o_SpacingY){
bool Reverse = __o_Reverse.Default(false);
bool Unique = __o_Unique.Default(false);
int FrameWidth = __o_FrameWidth.Default(0);
int FrameHeight = __o_FrameHeight.Default(0);
int SpacingX = __o_SpacingX.Default(1);
int SpacingY = __o_SpacingY.Default(1);
	HX_STACK_PUSH("FlxG::addBitmap","org/flixel/FlxG.hx",1021);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Reverse,"Reverse");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
	HX_STACK_ARG(FrameWidth,"FrameWidth");
	HX_STACK_ARG(FrameHeight,"FrameHeight");
	HX_STACK_ARG(SpacingX,"SpacingX");
	HX_STACK_ARG(SpacingY,"SpacingY");
{
		HX_STACK_LINE(1022)
		if (((Graphic == null()))){
			HX_STACK_LINE(1023)
			return null();
		}
		HX_STACK_LINE(1027)
		bool isClass = true;		HX_STACK_VAR(isClass,"isClass");
		HX_STACK_LINE(1028)
		bool isBitmap = true;		HX_STACK_VAR(isBitmap,"isBitmap");
		HX_STACK_LINE(1029)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(1031)
			isClass = true;
			HX_STACK_LINE(1032)
			isBitmap = false;
		}
		else{
			HX_STACK_LINE(1034)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::flash::display::BitmapData >()))){
				HX_STACK_LINE(1036)
				isClass = false;
				HX_STACK_LINE(1037)
				isBitmap = true;
			}
			else{
				HX_STACK_LINE(1039)
				if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
					HX_STACK_LINE(1041)
					isClass = false;
					HX_STACK_LINE(1042)
					isBitmap = false;
				}
				else{
					HX_STACK_LINE(1045)
					return null();
				}
			}
		}
		HX_STACK_LINE(1049)
		::String additionalKey = HX_CSTRING("");		HX_STACK_VAR(additionalKey,"additionalKey");
		HX_STACK_LINE(1051)
		if (((bool((bool((bool((FrameWidth != (int)0)) || bool((FrameHeight != (int)0)))) || bool((SpacingX != (int)1)))) || bool((SpacingY != (int)1))))){
			HX_STACK_LINE(1052)
			additionalKey = (((((((HX_CSTRING("FrameSize:") + FrameWidth) + HX_CSTRING("_")) + FrameHeight) + HX_CSTRING("_Spacing:")) + SpacingX) + HX_CSTRING("_")) + SpacingY);
		}
		HX_STACK_LINE(1057)
		::String key = Key;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(1058)
		if (((key == null()))){
			HX_STACK_LINE(1060)
			if ((isClass)){
				HX_STACK_LINE(1061)
				key = ::Type_obj::getClassName(hx::TCast< Class >::cast(Graphic));
			}
			else{
				HX_STACK_LINE(1064)
				if ((isBitmap)){
					HX_STACK_LINE(1065)
					if ((!(Unique))){
						HX_STACK_LINE(1068)
						key = ::org::flixel::FlxG_obj::getCacheKeyFor(Graphic);
						HX_STACK_LINE(1069)
						if (((key == null()))){
							HX_STACK_LINE(1070)
							key = ::org::flixel::FlxG_obj::getUniqueBitmapKey(null());
						}
					}
				}
				else{
					HX_STACK_LINE(1076)
					key = Graphic;
				}
			}
			HX_STACK_LINE(1079)
			hx::AddEq(key,(  ((Reverse)) ? ::String(HX_CSTRING("_REVERSE_")) : ::String(HX_CSTRING("")) ));
			HX_STACK_LINE(1080)
			hx::AddEq(key,additionalKey);
			HX_STACK_LINE(1082)
			if ((Unique)){
				HX_STACK_LINE(1083)
				key = ::org::flixel::FlxG_obj::getUniqueBitmapKey((  (((key == null()))) ? ::String(HX_CSTRING("pixels")) : ::String(key) ));
			}
		}
		HX_STACK_LINE(1088)
		::flash::display::BitmapData tempBitmap;		HX_STACK_VAR(tempBitmap,"tempBitmap");
		HX_STACK_LINE(1091)
		if ((!(::org::flixel::FlxG_obj::checkBitmapCache(key)))){
			HX_STACK_LINE(1093)
			::flash::display::BitmapData bd = null();		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(1094)
			if ((isClass)){
				HX_STACK_LINE(1095)
				bd = ::Type_obj::createInstance(hx::TCast< Class >::cast(Graphic),Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
			}
			else{
				HX_STACK_LINE(1098)
				if ((isBitmap)){
					HX_STACK_LINE(1099)
					bd = Graphic;
				}
				else{
					HX_STACK_LINE(1103)
					bd = ::org::flixel::FlxAssets_obj::getBitmapData(Graphic);
				}
			}
			HX_STACK_LINE(1108)
			if (((additionalKey != HX_CSTRING("")))){
				HX_STACK_LINE(1110)
				int numHorizontalFrames = (  (((FrameWidth == (int)0))) ? int((int)1) : int(::Std_obj::_int((Float(bd->get_width()) / Float(FrameWidth)))) );		HX_STACK_VAR(numHorizontalFrames,"numHorizontalFrames");
				HX_STACK_LINE(1111)
				int numVerticalFrames = (  (((FrameHeight == (int)0))) ? int((int)1) : int(::Std_obj::_int((Float(bd->get_height()) / Float(FrameHeight)))) );		HX_STACK_VAR(numVerticalFrames,"numVerticalFrames");
				HX_STACK_LINE(1113)
				FrameWidth = (  (((FrameWidth == (int)0))) ? int(bd->get_width()) : int(FrameWidth) );
				HX_STACK_LINE(1114)
				FrameHeight = (  (((FrameHeight == (int)0))) ? int(bd->get_height()) : int(FrameHeight) );
				HX_STACK_LINE(1116)
				::flash::display::BitmapData tempBitmap1 = ::flash::display::BitmapData_obj::__new((bd->get_width() + (numHorizontalFrames * SpacingX)),(bd->get_height() + (numVerticalFrames * SpacingY)),true,(int)0,null());		HX_STACK_VAR(tempBitmap1,"tempBitmap1");
				HX_STACK_LINE(1118)
				::flash::geom::Rectangle tempRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,FrameWidth,FrameHeight);		HX_STACK_VAR(tempRect,"tempRect");
				HX_STACK_LINE(1119)
				::flash::geom::Point tempPoint = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tempPoint,"tempPoint");
				HX_STACK_LINE(1121)
				{
					HX_STACK_LINE(1121)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = numHorizontalFrames;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1121)
					while(((_g1 < _g))){
						HX_STACK_LINE(1121)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(1123)
						tempPoint->x = (i * ((FrameWidth + SpacingX)));
						HX_STACK_LINE(1124)
						tempRect->x = (i * FrameWidth);
						HX_STACK_LINE(1126)
						{
							HX_STACK_LINE(1126)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							int _g2 = numVerticalFrames;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1126)
							while(((_g3 < _g2))){
								HX_STACK_LINE(1126)
								int j = (_g3)++;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1128)
								tempPoint->y = (j * ((FrameHeight + SpacingY)));
								HX_STACK_LINE(1129)
								tempRect->y = (j * FrameHeight);
								HX_STACK_LINE(1130)
								tempBitmap1->copyPixels(bd,tempRect,tempPoint,null(),null(),null());
							}
						}
					}
				}
				HX_STACK_LINE(1134)
				bd = tempBitmap1;
			}
			else{
				HX_STACK_LINE(1149)
				if ((Unique)){
					HX_STACK_LINE(1150)
					bd = bd->clone();
				}
			}
			HX_STACK_LINE(1154)
			::org::flixel::FlxG_obj::_cache->set(key,bd);
		}
		HX_STACK_LINE(1157)
		::org::flixel::FlxG_obj::_lastBitmapDataKey = key;
		HX_STACK_LINE(1158)
		return ::org::flixel::FlxG_obj::_cache->get(key);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxG_obj,addBitmap,return )

::flash::display::BitmapData FlxG_obj::addTilemapBitmap( Dynamic Graphic,hx::Null< bool >  __o_Reverse,hx::Null< bool >  __o_Unique,::String Key,hx::Null< int >  __o_FrameWidth,hx::Null< int >  __o_FrameHeight,hx::Null< int >  __o_RepeatX,hx::Null< int >  __o_RepeatY){
bool Reverse = __o_Reverse.Default(false);
bool Unique = __o_Unique.Default(false);
int FrameWidth = __o_FrameWidth.Default(0);
int FrameHeight = __o_FrameHeight.Default(0);
int RepeatX = __o_RepeatX.Default(1);
int RepeatY = __o_RepeatY.Default(1);
	HX_STACK_PUSH("FlxG::addTilemapBitmap","org/flixel/FlxG.hx",1174);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Reverse,"Reverse");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
	HX_STACK_ARG(FrameWidth,"FrameWidth");
	HX_STACK_ARG(FrameHeight,"FrameHeight");
	HX_STACK_ARG(RepeatX,"RepeatX");
	HX_STACK_ARG(RepeatY,"RepeatY");
{
		HX_STACK_LINE(1175)
		::flash::display::BitmapData bitmap = ::org::flixel::FlxG_obj::addBitmap(Graphic,Reverse,Unique,Key,FrameWidth,FrameHeight,(RepeatX + (int)1),(RepeatY + (int)1));		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(1178)
		int extendedFrameWidth = ((FrameWidth + RepeatX) + (int)1);		HX_STACK_VAR(extendedFrameWidth,"extendedFrameWidth");
		HX_STACK_LINE(1179)
		int extendedFrameHeight = ((FrameHeight + RepeatY) + (int)1);		HX_STACK_VAR(extendedFrameHeight,"extendedFrameHeight");
		HX_STACK_LINE(1180)
		int numCols = ::Std_obj::_int((Float(bitmap->get_width()) / Float(extendedFrameWidth)));		HX_STACK_VAR(numCols,"numCols");
		HX_STACK_LINE(1181)
		int numRows = ::Std_obj::_int((Float(bitmap->get_height()) / Float(extendedFrameHeight)));		HX_STACK_VAR(numRows,"numRows");
		HX_STACK_LINE(1182)
		::flash::geom::Rectangle tempRect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempRect,"tempRect");
		HX_STACK_LINE(1183)
		::flash::geom::Point tempPoint = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tempPoint,"tempPoint");
		HX_STACK_LINE(1184)
		int pixelColor;		HX_STACK_VAR(pixelColor,"pixelColor");
		HX_STACK_LINE(1186)
		tempRect->y = (int)0;
		HX_STACK_LINE(1187)
		tempRect->width = (int)1;
		HX_STACK_LINE(1188)
		tempRect->height = bitmap->get_height();
		HX_STACK_LINE(1189)
		tempPoint->y = (int)0;
		HX_STACK_LINE(1190)
		{
			HX_STACK_LINE(1190)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1190)
			while(((_g < numCols))){
				HX_STACK_LINE(1190)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1192)
				int tempX = ((i * extendedFrameWidth) + FrameWidth);		HX_STACK_VAR(tempX,"tempX");
				HX_STACK_LINE(1193)
				tempRect->x = (tempX - (int)1);
				HX_STACK_LINE(1195)
				{
					HX_STACK_LINE(1195)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1195)
					while(((_g1 < RepeatX))){
						HX_STACK_LINE(1195)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1197)
						tempPoint->x = (tempX + j);
						HX_STACK_LINE(1198)
						bitmap->copyPixels(bitmap,tempRect,tempPoint,null(),null(),null());
					}
				}
			}
		}
		HX_STACK_LINE(1202)
		tempRect->x = (int)0;
		HX_STACK_LINE(1203)
		tempRect->width = bitmap->get_width();
		HX_STACK_LINE(1204)
		tempRect->height = (int)1;
		HX_STACK_LINE(1205)
		tempPoint->x = (int)0;
		HX_STACK_LINE(1206)
		{
			HX_STACK_LINE(1206)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1206)
			while(((_g < numRows))){
				HX_STACK_LINE(1206)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1208)
				int tempY = ((i * extendedFrameHeight) + FrameHeight);		HX_STACK_VAR(tempY,"tempY");
				HX_STACK_LINE(1209)
				tempRect->y = (tempY - (int)1);
				HX_STACK_LINE(1211)
				{
					HX_STACK_LINE(1211)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1211)
					while(((_g1 < RepeatY))){
						HX_STACK_LINE(1211)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1213)
						tempPoint->y = (tempY + j);
						HX_STACK_LINE(1214)
						bitmap->copyPixels(bitmap,tempRect,tempPoint,null(),null(),null());
					}
				}
			}
		}
		HX_STACK_LINE(1218)
		return bitmap;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxG_obj,addTilemapBitmap,return )

::String FlxG_obj::getCacheKeyFor( ::flash::display::BitmapData bmd){
	HX_STACK_PUSH("FlxG::getCacheKeyFor","org/flixel/FlxG.hx",1227);
	HX_STACK_ARG(bmd,"bmd");
	HX_STACK_LINE(1228)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::org::flixel::FlxG_obj::_cache->keys());  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(1230)
			::flash::display::BitmapData data = ::org::flixel::FlxG_obj::_cache->get(key);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1231)
			if (((data == bmd))){
				HX_STACK_LINE(1232)
				return key;
			}
		}
;
	}
	HX_STACK_LINE(1236)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,getCacheKeyFor,return )

::String FlxG_obj::getUniqueBitmapKey( ::String __o_baseKey){
::String baseKey = __o_baseKey.Default(HX_CSTRING("pixels"));
	HX_STACK_PUSH("FlxG::getUniqueBitmapKey","org/flixel/FlxG.hx",1245);
	HX_STACK_ARG(baseKey,"baseKey");
{
		HX_STACK_LINE(1246)
		if ((::org::flixel::FlxG_obj::checkBitmapCache(baseKey))){
			HX_STACK_LINE(1248)
			int inc = (int)0;		HX_STACK_VAR(inc,"inc");
			HX_STACK_LINE(1249)
			::String ukey;		HX_STACK_VAR(ukey,"ukey");
			HX_STACK_LINE(1250)
			do{
				HX_STACK_LINE(1251)
				ukey = (baseKey + (inc)++);
			}
while((::org::flixel::FlxG_obj::checkBitmapCache(ukey)));
			HX_STACK_LINE(1254)
			baseKey = ukey;
		}
		HX_STACK_LINE(1256)
		return baseKey;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,getUniqueBitmapKey,return )

bool FlxG_obj::fromAssetsCache( ::flash::display::BitmapData bmd){
	HX_STACK_PUSH("FlxG::fromAssetsCache","org/flixel/FlxG.hx",1260);
	HX_STACK_ARG(bmd,"bmd");
	HX_STACK_LINE(1261)
	::haxe::ds::StringMap cachedBitmapData = ::openfl::Assets_obj::cachedBitmapData;		HX_STACK_VAR(cachedBitmapData,"cachedBitmapData");
	HX_STACK_LINE(1262)
	if (((cachedBitmapData != null()))){
		HX_STACK_LINE(1263)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(cachedBitmapData->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(1266)
				::flash::display::BitmapData cacheBmd = cachedBitmapData->get(key);		HX_STACK_VAR(cacheBmd,"cacheBmd");
				HX_STACK_LINE(1267)
				if (((cacheBmd == bmd))){
					HX_STACK_LINE(1268)
					return true;
				}
			}
;
		}
	}
	HX_STACK_LINE(1273)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,fromAssetsCache,return )

Void FlxG_obj::removeBitmap( ::String Graphic){
{
		HX_STACK_PUSH("FlxG::removeBitmap","org/flixel/FlxG.hx",1281);
		HX_STACK_ARG(Graphic,"Graphic");
		HX_STACK_LINE(1281)
		if ((::org::flixel::FlxG_obj::_cache->exists(Graphic))){
			HX_STACK_LINE(1284)
			::flash::display::BitmapData bmd = ::org::flixel::FlxG_obj::_cache->get(Graphic);		HX_STACK_VAR(bmd,"bmd");
			HX_STACK_LINE(1285)
			::org::flixel::FlxG_obj::_cache->remove(Graphic);
			HX_STACK_LINE(1286)
			if (((::org::flixel::FlxG_obj::fromAssetsCache(bmd) == false))){
				HX_STACK_LINE(1288)
				bmd->dispose();
				HX_STACK_LINE(1289)
				bmd = null();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,removeBitmap,(void))

Void FlxG_obj::clearBitmapCache( ){
{
		HX_STACK_PUSH("FlxG::clearBitmapCache","org/flixel/FlxG.hx",1298);
		HX_STACK_LINE(1299)
		::flash::display::BitmapData bmd;		HX_STACK_VAR(bmd,"bmd");
		HX_STACK_LINE(1300)
		if (((::org::flixel::FlxG_obj::_cache != null()))){
			HX_STACK_LINE(1301)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::org::flixel::FlxG_obj::_cache->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(1304)
					bmd = ::org::flixel::FlxG_obj::_cache->get(key);
					HX_STACK_LINE(1305)
					::org::flixel::FlxG_obj::_cache->remove(key);
					HX_STACK_LINE(1306)
					if (((bool((bmd != null())) && bool((::org::flixel::FlxG_obj::fromAssetsCache(bmd) == false))))){
						HX_STACK_LINE(1308)
						bmd->dispose();
						HX_STACK_LINE(1309)
						bmd = null();
					}
				}
;
			}
		}
		HX_STACK_LINE(1313)
		::org::flixel::FlxG_obj::_cache = ::haxe::ds::StringMap_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,clearBitmapCache,(void))

Void FlxG_obj::clearAssetsCache( ){
{
		HX_STACK_PUSH("FlxG::clearAssetsCache","org/flixel/FlxG.hx",1320);
		HX_STACK_LINE(1320)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::openfl::Assets_obj::cachedBitmapData->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(1323)
				::flash::display::BitmapData bmd = ::openfl::Assets_obj::cachedBitmapData->get(key);		HX_STACK_VAR(bmd,"bmd");
				HX_STACK_LINE(1324)
				bmd->dispose();
				HX_STACK_LINE(1325)
				::openfl::Assets_obj::cachedBitmapData->remove(key);
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,clearAssetsCache,(void))

::flash::display::Stage FlxG_obj::stage;

::flash::display::Stage FlxG_obj::get_stage( ){
	HX_STACK_PUSH("FlxG::get_stage","org/flixel/FlxG.hx",1336);
	HX_STACK_LINE(1337)
	if (((::org::flixel::FlxG_obj::_game->get_stage() != null()))){
		HX_STACK_LINE(1338)
		return ::org::flixel::FlxG_obj::_game->get_stage();
	}
	HX_STACK_LINE(1341)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_stage,return )

::org::flixel::FlxState FlxG_obj::state;

::org::flixel::FlxState FlxG_obj::get_state( ){
	HX_STACK_PUSH("FlxG::get_state","org/flixel/FlxG.hx",1350);
	HX_STACK_LINE(1350)
	return ::org::flixel::FlxG_obj::_game->_state;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_state,return )

Void FlxG_obj::switchState( ::org::flixel::FlxState State){
{
		HX_STACK_PUSH("FlxG::switchState","org/flixel/FlxG.hx",1358);
		HX_STACK_ARG(State,"State");
		HX_STACK_LINE(1358)
		::org::flixel::FlxG_obj::_game->_requestedState = State;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,switchState,(void))

Void FlxG_obj::setDebuggerLayout( int Layout){
{
		HX_STACK_PUSH("FlxG::setDebuggerLayout","org/flixel/FlxG.hx",1368);
		HX_STACK_ARG(Layout,"Layout");
		HX_STACK_LINE(1368)
		::org::flixel::FlxG_obj::_game->_debugger->setLayout(Layout);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,setDebuggerLayout,(void))

Void FlxG_obj::resetDebuggerLayout( ){
{
		HX_STACK_PUSH("FlxG::resetDebuggerLayout","org/flixel/FlxG.hx",1376);
		HX_STACK_LINE(1376)
		::org::flixel::FlxG_obj::_game->_debugger->resetLayout();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetDebuggerLayout,(void))

::org::flixel::FlxCamera FlxG_obj::addCamera( ::org::flixel::FlxCamera NewCamera){
	HX_STACK_PUSH("FlxG::addCamera","org/flixel/FlxG.hx",1388);
	HX_STACK_ARG(NewCamera,"NewCamera");
	HX_STACK_LINE(1389)
	::org::flixel::FlxG_obj::_game->addChildAt(NewCamera->_flashSprite,::org::flixel::FlxG_obj::_game->getChildIndex(::org::flixel::FlxG_obj::_game->_inputContainer));
	HX_STACK_LINE(1390)
	::org::flixel::FlxG_obj::cameras->push(NewCamera);
	HX_STACK_LINE(1391)
	NewCamera->ID = (::org::flixel::FlxG_obj::cameras->length - (int)1);
	HX_STACK_LINE(1392)
	return NewCamera;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,addCamera,return )

Void FlxG_obj::removeCamera( ::org::flixel::FlxCamera Camera,hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(true);
	HX_STACK_PUSH("FlxG::removeCamera","org/flixel/FlxG.hx",1401);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(Destroy,"Destroy");
{
		HX_STACK_LINE(1402)
		if (((bool((Camera != null())) && bool(::org::flixel::FlxG_obj::_game->contains(Camera->_flashSprite))))){
			HX_STACK_LINE(1404)
			::org::flixel::FlxG_obj::_game->removeChild(Camera->_flashSprite);
			struct _Function_2_1{
				inline static int Block( ::org::flixel::FlxCamera &Camera){
					HX_STACK_PUSH("*::closure","org/flixel/FlxG.hx",1405);
					{
						HX_STACK_LINE(1405)
						Dynamic array = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(array,"array");
						int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
						HX_STACK_LINE(1405)
						int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(1405)
						int index = (int)-1;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(1405)
						{
							HX_STACK_LINE(1405)
							int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1405)
							while(((_g < len))){
								HX_STACK_LINE(1405)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1405)
								if (((array->__GetItem(i) == Camera))){
									HX_STACK_LINE(1405)
									index = i;
									HX_STACK_LINE(1405)
									break;
								}
							}
						}
						HX_STACK_LINE(1405)
						return index;
					}
					return null();
				}
			};
			HX_STACK_LINE(1405)
			int index = _Function_2_1::Block(Camera);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(1406)
			if (((index >= (int)0))){
				HX_STACK_LINE(1407)
				::org::flixel::FlxG_obj::cameras->splice(index,(int)1);
			}
		}
		else{
			HX_STACK_LINE(1410)
			::org::flixel::FlxG_obj::error(HX_CSTRING("Removing camera, not part of game."));
		}
		HX_STACK_LINE(1415)
		{
			HX_STACK_LINE(1415)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::org::flixel::FlxG_obj::cameras->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1415)
			while(((_g1 < _g))){
				HX_STACK_LINE(1415)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1417)
				::org::flixel::FlxG_obj::cameras->__get(i).StaticCast< ::org::flixel::FlxCamera >()->ID = i;
			}
		}
		HX_STACK_LINE(1421)
		if ((Destroy)){
			HX_STACK_LINE(1422)
			Camera->destroy();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,removeCamera,(void))

Void FlxG_obj::resetCameras( ::org::flixel::FlxCamera NewCamera){
{
		HX_STACK_PUSH("FlxG::resetCameras","org/flixel/FlxG.hx",1434);
		HX_STACK_ARG(NewCamera,"NewCamera");
		HX_STACK_LINE(1435)
		::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
		HX_STACK_LINE(1436)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1437)
		int l = ::org::flixel::FlxG_obj::cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1438)
		while(((i < l))){
			HX_STACK_LINE(1440)
			cam = ::org::flixel::FlxG_obj::cameras->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
			HX_STACK_LINE(1441)
			::org::flixel::FlxG_obj::_game->removeChild(cam->_flashSprite);
			HX_STACK_LINE(1442)
			cam->destroy();
		}
		HX_STACK_LINE(1444)
		::org::flixel::FlxG_obj::cameras->splice((int)0,::org::flixel::FlxG_obj::cameras->length);
		HX_STACK_LINE(1446)
		if (((NewCamera == null()))){
			HX_STACK_LINE(1447)
			NewCamera = ::org::flixel::FlxCamera_obj::__new((int)0,(int)0,::org::flixel::FlxG_obj::width,::org::flixel::FlxG_obj::height,null());
		}
		HX_STACK_LINE(1449)
		::org::flixel::FlxG_obj::camera = ::org::flixel::FlxG_obj::addCamera(NewCamera);
		HX_STACK_LINE(1450)
		NewCamera->ID = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,resetCameras,(void))

Void FlxG_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxG::flash","org/flixel/FlxG.hx",1461);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(1462)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1463)
		int l = ::org::flixel::FlxG_obj::cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1464)
		while(((i < l))){
			HX_STACK_LINE(1465)
			::org::flixel::FlxG_obj::cameras->__get((i)++).StaticCast< ::org::flixel::FlxCamera >()->flash(Color,Duration,OnComplete,Force);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,flash,(void))

Void FlxG_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxG::fade","org/flixel/FlxG.hx",1479);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(FadeIn,"FadeIn");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(1480)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1481)
		int l = ::org::flixel::FlxG_obj::cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1482)
		while(((i < l))){
			HX_STACK_LINE(1483)
			::org::flixel::FlxG_obj::cameras->__get((i)++).StaticCast< ::org::flixel::FlxCamera >()->fade(Color,Duration,FadeIn,OnComplete,Force);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxG_obj,fade,(void))

Void FlxG_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Direction){
Float Intensity = __o_Intensity.Default(0.05);
Float Duration = __o_Duration.Default(0.5);
bool Force = __o_Force.Default(true);
int Direction = __o_Direction.Default(0);
	HX_STACK_PUSH("FlxG::shake","org/flixel/FlxG.hx",1497);
	HX_STACK_ARG(Intensity,"Intensity");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
	HX_STACK_ARG(Direction,"Direction");
{
		HX_STACK_LINE(1498)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1499)
		int l = ::org::flixel::FlxG_obj::cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1500)
		while(((i < l))){
			HX_STACK_LINE(1501)
			::org::flixel::FlxG_obj::cameras->__get((i)++).StaticCast< ::org::flixel::FlxCamera >()->shake(Intensity,Duration,OnComplete,Force,Direction);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxG_obj,shake,(void))

int FlxG_obj::get_bgColor( ){
	HX_STACK_PUSH("FlxG::get_bgColor","org/flixel/FlxG.hx",1512);
	HX_STACK_LINE(1512)
	if (((::org::flixel::FlxG_obj::camera == null()))){
		HX_STACK_LINE(1514)
		return (int)-16777216;
	}
	else{
		HX_STACK_LINE(1518)
		return ::org::flixel::FlxG_obj::camera->bgColor;
	}
	HX_STACK_LINE(1512)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_bgColor,return )

int FlxG_obj::set_bgColor( int Color){
	HX_STACK_PUSH("FlxG::set_bgColor","org/flixel/FlxG.hx",1524);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(1525)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1526)
	int l = ::org::flixel::FlxG_obj::cameras->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1527)
	while(((i < l))){
		HX_STACK_LINE(1528)
		::org::flixel::FlxG_obj::cameras->__get((i)++).StaticCast< ::org::flixel::FlxCamera >()->bgColor = Color;
	}
	HX_STACK_LINE(1531)
	return Color;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_bgColor,return )

bool FlxG_obj::overlap( ::org::flixel::FlxBasic ObjectOrGroup1,::org::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback){
	HX_STACK_PUSH("FlxG::overlap","org/flixel/FlxG.hx",1547);
	HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1");
	HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2");
	HX_STACK_ARG(NotifyCallback,"NotifyCallback");
	HX_STACK_ARG(ProcessCallback,"ProcessCallback");
	HX_STACK_LINE(1548)
	if (((ObjectOrGroup1 == null()))){
		HX_STACK_LINE(1549)
		ObjectOrGroup1 = ::org::flixel::FlxG_obj::get_state();
	}
	HX_STACK_LINE(1552)
	if (((ObjectOrGroup2 == ObjectOrGroup1))){
		HX_STACK_LINE(1553)
		ObjectOrGroup2 = null();
	}
	HX_STACK_LINE(1556)
	::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
	HX_STACK_LINE(1557)
	::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
	HX_STACK_LINE(1558)
	quadTree->load(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,ProcessCallback);
	HX_STACK_LINE(1559)
	bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1560)
	quadTree->destroy();
	HX_STACK_LINE(1561)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,overlap,return )

bool FlxG_obj::collide( ::org::flixel::FlxBasic ObjectOrGroup1,::org::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback){
	HX_STACK_PUSH("FlxG::collide","org/flixel/FlxG.hx",1578);
	HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1");
	HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2");
	HX_STACK_ARG(NotifyCallback,"NotifyCallback");
	struct _Function_1_1{
		inline static bool Block( ::org::flixel::FlxBasic &ObjectOrGroup2,Dynamic &NotifyCallback,::org::flixel::FlxBasic &ObjectOrGroup1){
			HX_STACK_PUSH("*::closure","org/flixel/FlxG.hx",1579);
			{
				HX_STACK_LINE(1579)
				::org::flixel::FlxBasic ObjectOrGroup11 = ObjectOrGroup1;		HX_STACK_VAR(ObjectOrGroup11,"ObjectOrGroup11");
				::org::flixel::FlxBasic ObjectOrGroup21 = ObjectOrGroup2;		HX_STACK_VAR(ObjectOrGroup21,"ObjectOrGroup21");
				HX_STACK_LINE(1579)
				if (((ObjectOrGroup11 == null()))){
					HX_STACK_LINE(1579)
					ObjectOrGroup11 = ::org::flixel::FlxG_obj::get_state();
				}
				HX_STACK_LINE(1579)
				if (((ObjectOrGroup21 == ObjectOrGroup11))){
					HX_STACK_LINE(1579)
					ObjectOrGroup21 = null();
				}
				HX_STACK_LINE(1579)
				::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
				HX_STACK_LINE(1579)
				::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
				HX_STACK_LINE(1579)
				quadTree->load(ObjectOrGroup11,ObjectOrGroup21,NotifyCallback,::org::flixel::FlxObject_obj::separate_dyn());
				HX_STACK_LINE(1579)
				bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1579)
				quadTree->destroy();
				HX_STACK_LINE(1579)
				return result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1578)
	return _Function_1_1::Block(ObjectOrGroup2,NotifyCallback,ObjectOrGroup1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxG_obj,collide,return )

::org::flixel::FlxBasic FlxG_obj::addPlugin( ::org::flixel::FlxBasic Plugin){
	HX_STACK_PUSH("FlxG::addPlugin","org/flixel/FlxG.hx",1588);
	HX_STACK_ARG(Plugin,"Plugin");
	HX_STACK_LINE(1590)
	Array< ::Dynamic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
	HX_STACK_LINE(1591)
	int l = pluginList->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1592)
	{
		HX_STACK_LINE(1592)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1592)
		while(((_g < l))){
			HX_STACK_LINE(1592)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1594)
			if (((pluginList->__get(i).StaticCast< ::org::flixel::FlxBasic >()->toString() == Plugin->toString()))){
				HX_STACK_LINE(1595)
				return Plugin;
			}
		}
	}
	HX_STACK_LINE(1601)
	pluginList->push(Plugin);
	HX_STACK_LINE(1602)
	return Plugin;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,addPlugin,return )

::org::flixel::FlxBasic FlxG_obj::getPlugin( ::Class ClassType){
	HX_STACK_PUSH("FlxG::getPlugin","org/flixel/FlxG.hx",1611);
	HX_STACK_ARG(ClassType,"ClassType");
	HX_STACK_LINE(1612)
	Array< ::Dynamic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
	HX_STACK_LINE(1613)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1614)
	int l = pluginList->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1615)
	while(((i < l))){
		HX_STACK_LINE(1617)
		if ((::Std_obj::is(pluginList->__get(i).StaticCast< ::org::flixel::FlxBasic >(),ClassType))){
			HX_STACK_LINE(1618)
			return ::org::flixel::FlxG_obj::plugins->__get(i).StaticCast< ::org::flixel::FlxBasic >();
		}
		HX_STACK_LINE(1621)
		(i)++;
	}
	HX_STACK_LINE(1623)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,getPlugin,return )

::org::flixel::FlxBasic FlxG_obj::removePlugin( ::org::flixel::FlxBasic Plugin){
	HX_STACK_PUSH("FlxG::removePlugin","org/flixel/FlxG.hx",1632);
	HX_STACK_ARG(Plugin,"Plugin");
	HX_STACK_LINE(1634)
	Array< ::Dynamic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
	HX_STACK_LINE(1635)
	int i = (pluginList->length - (int)1);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1636)
	while(((i >= (int)0))){
		HX_STACK_LINE(1638)
		if (((pluginList->__get(i).StaticCast< ::org::flixel::FlxBasic >() == Plugin))){
			HX_STACK_LINE(1640)
			pluginList->splice(i,(int)1);
			HX_STACK_LINE(1641)
			return Plugin;
		}
		HX_STACK_LINE(1643)
		(i)--;
	}
	HX_STACK_LINE(1645)
	return Plugin;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,removePlugin,return )

bool FlxG_obj::removePluginType( ::Class ClassType){
	HX_STACK_PUSH("FlxG::removePluginType","org/flixel/FlxG.hx",1654);
	HX_STACK_ARG(ClassType,"ClassType");
	HX_STACK_LINE(1656)
	bool results = false;		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(1657)
	Array< ::Dynamic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
	HX_STACK_LINE(1658)
	int i = (pluginList->length - (int)1);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1659)
	while(((i >= (int)0))){
		HX_STACK_LINE(1661)
		if ((::Std_obj::is(pluginList->__get(i).StaticCast< ::org::flixel::FlxBasic >(),ClassType))){
			HX_STACK_LINE(1663)
			pluginList->splice(i,(int)1);
			HX_STACK_LINE(1664)
			results = true;
		}
		HX_STACK_LINE(1666)
		(i)--;
	}
	HX_STACK_LINE(1668)
	return results;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,removePluginType,return )

Void FlxG_obj::init( ::org::flixel::FlxGame Game,int Width,int Height,Float Zoom){
{
		HX_STACK_PUSH("FlxG::init","org/flixel/FlxG.hx",1675);
		HX_STACK_ARG(Game,"Game");
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_ARG(Zoom,"Zoom");
		HX_STACK_LINE(1678)
		::org::flixel::FlxG_obj::clearBitmapCache();
		HX_STACK_LINE(1680)
		::org::flixel::FlxG_obj::_game = Game;
		HX_STACK_LINE(1681)
		::org::flixel::FlxG_obj::width = ::Std_obj::_int(::Math_obj::abs(Width));
		HX_STACK_LINE(1682)
		::org::flixel::FlxG_obj::height = ::Std_obj::_int(::Math_obj::abs(Height));
		HX_STACK_LINE(1684)
		::org::flixel::FlxG_obj::mute = false;
		HX_STACK_LINE(1685)
		::org::flixel::FlxG_obj::set_volume(0.5);
		HX_STACK_LINE(1686)
		::org::flixel::FlxG_obj::sounds = ::org::flixel::FlxTypedGroup_obj::__new(null());
		HX_STACK_LINE(1687)
		::org::flixel::FlxG_obj::volumeHandler = null();
		HX_STACK_LINE(1689)
		if (((::org::flixel::FlxG_obj::flashGfxSprite == null()))){
			HX_STACK_LINE(1691)
			::org::flixel::FlxG_obj::flashGfxSprite = ::flash::display::Sprite_obj::__new();
			HX_STACK_LINE(1692)
			::org::flixel::FlxG_obj::flashGfx = ::org::flixel::FlxG_obj::flashGfxSprite->get_graphics();
		}
		HX_STACK_LINE(1695)
		::org::flixel::FlxCamera_obj::defaultZoom = Zoom;
		HX_STACK_LINE(1696)
		::org::flixel::FlxG_obj::_cameraRect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		HX_STACK_LINE(1697)
		::org::flixel::FlxG_obj::cameras = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(1698)
		::org::flixel::FlxG_obj::useBufferLocking = false;
		HX_STACK_LINE(1700)
		::org::flixel::FlxG_obj::plugins = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(1703)
		::org::flixel::FlxG_obj::addPlugin(::org::flixel::plugin::DebugPathDisplay_obj::__new());
		HX_STACK_LINE(1706)
		::org::flixel::FlxG_obj::addPlugin(::org::flixel::plugin::TimerManager_obj::__new());
		HX_STACK_LINE(1708)
		::org::flixel::FlxG_obj::mobile = false;
		HX_STACK_LINE(1710)
		::org::flixel::FlxG_obj::log = ::Reflect_obj::makeVarArgs(::org::flixel::FlxG_obj::_log_dyn());
		HX_STACK_LINE(1711)
		::org::flixel::FlxG_obj::warn = ::Reflect_obj::makeVarArgs(::org::flixel::FlxG_obj::_warn_dyn());
		HX_STACK_LINE(1712)
		::org::flixel::FlxG_obj::error = ::Reflect_obj::makeVarArgs(::org::flixel::FlxG_obj::_error_dyn());
		HX_STACK_LINE(1713)
		::org::flixel::FlxG_obj::notice = ::Reflect_obj::makeVarArgs(::org::flixel::FlxG_obj::_notice_dyn());
		HX_STACK_LINE(1716)
		::org::flixel::FlxG_obj::visualDebug = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,init,(void))

Void FlxG_obj::reset( ){
{
		HX_STACK_PUSH("FlxG::reset","org/flixel/FlxG.hx",1724);
		HX_STACK_LINE(1725)
		::org::flixel::plugin::pxText::PxBitmapFont_obj::clearStorage();
		HX_STACK_LINE(1726)
		::org::flixel::system::layer::Atlas_obj::clearAtlasCache();
		HX_STACK_LINE(1727)
		::org::flixel::system::layer::TileSheetData_obj::clear();
		HX_STACK_LINE(1729)
		::org::flixel::FlxG_obj::clearBitmapCache();
		HX_STACK_LINE(1730)
		::org::flixel::FlxG_obj::resetInput();
		HX_STACK_LINE(1731)
		::org::flixel::FlxG_obj::destroySounds(true);
		HX_STACK_LINE(1732)
		::org::flixel::FlxG_obj::paused = false;
		HX_STACK_LINE(1733)
		::org::flixel::FlxG_obj::timeScale = 1.0;
		HX_STACK_LINE(1734)
		::org::flixel::FlxG_obj::elapsed = (int)0;
		HX_STACK_LINE(1735)
		::org::flixel::util::FlxRandom_obj::globalSeed = ::Math_obj::random();
		HX_STACK_LINE(1736)
		::org::flixel::FlxG_obj::worldBounds = ::org::flixel::util::FlxRect_obj::__new((int)-10,(int)-10,(::org::flixel::FlxG_obj::width + (int)20),(::org::flixel::FlxG_obj::height + (int)20));
		HX_STACK_LINE(1737)
		::org::flixel::FlxG_obj::worldDivisions = (int)6;
		HX_STACK_LINE(1739)
		::org::flixel::plugin::DebugPathDisplay debugPathDisplay = hx::TCast< org::flixel::plugin::DebugPathDisplay >::cast(::org::flixel::FlxG_obj::getPlugin(hx::ClassOf< ::org::flixel::plugin::DebugPathDisplay >()));		HX_STACK_VAR(debugPathDisplay,"debugPathDisplay");
		HX_STACK_LINE(1740)
		if (((debugPathDisplay != null()))){
			HX_STACK_LINE(1741)
			debugPathDisplay->clear();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,reset,(void))

Void FlxG_obj::lockCameras( ){
{
		HX_STACK_PUSH("FlxG::lockCameras","org/flixel/FlxG.hx",1751);
		HX_STACK_LINE(1752)
		::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
		HX_STACK_LINE(1753)
		Array< ::Dynamic > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
		HX_STACK_LINE(1754)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1755)
		int l = cams->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1756)
		while(((i < l))){
			HX_STACK_LINE(1758)
			cam = cams->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
			HX_STACK_LINE(1759)
			if (((bool((bool((cam == null())) || bool(!(cam->exists)))) || bool(!(cam->visible))))){
				HX_STACK_LINE(1760)
				continue;
			}
			HX_STACK_LINE(1772)
			{
				HX_STACK_LINE(1772)
				::org::flixel::system::layer::DrawStackItem currItem = cam->_headOfDrawStack->next;		HX_STACK_VAR(currItem,"currItem");
				HX_STACK_LINE(1772)
				while(((currItem != null()))){
					HX_STACK_LINE(1772)
					{
						HX_STACK_LINE(1772)
						currItem->atlas = null();
						HX_STACK_LINE(1772)
						currItem->initialized = false;
						HX_STACK_LINE(1772)
						currItem->position = (int)0;
					}
					HX_STACK_LINE(1772)
					::org::flixel::system::layer::DrawStackItem newStorageHead = currItem;		HX_STACK_VAR(newStorageHead,"newStorageHead");
					HX_STACK_LINE(1772)
					currItem = currItem->next;
					HX_STACK_LINE(1772)
					if (((::org::flixel::FlxCamera_obj::_storageHead == null()))){
						HX_STACK_LINE(1772)
						::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
						HX_STACK_LINE(1772)
						newStorageHead->next = null();
					}
					else{
						HX_STACK_LINE(1772)
						newStorageHead->next = ::org::flixel::FlxCamera_obj::_storageHead;
						HX_STACK_LINE(1772)
						::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
					}
				}
				HX_STACK_LINE(1772)
				{
					HX_STACK_LINE(1772)
					::org::flixel::system::layer::DrawStackItem _this = cam->_headOfDrawStack;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1772)
					_this->atlas = null();
					HX_STACK_LINE(1772)
					_this->initialized = false;
					HX_STACK_LINE(1772)
					_this->position = (int)0;
				}
				HX_STACK_LINE(1772)
				cam->_headOfDrawStack->next = null();
				HX_STACK_LINE(1772)
				cam->_currentStackItem = cam->_headOfDrawStack;
			}
			HX_STACK_LINE(1773)
			cam->_canvas->get_graphics()->clear();
			HX_STACK_LINE(1775)
			cam->_debugLayer->get_graphics()->clear();
			HX_STACK_LINE(1782)
			cam->fill((int(cam->bgColor) & int((int)16777215)),true,(Float(((int((int(cam->bgColor) >> int((int)24))) & int((int)255)))) / Float((int)255)),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,lockCameras,(void))

Void FlxG_obj::renderCameras( ){
{
		HX_STACK_PUSH("FlxG::renderCameras","org/flixel/FlxG.hx",1789);
		HX_STACK_LINE(1790)
		::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
		HX_STACK_LINE(1791)
		Array< ::Dynamic > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
		HX_STACK_LINE(1792)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1793)
		int l = cams->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1794)
		while(((i < l))){
			HX_STACK_LINE(1796)
			cam = cams->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
			HX_STACK_LINE(1797)
			if (((bool((bool((cam == null())) || bool(!(cam->exists)))) || bool(!(cam->visible))))){
				HX_STACK_LINE(1798)
				continue;
			}
			HX_STACK_LINE(1802)
			cam->render();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,renderCameras,(void))

Void FlxG_obj::unlockCameras( ){
{
		HX_STACK_PUSH("FlxG::unlockCameras","org/flixel/FlxG.hx",1811);
		HX_STACK_LINE(1812)
		::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
		HX_STACK_LINE(1813)
		Array< ::Dynamic > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
		HX_STACK_LINE(1814)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1815)
		int l = cams->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1816)
		while(((i < l))){
			HX_STACK_LINE(1818)
			cam = cams->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
			HX_STACK_LINE(1819)
			if (((bool((bool((cam == null())) || bool(!(cam->exists)))) || bool(!(cam->visible))))){
				HX_STACK_LINE(1820)
				continue;
			}
			HX_STACK_LINE(1823)
			cam->drawFX();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,unlockCameras,(void))

Void FlxG_obj::updateCameras( ){
{
		HX_STACK_PUSH("FlxG::updateCameras","org/flixel/FlxG.hx",1838);
		HX_STACK_LINE(1839)
		::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
		HX_STACK_LINE(1840)
		Array< ::Dynamic > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
		HX_STACK_LINE(1841)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1842)
		int l = cams->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1843)
		while(((i < l))){
			HX_STACK_LINE(1845)
			cam = cams->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
			HX_STACK_LINE(1846)
			if (((bool((cam != null())) && bool(cam->exists)))){
				HX_STACK_LINE(1848)
				if ((cam->active)){
					HX_STACK_LINE(1849)
					cam->update();
				}
				HX_STACK_LINE(1853)
				if (((cam->target == null()))){
					HX_STACK_LINE(1855)
					cam->_flashSprite->set_x((cam->x + cam->_flashOffsetX));
					HX_STACK_LINE(1856)
					cam->_flashSprite->set_y((cam->y + cam->_flashOffsetY));
				}
				HX_STACK_LINE(1859)
				cam->_flashSprite->set_visible(cam->visible);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,updateCameras,(void))

Void FlxG_obj::updatePlugins( ){
{
		HX_STACK_PUSH("FlxG::updatePlugins","org/flixel/FlxG.hx",1868);
		HX_STACK_LINE(1869)
		::org::flixel::FlxBasic plugin;		HX_STACK_VAR(plugin,"plugin");
		HX_STACK_LINE(1870)
		Array< ::Dynamic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
		HX_STACK_LINE(1871)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1872)
		int l = pluginList->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1873)
		while(((i < l))){
			HX_STACK_LINE(1875)
			plugin = pluginList->__get((i)++).StaticCast< ::org::flixel::FlxBasic >();
			HX_STACK_LINE(1876)
			if (((bool(plugin->exists) && bool(plugin->active)))){
				HX_STACK_LINE(1877)
				plugin->update();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,updatePlugins,(void))

Void FlxG_obj::drawPlugins( ){
{
		HX_STACK_PUSH("FlxG::drawPlugins","org/flixel/FlxG.hx",1887);
		HX_STACK_LINE(1888)
		::org::flixel::FlxBasic plugin;		HX_STACK_VAR(plugin,"plugin");
		HX_STACK_LINE(1889)
		Array< ::Dynamic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
		HX_STACK_LINE(1890)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1891)
		int l = pluginList->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1892)
		while(((i < l))){
			HX_STACK_LINE(1894)
			plugin = pluginList->__get((i)++).StaticCast< ::org::flixel::FlxBasic >();
			HX_STACK_LINE(1895)
			if (((bool(plugin->exists) && bool(plugin->visible)))){
				HX_STACK_LINE(1896)
				plugin->draw();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,drawPlugins,(void))

Void FlxG_obj::drawDebugPlugins( ){
{
		HX_STACK_PUSH("FlxG::drawDebugPlugins","org/flixel/FlxG.hx",1904);
		HX_STACK_LINE(1905)
		::org::flixel::FlxBasic plugin;		HX_STACK_VAR(plugin,"plugin");
		HX_STACK_LINE(1906)
		Array< ::Dynamic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
		HX_STACK_LINE(1907)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1908)
		int l = pluginList->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1909)
		while(((i < l))){
			HX_STACK_LINE(1911)
			plugin = pluginList->__get((i)++).StaticCast< ::org::flixel::FlxBasic >();
			HX_STACK_LINE(1912)
			if (((bool((bool(plugin->exists) && bool(plugin->visible))) && bool(!(plugin->ignoreDrawDebug))))){
				HX_STACK_LINE(1913)
				plugin->drawDebug();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,drawDebugPlugins,(void))

::org::flixel::tweens::misc::MultiVarTween FlxG_obj::tween( Dynamic object,Dynamic values,Float duration,Dynamic options){
	HX_STACK_PUSH("FlxG::tween","org/flixel/FlxG.hx",1935);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(values,"values");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(options,"options");
	HX_STACK_LINE(1936)
	int type = (int)8;		HX_STACK_VAR(type,"type");
	Dynamic complete = null();		HX_STACK_VAR(complete,"complete");
	Dynamic ease = null();		HX_STACK_VAR(ease,"ease");
	::org::flixel::FlxBasic tweener = ::org::flixel::FlxG_obj::tweener;		HX_STACK_VAR(tweener,"tweener");
	HX_STACK_LINE(1940)
	if ((::Std_obj::is(object,hx::ClassOf< ::org::flixel::FlxBasic >()))){
		HX_STACK_LINE(1941)
		tweener = hx::TCast< org::flixel::FlxBasic >::cast(object);
	}
	HX_STACK_LINE(1944)
	if (((options != null()))){
		HX_STACK_LINE(1946)
		if ((::Reflect_obj::hasField(options,HX_CSTRING("type")))){
			HX_STACK_LINE(1946)
			type = options->__Field(HX_CSTRING("type"),true);
		}
		HX_STACK_LINE(1947)
		if ((::Reflect_obj::hasField(options,HX_CSTRING("complete")))){
			HX_STACK_LINE(1947)
			complete = options->__Field(HX_CSTRING("complete"),true);
		}
		HX_STACK_LINE(1948)
		if ((::Reflect_obj::hasField(options,HX_CSTRING("ease")))){
			HX_STACK_LINE(1948)
			ease = options->__Field(HX_CSTRING("ease"),true);
		}
		HX_STACK_LINE(1949)
		if ((::Reflect_obj::hasField(options,HX_CSTRING("tweener")))){
			HX_STACK_LINE(1949)
			tweener = options->__Field(HX_CSTRING("tweener"),true);
		}
	}
	HX_STACK_LINE(1951)
	::org::flixel::tweens::misc::MultiVarTween tween = ::org::flixel::tweens::misc::MultiVarTween_obj::__new(complete,type);		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(1952)
	tween->tween(object,values,duration,ease);
	HX_STACK_LINE(1953)
	tweener->addTween(tween,null());
	HX_STACK_LINE(1954)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,tween,return )

Float FlxG_obj::random( ){
	HX_STACK_PUSH("FlxG::random","org/flixel/FlxG.hx",1963);
	struct _Function_1_1{
		inline static Float Block( ){
			HX_STACK_PUSH("*::closure","org/flixel/FlxG.hx",1964);
			{
				HX_STACK_LINE(1964)
				::org::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
				HX_STACK_LINE(1964)
				if (((::org::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
					HX_STACK_LINE(1964)
					hx::AddEq(::org::flixel::util::FlxRandom_obj::globalSeed,(int)1);
				}
				HX_STACK_LINE(1964)
				return ::org::flixel::util::FlxRandom_obj::globalSeed;
			}
			return null();
		}
	};
	HX_STACK_LINE(1963)
	return _Function_1_1::Block();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,random,return )


FlxG_obj::FlxG_obj()
{
}

void FlxG_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxG);
	HX_MARK_END_CLASS();
}

void FlxG_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxG_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mute") ) { return mute; }
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		if (HX_FIELD_EQ(inName,"_log") ) { return _log_dyn(); }
		if (HX_FIELD_EQ(inName,"warn") ) { return warn; }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_game") ) { return _game; }
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		if (HX_FIELD_EQ(inName,"mouse") ) { return mouse; }
		if (HX_FIELD_EQ(inName,"_warn") ) { return _warn_dyn(); }
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		if (HX_FIELD_EQ(inName,"watch") ) { return watch_dyn(); }
		if (HX_FIELD_EQ(inName,"stage") ) { return inCallProp ? get_stage() : stage; }
		if (HX_FIELD_EQ(inName,"state") ) { return inCallProp ? get_state() : state; }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"mobile") ) { return mobile; }
		if (HX_FIELD_EQ(inName,"sounds") ) { return sounds; }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"_cache") ) { return _cache; }
		if (HX_FIELD_EQ(inName,"_error") ) { return _error_dyn(); }
		if (HX_FIELD_EQ(inName,"notice") ) { return notice; }
		if (HX_FIELD_EQ(inName,"stream") ) { return stream_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
		if (HX_FIELD_EQ(inName,"random") ) { return random_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tweener") ) { return tweener; }
		if (HX_FIELD_EQ(inName,"bgColor") ) { return get_bgColor(); }
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		if (HX_FIELD_EQ(inName,"cameras") ) { return cameras; }
		if (HX_FIELD_EQ(inName,"plugins") ) { return plugins; }
		if (HX_FIELD_EQ(inName,"keyMute") ) { return keyMute; }
		if (HX_FIELD_EQ(inName,"_notice") ) { return _notice_dyn(); }
		if (HX_FIELD_EQ(inName,"unwatch") ) { return unwatch_dyn(); }
		if (HX_FIELD_EQ(inName,"overlap") ) { return overlap_dyn(); }
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { return flashGfx; }
		if (HX_FIELD_EQ(inName,"clearLog") ) { return clearLog_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { return autoPause; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { return timeScale; }
		if (HX_FIELD_EQ(inName,"framerate") ) { return get_framerate(); }
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"playMusic") ) { return playMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		if (HX_FIELD_EQ(inName,"addBitmap") ) { return addBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		if (HX_FIELD_EQ(inName,"addCamera") ) { return addCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"addPlugin") ) { return addPlugin_dyn(); }
		if (HX_FIELD_EQ(inName,"getPlugin") ) { return getPlugin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quickWatch") ) { return quickWatch_dyn(); }
		if (HX_FIELD_EQ(inName,"loadReplay") ) { return loadReplay_dyn(); }
		if (HX_FIELD_EQ(inName,"stopReplay") ) { return stopReplay_dyn(); }
		if (HX_FIELD_EQ(inName,"resetState") ) { return resetState_dyn(); }
		if (HX_FIELD_EQ(inName,"resetInput") ) { return resetInput_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldBounds") ) { return worldBounds; }
		if (HX_FIELD_EQ(inName,"visualDebug") ) { return visualDebug; }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { return _cameraRect; }
		if (HX_FIELD_EQ(inName,"keyDebugger") ) { return keyDebugger; }
		if (HX_FIELD_EQ(inName,"keyVolumeUp") ) { return keyVolumeUp; }
		if (HX_FIELD_EQ(inName,"advancedLog") ) { return advancedLog_dyn(); }
		if (HX_FIELD_EQ(inName,"pauseSounds") ) { return pauseSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"lockCameras") ) { return lockCameras_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPlugins") ) { return drawPlugins_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchManager") ) { return touchManager; }
		if (HX_FIELD_EQ(inName,"showDebugger") ) { return showDebugger_dyn(); }
		if (HX_FIELD_EQ(inName,"hideDebugger") ) { return hideDebugger_dyn(); }
		if (HX_FIELD_EQ(inName,"reloadReplay") ) { return reloadReplay_dyn(); }
		if (HX_FIELD_EQ(inName,"recordReplay") ) { return recordReplay_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSounds") ) { return updateSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"resumeSounds") ) { return resumeSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"createBitmap") ) { return createBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"removeBitmap") ) { return removeBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"removeCamera") ) { return removeCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"resetCameras") ) { return resetCameras_dyn(); }
		if (HX_FIELD_EQ(inName,"removePlugin") ) { return removePlugin_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { return volumeHandler; }
		if (HX_FIELD_EQ(inName,"keyVolumeDown") ) { return keyVolumeDown; }
		if (HX_FIELD_EQ(inName,"get_framerate") ) { return get_framerate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_framerate") ) { return set_framerate_dyn(); }
		if (HX_FIELD_EQ(inName,"stopRecording") ) { return stopRecording_dyn(); }
		if (HX_FIELD_EQ(inName,"destroySounds") ) { return destroySounds_dyn(); }
		if (HX_FIELD_EQ(inName,"renderCameras") ) { return renderCameras_dyn(); }
		if (HX_FIELD_EQ(inName,"unlockCameras") ) { return unlockCameras_dyn(); }
		if (HX_FIELD_EQ(inName,"updateCameras") ) { return updateCameras_dyn(); }
		if (HX_FIELD_EQ(inName,"updatePlugins") ) { return updatePlugins_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashFramerate") ) { return get_flashFramerate(); }
		if (HX_FIELD_EQ(inName,"worldDivisions") ) { return worldDivisions; }
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { return flashGfxSprite; }
		if (HX_FIELD_EQ(inName,"getLibraryName") ) { return getLibraryName_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleDebugger") ) { return toggleDebugger_dyn(); }
		if (HX_FIELD_EQ(inName,"getCacheKeyFor") ) { return getCacheKeyFor_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"joystickManager") ) { return joystickManager; }
		if (HX_FIELD_EQ(inName,"fromAssetsCache") ) { return fromAssetsCache_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { return useBufferLocking; }
		if (HX_FIELD_EQ(inName,"removeQuickWatch") ) { return removeQuickWatch_dyn(); }
		if (HX_FIELD_EQ(inName,"checkBitmapCache") ) { return checkBitmapCache_dyn(); }
		if (HX_FIELD_EQ(inName,"addTilemapBitmap") ) { return addTilemapBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"clearBitmapCache") ) { return clearBitmapCache_dyn(); }
		if (HX_FIELD_EQ(inName,"clearAssetsCache") ) { return clearAssetsCache_dyn(); }
		if (HX_FIELD_EQ(inName,"removePluginType") ) { return removePluginType_dyn(); }
		if (HX_FIELD_EQ(inName,"drawDebugPlugins") ) { return drawDebugPlugins_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setDebuggerLayout") ) { return setDebuggerLayout_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_lastBitmapDataKey") ) { return _lastBitmapDataKey; }
		if (HX_FIELD_EQ(inName,"get_flashFramerate") ) { return get_flashFramerate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flashFramerate") ) { return set_flashFramerate_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniqueBitmapKey") ) { return getUniqueBitmapKey_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"supportsTouchEvents") ) { return supportsTouchEvents; }
		if (HX_FIELD_EQ(inName,"resetDebuggerLayout") ) { return resetDebuggerLayout_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxG_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mute") ) { mute=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::org::flixel::system::input::FlxKeyboard >(); return inValue; }
		if (HX_FIELD_EQ(inName,"warn") ) { warn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_game") ) { _game=inValue.Cast< ::org::flixel::FlxGame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::org::flixel::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouse") ) { mouse=inValue.Cast< ::org::flixel::system::input::FlxMouse >(); return inValue; }
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::flash::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::org::flixel::FlxState >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mobile") ) { mobile=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sounds") ) { sounds=inValue.Cast< ::org::flixel::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::org::flixel::FlxCamera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"notice") ) { notice=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp) return set_volume(inValue);volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tweener") ) { tweener=inValue.Cast< ::org::flixel::FlxBasic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bgColor") ) { return set_bgColor(inValue); }
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::org::flixel::system::debug::Console >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameras") ) { cameras=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"plugins") ) { plugins=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyMute") ) { keyMute=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { flashGfx=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { autoPause=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { timeScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framerate") ) { return set_framerate(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldBounds") ) { worldBounds=inValue.Cast< ::org::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visualDebug") ) { visualDebug=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { _cameraRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyDebugger") ) { keyDebugger=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyVolumeUp") ) { keyVolumeUp=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchManager") ) { touchManager=inValue.Cast< ::org::flixel::system::input::FlxTouchManager >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { volumeHandler=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyVolumeDown") ) { keyVolumeDown=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashFramerate") ) { return set_flashFramerate(inValue); }
		if (HX_FIELD_EQ(inName,"worldDivisions") ) { worldDivisions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { flashGfxSprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"joystickManager") ) { joystickManager=inValue.Cast< ::org::flixel::system::input::FlxJoystickManager >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { useBufferLocking=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_lastBitmapDataKey") ) { _lastBitmapDataKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"supportsTouchEvents") ) { supportsTouchEvents=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxG_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("supportsTouchEvents"),
	HX_CSTRING("tweener"),
	HX_CSTRING("_game"),
	HX_CSTRING("paused"),
	HX_CSTRING("autoPause"),
	HX_CSTRING("debug"),
	HX_CSTRING("elapsed"),
	HX_CSTRING("timeScale"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("worldBounds"),
	HX_CSTRING("worldDivisions"),
	HX_CSTRING("visualDebug"),
	HX_CSTRING("console"),
	HX_CSTRING("mobile"),
	HX_CSTRING("music"),
	HX_CSTRING("sounds"),
	HX_CSTRING("mute"),
	HX_CSTRING("cameras"),
	HX_CSTRING("camera"),
	HX_CSTRING("useBufferLocking"),
	HX_CSTRING("_cameraRect"),
	HX_CSTRING("plugins"),
	HX_CSTRING("volumeHandler"),
	HX_CSTRING("flashGfxSprite"),
	HX_CSTRING("flashGfx"),
	HX_CSTRING("_cache"),
	HX_CSTRING("_lastBitmapDataKey"),
	HX_CSTRING("mouse"),
	HX_CSTRING("keys"),
	HX_CSTRING("keyDebugger"),
	HX_CSTRING("keyVolumeUp"),
	HX_CSTRING("keyVolumeDown"),
	HX_CSTRING("keyMute"),
	HX_CSTRING("touchManager"),
	HX_CSTRING("joystickManager"),
	HX_CSTRING("getLibraryName"),
	HX_CSTRING("toggleDebugger"),
	HX_CSTRING("showDebugger"),
	HX_CSTRING("hideDebugger"),
	HX_CSTRING("log"),
	HX_CSTRING("_log"),
	HX_CSTRING("warn"),
	HX_CSTRING("_warn"),
	HX_CSTRING("error"),
	HX_CSTRING("_error"),
	HX_CSTRING("notice"),
	HX_CSTRING("_notice"),
	HX_CSTRING("advancedLog"),
	HX_CSTRING("clearLog"),
	HX_CSTRING("watch"),
	HX_CSTRING("unwatch"),
	HX_CSTRING("quickWatch"),
	HX_CSTRING("removeQuickWatch"),
	HX_CSTRING("get_framerate"),
	HX_CSTRING("set_framerate"),
	HX_CSTRING("get_flashFramerate"),
	HX_CSTRING("set_flashFramerate"),
	HX_CSTRING("loadReplay"),
	HX_CSTRING("reloadReplay"),
	HX_CSTRING("stopReplay"),
	HX_CSTRING("recordReplay"),
	HX_CSTRING("stopRecording"),
	HX_CSTRING("resetState"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("resetInput"),
	HX_CSTRING("playMusic"),
	HX_CSTRING("loadSound"),
	HX_CSTRING("play"),
	HX_CSTRING("stream"),
	HX_CSTRING("volume"),
	HX_CSTRING("set_volume"),
	HX_CSTRING("destroySounds"),
	HX_CSTRING("updateSounds"),
	HX_CSTRING("pauseSounds"),
	HX_CSTRING("resumeSounds"),
	HX_CSTRING("checkBitmapCache"),
	HX_CSTRING("createBitmap"),
	HX_CSTRING("addBitmap"),
	HX_CSTRING("addTilemapBitmap"),
	HX_CSTRING("getCacheKeyFor"),
	HX_CSTRING("getUniqueBitmapKey"),
	HX_CSTRING("fromAssetsCache"),
	HX_CSTRING("removeBitmap"),
	HX_CSTRING("clearBitmapCache"),
	HX_CSTRING("clearAssetsCache"),
	HX_CSTRING("stage"),
	HX_CSTRING("get_stage"),
	HX_CSTRING("state"),
	HX_CSTRING("get_state"),
	HX_CSTRING("switchState"),
	HX_CSTRING("setDebuggerLayout"),
	HX_CSTRING("resetDebuggerLayout"),
	HX_CSTRING("addCamera"),
	HX_CSTRING("removeCamera"),
	HX_CSTRING("resetCameras"),
	HX_CSTRING("flash"),
	HX_CSTRING("fade"),
	HX_CSTRING("shake"),
	HX_CSTRING("get_bgColor"),
	HX_CSTRING("set_bgColor"),
	HX_CSTRING("overlap"),
	HX_CSTRING("collide"),
	HX_CSTRING("addPlugin"),
	HX_CSTRING("getPlugin"),
	HX_CSTRING("removePlugin"),
	HX_CSTRING("removePluginType"),
	HX_CSTRING("init"),
	HX_CSTRING("reset"),
	HX_CSTRING("lockCameras"),
	HX_CSTRING("renderCameras"),
	HX_CSTRING("unlockCameras"),
	HX_CSTRING("updateCameras"),
	HX_CSTRING("updatePlugins"),
	HX_CSTRING("drawPlugins"),
	HX_CSTRING("drawDebugPlugins"),
	HX_CSTRING("tween"),
	HX_CSTRING("random"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxG_obj::supportsTouchEvents,"supportsTouchEvents");
	HX_MARK_MEMBER_NAME(FlxG_obj::tweener,"tweener");
	HX_MARK_MEMBER_NAME(FlxG_obj::_game,"_game");
	HX_MARK_MEMBER_NAME(FlxG_obj::paused,"paused");
	HX_MARK_MEMBER_NAME(FlxG_obj::autoPause,"autoPause");
	HX_MARK_MEMBER_NAME(FlxG_obj::debug,"debug");
	HX_MARK_MEMBER_NAME(FlxG_obj::elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(FlxG_obj::timeScale,"timeScale");
	HX_MARK_MEMBER_NAME(FlxG_obj::width,"width");
	HX_MARK_MEMBER_NAME(FlxG_obj::height,"height");
	HX_MARK_MEMBER_NAME(FlxG_obj::worldBounds,"worldBounds");
	HX_MARK_MEMBER_NAME(FlxG_obj::worldDivisions,"worldDivisions");
	HX_MARK_MEMBER_NAME(FlxG_obj::visualDebug,"visualDebug");
	HX_MARK_MEMBER_NAME(FlxG_obj::console,"console");
	HX_MARK_MEMBER_NAME(FlxG_obj::mobile,"mobile");
	HX_MARK_MEMBER_NAME(FlxG_obj::music,"music");
	HX_MARK_MEMBER_NAME(FlxG_obj::sounds,"sounds");
	HX_MARK_MEMBER_NAME(FlxG_obj::mute,"mute");
	HX_MARK_MEMBER_NAME(FlxG_obj::cameras,"cameras");
	HX_MARK_MEMBER_NAME(FlxG_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(FlxG_obj::useBufferLocking,"useBufferLocking");
	HX_MARK_MEMBER_NAME(FlxG_obj::_cameraRect,"_cameraRect");
	HX_MARK_MEMBER_NAME(FlxG_obj::plugins,"plugins");
	HX_MARK_MEMBER_NAME(FlxG_obj::volumeHandler,"volumeHandler");
	HX_MARK_MEMBER_NAME(FlxG_obj::flashGfxSprite,"flashGfxSprite");
	HX_MARK_MEMBER_NAME(FlxG_obj::flashGfx,"flashGfx");
	HX_MARK_MEMBER_NAME(FlxG_obj::_cache,"_cache");
	HX_MARK_MEMBER_NAME(FlxG_obj::_lastBitmapDataKey,"_lastBitmapDataKey");
	HX_MARK_MEMBER_NAME(FlxG_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(FlxG_obj::keys,"keys");
	HX_MARK_MEMBER_NAME(FlxG_obj::keyDebugger,"keyDebugger");
	HX_MARK_MEMBER_NAME(FlxG_obj::keyVolumeUp,"keyVolumeUp");
	HX_MARK_MEMBER_NAME(FlxG_obj::keyVolumeDown,"keyVolumeDown");
	HX_MARK_MEMBER_NAME(FlxG_obj::keyMute,"keyMute");
	HX_MARK_MEMBER_NAME(FlxG_obj::touchManager,"touchManager");
	HX_MARK_MEMBER_NAME(FlxG_obj::joystickManager,"joystickManager");
	HX_MARK_MEMBER_NAME(FlxG_obj::log,"log");
	HX_MARK_MEMBER_NAME(FlxG_obj::warn,"warn");
	HX_MARK_MEMBER_NAME(FlxG_obj::error,"error");
	HX_MARK_MEMBER_NAME(FlxG_obj::notice,"notice");
	HX_MARK_MEMBER_NAME(FlxG_obj::volume,"volume");
	HX_MARK_MEMBER_NAME(FlxG_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(FlxG_obj::state,"state");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxG_obj::supportsTouchEvents,"supportsTouchEvents");
	HX_VISIT_MEMBER_NAME(FlxG_obj::tweener,"tweener");
	HX_VISIT_MEMBER_NAME(FlxG_obj::_game,"_game");
	HX_VISIT_MEMBER_NAME(FlxG_obj::paused,"paused");
	HX_VISIT_MEMBER_NAME(FlxG_obj::autoPause,"autoPause");
	HX_VISIT_MEMBER_NAME(FlxG_obj::debug,"debug");
	HX_VISIT_MEMBER_NAME(FlxG_obj::elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(FlxG_obj::timeScale,"timeScale");
	HX_VISIT_MEMBER_NAME(FlxG_obj::width,"width");
	HX_VISIT_MEMBER_NAME(FlxG_obj::height,"height");
	HX_VISIT_MEMBER_NAME(FlxG_obj::worldBounds,"worldBounds");
	HX_VISIT_MEMBER_NAME(FlxG_obj::worldDivisions,"worldDivisions");
	HX_VISIT_MEMBER_NAME(FlxG_obj::visualDebug,"visualDebug");
	HX_VISIT_MEMBER_NAME(FlxG_obj::console,"console");
	HX_VISIT_MEMBER_NAME(FlxG_obj::mobile,"mobile");
	HX_VISIT_MEMBER_NAME(FlxG_obj::music,"music");
	HX_VISIT_MEMBER_NAME(FlxG_obj::sounds,"sounds");
	HX_VISIT_MEMBER_NAME(FlxG_obj::mute,"mute");
	HX_VISIT_MEMBER_NAME(FlxG_obj::cameras,"cameras");
	HX_VISIT_MEMBER_NAME(FlxG_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(FlxG_obj::useBufferLocking,"useBufferLocking");
	HX_VISIT_MEMBER_NAME(FlxG_obj::_cameraRect,"_cameraRect");
	HX_VISIT_MEMBER_NAME(FlxG_obj::plugins,"plugins");
	HX_VISIT_MEMBER_NAME(FlxG_obj::volumeHandler,"volumeHandler");
	HX_VISIT_MEMBER_NAME(FlxG_obj::flashGfxSprite,"flashGfxSprite");
	HX_VISIT_MEMBER_NAME(FlxG_obj::flashGfx,"flashGfx");
	HX_VISIT_MEMBER_NAME(FlxG_obj::_cache,"_cache");
	HX_VISIT_MEMBER_NAME(FlxG_obj::_lastBitmapDataKey,"_lastBitmapDataKey");
	HX_VISIT_MEMBER_NAME(FlxG_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(FlxG_obj::keys,"keys");
	HX_VISIT_MEMBER_NAME(FlxG_obj::keyDebugger,"keyDebugger");
	HX_VISIT_MEMBER_NAME(FlxG_obj::keyVolumeUp,"keyVolumeUp");
	HX_VISIT_MEMBER_NAME(FlxG_obj::keyVolumeDown,"keyVolumeDown");
	HX_VISIT_MEMBER_NAME(FlxG_obj::keyMute,"keyMute");
	HX_VISIT_MEMBER_NAME(FlxG_obj::touchManager,"touchManager");
	HX_VISIT_MEMBER_NAME(FlxG_obj::joystickManager,"joystickManager");
	HX_VISIT_MEMBER_NAME(FlxG_obj::log,"log");
	HX_VISIT_MEMBER_NAME(FlxG_obj::warn,"warn");
	HX_VISIT_MEMBER_NAME(FlxG_obj::error,"error");
	HX_VISIT_MEMBER_NAME(FlxG_obj::notice,"notice");
	HX_VISIT_MEMBER_NAME(FlxG_obj::volume,"volume");
	HX_VISIT_MEMBER_NAME(FlxG_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(FlxG_obj::state,"state");
};

Class FlxG_obj::__mClass;

void FlxG_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxG"), hx::TCanCast< FlxG_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxG_obj::__boot()
{
	supportsTouchEvents= false;
	tweener= ::org::flixel::FlxBasic_obj::__new();
}

} // end namespace org
} // end namespace flixel
