#include <hxcpp.h>

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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_system_System
#include <flash/system/System.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_org_flixel_system_FlxList
#include <org/flixel/system/FlxList.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxQuadTree
#include <org/flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Perf
#include <org/flixel/system/debug/Perf.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxArray
#include <org/flixel/util/FlxArray.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRect
#include <org/flixel/util/FlxRect.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace debug{

Void Perf_obj::__construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor)
{
HX_STACK_PUSH("Perf::new","org/flixel/system/debug/Perf.hx",54);
bool Resizable = __o_Resizable.Default(true);
int BGColor = __o_BGColor.Default(2139062143);
int TopColor = __o_TopColor.Default(2130706432);
{
	HX_STACK_LINE(55)
	super::__construct(Title,Width,Height,Resizable,Bounds,BGColor,TopColor);
	HX_STACK_LINE(56)
	this->resize((int)90,(int)110);
	HX_STACK_LINE(58)
	this->_lastTime = (int)0;
	HX_STACK_LINE(59)
	this->_updateTimer = (int)0;
	HX_STACK_LINE(61)
	this->_text = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(62)
	this->_text->set_width(this->_width);
	HX_STACK_LINE(63)
	this->_text->set_x((int)2);
	HX_STACK_LINE(64)
	this->_text->set_y((int)15);
	HX_STACK_LINE(65)
	this->_text->set_multiline(true);
	HX_STACK_LINE(66)
	this->_text->set_wordWrap(true);
	HX_STACK_LINE(67)
	this->_text->set_selectable(true);
	HX_STACK_LINE(68)
	this->_text->set_defaultTextFormat(::flash::text::TextFormat_obj::__new(::openfl::Assets_obj::getFont(::org::flixel::FlxAssets_obj::debuggerFont)->fontName,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
	HX_STACK_LINE(69)
	this->addChild(this->_text);
	HX_STACK_LINE(71)
	this->_flixelUpdate = Array_obj< int >::__new();
	HX_STACK_LINE(72)
	::org::flixel::util::FlxArray_obj::setLength(this->_flixelUpdate,(int)32);
	HX_STACK_LINE(73)
	this->_flixelUpdateMarker = (int)0;
	HX_STACK_LINE(74)
	this->_flixelDraw = Array_obj< int >::__new();
	HX_STACK_LINE(75)
	::org::flixel::util::FlxArray_obj::setLength(this->_flixelDraw,(int)32);
	HX_STACK_LINE(76)
	this->_flixelDrawMarker = (int)0;
	HX_STACK_LINE(77)
	this->_flash = Array_obj< Float >::__new();
	HX_STACK_LINE(78)
	::org::flixel::util::FlxArray_obj::setLength(this->_flash,(int)32);
	HX_STACK_LINE(79)
	this->_flashMarker = (int)0;
	HX_STACK_LINE(80)
	this->_activeObject = Array_obj< int >::__new();
	HX_STACK_LINE(81)
	::org::flixel::util::FlxArray_obj::setLength(this->_activeObject,(int)32);
	HX_STACK_LINE(82)
	this->_objectMarker = (int)0;
	HX_STACK_LINE(83)
	this->_visibleObject = Array_obj< int >::__new();
	HX_STACK_LINE(84)
	::org::flixel::util::FlxArray_obj::setLength(this->_visibleObject,(int)32);
	HX_STACK_LINE(85)
	this->_visibleObjectMarker = (int)0;
	HX_STACK_LINE(88)
	this->_drawCalls = Array_obj< int >::__new();
	HX_STACK_LINE(89)
	this->_drawCallsMarker = (int)0;
}
;
	return null();
}

Perf_obj::~Perf_obj() { }

Dynamic Perf_obj::__CreateEmpty() { return  new Perf_obj; }
hx::ObjectPtr< Perf_obj > Perf_obj::__new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor)
{  hx::ObjectPtr< Perf_obj > result = new Perf_obj();
	result->__construct(Title,Width,Height,__o_Resizable,Bounds,__o_BGColor,__o_TopColor);
	return result;}

Dynamic Perf_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Perf_obj > result = new Perf_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void Perf_obj::drawCalls( int Drawcalls){
{
		HX_STACK_PUSH("Perf::drawCalls","org/flixel/system/debug/Perf.hx",259);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Drawcalls,"Drawcalls");
		HX_STACK_LINE(259)
		this->_drawCalls[(this->_drawCallsMarker)++] = Drawcalls;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Perf_obj,drawCalls,(void))

Void Perf_obj::visibleObjects( int Count){
{
		HX_STACK_PUSH("Perf::visibleObjects","org/flixel/system/debug/Perf.hx",249);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Count,"Count");
		HX_STACK_LINE(249)
		this->_visibleObject[(this->_visibleObjectMarker)++] = Count;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Perf_obj,visibleObjects,(void))

Void Perf_obj::activeObjects( int Count){
{
		HX_STACK_PUSH("Perf::activeObjects","org/flixel/system/debug/Perf.hx",240);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Count,"Count");
		HX_STACK_LINE(240)
		this->_activeObject[(this->_objectMarker)++] = Count;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Perf_obj,activeObjects,(void))

Void Perf_obj::flash( int Time){
{
		HX_STACK_PUSH("Perf::flash","org/flixel/system/debug/Perf.hx",231);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Time,"Time");
		HX_STACK_LINE(231)
		this->_flash[(this->_flashMarker)++] = Time;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Perf_obj,flash,(void))

Void Perf_obj::flixelDraw( int Time){
{
		HX_STACK_PUSH("Perf::flixelDraw","org/flixel/system/debug/Perf.hx",222);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Time,"Time");
		HX_STACK_LINE(222)
		this->_flixelDraw[(this->_flixelDrawMarker)++] = Time;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Perf_obj,flixelDraw,(void))

Void Perf_obj::flixelUpdate( int Time){
{
		HX_STACK_PUSH("Perf::flixelUpdate","org/flixel/system/debug/Perf.hx",213);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Time,"Time");
		HX_STACK_LINE(213)
		this->_flixelUpdate[(this->_flixelUpdateMarker)++] = Time;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Perf_obj,flixelUpdate,(void))

Void Perf_obj::update( ){
{
		HX_STACK_PUSH("Perf::update","org/flixel/system/debug/Perf.hx",121);
		HX_STACK_THIS(this);
		HX_STACK_LINE(122)
		int time = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(123)
		int elapsed = (time - this->_lastTime);		HX_STACK_VAR(elapsed,"elapsed");
		HX_STACK_LINE(124)
		int updateEvery = (int)500;		HX_STACK_VAR(updateEvery,"updateEvery");
		HX_STACK_LINE(125)
		if (((elapsed > updateEvery))){
			HX_STACK_LINE(126)
			elapsed = updateEvery;
		}
		HX_STACK_LINE(129)
		this->_lastTime = time;
		HX_STACK_LINE(131)
		hx::AddEq(this->_updateTimer,elapsed);
		HX_STACK_LINE(132)
		if (((this->_updateTimer > updateEvery))){
			HX_STACK_LINE(134)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(135)
			::String output = HX_CSTRING("");		HX_STACK_VAR(output,"output");
			HX_STACK_LINE(137)
			Float flashPlayerFramerate = (int)0;		HX_STACK_VAR(flashPlayerFramerate,"flashPlayerFramerate");
			HX_STACK_LINE(138)
			i = (int)0;
			HX_STACK_LINE(139)
			while(((i < this->_flashMarker))){
				HX_STACK_LINE(140)
				hx::AddEq(flashPlayerFramerate,this->_flash->__get((i)++));
			}
			HX_STACK_LINE(143)
			hx::DivEq(flashPlayerFramerate,this->_flashMarker);
			HX_STACK_LINE(144)
			hx::AddEq(output,(((::Std_obj::_int((Float((int)1) / Float(((Float(flashPlayerFramerate) / Float((int)1000)))))) + HX_CSTRING("/")) + ::org::flixel::FlxG_obj::get_flashFramerate()) + HX_CSTRING("fps\n")));
			HX_STACK_LINE(146)
			hx::AddEq(output,((Float(::Math_obj::round(((::flash::system::System_obj::get_totalMemory() * 0.000000954) * (int)100))) / Float((int)100)) + HX_CSTRING("MB\n")));
			HX_STACK_LINE(148)
			int updateTime = (int)0;		HX_STACK_VAR(updateTime,"updateTime");
			HX_STACK_LINE(149)
			i = (int)0;
			HX_STACK_LINE(150)
			while(((i < this->_flixelUpdateMarker))){
				HX_STACK_LINE(151)
				hx::AddEq(updateTime,this->_flixelUpdate->__get((i)++));
			}
			HX_STACK_LINE(155)
			int activeCount = (int)0;		HX_STACK_VAR(activeCount,"activeCount");
			HX_STACK_LINE(156)
			i = (int)0;
			HX_STACK_LINE(157)
			while(((i < this->_objectMarker))){
				HX_STACK_LINE(158)
				hx::AddEq(activeCount,this->_activeObject->__get((i)++));
			}
			HX_STACK_LINE(161)
			activeCount = ::Std_obj::_int((Float(activeCount) / Float(this->_objectMarker)));
			HX_STACK_LINE(163)
			hx::AddEq(output,((((HX_CSTRING("U:") + activeCount) + HX_CSTRING(" ")) + ::Std_obj::_int((Float(updateTime) / Float(this->_flixelDrawMarker)))) + HX_CSTRING("ms\n")));
			HX_STACK_LINE(165)
			int drawTime = (int)0;		HX_STACK_VAR(drawTime,"drawTime");
			HX_STACK_LINE(166)
			i = (int)0;
			HX_STACK_LINE(167)
			while(((i < this->_flixelDrawMarker))){
				HX_STACK_LINE(168)
				hx::AddEq(drawTime,this->_flixelDraw->__get((i)++));
			}
			HX_STACK_LINE(172)
			int visibleCount = (int)0;		HX_STACK_VAR(visibleCount,"visibleCount");
			HX_STACK_LINE(173)
			i = (int)0;
			HX_STACK_LINE(174)
			while(((i < this->_visibleObjectMarker))){
				HX_STACK_LINE(175)
				hx::AddEq(visibleCount,this->_visibleObject->__get((i)++));
			}
			HX_STACK_LINE(178)
			visibleCount = ::Std_obj::_int((Float(visibleCount) / Float(this->_visibleObjectMarker)));
			HX_STACK_LINE(180)
			hx::AddEq(output,((((HX_CSTRING("D:") + visibleCount) + HX_CSTRING(" ")) + ::Std_obj::_int((Float(drawTime) / Float(this->_flixelDrawMarker)))) + HX_CSTRING("ms")));
			HX_STACK_LINE(183)
			int drawCallsCount = (int)0;		HX_STACK_VAR(drawCallsCount,"drawCallsCount");
			HX_STACK_LINE(184)
			i = (int)0;
			HX_STACK_LINE(185)
			while(((i < this->_drawCallsMarker))){
				HX_STACK_LINE(186)
				hx::AddEq(drawCallsCount,this->_drawCalls->__get((i)++));
			}
			HX_STACK_LINE(189)
			drawCallsCount = ::Std_obj::_int((Float(drawCallsCount) / Float(this->_drawCallsMarker)));
			HX_STACK_LINE(190)
			hx::AddEq(output,(HX_CSTRING("\nDrwTls:") + drawCallsCount));
			HX_STACK_LINE(191)
			this->_drawCallsMarker = (int)0;
			HX_STACK_LINE(194)
			hx::AddEq(output,(HX_CSTRING("\nQuadTrees:") + ::org::flixel::system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES));
			HX_STACK_LINE(195)
			hx::AddEq(output,(HX_CSTRING("\nLists:") + ::org::flixel::system::FlxList_obj::_NUM_CACHED_FLX_LIST));
			HX_STACK_LINE(197)
			this->_text->set_text(output);
			HX_STACK_LINE(199)
			this->_flixelUpdateMarker = (int)0;
			HX_STACK_LINE(200)
			this->_flixelDrawMarker = (int)0;
			HX_STACK_LINE(201)
			this->_flashMarker = (int)0;
			HX_STACK_LINE(202)
			this->_objectMarker = (int)0;
			HX_STACK_LINE(203)
			this->_visibleObjectMarker = (int)0;
			HX_STACK_LINE(204)
			hx::SubEq(this->_updateTimer,updateEvery);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Perf_obj,update,(void))

Void Perf_obj::destroy( ){
{
		HX_STACK_PUSH("Perf::destroy","org/flixel/system/debug/Perf.hx",97);
		HX_STACK_THIS(this);
		HX_STACK_LINE(98)
		if (((this->_text != null()))){
			HX_STACK_LINE(99)
			this->removeChild(this->_text);
		}
		HX_STACK_LINE(102)
		this->_text = null();
		HX_STACK_LINE(103)
		this->_flixelUpdate = null();
		HX_STACK_LINE(104)
		this->_flixelDraw = null();
		HX_STACK_LINE(105)
		this->_flash = null();
		HX_STACK_LINE(106)
		this->_activeObject = null();
		HX_STACK_LINE(107)
		this->_visibleObject = null();
		HX_STACK_LINE(110)
		this->_drawCalls = null();
		HX_STACK_LINE(113)
		this->super::destroy();
	}
return null();
}



Perf_obj::Perf_obj()
{
}

void Perf_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Perf);
	HX_MARK_MEMBER_NAME(_drawCallsMarker,"_drawCallsMarker");
	HX_MARK_MEMBER_NAME(_drawCalls,"_drawCalls");
	HX_MARK_MEMBER_NAME(_visibleObject,"_visibleObject");
	HX_MARK_MEMBER_NAME(_flash,"_flash");
	HX_MARK_MEMBER_NAME(_activeObject,"_activeObject");
	HX_MARK_MEMBER_NAME(_flashMarker,"_flashMarker");
	HX_MARK_MEMBER_NAME(_objectMarker,"_objectMarker");
	HX_MARK_MEMBER_NAME(_visibleObjectMarker,"_visibleObjectMarker");
	HX_MARK_MEMBER_NAME(_flixelDrawMarker,"_flixelDrawMarker");
	HX_MARK_MEMBER_NAME(_flixelDraw,"_flixelDraw");
	HX_MARK_MEMBER_NAME(_flixelUpdateMarker,"_flixelUpdateMarker");
	HX_MARK_MEMBER_NAME(_flixelUpdate,"_flixelUpdate");
	HX_MARK_MEMBER_NAME(_updateTimer,"_updateTimer");
	HX_MARK_MEMBER_NAME(_lastTime,"_lastTime");
	HX_MARK_MEMBER_NAME(_text,"_text");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Perf_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_drawCallsMarker,"_drawCallsMarker");
	HX_VISIT_MEMBER_NAME(_drawCalls,"_drawCalls");
	HX_VISIT_MEMBER_NAME(_visibleObject,"_visibleObject");
	HX_VISIT_MEMBER_NAME(_flash,"_flash");
	HX_VISIT_MEMBER_NAME(_activeObject,"_activeObject");
	HX_VISIT_MEMBER_NAME(_flashMarker,"_flashMarker");
	HX_VISIT_MEMBER_NAME(_objectMarker,"_objectMarker");
	HX_VISIT_MEMBER_NAME(_visibleObjectMarker,"_visibleObjectMarker");
	HX_VISIT_MEMBER_NAME(_flixelDrawMarker,"_flixelDrawMarker");
	HX_VISIT_MEMBER_NAME(_flixelDraw,"_flixelDraw");
	HX_VISIT_MEMBER_NAME(_flixelUpdateMarker,"_flixelUpdateMarker");
	HX_VISIT_MEMBER_NAME(_flixelUpdate,"_flixelUpdate");
	HX_VISIT_MEMBER_NAME(_updateTimer,"_updateTimer");
	HX_VISIT_MEMBER_NAME(_lastTime,"_lastTime");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Perf_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_flash") ) { return _flash; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawCalls") ) { return drawCalls_dyn(); }
		if (HX_FIELD_EQ(inName,"_lastTime") ) { return _lastTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flixelDraw") ) { return flixelDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"_drawCalls") ) { return _drawCalls; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flixelDraw") ) { return _flixelDraw; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"flixelUpdate") ) { return flixelUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashMarker") ) { return _flashMarker; }
		if (HX_FIELD_EQ(inName,"_updateTimer") ) { return _updateTimer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { return activeObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"_activeObject") ) { return _activeObject; }
		if (HX_FIELD_EQ(inName,"_objectMarker") ) { return _objectMarker; }
		if (HX_FIELD_EQ(inName,"_flixelUpdate") ) { return _flixelUpdate; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"visibleObjects") ) { return visibleObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"_visibleObject") ) { return _visibleObject; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_drawCallsMarker") ) { return _drawCallsMarker; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_flixelDrawMarker") ) { return _flixelDrawMarker; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_flixelUpdateMarker") ) { return _flixelUpdateMarker; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_visibleObjectMarker") ) { return _visibleObjectMarker; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Perf_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_flash") ) { _flash=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_lastTime") ) { _lastTime=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_drawCalls") ) { _drawCalls=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flixelDraw") ) { _flixelDraw=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_flashMarker") ) { _flashMarker=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateTimer") ) { _updateTimer=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_activeObject") ) { _activeObject=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_objectMarker") ) { _objectMarker=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flixelUpdate") ) { _flixelUpdate=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_visibleObject") ) { _visibleObject=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_drawCallsMarker") ) { _drawCallsMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_flixelDrawMarker") ) { _flixelDrawMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_flixelUpdateMarker") ) { _flixelUpdateMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_visibleObjectMarker") ) { _visibleObjectMarker=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Perf_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_drawCallsMarker"));
	outFields->push(HX_CSTRING("_drawCalls"));
	outFields->push(HX_CSTRING("_visibleObject"));
	outFields->push(HX_CSTRING("_flash"));
	outFields->push(HX_CSTRING("_activeObject"));
	outFields->push(HX_CSTRING("_flashMarker"));
	outFields->push(HX_CSTRING("_objectMarker"));
	outFields->push(HX_CSTRING("_visibleObjectMarker"));
	outFields->push(HX_CSTRING("_flixelDrawMarker"));
	outFields->push(HX_CSTRING("_flixelDraw"));
	outFields->push(HX_CSTRING("_flixelUpdateMarker"));
	outFields->push(HX_CSTRING("_flixelUpdate"));
	outFields->push(HX_CSTRING("_updateTimer"));
	outFields->push(HX_CSTRING("_lastTime"));
	outFields->push(HX_CSTRING("_text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawCalls"),
	HX_CSTRING("visibleObjects"),
	HX_CSTRING("activeObjects"),
	HX_CSTRING("flash"),
	HX_CSTRING("flixelDraw"),
	HX_CSTRING("flixelUpdate"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_drawCallsMarker"),
	HX_CSTRING("_drawCalls"),
	HX_CSTRING("_visibleObject"),
	HX_CSTRING("_flash"),
	HX_CSTRING("_activeObject"),
	HX_CSTRING("_flashMarker"),
	HX_CSTRING("_objectMarker"),
	HX_CSTRING("_visibleObjectMarker"),
	HX_CSTRING("_flixelDrawMarker"),
	HX_CSTRING("_flixelDraw"),
	HX_CSTRING("_flixelUpdateMarker"),
	HX_CSTRING("_flixelUpdate"),
	HX_CSTRING("_updateTimer"),
	HX_CSTRING("_lastTime"),
	HX_CSTRING("_text"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Perf_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Perf_obj::__mClass,"__mClass");
};

Class Perf_obj::__mClass;

void Perf_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.debug.Perf"), hx::TCanCast< Perf_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Perf_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug
