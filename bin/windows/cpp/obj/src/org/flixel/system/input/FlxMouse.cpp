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
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_ui_Mouse
#include <flash/ui/Mouse.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_org_flixel_system_FlxDebugger
#include <org/flixel/system/FlxDebugger.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Watch
#include <org/flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxMouse
#include <org/flixel/system/input/FlxMouse.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_IFlxInput
#include <org/flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_org_flixel_system_replay_MouseRecord
#include <org/flixel/system/replay/MouseRecord.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

Void FlxMouse_obj::__construct(::flash::display::Sprite CursorContainer)
{
HX_STACK_PUSH("FlxMouse::new","org/flixel/system/input/FlxMouse.hx",98);
{
	HX_STACK_LINE(99)
	super::__construct(null(),null());
	HX_STACK_LINE(100)
	this->cursorContainer = CursorContainer;
	HX_STACK_LINE(101)
	this->cursorContainer->set_mouseChildren(false);
	HX_STACK_LINE(102)
	this->cursorContainer->set_mouseEnabled(false);
	HX_STACK_LINE(103)
	this->_lastX = this->screenX = (int)0;
	HX_STACK_LINE(104)
	this->_lastY = this->screenY = (int)0;
	HX_STACK_LINE(105)
	this->_lastWheel = this->wheel = (int)0;
	HX_STACK_LINE(106)
	this->_current = (int)0;
	HX_STACK_LINE(107)
	this->_last = (int)0;
	HX_STACK_LINE(108)
	this->_cursor = null();
	HX_STACK_LINE(109)
	this->_point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(110)
	this->_globalScreenPosition = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(111)
	this->set_useSystemCursor(false);
	HX_STACK_LINE(113)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(114)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
	HX_STACK_LINE(115)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),null(),null(),null());
}
;
	return null();
}

FlxMouse_obj::~FlxMouse_obj() { }

Dynamic FlxMouse_obj::__CreateEmpty() { return  new FlxMouse_obj; }
hx::ObjectPtr< FlxMouse_obj > FlxMouse_obj::__new(::flash::display::Sprite CursorContainer)
{  hx::ObjectPtr< FlxMouse_obj > result = new FlxMouse_obj();
	result->__construct(CursorContainer);
	return result;}

Dynamic FlxMouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouse_obj > result = new FlxMouse_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxMouse_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::flixel::system::input::IFlxInput_obj)) return operator ::org::flixel::system::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

bool FlxMouse_obj::set_useSystemCursor( bool value){
	HX_STACK_PUSH("FlxMouse::set_useSystemCursor","org/flixel/system/input/FlxMouse.hx",601);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(602)
	this->useSystemCursor = value;
	HX_STACK_LINE(603)
	if ((!(this->useSystemCursor))){
		HX_STACK_LINE(604)
		::flash::ui::Mouse_obj::hide();
	}
	else{
		HX_STACK_LINE(608)
		::flash::ui::Mouse_obj::show();
	}
	HX_STACK_LINE(611)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_useSystemCursor,return )

Void FlxMouse_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxMouse::onFocusLost","org/flixel/system/input/FlxMouse.hx",596);
		HX_STACK_THIS(this);
		HX_STACK_LINE(596)
		::flash::ui::Mouse_obj::show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocusLost,(void))

Void FlxMouse_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxMouse::onFocus","org/flixel/system/input/FlxMouse.hx",583);
		HX_STACK_THIS(this);
		HX_STACK_LINE(585)
		if (((bool(!(::org::flixel::FlxG_obj::_game->_debuggerUp)) && bool(!(this->useSystemCursor))))){
			HX_STACK_LINE(589)
			::flash::ui::Mouse_obj::hide();
		}
		HX_STACK_LINE(592)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocus,(void))

Void FlxMouse_obj::playback( ::org::flixel::system::replay::MouseRecord Record){
{
		HX_STACK_PUSH("FlxMouse::playback","org/flixel/system/input/FlxMouse.hx",574);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Record,"Record");
		HX_STACK_LINE(575)
		this->_current = Record->button;
		HX_STACK_LINE(576)
		this->wheel = Record->wheel;
		HX_STACK_LINE(577)
		this->_globalScreenPosition->x = Record->x;
		HX_STACK_LINE(578)
		this->_globalScreenPosition->y = Record->y;
		HX_STACK_LINE(579)
		this->updateCursor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,playback,(void))

::org::flixel::system::replay::MouseRecord FlxMouse_obj::record( ){
	HX_STACK_PUSH("FlxMouse::record","org/flixel/system/input/FlxMouse.hx",557);
	HX_STACK_THIS(this);
	HX_STACK_LINE(558)
	if (((bool((bool((bool((this->_lastX == this->_globalScreenPosition->x)) && bool((this->_lastY == this->_globalScreenPosition->y)))) && bool((this->_current == (int)0)))) && bool((this->_lastWheel == this->wheel))))){
		HX_STACK_LINE(559)
		return null();
	}
	HX_STACK_LINE(562)
	this->_lastX = ::Math_obj::floor(this->_globalScreenPosition->x);
	HX_STACK_LINE(563)
	this->_lastY = ::Math_obj::floor(this->_globalScreenPosition->y);
	HX_STACK_LINE(564)
	this->_lastWheel = this->wheel;
	HX_STACK_LINE(565)
	return ::org::flixel::system::replay::MouseRecord_obj::__new(this->_lastX,this->_lastY,this->_current,this->_lastWheel);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,record,return )

bool FlxMouse_obj::justReleased( ){
	HX_STACK_PUSH("FlxMouse::justReleased","org/flixel/system/input/FlxMouse.hx",506);
	HX_STACK_THIS(this);
	HX_STACK_LINE(506)
	return (bool((this->_current == (int)-1)) || bool((this->_current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,justReleased,return )

bool FlxMouse_obj::justPressed( ){
	HX_STACK_PUSH("FlxMouse::justPressed","org/flixel/system/input/FlxMouse.hx",500);
	HX_STACK_THIS(this);
	HX_STACK_LINE(500)
	return (bool((this->_current == (int)2)) || bool((this->_current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,justPressed,return )

bool FlxMouse_obj::pressed( ){
	HX_STACK_PUSH("FlxMouse::pressed","org/flixel/system/input/FlxMouse.hx",494);
	HX_STACK_THIS(this);
	HX_STACK_LINE(494)
	return (this->_current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,pressed,return )

Void FlxMouse_obj::reset( ){
{
		HX_STACK_PUSH("FlxMouse::reset","org/flixel/system/input/FlxMouse.hx",485);
		HX_STACK_THIS(this);
		HX_STACK_LINE(486)
		this->_current = (int)0;
		HX_STACK_LINE(487)
		this->_last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,reset,(void))

::org::flixel::util::FlxPoint FlxMouse_obj::getScreenPosition( ::org::flixel::FlxCamera Camera,::org::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxMouse::getScreenPosition","org/flixel/system/input/FlxMouse.hx",467);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(468)
	if (((Camera == null()))){
		HX_STACK_LINE(469)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(472)
	if (((point == null()))){
		HX_STACK_LINE(473)
		point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(476)
	point->x = (Float(((this->_globalScreenPosition->x - Camera->x))) / Float(Camera->zoom));
	HX_STACK_LINE(477)
	point->y = (Float(((this->_globalScreenPosition->y - Camera->y))) / Float(Camera->zoom));
	HX_STACK_LINE(478)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouse_obj,getScreenPosition,return )

::org::flixel::util::FlxPoint FlxMouse_obj::getWorldPosition( ::org::flixel::FlxCamera Camera,::org::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxMouse::getWorldPosition","org/flixel/system/input/FlxMouse.hx",444);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(445)
	if (((Camera == null()))){
		HX_STACK_LINE(446)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(449)
	if (((point == null()))){
		HX_STACK_LINE(450)
		point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(453)
	this->getScreenPosition(Camera,this->_point);
	HX_STACK_LINE(454)
	point->x = (this->_point->x + Camera->scroll->x);
	HX_STACK_LINE(455)
	point->y = (this->_point->y + Camera->scroll->y);
	HX_STACK_LINE(456)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouse_obj,getWorldPosition,return )

Void FlxMouse_obj::updateCursor( ){
{
		HX_STACK_PUSH("FlxMouse::updateCursor","org/flixel/system/input/FlxMouse.hx",419);
		HX_STACK_THIS(this);
		HX_STACK_LINE(421)
		if ((this->_updateCursorContainer)){
			HX_STACK_LINE(423)
			this->cursorContainer->set_x(this->_globalScreenPosition->x);
			HX_STACK_LINE(424)
			this->cursorContainer->set_y(this->_globalScreenPosition->y);
		}
		HX_STACK_LINE(429)
		::org::flixel::FlxCamera camera = ::org::flixel::FlxG_obj::camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(430)
		this->screenX = ::Math_obj::floor((Float(((this->_globalScreenPosition->x - camera->x))) / Float(camera->zoom)));
		HX_STACK_LINE(431)
		this->screenY = ::Math_obj::floor((Float(((this->_globalScreenPosition->y - camera->y))) / Float(camera->zoom)));
		HX_STACK_LINE(432)
		this->x = (this->screenX + camera->scroll->x);
		HX_STACK_LINE(433)
		this->y = (this->screenY + camera->scroll->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,updateCursor,(void))

Void FlxMouse_obj::update( ){
{
		HX_STACK_PUSH("FlxMouse::update","org/flixel/system/input/FlxMouse.hx",393);
		HX_STACK_THIS(this);
		HX_STACK_LINE(394)
		int X = ::Math_obj::floor(::org::flixel::FlxG_obj::_game->get_mouseX());		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(395)
		int Y = ::Math_obj::floor(::org::flixel::FlxG_obj::_game->get_mouseY());		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(397)
		this->_globalScreenPosition->x = X;
		HX_STACK_LINE(398)
		this->_globalScreenPosition->y = Y;
		HX_STACK_LINE(399)
		this->updateCursor();
		HX_STACK_LINE(400)
		if (((bool((this->_last == (int)-1)) && bool((this->_current == (int)-1))))){
			HX_STACK_LINE(401)
			this->_current = (int)0;
		}
		else{
			HX_STACK_LINE(404)
			if (((bool((this->_last == (int)2)) && bool((this->_current == (int)2))))){
				HX_STACK_LINE(405)
				this->_current = (int)1;
			}
			else{
				HX_STACK_LINE(408)
				if (((bool((this->_last == (int)-2)) && bool((this->_current == (int)-2))))){
					HX_STACK_LINE(409)
					this->_current = (int)0;
				}
			}
		}
		HX_STACK_LINE(412)
		this->_last = this->_current;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,update,(void))

Void FlxMouse_obj::unload( ){
{
		HX_STACK_PUSH("FlxMouse::unload","org/flixel/system/input/FlxMouse.hx",371);
		HX_STACK_THIS(this);
		HX_STACK_LINE(371)
		if (((this->_cursor != null()))){
			HX_STACK_LINE(373)
			if ((this->cursorContainer->get_visible())){
				HX_STACK_LINE(375)
				this->load(null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(380)
				this->cursorContainer->removeChild(this->_cursor);
				HX_STACK_LINE(381)
				this->_cursor = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,unload,(void))

Void FlxMouse_obj::load( Dynamic Graphic,hx::Null< Float >  __o_Scale,hx::Null< int >  __o_XOffset,hx::Null< int >  __o_YOffset){
Float Scale = __o_Scale.Default(1);
int XOffset = __o_XOffset.Default(0);
int YOffset = __o_YOffset.Default(0);
	HX_STACK_PUSH("FlxMouse::load","org/flixel/system/input/FlxMouse.hx",330);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_ARG(XOffset,"XOffset");
	HX_STACK_ARG(YOffset,"YOffset");
{
		HX_STACK_LINE(331)
		if (((this->_cursor != null()))){
			HX_STACK_LINE(332)
			this->cursorContainer->removeChild(this->_cursor);
		}
		HX_STACK_LINE(336)
		if (((Graphic == null()))){
			HX_STACK_LINE(337)
			Graphic = ::org::flixel::FlxAssets_obj::imgDefaultCursor;
		}
		HX_STACK_LINE(341)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(342)
			this->_cursor = ::Type_obj::createInstance(Graphic,Dynamic( Array_obj<Dynamic>::__new()));
		}
		else{
			HX_STACK_LINE(345)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::flash::display::BitmapData >()))){
				HX_STACK_LINE(346)
				this->_cursor = ::flash::display::Bitmap_obj::__new(hx::TCast< flash::display::BitmapData >::cast(Graphic),null(),null());
			}
			else{
				HX_STACK_LINE(349)
				if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
					HX_STACK_LINE(350)
					this->_cursor = ::flash::display::Bitmap_obj::__new(::org::flixel::FlxAssets_obj::getBitmapData(Graphic),null(),null());
				}
				else{
					HX_STACK_LINE(354)
					this->_cursor = ::flash::display::Bitmap_obj::__new(::org::flixel::FlxAssets_obj::getBitmapData(::org::flixel::FlxAssets_obj::imgDefaultCursor),null(),null());
				}
			}
		}
		HX_STACK_LINE(358)
		this->_cursor->set_x(XOffset);
		HX_STACK_LINE(359)
		this->_cursor->set_y(YOffset);
		HX_STACK_LINE(360)
		this->_cursor->set_scaleX(Scale);
		HX_STACK_LINE(361)
		this->_cursor->set_scaleY(Scale);
		HX_STACK_LINE(363)
		this->cursorContainer->addChild(this->_cursor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxMouse_obj,load,(void))

bool FlxMouse_obj::get_visible( ){
	HX_STACK_PUSH("FlxMouse::get_visible","org/flixel/system/input/FlxMouse.hx",318);
	HX_STACK_THIS(this);
	HX_STACK_LINE(318)
	return this->_updateCursorContainer;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_visible,return )

Void FlxMouse_obj::hide( ){
{
		HX_STACK_PUSH("FlxMouse::hide","org/flixel/system/input/FlxMouse.hx",309);
		HX_STACK_THIS(this);
		HX_STACK_LINE(310)
		this->_updateCursorContainer = false;
		HX_STACK_LINE(311)
		this->cursorContainer->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,hide,(void))

Void FlxMouse_obj::show( Dynamic Graphic,hx::Null< Float >  __o_Scale,hx::Null< int >  __o_XOffset,hx::Null< int >  __o_YOffset){
Float Scale = __o_Scale.Default(1);
int XOffset = __o_XOffset.Default(0);
int YOffset = __o_YOffset.Default(0);
	HX_STACK_PUSH("FlxMouse::show","org/flixel/system/input/FlxMouse.hx",288);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_ARG(XOffset,"XOffset");
	HX_STACK_ARG(YOffset,"YOffset");
{
		HX_STACK_LINE(289)
		this->_updateCursorContainer = true;
		HX_STACK_LINE(290)
		this->cursorContainer->set_visible(true);
		HX_STACK_LINE(291)
		if (((Graphic != null()))){
			HX_STACK_LINE(292)
			this->load(Graphic,Scale,XOffset,YOffset);
		}
		else{
			HX_STACK_LINE(295)
			if (((this->_cursor == null()))){
				HX_STACK_LINE(296)
				this->load(null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(299)
		if ((this->useSystemCursor)){
			HX_STACK_LINE(300)
			::flash::ui::Mouse_obj::show();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxMouse_obj,show,(void))

Void FlxMouse_obj::destroy( ){
{
		HX_STACK_PUSH("FlxMouse::destroy","org/flixel/system/input/FlxMouse.hx",268);
		HX_STACK_THIS(this);
		HX_STACK_LINE(269)
		this->cursorContainer = null();
		HX_STACK_LINE(270)
		this->_cursor = null();
		HX_STACK_LINE(271)
		this->_point = null();
		HX_STACK_LINE(272)
		this->_globalScreenPosition = null();
		HX_STACK_LINE(273)
		if (((this->_cursorBitmapData != null()))){
			HX_STACK_LINE(275)
			this->_cursorBitmapData->dispose();
			HX_STACK_LINE(276)
			this->_cursorBitmapData = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,destroy,(void))

Void FlxMouse_obj::onMouseWheel( ::flash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("FlxMouse::onMouseWheel","org/flixel/system/input/FlxMouse.hx",207);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(209)
		if (((bool((bool(::org::flixel::FlxG_obj::_game->_debuggerUp) && bool(::org::flixel::FlxG_obj::_game->_debugger->hasMouse))) || bool(::org::flixel::FlxG_obj::_game->_replaying)))){
			HX_STACK_LINE(210)
			return null();
		}
		HX_STACK_LINE(215)
		this->wheel = FlashEvent->delta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseWheel,(void))

Void FlxMouse_obj::onMouseUp( ::flash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("FlxMouse::onMouseUp","org/flixel/system/input/FlxMouse.hx",180);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(182)
		if (((bool((bool(::org::flixel::FlxG_obj::_game->_debuggerUp) && bool(::org::flixel::FlxG_obj::_game->_debugger->hasMouse))) || bool(::org::flixel::FlxG_obj::_game->_replaying)))){
			HX_STACK_LINE(183)
			return null();
		}
		HX_STACK_LINE(188)
		if (((this->_current > (int)0))){
			HX_STACK_LINE(189)
			this->_current = (int)-1;
		}
		else{
			HX_STACK_LINE(192)
			if (((this->_current == (int)-2))){
				HX_STACK_LINE(193)
				(this->_current == (int)-2);
			}
			else{
				HX_STACK_LINE(197)
				this->_current = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseUp,(void))

Void FlxMouse_obj::onMouseDown( ::flash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("FlxMouse::onMouseDown","org/flixel/system/input/FlxMouse.hx",129);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(131)
		if ((::org::flixel::FlxG_obj::_game->_debuggerUp)){
			HX_STACK_LINE(133)
			if ((::org::flixel::FlxG_obj::_game->_debugger->hasMouse)){
				HX_STACK_LINE(134)
				return null();
			}
			HX_STACK_LINE(137)
			if ((::org::flixel::FlxG_obj::_game->_debugger->watch->editing)){
				HX_STACK_LINE(138)
				::org::flixel::FlxG_obj::_game->_debugger->watch->submit();
			}
		}
		HX_STACK_LINE(145)
		if (((bool(::org::flixel::FlxG_obj::_game->_replaying) && bool((::org::flixel::FlxG_obj::_game->_replayCancelKeys != null()))))){
			HX_STACK_LINE(147)
			::String replayCancelKey;		HX_STACK_VAR(replayCancelKey,"replayCancelKey");
			HX_STACK_LINE(148)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(149)
			int l = ::org::flixel::FlxG_obj::_game->_replayCancelKeys->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(150)
			while(((i < l))){
				HX_STACK_LINE(152)
				replayCancelKey = ::org::flixel::FlxG_obj::_game->_replayCancelKeys->__get((i)++);
				HX_STACK_LINE(153)
				if (((bool((replayCancelKey == HX_CSTRING("MOUSE"))) || bool((replayCancelKey == HX_CSTRING("ANY")))))){
					HX_STACK_LINE(155)
					if (((::org::flixel::FlxG_obj::_game->_replayCallback != null()))){
						HX_STACK_LINE(157)
						::org::flixel::FlxG_obj::_game->_replayCallback();
						HX_STACK_LINE(158)
						::org::flixel::FlxG_obj::_game->_replayCallback = null();
					}
					else{
						HX_STACK_LINE(161)
						::org::flixel::FlxG_obj::stopReplay();
					}
					HX_STACK_LINE(164)
					break;
				}
			}
			HX_STACK_LINE(167)
			return null();
		}
		HX_STACK_LINE(171)
		if (((this->_current > (int)0))){
			HX_STACK_LINE(171)
			this->_current = (int)1;
		}
		else{
			HX_STACK_LINE(172)
			this->_current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseDown,(void))


FlxMouse_obj::FlxMouse_obj()
{
}

void FlxMouse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouse);
	HX_MARK_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_MARK_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_MARK_MEMBER_NAME(_lastY,"_lastY");
	HX_MARK_MEMBER_NAME(_lastX,"_lastX");
	HX_MARK_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_MARK_MEMBER_NAME(_cursor,"_cursor");
	HX_MARK_MEMBER_NAME(_updateCursorContainer,"_updateCursorContainer");
	HX_MARK_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_current,"_current");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(screenY,"screenY");
	HX_MARK_MEMBER_NAME(screenX,"screenX");
	HX_MARK_MEMBER_NAME(wheel,"wheel");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxMouse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_VISIT_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_VISIT_MEMBER_NAME(_lastY,"_lastY");
	HX_VISIT_MEMBER_NAME(_lastX,"_lastX");
	HX_VISIT_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_VISIT_MEMBER_NAME(_cursor,"_cursor");
	HX_VISIT_MEMBER_NAME(_updateCursorContainer,"_updateCursorContainer");
	HX_VISIT_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_current,"_current");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(screenY,"screenY");
	HX_VISIT_MEMBER_NAME(screenX,"screenX");
	HX_VISIT_MEMBER_NAME(wheel,"wheel");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxMouse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"wheel") ) { return wheel; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { return _lastY; }
		if (HX_FIELD_EQ(inName,"_lastX") ) { return _lastX; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_cursor") ) { return _cursor; }
		if (HX_FIELD_EQ(inName,"visible") ) { return inCallProp ? get_visible() : visible; }
		if (HX_FIELD_EQ(inName,"screenY") ) { return screenY; }
		if (HX_FIELD_EQ(inName,"screenX") ) { return screenX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		if (HX_FIELD_EQ(inName,"_current") ) { return _current; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { return _lastWheel; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"updateCursor") ) { return updateCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { return useSystemCursor; }
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { return cursorContainer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return getWorldPosition_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { return _cursorBitmapData; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_useSystemCursor") ) { return set_useSystemCursor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { return _globalScreenPosition; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_updateCursorContainer") ) { return _updateCursorContainer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { _lastY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastX") ) { _lastX=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_cursor") ) { _cursor=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { _lastWheel=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { if (inCallProp) return set_useSystemCursor(inValue);useSystemCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { cursorContainer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { _cursorBitmapData=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { _globalScreenPosition=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_updateCursorContainer") ) { _updateCursorContainer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("useSystemCursor"));
	outFields->push(HX_CSTRING("_globalScreenPosition"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_lastWheel"));
	outFields->push(HX_CSTRING("_lastY"));
	outFields->push(HX_CSTRING("_lastX"));
	outFields->push(HX_CSTRING("_cursorBitmapData"));
	outFields->push(HX_CSTRING("_cursor"));
	outFields->push(HX_CSTRING("_updateCursorContainer"));
	outFields->push(HX_CSTRING("cursorContainer"));
	outFields->push(HX_CSTRING("_last"));
	outFields->push(HX_CSTRING("_current"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("screenY"));
	outFields->push(HX_CSTRING("screenX"));
	outFields->push(HX_CSTRING("wheel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_useSystemCursor"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("playback"),
	HX_CSTRING("record"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("reset"),
	HX_CSTRING("getScreenPosition"),
	HX_CSTRING("getWorldPosition"),
	HX_CSTRING("updateCursor"),
	HX_CSTRING("update"),
	HX_CSTRING("unload"),
	HX_CSTRING("load"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("hide"),
	HX_CSTRING("show"),
	HX_CSTRING("destroy"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("useSystemCursor"),
	HX_CSTRING("_globalScreenPosition"),
	HX_CSTRING("_point"),
	HX_CSTRING("_lastWheel"),
	HX_CSTRING("_lastY"),
	HX_CSTRING("_lastX"),
	HX_CSTRING("_cursorBitmapData"),
	HX_CSTRING("_cursor"),
	HX_CSTRING("_updateCursorContainer"),
	HX_CSTRING("cursorContainer"),
	HX_CSTRING("_last"),
	HX_CSTRING("_current"),
	HX_CSTRING("visible"),
	HX_CSTRING("screenY"),
	HX_CSTRING("screenX"),
	HX_CSTRING("wheel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

Class FlxMouse_obj::__mClass;

void FlxMouse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.FlxMouse"), hx::TCanCast< FlxMouse_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxMouse_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
