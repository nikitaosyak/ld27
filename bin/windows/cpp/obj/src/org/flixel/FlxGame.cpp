#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
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
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
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
#ifndef INCLUDED_org_flixel_FlxSave
#include <org/flixel/FlxSave.h>
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
#ifndef INCLUDED_org_flixel_plugin_TimerManager
#include <org/flixel/plugin/TimerManager.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_pxText_PxBitmapFont
#include <org/flixel/plugin/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxDebugger
#include <org/flixel/system/FlxDebugger.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxReplay
#include <org/flixel/system/FlxReplay.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Perf
#include <org/flixel/system/debug/Perf.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_VCR
#include <org/flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Watch
#include <org/flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxInputs
#include <org/flixel/system/input/FlxInputs.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxMouse
#include <org/flixel/system/input/FlxMouse.h>
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
#ifndef INCLUDED_org_flixel_system_layer_TileSheetExt
#include <org/flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_org_flixel_tweens_FlxTween
#include <org/flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRandom
#include <org/flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxTimer
#include <org/flixel/util/FlxTimer.h>
#endif
namespace org{
namespace flixel{

Void FlxGame_obj::__construct(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate)
{
HX_STACK_PUSH("FlxGame::new","org/flixel/FlxGame.hx",199);
Float Zoom = __o_Zoom.Default(1);
int GameFramerate = __o_GameFramerate.Default(60);
int FlashFramerate = __o_FlashFramerate.Default(30);
{
	HX_STACK_LINE(200)
	super::__construct();
	HX_STACK_LINE(203)
	this->_lostFocus = false;
	HX_STACK_LINE(205)
	this->_focus = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(206)
	this->_focus->set_visible(false);
	HX_STACK_LINE(210)
	this->_soundTray = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(213)
	this->_inputContainer = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(216)
	::org::flixel::FlxG_obj::init(hx::ObjectPtr<OBJ_>(this),GameSizeX,GameSizeY,Zoom);
	HX_STACK_LINE(217)
	::org::flixel::FlxG_obj::set_framerate(GameFramerate);
	HX_STACK_LINE(218)
	::org::flixel::FlxG_obj::set_flashFramerate(FlashFramerate);
	HX_STACK_LINE(219)
	this->_accumulator = this->_step;
	HX_STACK_LINE(220)
	this->_total = (int)0;
	HX_STACK_LINE(221)
	::org::flixel::FlxGame_obj::_mark = (int)0;
	HX_STACK_LINE(222)
	this->_state = null();
	HX_STACK_LINE(223)
	this->tempDisableSoundHotKeys = false;
	HX_STACK_LINE(224)
	this->_prefsSave = ::org::flixel::FlxSave_obj::__new();
	HX_STACK_LINE(225)
	this->_prefsSave->bind(HX_CSTRING("flixel"));
	HX_STACK_LINE(228)
	::org::flixel::FlxG_obj::debug = true;
	HX_STACK_LINE(229)
	this->_debuggerUp = false;
	HX_STACK_LINE(234)
	this->_replay = ::org::flixel::system::FlxReplay_obj::__new();
	HX_STACK_LINE(235)
	this->_replayRequested = false;
	HX_STACK_LINE(236)
	this->_recordingRequested = false;
	HX_STACK_LINE(237)
	this->_replaying = false;
	HX_STACK_LINE(238)
	this->_recording = false;
	HX_STACK_LINE(242)
	this->_iState = InitialState;
	HX_STACK_LINE(243)
	this->_requestedState = null();
	HX_STACK_LINE(244)
	this->_requestedReset = true;
	HX_STACK_LINE(246)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null(),null(),null());
}
;
	return null();
}

FlxGame_obj::~FlxGame_obj() { }

Dynamic FlxGame_obj::__CreateEmpty() { return  new FlxGame_obj; }
hx::ObjectPtr< FlxGame_obj > FlxGame_obj::__new(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(GameSizeX,GameSizeY,InitialState,__o_Zoom,__o_GameFramerate,__o_FlashFramerate);
	return result;}

Dynamic FlxGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::org::flixel::system::FlxDebugger FlxGame_obj::get_debugger( ){
	HX_STACK_PUSH("FlxGame::get_debugger","org/flixel/FlxGame.hx",921);
	HX_STACK_THIS(this);
	HX_STACK_LINE(921)
	return this->_debugger;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,get_debugger,return )

Void FlxGame_obj::createFocusScreen( ){
{
		HX_STACK_PUSH("FlxGame::createFocusScreen","org/flixel/FlxGame.hx",877);
		HX_STACK_THIS(this);
		HX_STACK_LINE(878)
		::flash::display::Graphics gfx = this->_focus->get_graphics();		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(879)
		int screenWidth = ::Std_obj::_int((::org::flixel::FlxG_obj::width * ::org::flixel::FlxCamera_obj::defaultZoom));		HX_STACK_VAR(screenWidth,"screenWidth");
		HX_STACK_LINE(880)
		int screenHeight = ::Std_obj::_int((::org::flixel::FlxG_obj::height * ::org::flixel::FlxCamera_obj::defaultZoom));		HX_STACK_VAR(screenHeight,"screenHeight");
		HX_STACK_LINE(883)
		gfx->moveTo((int)0,(int)0);
		HX_STACK_LINE(884)
		gfx->beginFill((int)0,0.5);
		HX_STACK_LINE(885)
		gfx->lineTo(screenWidth,(int)0);
		HX_STACK_LINE(886)
		gfx->lineTo(screenWidth,screenHeight);
		HX_STACK_LINE(887)
		gfx->lineTo((int)0,screenHeight);
		HX_STACK_LINE(888)
		gfx->lineTo((int)0,(int)0);
		HX_STACK_LINE(889)
		gfx->endFill();
		HX_STACK_LINE(892)
		int halfWidth = ::Std_obj::_int((Float(screenWidth) / Float((int)2)));		HX_STACK_VAR(halfWidth,"halfWidth");
		HX_STACK_LINE(893)
		int halfHeight = ::Std_obj::_int((Float(screenHeight) / Float((int)2)));		HX_STACK_VAR(halfHeight,"halfHeight");
		HX_STACK_LINE(894)
		int helper = ::Std_obj::_int((Float(::Math_obj::min(halfWidth,halfHeight)) / Float((int)3)));		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(895)
		gfx->moveTo((halfWidth - helper),(halfHeight - helper));
		HX_STACK_LINE(896)
		gfx->beginFill((int)16777215,0.65);
		HX_STACK_LINE(897)
		gfx->lineTo((halfWidth + helper),halfHeight);
		HX_STACK_LINE(898)
		gfx->lineTo((halfWidth - helper),(halfHeight + helper));
		HX_STACK_LINE(899)
		gfx->lineTo((halfWidth - helper),(halfHeight - helper));
		HX_STACK_LINE(900)
		gfx->endFill();
		HX_STACK_LINE(902)
		::flash::display::Sprite logo = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(logo,"logo");
		HX_STACK_LINE(903)
		::org::flixel::FlxAssets_obj::drawLogo(logo->get_graphics());
		HX_STACK_LINE(904)
		logo->set_scaleX((Float(helper) / Float((int)1000)));
		HX_STACK_LINE(905)
		if (((logo->get_scaleX() < 0.2))){
			HX_STACK_LINE(906)
			logo->set_scaleX(0.2);
		}
		HX_STACK_LINE(909)
		logo->set_scaleY(logo->get_scaleX());
		HX_STACK_LINE(910)
		logo->set_x(logo->set_y((int)5));
		HX_STACK_LINE(911)
		logo->set_alpha(0.35);
		HX_STACK_LINE(912)
		this->_focus->addChild(logo);
		HX_STACK_LINE(914)
		this->addChild(this->_focus);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,createFocusScreen,(void))

Void FlxGame_obj::loadSoundPrefs( ){
{
		HX_STACK_PUSH("FlxGame::loadSoundPrefs","org/flixel/FlxGame.hx",860);
		HX_STACK_THIS(this);
		HX_STACK_LINE(861)
		if (((this->_prefsSave->data->__Field(HX_CSTRING("volume"),true) != null()))){
			HX_STACK_LINE(862)
			::org::flixel::FlxG_obj::set_volume(this->_prefsSave->data->__Field(HX_CSTRING("volume"),true));
		}
		else{
			HX_STACK_LINE(864)
			::org::flixel::FlxG_obj::set_volume(0.5);
		}
		HX_STACK_LINE(866)
		if (((this->_prefsSave->data->__Field(HX_CSTRING("mute"),true) != null()))){
			HX_STACK_LINE(867)
			::org::flixel::FlxG_obj::mute = this->_prefsSave->data->__Field(HX_CSTRING("mute"),true);
		}
		else{
			HX_STACK_LINE(869)
			::org::flixel::FlxG_obj::mute = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,loadSoundPrefs,(void))

Void FlxGame_obj::createSoundTray( ){
{
		HX_STACK_PUSH("FlxGame::createSoundTray","org/flixel/FlxGame.hx",807);
		HX_STACK_THIS(this);
		HX_STACK_LINE(808)
		this->_soundTray->set_visible(false);
		HX_STACK_LINE(809)
		this->_soundTray->set_scaleX((int)2);
		HX_STACK_LINE(810)
		this->_soundTray->set_scaleY((int)2);
		HX_STACK_LINE(811)
		::flash::display::Bitmap tmp = ::flash::display::Bitmap_obj::__new(::flash::display::BitmapData_obj::__new((int)80,(int)30,true,(int)2130706432,null()),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(812)
		this->_soundTray->set_x((((Float(::org::flixel::FlxG_obj::width) / Float((int)2)) * ::org::flixel::FlxCamera_obj::defaultZoom) - ((Float(tmp->get_width()) / Float((int)2)) * this->_soundTray->get_scaleX())));
		HX_STACK_LINE(813)
		this->_soundTray->addChild(tmp);
		HX_STACK_LINE(815)
		::flash::text::TextField text = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(816)
		text->set_width(tmp->get_width());
		HX_STACK_LINE(817)
		text->set_height(tmp->get_height());
		HX_STACK_LINE(818)
		text->set_multiline(true);
		HX_STACK_LINE(819)
		text->set_wordWrap(true);
		HX_STACK_LINE(820)
		text->set_selectable(false);
		HX_STACK_LINE(828)
		::flash::text::TextFormat dtf = ::flash::text::TextFormat_obj::__new(::openfl::Assets_obj::getFont(::org::flixel::FlxAssets_obj::defaultFont)->fontName,(int)8,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(dtf,"dtf");
		HX_STACK_LINE(829)
		dtf->align = ::flash::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(830)
		text->set_defaultTextFormat(dtf);
		HX_STACK_LINE(831)
		this->_soundTray->addChild(text);
		HX_STACK_LINE(832)
		text->set_text(HX_CSTRING("VOLUME"));
		HX_STACK_LINE(833)
		text->set_y((int)16);
		HX_STACK_LINE(835)
		int bx = (int)10;		HX_STACK_VAR(bx,"bx");
		HX_STACK_LINE(836)
		int by = (int)14;		HX_STACK_VAR(by,"by");
		HX_STACK_LINE(837)
		this->_soundTrayBars = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(838)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(839)
		while(((i < (int)10))){
			HX_STACK_LINE(841)
			tmp = ::flash::display::Bitmap_obj::__new(::flash::display::BitmapData_obj::__new((int)4,++(i),false,(int)-1,null()),null(),null());
			HX_STACK_LINE(842)
			tmp->set_x(bx);
			HX_STACK_LINE(843)
			tmp->set_y(by);
			HX_STACK_LINE(844)
			this->_soundTray->addChild(tmp);
			HX_STACK_LINE(845)
			this->_soundTrayBars->push(tmp);
			HX_STACK_LINE(846)
			hx::AddEq(bx,(int)6);
			HX_STACK_LINE(847)
			(by)--;
		}
		HX_STACK_LINE(850)
		this->_soundTray->set_y(-(this->_soundTray->get_height()));
		HX_STACK_LINE(851)
		this->_soundTray->set_visible(false);
		HX_STACK_LINE(852)
		this->addChild(this->_soundTray);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,createSoundTray,(void))

Void FlxGame_obj::create( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::create","org/flixel/FlxGame.hx",726);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(727)
		if (((this->get_stage() == null()))){
			HX_STACK_LINE(728)
			return null();
		}
		HX_STACK_LINE(731)
		this->removeEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null());
		HX_STACK_LINE(733)
		this->_total = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(735)
		this->get_stage()->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(736)
		this->get_stage()->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(737)
		this->get_stage()->set_frameRate(this->_flashFramerate);
		HX_STACK_LINE(739)
		this->addChild(this->_inputContainer);
		HX_STACK_LINE(743)
		::org::flixel::FlxG_obj::keyDebugger = Array_obj< int >::__new().Add((int)192).Add((int)220);
		HX_STACK_LINE(744)
		::org::flixel::FlxG_obj::keyVolumeUp = Array_obj< int >::__new().Add((int)107).Add((int)187);
		HX_STACK_LINE(745)
		::org::flixel::FlxG_obj::keyVolumeDown = Array_obj< int >::__new().Add((int)109).Add((int)189);
		HX_STACK_LINE(746)
		::org::flixel::FlxG_obj::keyMute = Array_obj< int >::__new().Add((int)48).Add((int)96);
		HX_STACK_LINE(749)
		::org::flixel::system::input::FlxInputs_obj::init();
		HX_STACK_LINE(751)
		::org::flixel::FlxG_obj::autoPause = true;
		HX_STACK_LINE(754)
		if ((!(::org::flixel::FlxG_obj::mobile))){
			HX_STACK_LINE(758)
			if ((::org::flixel::FlxG_obj::debug)){
				HX_STACK_LINE(760)
				this->_debugger = ::org::flixel::system::FlxDebugger_obj::__new((::org::flixel::FlxG_obj::width * ::org::flixel::FlxCamera_obj::defaultZoom),(::org::flixel::FlxG_obj::height * ::org::flixel::FlxCamera_obj::defaultZoom));
				HX_STACK_LINE(764)
				::flash::Lib_obj::get_current()->get_stage()->addChild(this->_debugger);
			}
			HX_STACK_LINE(771)
			this->createSoundTray();
			HX_STACK_LINE(774)
			this->loadSoundPrefs();
			HX_STACK_LINE(777)
			this->get_stage()->addEventListener(::flash::events::Event_obj::DEACTIVATE,this->onFocusLost_dyn(),null(),null(),null());
			HX_STACK_LINE(778)
			this->get_stage()->addEventListener(::flash::events::Event_obj::ACTIVATE,this->onFocus_dyn(),null(),null(),null());
			HX_STACK_LINE(781)
			this->createFocusScreen();
		}
		HX_STACK_LINE(786)
		if ((this->_requestedReset)){
			HX_STACK_LINE(788)
			{
				HX_STACK_LINE(788)
				this->_requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
				HX_STACK_LINE(788)
				if ((::Std_obj::is(this->_requestedState,hx::ClassOf< ::org::flixel::FlxSubState >()))){
					HX_STACK_LINE(788)
					hx::Throw (HX_CSTRING("You can't set FlxSubState class instance as the state for you game"));
				}
				HX_STACK_LINE(788)
				this->_replayTimer = (int)0;
				HX_STACK_LINE(788)
				this->_replayCancelKeys = null();
				HX_STACK_LINE(788)
				::org::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(789)
			this->switchState();
			HX_STACK_LINE(790)
			this->_requestedReset = false;
		}
		HX_STACK_LINE(799)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,create,(void))

Void FlxGame_obj::draw( ){
{
		HX_STACK_PUSH("FlxGame::draw","org/flixel/FlxGame.hx",670);
		HX_STACK_THIS(this);
		HX_STACK_LINE(672)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(673)
			::org::flixel::FlxGame_obj::_mark = ::flash::Lib_obj::getTimer();
		}
		HX_STACK_LINE(677)
		::org::flixel::system::layer::TileSheetExt_obj::_DRAWCALLS = (int)0;
		HX_STACK_LINE(680)
		{
			HX_STACK_LINE(680)
			::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
			HX_STACK_LINE(680)
			Array< ::Dynamic > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
			HX_STACK_LINE(680)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(680)
			int l = cams->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(680)
			while(((i < l))){
				HX_STACK_LINE(680)
				cam = cams->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
				HX_STACK_LINE(680)
				if (((bool((bool((cam == null())) || bool(!(cam->exists)))) || bool(!(cam->visible))))){
					HX_STACK_LINE(680)
					continue;
				}
				HX_STACK_LINE(680)
				{
					HX_STACK_LINE(680)
					::org::flixel::system::layer::DrawStackItem currItem = cam->_headOfDrawStack->next;		HX_STACK_VAR(currItem,"currItem");
					HX_STACK_LINE(680)
					while(((currItem != null()))){
						HX_STACK_LINE(680)
						{
							HX_STACK_LINE(680)
							currItem->atlas = null();
							HX_STACK_LINE(680)
							currItem->initialized = false;
							HX_STACK_LINE(680)
							currItem->position = (int)0;
						}
						HX_STACK_LINE(680)
						::org::flixel::system::layer::DrawStackItem newStorageHead = currItem;		HX_STACK_VAR(newStorageHead,"newStorageHead");
						HX_STACK_LINE(680)
						currItem = currItem->next;
						HX_STACK_LINE(680)
						if (((::org::flixel::FlxCamera_obj::_storageHead == null()))){
							HX_STACK_LINE(680)
							::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
							HX_STACK_LINE(680)
							newStorageHead->next = null();
						}
						else{
							HX_STACK_LINE(680)
							newStorageHead->next = ::org::flixel::FlxCamera_obj::_storageHead;
							HX_STACK_LINE(680)
							::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
						}
					}
					HX_STACK_LINE(680)
					{
						HX_STACK_LINE(680)
						::org::flixel::system::layer::DrawStackItem _this = cam->_headOfDrawStack;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(680)
						_this->atlas = null();
						HX_STACK_LINE(680)
						_this->initialized = false;
						HX_STACK_LINE(680)
						_this->position = (int)0;
					}
					HX_STACK_LINE(680)
					cam->_headOfDrawStack->next = null();
					HX_STACK_LINE(680)
					cam->_currentStackItem = cam->_headOfDrawStack;
				}
				HX_STACK_LINE(680)
				cam->_canvas->get_graphics()->clear();
				HX_STACK_LINE(680)
				cam->_debugLayer->get_graphics()->clear();
				HX_STACK_LINE(680)
				cam->fill((int(cam->bgColor) & int((int)16777215)),true,(Float(((int((int(cam->bgColor) >> int((int)24))) & int((int)255)))) / Float((int)255)),null());
			}
		}
		HX_STACK_LINE(686)
		this->_state->draw();
		HX_STACK_LINE(689)
		if ((::org::flixel::FlxG_obj::visualDebug)){
			HX_STACK_LINE(690)
			this->_state->drawDebug();
		}
		HX_STACK_LINE(696)
		{
			HX_STACK_LINE(696)
			::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
			HX_STACK_LINE(696)
			Array< ::Dynamic > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
			HX_STACK_LINE(696)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(696)
			int l = cams->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(696)
			while(((i < l))){
				HX_STACK_LINE(696)
				cam = cams->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
				HX_STACK_LINE(696)
				if (((bool((bool((cam == null())) || bool(!(cam->exists)))) || bool(!(cam->visible))))){
					HX_STACK_LINE(696)
					continue;
				}
				HX_STACK_LINE(696)
				cam->render();
			}
		}
		HX_STACK_LINE(699)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(700)
			this->_debugger->perf->drawCalls(::org::flixel::system::layer::TileSheetExt_obj::_DRAWCALLS);
		}
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			::org::flixel::FlxBasic plugin;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(706)
			Array< ::Dynamic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
			HX_STACK_LINE(706)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(706)
			int l = pluginList->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(706)
			while(((i < l))){
				HX_STACK_LINE(706)
				plugin = pluginList->__get((i)++).StaticCast< ::org::flixel::FlxBasic >();
				HX_STACK_LINE(706)
				if (((bool(plugin->exists) && bool(plugin->visible)))){
					HX_STACK_LINE(706)
					plugin->draw();
				}
			}
		}
		HX_STACK_LINE(708)
		if ((::org::flixel::FlxG_obj::visualDebug)){
			HX_STACK_LINE(710)
			::org::flixel::FlxBasic plugin;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(710)
			Array< ::Dynamic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
			HX_STACK_LINE(710)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(710)
			int l = pluginList->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(710)
			while(((i < l))){
				HX_STACK_LINE(710)
				plugin = pluginList->__get((i)++).StaticCast< ::org::flixel::FlxBasic >();
				HX_STACK_LINE(710)
				if (((bool((bool(plugin->exists) && bool(plugin->visible))) && bool(!(plugin->ignoreDrawDebug))))){
					HX_STACK_LINE(710)
					plugin->drawDebug();
				}
			}
		}
		HX_STACK_LINE(713)
		{
			HX_STACK_LINE(713)
			::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
			HX_STACK_LINE(713)
			Array< ::Dynamic > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
			HX_STACK_LINE(713)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(713)
			int l = cams->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(713)
			while(((i < l))){
				HX_STACK_LINE(713)
				cam = cams->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
				HX_STACK_LINE(713)
				if (((bool((bool((cam == null())) || bool(!(cam->exists)))) || bool(!(cam->visible))))){
					HX_STACK_LINE(713)
					continue;
				}
				HX_STACK_LINE(713)
				cam->drawFX();
			}
		}
		HX_STACK_LINE(715)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(716)
			this->_debugger->perf->flixelDraw((::flash::Lib_obj::getTimer() - ::org::flixel::FlxGame_obj::_mark));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,draw,(void))

Void FlxGame_obj::updateInput( ){
{
		HX_STACK_PUSH("FlxGame::updateInput","org/flixel/FlxGame.hx",609);
		HX_STACK_THIS(this);
		HX_STACK_LINE(611)
		if ((this->_replaying)){
			HX_STACK_LINE(613)
			this->_replay->playNextFrame();
			HX_STACK_LINE(614)
			if (((this->_replayTimer > (int)0))){
				HX_STACK_LINE(616)
				hx::SubEq(this->_replayTimer,this->_step);
				HX_STACK_LINE(617)
				if (((this->_replayTimer <= (int)0))){
					HX_STACK_LINE(618)
					if (((this->_replayCallback_dyn() != null()))){
						HX_STACK_LINE(621)
						this->_replayCallback();
						HX_STACK_LINE(622)
						this->_replayCallback = null();
					}
					else{
						HX_STACK_LINE(625)
						::org::flixel::FlxG_obj::stopReplay();
					}
				}
			}
			HX_STACK_LINE(630)
			if (((bool(this->_replaying) && bool(this->_replay->finished)))){
				HX_STACK_LINE(632)
				::org::flixel::FlxG_obj::stopReplay();
				HX_STACK_LINE(633)
				if (((this->_replayCallback_dyn() != null()))){
					HX_STACK_LINE(635)
					this->_replayCallback();
					HX_STACK_LINE(636)
					this->_replayCallback = null();
				}
			}
			HX_STACK_LINE(640)
			this->_debugger->vcr->updateRuntime(this->_step);
		}
		else{
			HX_STACK_LINE(647)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(647)
			int l = ::org::flixel::system::input::FlxInputs_obj::inputs->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(647)
			while(((i < l))){
				HX_STACK_LINE(647)
				::org::flixel::system::input::IFlxInput input = ::org::flixel::system::input::FlxInputs_obj::inputs->__get((i)++).StaticCast< ::org::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(647)
				input->update();
			}
		}
		HX_STACK_LINE(651)
		if ((this->_recording)){
			HX_STACK_LINE(653)
			this->_replay->recordFrame();
			HX_STACK_LINE(655)
			this->_debugger->vcr->updateRuntime(this->_step);
		}
		HX_STACK_LINE(662)
		::org::flixel::FlxG_obj::mouse->wheel = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,updateInput,(void))

Void FlxGame_obj::updateState( ){
{
		HX_STACK_PUSH("FlxGame::updateState","org/flixel/FlxGame.hx",604);
		HX_STACK_THIS(this);
		HX_STACK_LINE(604)
		this->_state->tryUpdate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,updateState,(void))

Void FlxGame_obj::update( ){
{
		HX_STACK_PUSH("FlxGame::update","org/flixel/FlxGame.hx",574);
		HX_STACK_THIS(this);
		HX_STACK_LINE(575)
		if (((this->_state != this->_requestedState))){
			HX_STACK_LINE(576)
			this->switchState();
		}
		HX_STACK_LINE(579)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(580)
			::org::flixel::FlxGame_obj::_mark = ::flash::Lib_obj::getTimer();
		}
		HX_STACK_LINE(583)
		::org::flixel::FlxG_obj::elapsed = (::org::flixel::FlxG_obj::timeScale * this->_stepSeconds);
		HX_STACK_LINE(584)
		::org::flixel::FlxG_obj::updateSounds();
		HX_STACK_LINE(585)
		{
			HX_STACK_LINE(585)
			::org::flixel::FlxBasic plugin;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(585)
			Array< ::Dynamic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
			HX_STACK_LINE(585)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(585)
			int l = pluginList->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(585)
			while(((i < l))){
				HX_STACK_LINE(585)
				plugin = pluginList->__get((i)++).StaticCast< ::org::flixel::FlxBasic >();
				HX_STACK_LINE(585)
				if (((bool(plugin->exists) && bool(plugin->active)))){
					HX_STACK_LINE(585)
					plugin->update();
				}
			}
		}
		HX_STACK_LINE(587)
		this->updateInput();
		HX_STACK_LINE(588)
		this->updateState();
		HX_STACK_LINE(590)
		if (((bool(::org::flixel::FlxG_obj::tweener->active) && bool(::org::flixel::FlxG_obj::tweener->get_hasTween())))){
			HX_STACK_LINE(592)
			::org::flixel::tweens::FlxTween t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(592)
			Dynamic ft = ::org::flixel::FlxG_obj::tweener->_tween;		HX_STACK_VAR(ft,"ft");
			HX_STACK_LINE(592)
			while(((ft != null()))){
				HX_STACK_LINE(592)
				t = hx::TCast< org::flixel::tweens::FlxTween >::cast(ft);
				HX_STACK_LINE(592)
				if ((t->active)){
					HX_STACK_LINE(592)
					t->update();
					HX_STACK_LINE(592)
					if ((ft->__Field(HX_CSTRING("_finish"),true))){
						HX_STACK_LINE(592)
						ft->__Field(HX_CSTRING("finish"),true)();
					}
				}
				HX_STACK_LINE(592)
				ft = ft->__Field(HX_CSTRING("_next"),true);
			}
		}
		HX_STACK_LINE(595)
		{
			HX_STACK_LINE(595)
			::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
			HX_STACK_LINE(595)
			Array< ::Dynamic > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
			HX_STACK_LINE(595)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(595)
			int l = cams->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(595)
			while(((i < l))){
				HX_STACK_LINE(595)
				cam = cams->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
				HX_STACK_LINE(595)
				if (((bool((cam != null())) && bool(cam->exists)))){
					HX_STACK_LINE(595)
					if ((cam->active)){
						HX_STACK_LINE(595)
						cam->update();
					}
					HX_STACK_LINE(595)
					if (((cam->target == null()))){
						HX_STACK_LINE(595)
						cam->_flashSprite->set_x((cam->x + cam->_flashOffsetX));
						HX_STACK_LINE(595)
						cam->_flashSprite->set_y((cam->y + cam->_flashOffsetY));
					}
					HX_STACK_LINE(595)
					cam->_flashSprite->set_visible(cam->visible);
				}
			}
		}
		HX_STACK_LINE(598)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(599)
			this->_debugger->perf->flixelUpdate((::flash::Lib_obj::getTimer() - ::org::flixel::FlxGame_obj::_mark));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,update,(void))

Void FlxGame_obj::updateSoundTray( Float MS){
{
		HX_STACK_PUSH("FlxGame::updateSoundTray","org/flixel/FlxGame.hx",546);
		HX_STACK_THIS(this);
		HX_STACK_ARG(MS,"MS");
		HX_STACK_LINE(546)
		if (((this->_soundTrayTimer > (int)0))){
			HX_STACK_LINE(549)
			hx::SubEq(this->_soundTrayTimer,(Float(MS) / Float((int)1000)));
		}
		else{
			HX_STACK_LINE(552)
			if (((this->_soundTray->get_y() > -(this->_soundTray->get_height())))){
				HX_STACK_LINE(554)
				{
					HX_STACK_LINE(554)
					::flash::display::Sprite _g = this->_soundTray;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(554)
					_g->set_y((_g->get_y() - (((Float(MS) / Float((int)1000)) * ::org::flixel::FlxG_obj::height) * (int)2)));
				}
				HX_STACK_LINE(555)
				if (((this->_soundTray->get_y() <= -(this->_soundTray->get_height())))){
					HX_STACK_LINE(557)
					this->_soundTray->set_visible(false);
					HX_STACK_LINE(558)
					this->_updateSoundTray = false;
					HX_STACK_LINE(561)
					this->_prefsSave->data->__FieldRef(HX_CSTRING("mute")) = ::org::flixel::FlxG_obj::mute;
					HX_STACK_LINE(562)
					this->_prefsSave->data->__FieldRef(HX_CSTRING("volume")) = ::org::flixel::FlxG_obj::volume;
					HX_STACK_LINE(563)
					this->_prefsSave->flush(null(),null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,updateSoundTray,(void))

Void FlxGame_obj::step( ){
{
		HX_STACK_PUSH("FlxGame::step","org/flixel/FlxGame.hx",479);
		HX_STACK_THIS(this);
		HX_STACK_LINE(481)
		if ((this->_requestedReset)){
			HX_STACK_LINE(483)
			{
				HX_STACK_LINE(483)
				this->_requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
				HX_STACK_LINE(483)
				if ((::Std_obj::is(this->_requestedState,hx::ClassOf< ::org::flixel::FlxSubState >()))){
					HX_STACK_LINE(483)
					hx::Throw (HX_CSTRING("You can't set FlxSubState class instance as the state for you game"));
				}
				HX_STACK_LINE(483)
				this->_replayTimer = (int)0;
				HX_STACK_LINE(483)
				this->_replayCancelKeys = null();
				HX_STACK_LINE(483)
				::org::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(484)
			this->_requestedReset = false;
		}
		HX_STACK_LINE(489)
		if ((this->_recordingRequested)){
			HX_STACK_LINE(491)
			this->_recordingRequested = false;
			HX_STACK_LINE(492)
			this->_replay->create(::org::flixel::util::FlxRandom_obj::globalSeed);
			HX_STACK_LINE(493)
			this->_recording = true;
			HX_STACK_LINE(496)
			this->_debugger->vcr->recording();
			HX_STACK_LINE(497)
			::org::flixel::FlxG_obj::notice(HX_CSTRING("Starting new flixel gameplay record."));
		}
		else{
			HX_STACK_LINE(500)
			if ((this->_replayRequested)){
				HX_STACK_LINE(502)
				this->_replayRequested = false;
				HX_STACK_LINE(503)
				this->_replay->rewind();
				HX_STACK_LINE(504)
				::org::flixel::util::FlxRandom_obj::globalSeed = this->_replay->seed;
				HX_STACK_LINE(506)
				this->_debugger->vcr->playing();
				HX_STACK_LINE(508)
				this->_replaying = true;
			}
		}
		HX_STACK_LINE(513)
		::org::flixel::FlxBasic_obj::_ACTIVECOUNT = (int)0;
		HX_STACK_LINE(518)
		this->update();
		HX_STACK_LINE(522)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(523)
			this->_debugger->perf->activeObjects(::org::flixel::FlxBasic_obj::_ACTIVECOUNT);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,step,(void))

Void FlxGame_obj::switchState( ){
{
		HX_STACK_PUSH("FlxGame::switchState","org/flixel/FlxGame.hx",425);
		HX_STACK_THIS(this);
		HX_STACK_LINE(427)
		::org::flixel::plugin::pxText::PxBitmapFont_obj::clearStorage();
		HX_STACK_LINE(428)
		::org::flixel::system::layer::Atlas_obj::clearAtlasCache();
		HX_STACK_LINE(429)
		::org::flixel::system::layer::TileSheetData_obj::clear();
		HX_STACK_LINE(431)
		::org::flixel::FlxG_obj::clearBitmapCache();
		HX_STACK_LINE(432)
		::org::flixel::FlxG_obj::resetCameras(null());
		HX_STACK_LINE(433)
		::org::flixel::FlxG_obj::resetInput();
		HX_STACK_LINE(434)
		::org::flixel::FlxG_obj::destroySounds(null());
		HX_STACK_LINE(438)
		if (((this->_debugger != null()))){
			HX_STACK_LINE(439)
			this->_debugger->watch->removeAll();
		}
		HX_STACK_LINE(445)
		::org::flixel::plugin::TimerManager timerManager = ::org::flixel::util::FlxTimer_obj::get_manager();		HX_STACK_VAR(timerManager,"timerManager");
		HX_STACK_LINE(446)
		if (((timerManager != null()))){
			HX_STACK_LINE(447)
			timerManager->clear();
		}
		HX_STACK_LINE(452)
		bool mouseVisibility = (bool(::org::flixel::FlxG_obj::mouse->_updateCursorContainer) || bool(((  (((this->_state != null()))) ? bool(this->_state->get_useMouse()) : bool(false) ))));		HX_STACK_VAR(mouseVisibility,"mouseVisibility");
		HX_STACK_LINE(455)
		if (((this->_state != null()))){
			HX_STACK_LINE(456)
			this->_state->destroy();
		}
		HX_STACK_LINE(461)
		this->_state = this->_requestedState;
		HX_STACK_LINE(463)
		this->_state->set_useMouse(mouseVisibility);
		HX_STACK_LINE(465)
		this->_state->create();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,switchState,(void))

Void FlxGame_obj::requestNewState( ::org::flixel::FlxState newState){
{
		HX_STACK_PUSH("FlxGame::requestNewState","org/flixel/FlxGame.hx",412);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newState,"newState");
		HX_STACK_LINE(412)
		this->_requestedState = newState;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,requestNewState,(void))

Void FlxGame_obj::resetGame( ){
{
		HX_STACK_PUSH("FlxGame::resetGame","org/flixel/FlxGame.hx",389);
		HX_STACK_THIS(this);
		HX_STACK_LINE(390)
		this->_requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
		HX_STACK_LINE(393)
		if ((::Std_obj::is(this->_requestedState,hx::ClassOf< ::org::flixel::FlxSubState >()))){
			HX_STACK_LINE(394)
			hx::Throw (HX_CSTRING("You can't set FlxSubState class instance as the state for you game"));
		}
		HX_STACK_LINE(400)
		this->_replayTimer = (int)0;
		HX_STACK_LINE(401)
		this->_replayCancelKeys = null();
		HX_STACK_LINE(404)
		::org::flixel::FlxG_obj::reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,resetGame,(void))

Void FlxGame_obj::onEnterFrame( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onEnterFrame","org/flixel/FlxGame.hx",328);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(329)
		::org::flixel::FlxGame_obj::_mark = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(330)
		this->_elapsedMS = (::org::flixel::FlxGame_obj::_mark - this->_total);
		HX_STACK_LINE(331)
		this->_total = ::org::flixel::FlxGame_obj::_mark;
		HX_STACK_LINE(334)
		if ((this->_updateSoundTray)){
			HX_STACK_LINE(335)
			this->updateSoundTray(this->_elapsedMS);
		}
		HX_STACK_LINE(338)
		if ((!(this->_lostFocus))){
			HX_STACK_LINE(341)
			if (((bool((this->_debugger != null())) && bool(this->_debugger->vcr->paused)))){
				HX_STACK_LINE(342)
				if ((this->_debugger->vcr->stepRequested)){
					HX_STACK_LINE(345)
					this->_debugger->vcr->stepRequested = false;
					HX_STACK_LINE(346)
					this->step();
				}
			}
			else{
				HX_STACK_LINE(352)
				hx::AddEq(this->_accumulator,this->_elapsedMS);
				HX_STACK_LINE(353)
				if (((this->_accumulator > this->_maxAccumulation))){
					HX_STACK_LINE(354)
					this->_accumulator = this->_maxAccumulation;
				}
				HX_STACK_LINE(359)
				while(((this->_accumulator >= this->_step))){
					HX_STACK_LINE(361)
					this->step();
					HX_STACK_LINE(362)
					this->_accumulator = (this->_accumulator - this->_step);
				}
			}
			HX_STACK_LINE(368)
			::org::flixel::FlxBasic_obj::_VISIBLECOUNT = (int)0;
			HX_STACK_LINE(369)
			this->draw();
			HX_STACK_LINE(372)
			if ((this->_debuggerUp)){
				HX_STACK_LINE(374)
				this->_debugger->perf->flash(this->_elapsedMS);
				HX_STACK_LINE(375)
				this->_debugger->perf->visibleObjects(::org::flixel::FlxBasic_obj::_VISIBLECOUNT);
				HX_STACK_LINE(376)
				this->_debugger->perf->update();
				HX_STACK_LINE(377)
				this->_debugger->watch->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onEnterFrame,(void))

Void FlxGame_obj::onFocusLost( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocusLost","org/flixel/FlxGame.hx",305);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(306)
		if ((!(::org::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(308)
			this->_state->onFocusLost();
			HX_STACK_LINE(309)
			return null();
		}
		HX_STACK_LINE(312)
		this->_lostFocus = true;
		HX_STACK_LINE(315)
		this->_focus->set_visible(true);
		HX_STACK_LINE(318)
		this->get_stage()->set_frameRate((int)10);
		HX_STACK_LINE(319)
		::org::flixel::FlxG_obj::pauseSounds();
		HX_STACK_LINE(320)
		::org::flixel::system::input::FlxInputs_obj::onFocusLost();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocusLost,(void))

Void FlxGame_obj::onFocus( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocus","org/flixel/FlxGame.hx",282);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(283)
		if ((!(::org::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(285)
			this->_state->onFocus();
			HX_STACK_LINE(286)
			return null();
		}
		HX_STACK_LINE(289)
		this->_lostFocus = false;
		HX_STACK_LINE(292)
		this->_focus->set_visible(false);
		HX_STACK_LINE(295)
		this->get_stage()->set_frameRate(this->_flashFramerate);
		HX_STACK_LINE(296)
		::org::flixel::FlxG_obj::resumeSounds();
		HX_STACK_LINE(297)
		::org::flixel::system::input::FlxInputs_obj::onFocus();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocus,(void))

Void FlxGame_obj::showSoundTray( hx::Null< bool >  __o_Silent){
bool Silent = __o_Silent.Default(false);
	HX_STACK_PUSH("FlxGame::showSoundTray","org/flixel/FlxGame.hx",255);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Silent,"Silent");
{
		HX_STACK_LINE(256)
		if ((!(Silent))){
			HX_STACK_LINE(257)
			::org::flixel::FlxG_obj::play(::org::flixel::FlxAssets_obj::sndBeep,null(),null(),null(),null());
		}
		HX_STACK_LINE(260)
		this->_soundTrayTimer = (int)1;
		HX_STACK_LINE(261)
		this->_soundTray->set_y((int)0);
		HX_STACK_LINE(262)
		this->_soundTray->set_visible(true);
		HX_STACK_LINE(263)
		this->_updateSoundTray = true;
		HX_STACK_LINE(264)
		int globalVolume = ::Math_obj::round((::org::flixel::FlxG_obj::volume * (int)10));		HX_STACK_VAR(globalVolume,"globalVolume");
		HX_STACK_LINE(265)
		if ((::org::flixel::FlxG_obj::mute)){
			HX_STACK_LINE(266)
			globalVolume = (int)0;
		}
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(269)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_soundTrayBars->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(269)
			while(((_g1 < _g))){
				HX_STACK_LINE(269)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(271)
				if (((i < globalVolume))){
					HX_STACK_LINE(271)
					this->_soundTrayBars->__get(i).StaticCast< ::flash::display::Bitmap >()->set_alpha((int)1);
				}
				else{
					HX_STACK_LINE(272)
					this->_soundTrayBars->__get(i).StaticCast< ::flash::display::Bitmap >()->set_alpha(0.5);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,showSoundTray,(void))

int FlxGame_obj::_mark;


FlxGame_obj::FlxGame_obj()
{
}

void FlxGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGame);
	HX_MARK_MEMBER_NAME(debugger,"debugger");
	HX_MARK_MEMBER_NAME(_replayCallback,"_replayCallback");
	HX_MARK_MEMBER_NAME(_replayTimer,"_replayTimer");
	HX_MARK_MEMBER_NAME(_replayCancelKeys,"_replayCancelKeys");
	HX_MARK_MEMBER_NAME(_recording,"_recording");
	HX_MARK_MEMBER_NAME(_replaying,"_replaying");
	HX_MARK_MEMBER_NAME(_recordingRequested,"_recordingRequested");
	HX_MARK_MEMBER_NAME(_replayRequested,"_replayRequested");
	HX_MARK_MEMBER_NAME(_replay,"_replay");
	HX_MARK_MEMBER_NAME(_debuggerUp,"_debuggerUp");
	HX_MARK_MEMBER_NAME(_debugger,"_debugger");
	HX_MARK_MEMBER_NAME(_prefsSave,"_prefsSave");
	HX_MARK_MEMBER_NAME(_soundTrayBars,"_soundTrayBars");
	HX_MARK_MEMBER_NAME(_updateSoundTray,"_updateSoundTray");
	HX_MARK_MEMBER_NAME(_soundTrayTimer,"_soundTrayTimer");
	HX_MARK_MEMBER_NAME(_soundTray,"_soundTray");
	HX_MARK_MEMBER_NAME(_focus,"_focus");
	HX_MARK_MEMBER_NAME(_requestedReset,"_requestedReset");
	HX_MARK_MEMBER_NAME(_requestedState,"_requestedState");
	HX_MARK_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_MARK_MEMBER_NAME(_flashFramerate,"_flashFramerate");
	HX_MARK_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_MARK_MEMBER_NAME(_step,"_step");
	HX_MARK_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_MARK_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_MARK_MEMBER_NAME(_accumulator,"_accumulator");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(_iState,"_iState");
	HX_MARK_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(tempDisableSoundHotKeys,"tempDisableSoundHotKeys");
	HX_MARK_MEMBER_NAME(junk,"junk");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(debugger,"debugger");
	HX_VISIT_MEMBER_NAME(_replayCallback,"_replayCallback");
	HX_VISIT_MEMBER_NAME(_replayTimer,"_replayTimer");
	HX_VISIT_MEMBER_NAME(_replayCancelKeys,"_replayCancelKeys");
	HX_VISIT_MEMBER_NAME(_recording,"_recording");
	HX_VISIT_MEMBER_NAME(_replaying,"_replaying");
	HX_VISIT_MEMBER_NAME(_recordingRequested,"_recordingRequested");
	HX_VISIT_MEMBER_NAME(_replayRequested,"_replayRequested");
	HX_VISIT_MEMBER_NAME(_replay,"_replay");
	HX_VISIT_MEMBER_NAME(_debuggerUp,"_debuggerUp");
	HX_VISIT_MEMBER_NAME(_debugger,"_debugger");
	HX_VISIT_MEMBER_NAME(_prefsSave,"_prefsSave");
	HX_VISIT_MEMBER_NAME(_soundTrayBars,"_soundTrayBars");
	HX_VISIT_MEMBER_NAME(_updateSoundTray,"_updateSoundTray");
	HX_VISIT_MEMBER_NAME(_soundTrayTimer,"_soundTrayTimer");
	HX_VISIT_MEMBER_NAME(_soundTray,"_soundTray");
	HX_VISIT_MEMBER_NAME(_focus,"_focus");
	HX_VISIT_MEMBER_NAME(_requestedReset,"_requestedReset");
	HX_VISIT_MEMBER_NAME(_requestedState,"_requestedState");
	HX_VISIT_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_VISIT_MEMBER_NAME(_flashFramerate,"_flashFramerate");
	HX_VISIT_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_VISIT_MEMBER_NAME(_step,"_step");
	HX_VISIT_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_VISIT_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_VISIT_MEMBER_NAME(_accumulator,"_accumulator");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(_iState,"_iState");
	HX_VISIT_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(tempDisableSoundHotKeys,"tempDisableSoundHotKeys");
	HX_VISIT_MEMBER_NAME(junk,"junk");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		if (HX_FIELD_EQ(inName,"junk") ) { return junk; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mark") ) { return _mark; }
		if (HX_FIELD_EQ(inName,"_step") ) { return _step; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_focus") ) { return _focus; }
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"_replay") ) { return _replay; }
		if (HX_FIELD_EQ(inName,"_iState") ) { return _iState; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugger") ) { return inCallProp ? get_debugger() : debugger; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"_debugger") ) { return _debugger; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_recording") ) { return _recording; }
		if (HX_FIELD_EQ(inName,"_replaying") ) { return _replaying; }
		if (HX_FIELD_EQ(inName,"_prefsSave") ) { return _prefsSave; }
		if (HX_FIELD_EQ(inName,"_soundTray") ) { return _soundTray; }
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { return _elapsedMS; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { return _lostFocus; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateInput") ) { return updateInput_dyn(); }
		if (HX_FIELD_EQ(inName,"updateState") ) { return updateState_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"_debuggerUp") ) { return _debuggerUp; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_debugger") ) { return get_debugger_dyn(); }
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"_replayTimer") ) { return _replayTimer; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { return _stepSeconds; }
		if (HX_FIELD_EQ(inName,"_accumulator") ) { return _accumulator; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"showSoundTray") ) { return showSoundTray_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadSoundPrefs") ) { return loadSoundPrefs_dyn(); }
		if (HX_FIELD_EQ(inName,"_soundTrayBars") ) { return _soundTrayBars; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createSoundTray") ) { return createSoundTray_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSoundTray") ) { return updateSoundTray_dyn(); }
		if (HX_FIELD_EQ(inName,"requestNewState") ) { return requestNewState_dyn(); }
		if (HX_FIELD_EQ(inName,"_replayCallback") ) { return _replayCallback; }
		if (HX_FIELD_EQ(inName,"_soundTrayTimer") ) { return _soundTrayTimer; }
		if (HX_FIELD_EQ(inName,"_requestedReset") ) { return _requestedReset; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { return _requestedState; }
		if (HX_FIELD_EQ(inName,"_flashFramerate") ) { return _flashFramerate; }
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { return _inputContainer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_replayRequested") ) { return _replayRequested; }
		if (HX_FIELD_EQ(inName,"_updateSoundTray") ) { return _updateSoundTray; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { return _maxAccumulation; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createFocusScreen") ) { return createFocusScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"_replayCancelKeys") ) { return _replayCancelKeys; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_recordingRequested") ) { return _recordingRequested; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"tempDisableSoundHotKeys") ) { return tempDisableSoundHotKeys; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"junk") ) { junk=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mark") ) { _mark=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_step") ) { _step=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_focus") ) { _focus=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::org::flixel::FlxState >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_replay") ) { _replay=inValue.Cast< ::org::flixel::system::FlxReplay >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iState") ) { _iState=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugger") ) { debugger=inValue.Cast< ::org::flixel::system::FlxDebugger >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_debugger") ) { _debugger=inValue.Cast< ::org::flixel::system::FlxDebugger >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_recording") ) { _recording=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_replaying") ) { _replaying=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prefsSave") ) { _prefsSave=inValue.Cast< ::org::flixel::FlxSave >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_soundTray") ) { _soundTray=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { _elapsedMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { _lostFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_debuggerUp") ) { _debuggerUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_replayTimer") ) { _replayTimer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { _stepSeconds=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_accumulator") ) { _accumulator=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_soundTrayBars") ) { _soundTrayBars=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_replayCallback") ) { _replayCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_soundTrayTimer") ) { _soundTrayTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requestedReset") ) { _requestedReset=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { _requestedState=inValue.Cast< ::org::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashFramerate") ) { _flashFramerate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { _inputContainer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_replayRequested") ) { _replayRequested=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateSoundTray") ) { _updateSoundTray=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { _maxAccumulation=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_replayCancelKeys") ) { _replayCancelKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_recordingRequested") ) { _recordingRequested=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"tempDisableSoundHotKeys") ) { tempDisableSoundHotKeys=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("debugger"));
	outFields->push(HX_CSTRING("_replayTimer"));
	outFields->push(HX_CSTRING("_replayCancelKeys"));
	outFields->push(HX_CSTRING("_recording"));
	outFields->push(HX_CSTRING("_replaying"));
	outFields->push(HX_CSTRING("_recordingRequested"));
	outFields->push(HX_CSTRING("_replayRequested"));
	outFields->push(HX_CSTRING("_replay"));
	outFields->push(HX_CSTRING("_debuggerUp"));
	outFields->push(HX_CSTRING("_debugger"));
	outFields->push(HX_CSTRING("_prefsSave"));
	outFields->push(HX_CSTRING("_soundTrayBars"));
	outFields->push(HX_CSTRING("_updateSoundTray"));
	outFields->push(HX_CSTRING("_soundTrayTimer"));
	outFields->push(HX_CSTRING("_soundTray"));
	outFields->push(HX_CSTRING("_focus"));
	outFields->push(HX_CSTRING("_requestedReset"));
	outFields->push(HX_CSTRING("_requestedState"));
	outFields->push(HX_CSTRING("_maxAccumulation"));
	outFields->push(HX_CSTRING("_flashFramerate"));
	outFields->push(HX_CSTRING("_stepSeconds"));
	outFields->push(HX_CSTRING("_step"));
	outFields->push(HX_CSTRING("_elapsedMS"));
	outFields->push(HX_CSTRING("_lostFocus"));
	outFields->push(HX_CSTRING("_accumulator"));
	outFields->push(HX_CSTRING("_total"));
	outFields->push(HX_CSTRING("_iState"));
	outFields->push(HX_CSTRING("_inputContainer"));
	outFields->push(HX_CSTRING("_state"));
	outFields->push(HX_CSTRING("tempDisableSoundHotKeys"));
	outFields->push(HX_CSTRING("junk"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_mark"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_debugger"),
	HX_CSTRING("debugger"),
	HX_CSTRING("createFocusScreen"),
	HX_CSTRING("loadSoundPrefs"),
	HX_CSTRING("createSoundTray"),
	HX_CSTRING("create"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateInput"),
	HX_CSTRING("updateState"),
	HX_CSTRING("update"),
	HX_CSTRING("updateSoundTray"),
	HX_CSTRING("step"),
	HX_CSTRING("switchState"),
	HX_CSTRING("requestNewState"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("showSoundTray"),
	HX_CSTRING("_replayCallback"),
	HX_CSTRING("_replayTimer"),
	HX_CSTRING("_replayCancelKeys"),
	HX_CSTRING("_recording"),
	HX_CSTRING("_replaying"),
	HX_CSTRING("_recordingRequested"),
	HX_CSTRING("_replayRequested"),
	HX_CSTRING("_replay"),
	HX_CSTRING("_debuggerUp"),
	HX_CSTRING("_debugger"),
	HX_CSTRING("_prefsSave"),
	HX_CSTRING("_soundTrayBars"),
	HX_CSTRING("_updateSoundTray"),
	HX_CSTRING("_soundTrayTimer"),
	HX_CSTRING("_soundTray"),
	HX_CSTRING("_focus"),
	HX_CSTRING("_requestedReset"),
	HX_CSTRING("_requestedState"),
	HX_CSTRING("_maxAccumulation"),
	HX_CSTRING("_flashFramerate"),
	HX_CSTRING("_stepSeconds"),
	HX_CSTRING("_step"),
	HX_CSTRING("_elapsedMS"),
	HX_CSTRING("_lostFocus"),
	HX_CSTRING("_accumulator"),
	HX_CSTRING("_total"),
	HX_CSTRING("_iState"),
	HX_CSTRING("_inputContainer"),
	HX_CSTRING("_state"),
	HX_CSTRING("tempDisableSoundHotKeys"),
	HX_CSTRING("junk"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxGame_obj::_mark,"_mark");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGame_obj::_mark,"_mark");
};

Class FlxGame_obj::__mClass;

void FlxGame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxGame"), hx::TCanCast< FlxGame_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGame_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
