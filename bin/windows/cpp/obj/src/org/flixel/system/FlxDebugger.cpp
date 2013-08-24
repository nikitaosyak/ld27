#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
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
#ifndef INCLUDED_flash_ui_Mouse
#include <flash/ui/Mouse.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
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
#ifndef INCLUDED_org_flixel_system_debug_Console
#include <org/flixel/system/debug/Console.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Log
#include <org/flixel/system/debug/Log.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Perf
#include <org/flixel/system/debug/Perf.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_VCR
#include <org/flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Vis
#include <org/flixel/system/debug/Vis.h>
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
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace system{

Void FlxDebugger_obj::__construct(Float Width,Float Height)
{
HX_STACK_PUSH("FlxDebugger::new","org/flixel/system/FlxDebugger.hx",85);
{
	HX_STACK_LINE(86)
	super::__construct();
	HX_STACK_LINE(87)
	this->set_visible(false);
	HX_STACK_LINE(88)
	this->hasMouse = false;
	HX_STACK_LINE(89)
	this->_screen = ::flash::geom::Point_obj::__new(Width,Height);
	HX_STACK_LINE(94)
	::flash::display::Sprite bg = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(bg,"bg");
	HX_STACK_LINE(95)
	bg->get_graphics()->beginFill((int)0,(Float((int)127) / Float((int)255)));
	HX_STACK_LINE(96)
	bg->get_graphics()->drawRect((int)0,(int)0,::Std_obj::_int(Width),(int)15);
	HX_STACK_LINE(97)
	bg->get_graphics()->endFill();
	HX_STACK_LINE(98)
	this->addChild(bg);
	HX_STACK_LINE(101)
	::flash::text::TextField txt = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(txt,"txt");
	HX_STACK_LINE(102)
	txt->set_x((int)2);
	HX_STACK_LINE(103)
	txt->set_width((int)160);
	HX_STACK_LINE(104)
	txt->set_height((int)16);
	HX_STACK_LINE(105)
	txt->set_selectable(false);
	HX_STACK_LINE(106)
	txt->set_multiline(false);
	HX_STACK_LINE(107)
	txt->set_defaultTextFormat(::flash::text::TextFormat_obj::__new(::openfl::Assets_obj::getFont(::org::flixel::FlxAssets_obj::debuggerFont)->fontName,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
	HX_STACK_LINE(108)
	::String str = ((((HX_CSTRING("HaxeFlixel") + HX_CSTRING(" v")) + HX_CSTRING("2")) + HX_CSTRING(".")) + HX_CSTRING("0.0-alpha.3"));		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(109)
	if ((::org::flixel::FlxG_obj::debug)){
		HX_STACK_LINE(110)
		hx::AddEq(str,HX_CSTRING(" [debug]"));
	}
	else{
		HX_STACK_LINE(114)
		hx::AddEq(str,HX_CSTRING(" [release]"));
	}
	HX_STACK_LINE(117)
	txt->set_text(str);
	HX_STACK_LINE(118)
	this->addChild(txt);
	HX_STACK_LINE(120)
	this->_gutter = (int)8;
	HX_STACK_LINE(121)
	::flash::geom::Rectangle screenBounds = ::flash::geom::Rectangle_obj::__new(this->_gutter,((int)15 + (Float(this->_gutter) / Float((int)2))),(this->_screen->x - (this->_gutter * (int)2)),((this->_screen->y - (this->_gutter * 1.5)) - (int)15));		HX_STACK_VAR(screenBounds,"screenBounds");
	HX_STACK_LINE(123)
	this->log = ::org::flixel::system::debug::Log_obj::__new(HX_CSTRING("log"),(int)0,(int)0,true,screenBounds,null(),null());
	HX_STACK_LINE(124)
	this->addChild(this->log);
	HX_STACK_LINE(126)
	this->watch = ::org::flixel::system::debug::Watch_obj::__new(HX_CSTRING("watch"),(int)0,(int)0,true,screenBounds,null(),null());
	HX_STACK_LINE(127)
	this->addChild(this->watch);
	HX_STACK_LINE(129)
	this->console = ::org::flixel::system::debug::Console_obj::__new(HX_CSTRING("console"),(int)0,(int)0,false,screenBounds,null(),null());
	HX_STACK_LINE(130)
	this->addChild(this->console);
	HX_STACK_LINE(131)
	::org::flixel::FlxG_obj::console = this->console;
	HX_STACK_LINE(133)
	this->perf = ::org::flixel::system::debug::Perf_obj::__new(HX_CSTRING("stats"),(int)0,(int)0,false,screenBounds,null(),null());
	HX_STACK_LINE(134)
	this->addChild(this->perf);
	HX_STACK_LINE(136)
	this->vcr = ::org::flixel::system::debug::VCR_obj::__new();
	HX_STACK_LINE(137)
	this->vcr->set_x((Float(((Width - (Float(this->vcr->get_width()) / Float((int)2))))) / Float((int)2)));
	HX_STACK_LINE(138)
	this->vcr->set_y((int)2);
	HX_STACK_LINE(139)
	this->addChild(this->vcr);
	HX_STACK_LINE(141)
	this->vis = ::org::flixel::system::debug::Vis_obj::__new();
	HX_STACK_LINE(142)
	this->vis->set_x(((Width - this->vis->get_width()) - (int)4));
	HX_STACK_LINE(143)
	this->vis->set_y((int)2);
	HX_STACK_LINE(144)
	this->addChild(this->vis);
	HX_STACK_LINE(146)
	this->setLayout((int)0);
	HX_STACK_LINE(149)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null(),null(),null());
	HX_STACK_LINE(150)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null(),null(),null());
}
;
	return null();
}

FlxDebugger_obj::~FlxDebugger_obj() { }

Dynamic FlxDebugger_obj::__CreateEmpty() { return  new FlxDebugger_obj; }
hx::ObjectPtr< FlxDebugger_obj > FlxDebugger_obj::__new(Float Width,Float Height)
{  hx::ObjectPtr< FlxDebugger_obj > result = new FlxDebugger_obj();
	result->__construct(Width,Height);
	return result;}

Dynamic FlxDebugger_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDebugger_obj > result = new FlxDebugger_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void FlxDebugger_obj::resetLayout( ){
{
		HX_STACK_PUSH("FlxDebugger::resetLayout","org/flixel/system/FlxDebugger.hx",240);
		HX_STACK_THIS(this);
		HX_STACK_LINE(241)
		::org::flixel::system::FlxDebugger _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(241)
		switch( (int)(_g->_layout)){
			case (int)1: {
				HX_STACK_LINE(244)
				this->log->resize((Float(this->_screen->x) / Float((int)4)),(int)68);
				HX_STACK_LINE(245)
				this->log->reposition((int)0,this->_screen->y);
				HX_STACK_LINE(246)
				this->console->resize(((Float(this->_screen->x) / Float((int)2)) - (this->_gutter * (int)4)),(int)35);
				HX_STACK_LINE(247)
				this->console->reposition(((this->log->get_x() + this->log->get_width()) + this->_gutter),this->_screen->y);
				HX_STACK_LINE(248)
				this->watch->resize((Float(this->_screen->x) / Float((int)4)),(int)68);
				HX_STACK_LINE(249)
				this->watch->reposition(this->_screen->x,this->_screen->y);
				HX_STACK_LINE(250)
				this->perf->reposition(this->_screen->x,(int)0);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(252)
				this->console->resize((this->_screen->x - (this->_gutter * (int)2)),(int)35);
				HX_STACK_LINE(253)
				this->console->reposition(this->_gutter,this->_screen->y);
				HX_STACK_LINE(254)
				this->log->resize((Float(((this->_screen->x - (this->_gutter * (int)3)))) / Float((int)2)),(Float(this->_screen->y) / Float((int)2)));
				HX_STACK_LINE(255)
				this->log->reposition((int)0,(((this->_screen->y - this->log->get_height()) - this->console->get_height()) - (this->_gutter * 1.5)));
				HX_STACK_LINE(256)
				this->watch->resize((Float(((this->_screen->x - (this->_gutter * (int)3)))) / Float((int)2)),(Float(this->_screen->y) / Float((int)2)));
				HX_STACK_LINE(257)
				this->watch->reposition(this->_screen->x,(((this->_screen->y - this->watch->get_height()) - this->console->get_height()) - (this->_gutter * 1.5)));
				HX_STACK_LINE(258)
				this->perf->reposition(this->_screen->x,(int)0);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(260)
				this->console->resize((this->_screen->x - (this->_gutter * (int)2)),(int)35);
				HX_STACK_LINE(261)
				this->console->reposition((int)0,(int)0);
				HX_STACK_LINE(262)
				this->log->resize((Float(((this->_screen->x - (this->_gutter * (int)3)))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(263)
				this->log->reposition((int)0,((this->console->get_height() + this->_gutter) + (int)15));
				HX_STACK_LINE(264)
				this->watch->resize((Float(((this->_screen->x - (this->_gutter * (int)3)))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(265)
				this->watch->reposition(this->_screen->x,((this->console->get_height() + this->_gutter) + (int)15));
				HX_STACK_LINE(266)
				this->perf->reposition(this->_screen->x,this->_screen->y);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(268)
				this->console->resize((this->_screen->x - (this->_gutter * (int)2)),(int)35);
				HX_STACK_LINE(269)
				this->console->reposition(this->_gutter,this->_screen->y);
				HX_STACK_LINE(270)
				this->log->resize((Float(this->_screen->x) / Float((int)3)),(((Float((((this->_screen->y - (int)15) - (this->_gutter * 2.5)))) / Float((int)2)) - (Float(this->console->get_height()) / Float((int)2))) - this->_gutter));
				HX_STACK_LINE(271)
				this->log->reposition((int)0,(int)0);
				HX_STACK_LINE(272)
				this->watch->resize((Float(this->_screen->x) / Float((int)3)),((Float((((this->_screen->y - (int)15) - (this->_gutter * 2.5)))) / Float((int)2)) - (Float(this->console->get_height()) / Float((int)2))));
				HX_STACK_LINE(273)
				this->watch->reposition((int)0,((this->log->get_y() + this->log->get_height()) + this->_gutter));
				HX_STACK_LINE(274)
				this->perf->reposition(this->_screen->x,(int)0);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(276)
				this->console->resize((this->_screen->x - (this->_gutter * (int)2)),(int)35);
				HX_STACK_LINE(277)
				this->console->reposition(this->_gutter,this->_screen->y);
				HX_STACK_LINE(278)
				this->log->resize((Float(this->_screen->x) / Float((int)3)),(((Float((((this->_screen->y - (int)15) - (this->_gutter * 2.5)))) / Float((int)2)) - (Float(this->console->get_height()) / Float((int)2))) - this->_gutter));
				HX_STACK_LINE(279)
				this->log->reposition(this->_screen->x,(int)0);
				HX_STACK_LINE(280)
				this->watch->resize((Float(this->_screen->x) / Float((int)3)),((Float((((this->_screen->y - (int)15) - (this->_gutter * 2.5)))) / Float((int)2)) - (Float(this->console->get_height()) / Float((int)2))));
				HX_STACK_LINE(281)
				this->watch->reposition(this->_screen->x,((this->log->get_y() + this->log->get_height()) + this->_gutter));
				HX_STACK_LINE(282)
				this->perf->reposition((int)0,(int)0);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(284)
				this->console->resize((this->_screen->x - (this->_gutter * (int)2)),(int)35);
				HX_STACK_LINE(285)
				this->console->reposition(this->_gutter,this->_screen->y);
				HX_STACK_LINE(286)
				this->log->resize((Float(((this->_screen->x - (this->_gutter * (int)3)))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(287)
				this->log->reposition((int)0,(((this->_screen->y - this->log->get_height()) - this->console->get_height()) - (this->_gutter * 1.5)));
				HX_STACK_LINE(288)
				this->watch->resize((Float(((this->_screen->x - (this->_gutter * (int)3)))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(289)
				this->watch->reposition(this->_screen->x,(((this->_screen->y - this->watch->get_height()) - this->console->get_height()) - (this->_gutter * 1.5)));
				HX_STACK_LINE(290)
				this->perf->reposition(this->_screen->x,(int)0);
			}
			;break;
			default: {
				HX_STACK_LINE(292)
				this->console->resize((this->_screen->x - (this->_gutter * (int)2)),(int)35);
				HX_STACK_LINE(293)
				this->console->reposition(this->_gutter,this->_screen->y);
				HX_STACK_LINE(294)
				this->log->resize((Float(((this->_screen->x - (this->_gutter * (int)3)))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(295)
				this->log->reposition((int)0,(((this->_screen->y - this->log->get_height()) - this->console->get_height()) - (this->_gutter * 1.5)));
				HX_STACK_LINE(296)
				this->watch->resize((Float(((this->_screen->x - (this->_gutter * (int)3)))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(297)
				this->watch->reposition(this->_screen->x,(((this->_screen->y - this->watch->get_height()) - this->console->get_height()) - (this->_gutter * 1.5)));
				HX_STACK_LINE(298)
				this->perf->reposition(this->_screen->x,(int)0);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,resetLayout,(void))

Void FlxDebugger_obj::setLayout( int Layout){
{
		HX_STACK_PUSH("FlxDebugger::setLayout","org/flixel/system/FlxDebugger.hx",230);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Layout,"Layout");
		HX_STACK_LINE(231)
		this->_layout = Layout;
		HX_STACK_LINE(232)
		this->resetLayout();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,setLayout,(void))

Void FlxDebugger_obj::onMouseOut( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxDebugger::onMouseOut","org/flixel/system/FlxDebugger.hx",217);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(218)
		this->hasMouse = false;
		HX_STACK_LINE(220)
		if (((bool(!(::org::flixel::FlxG_obj::mouse->useSystemCursor)) && bool(!(::org::flixel::FlxG_obj::_game->_debugger->vcr->paused))))){
			HX_STACK_LINE(221)
			::flash::ui::Mouse_obj::hide();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOut,(void))

Void FlxDebugger_obj::onMouseOver( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxDebugger::onMouseOver","org/flixel/system/FlxDebugger.hx",205);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(206)
		this->hasMouse = true;
		HX_STACK_LINE(208)
		::flash::ui::Mouse_obj::show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOver,(void))

Void FlxDebugger_obj::destroy( ){
{
		HX_STACK_PUSH("FlxDebugger::destroy","org/flixel/system/FlxDebugger.hx",157);
		HX_STACK_THIS(this);
		HX_STACK_LINE(158)
		this->_screen = null();
		HX_STACK_LINE(159)
		if (((this->log != null()))){
			HX_STACK_LINE(161)
			this->removeChild(this->log);
			HX_STACK_LINE(162)
			this->log->destroy();
			HX_STACK_LINE(163)
			this->log = null();
		}
		HX_STACK_LINE(165)
		if (((this->watch != null()))){
			HX_STACK_LINE(167)
			this->removeChild(this->watch);
			HX_STACK_LINE(168)
			this->watch->destroy();
			HX_STACK_LINE(169)
			this->watch = null();
		}
		HX_STACK_LINE(171)
		if (((this->perf != null()))){
			HX_STACK_LINE(173)
			this->removeChild(this->perf);
			HX_STACK_LINE(174)
			this->perf->destroy();
			HX_STACK_LINE(175)
			this->perf = null();
		}
		HX_STACK_LINE(177)
		if (((this->vcr != null()))){
			HX_STACK_LINE(179)
			this->removeChild(this->vcr);
			HX_STACK_LINE(180)
			this->vcr->destroy();
			HX_STACK_LINE(181)
			this->vcr = null();
		}
		HX_STACK_LINE(183)
		if (((this->vis != null()))){
			HX_STACK_LINE(185)
			this->removeChild(this->vis);
			HX_STACK_LINE(186)
			this->vis->destroy();
			HX_STACK_LINE(187)
			this->vis = null();
		}
		HX_STACK_LINE(189)
		if (((this->console != null()))){
			HX_STACK_LINE(191)
			this->removeChild(this->console);
			HX_STACK_LINE(192)
			this->console->destroy();
			HX_STACK_LINE(193)
			this->console = null();
		}
		HX_STACK_LINE(196)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null());
		HX_STACK_LINE(197)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,destroy,(void))

int FlxDebugger_obj::pointPrecision;


FlxDebugger_obj::FlxDebugger_obj()
{
}

void FlxDebugger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDebugger);
	HX_MARK_MEMBER_NAME(_gutter,"_gutter");
	HX_MARK_MEMBER_NAME(_screen,"_screen");
	HX_MARK_MEMBER_NAME(_layout,"_layout");
	HX_MARK_MEMBER_NAME(hasMouse,"hasMouse");
	HX_MARK_MEMBER_NAME(console,"console");
	HX_MARK_MEMBER_NAME(vis,"vis");
	HX_MARK_MEMBER_NAME(vcr,"vcr");
	HX_MARK_MEMBER_NAME(watch,"watch");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(perf,"perf");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDebugger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_gutter,"_gutter");
	HX_VISIT_MEMBER_NAME(_screen,"_screen");
	HX_VISIT_MEMBER_NAME(_layout,"_layout");
	HX_VISIT_MEMBER_NAME(hasMouse,"hasMouse");
	HX_VISIT_MEMBER_NAME(console,"console");
	HX_VISIT_MEMBER_NAME(vis,"vis");
	HX_VISIT_MEMBER_NAME(vcr,"vcr");
	HX_VISIT_MEMBER_NAME(watch,"watch");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(perf,"perf");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxDebugger_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"vis") ) { return vis; }
		if (HX_FIELD_EQ(inName,"vcr") ) { return vcr; }
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"perf") ) { return perf; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"watch") ) { return watch; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_gutter") ) { return _gutter; }
		if (HX_FIELD_EQ(inName,"_screen") ) { return _screen; }
		if (HX_FIELD_EQ(inName,"_layout") ) { return _layout; }
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasMouse") ) { return hasMouse; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setLayout") ) { return setLayout_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return onMouseOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetLayout") ) { return resetLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return onMouseOver_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointPrecision") ) { return pointPrecision; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxDebugger_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"vis") ) { vis=inValue.Cast< ::org::flixel::system::debug::Vis >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vcr") ) { vcr=inValue.Cast< ::org::flixel::system::debug::VCR >(); return inValue; }
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< ::org::flixel::system::debug::Log >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"perf") ) { perf=inValue.Cast< ::org::flixel::system::debug::Perf >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast< ::org::flixel::system::debug::Watch >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_gutter") ) { _gutter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screen") ) { _screen=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layout") ) { _layout=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::org::flixel::system::debug::Console >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasMouse") ) { hasMouse=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointPrecision") ) { pointPrecision=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDebugger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_gutter"));
	outFields->push(HX_CSTRING("_screen"));
	outFields->push(HX_CSTRING("_layout"));
	outFields->push(HX_CSTRING("hasMouse"));
	outFields->push(HX_CSTRING("console"));
	outFields->push(HX_CSTRING("vis"));
	outFields->push(HX_CSTRING("vcr"));
	outFields->push(HX_CSTRING("watch"));
	outFields->push(HX_CSTRING("log"));
	outFields->push(HX_CSTRING("perf"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("pointPrecision"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("resetLayout"),
	HX_CSTRING("setLayout"),
	HX_CSTRING("onMouseOut"),
	HX_CSTRING("onMouseOver"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_gutter"),
	HX_CSTRING("_screen"),
	HX_CSTRING("_layout"),
	HX_CSTRING("hasMouse"),
	HX_CSTRING("console"),
	HX_CSTRING("vis"),
	HX_CSTRING("vcr"),
	HX_CSTRING("watch"),
	HX_CSTRING("log"),
	HX_CSTRING("perf"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::pointPrecision,"pointPrecision");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::pointPrecision,"pointPrecision");
};

Class FlxDebugger_obj::__mClass;

void FlxDebugger_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.FlxDebugger"), hx::TCanCast< FlxDebugger_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxDebugger_obj::__boot()
{
	pointPrecision= (int)3;
}

} // end namespace org
} // end namespace flixel
} // end namespace system
