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
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_ui_Multitouch
#include <flash/ui/Multitouch.h>
#endif
#ifndef INCLUDED_flash_ui_MultitouchInputMode
#include <flash/ui/MultitouchInputMode.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxTouch
#include <org/flixel/system/input/FlxTouch.h>
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

Void FlxTouchManager_obj::__construct()
{
HX_STACK_PUSH("FlxTouchManager::new","org/flixel/system/input/FlxTouchManager.hx",43);
{
	HX_STACK_LINE(44)
	this->touches = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(45)
	this->_inactiveTouches = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(46)
	this->_touchesCache = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(47)
	::org::flixel::system::input::FlxTouchManager_obj::maxTouchPoints = ::flash::ui::Multitouch_obj::maxTouchPoints;
	HX_STACK_LINE(48)
	::flash::ui::Multitouch_obj::set_inputMode(::flash::ui::MultitouchInputMode_obj::TOUCH_POINT);
	HX_STACK_LINE(49)
	::org::flixel::FlxG_obj::supportsTouchEvents = true;
	HX_STACK_LINE(51)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,this->handleTouchBegin_dyn(),null(),null(),null());
	HX_STACK_LINE(52)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_END,this->handleTouchEnd_dyn(),null(),null(),null());
	HX_STACK_LINE(53)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_MOVE,this->handleTouchMove_dyn(),null(),null(),null());
}
;
	return null();
}

FlxTouchManager_obj::~FlxTouchManager_obj() { }

Dynamic FlxTouchManager_obj::__CreateEmpty() { return  new FlxTouchManager_obj; }
hx::ObjectPtr< FlxTouchManager_obj > FlxTouchManager_obj::__new()
{  hx::ObjectPtr< FlxTouchManager_obj > result = new FlxTouchManager_obj();
	result->__construct();
	return result;}

Dynamic FlxTouchManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTouchManager_obj > result = new FlxTouchManager_obj();
	result->__construct();
	return result;}

hx::Object *FlxTouchManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::flixel::system::input::IFlxInput_obj)) return operator ::org::flixel::system::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

::String FlxTouchManager_obj::toString( ){
	HX_STACK_PUSH("FlxTouchManager::toString","org/flixel/system/input/FlxTouchManager.hx",293);
	HX_STACK_THIS(this);
	HX_STACK_LINE(293)
	return HX_CSTRING("FlxTouchManager");
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,toString,return )

Void FlxTouchManager_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxTouchManager::onFocusLost","org/flixel/system/input/FlxTouchManager.hx",288);
		HX_STACK_THIS(this);
		HX_STACK_LINE(288)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocusLost,(void))

Void FlxTouchManager_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxTouchManager::onFocus","org/flixel/system/input/FlxTouchManager.hx",283);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocus,(void))

::org::flixel::system::input::FlxTouch FlxTouchManager_obj::recycle( Float X,Float Y,int PointID){
	HX_STACK_PUSH("FlxTouchManager::recycle","org/flixel/system/input/FlxTouchManager.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(PointID,"PointID");
	HX_STACK_LINE(272)
	if (((this->_inactiveTouches->length > (int)0))){
		HX_STACK_LINE(274)
		::org::flixel::system::input::FlxTouch touch = this->_inactiveTouches->pop().StaticCast< ::org::flixel::system::input::FlxTouch >();		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(275)
		touch->reset(X,Y,PointID);
		HX_STACK_LINE(276)
		return this->add(touch);
	}
	HX_STACK_LINE(279)
	return this->add(::org::flixel::system::input::FlxTouch_obj::__new(X,Y,PointID));
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTouchManager_obj,recycle,return )

::org::flixel::system::input::FlxTouch FlxTouchManager_obj::add( ::org::flixel::system::input::FlxTouch touch){
	HX_STACK_PUSH("FlxTouchManager::add","org/flixel/system/input/FlxTouchManager.hx",257);
	HX_STACK_THIS(this);
	HX_STACK_ARG(touch,"touch");
	HX_STACK_LINE(258)
	this->touches->push(touch);
	HX_STACK_LINE(259)
	this->_touchesCache->set(touch->get_touchPointID(),touch);
	HX_STACK_LINE(260)
	return touch;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,add,return )

Array< ::Dynamic > FlxTouchManager_obj::justReleasedTouches( Array< ::Dynamic > TouchArray){
	HX_STACK_PUSH("FlxTouchManager::justReleasedTouches","org/flixel/system/input/FlxTouchManager.hx",228);
	HX_STACK_THIS(this);
	HX_STACK_ARG(TouchArray,"TouchArray");
	HX_STACK_LINE(229)
	if (((TouchArray == null()))){
		HX_STACK_LINE(230)
		TouchArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(234)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(235)
	if (((touchLen > (int)0))){
		HX_STACK_LINE(236)
		TouchArray->splice((int)0,touchLen);
	}
	HX_STACK_LINE(240)
	{
		HX_STACK_LINE(240)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->touches;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(240)
		while(((_g < _g1->length))){
			HX_STACK_LINE(240)
			::org::flixel::system::input::FlxTouch touch = _g1->__get(_g).StaticCast< ::org::flixel::system::input::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(240)
			++(_g);
			HX_STACK_LINE(242)
			if (((touch->_current == (int)-1))){
				HX_STACK_LINE(243)
				TouchArray->push(touch);
			}
		}
	}
	HX_STACK_LINE(248)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justReleasedTouches,return )

Array< ::Dynamic > FlxTouchManager_obj::justStartedTouches( Array< ::Dynamic > TouchArray){
	HX_STACK_PUSH("FlxTouchManager::justStartedTouches","org/flixel/system/input/FlxTouchManager.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_ARG(TouchArray,"TouchArray");
	HX_STACK_LINE(200)
	if (((TouchArray == null()))){
		HX_STACK_LINE(201)
		TouchArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(205)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(206)
	if (((touchLen > (int)0))){
		HX_STACK_LINE(207)
		TouchArray->splice((int)0,touchLen);
	}
	HX_STACK_LINE(211)
	{
		HX_STACK_LINE(211)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->touches;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		while(((_g < _g1->length))){
			HX_STACK_LINE(211)
			::org::flixel::system::input::FlxTouch touch = _g1->__get(_g).StaticCast< ::org::flixel::system::input::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(211)
			++(_g);
			HX_STACK_LINE(213)
			if (((touch->_current == (int)2))){
				HX_STACK_LINE(214)
				TouchArray->push(touch);
			}
		}
	}
	HX_STACK_LINE(219)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justStartedTouches,return )

Void FlxTouchManager_obj::handleTouchMove( ::flash::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxTouchManager::handleTouchMove","org/flixel/system/input/FlxTouchManager.hx",185);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(186)
		::org::flixel::system::input::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(187)
		if (((touch != null()))){
			HX_STACK_LINE(188)
			touch->updateTouchPosition(FlashEvent->stageX,FlashEvent->stageY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchMove,(void))

Void FlxTouchManager_obj::handleTouchEnd( ::flash::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxTouchManager::handleTouchEnd","org/flixel/system/input/FlxTouchManager.hx",165);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(166)
		::org::flixel::system::input::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(167)
		if (((touch != null()))){
			HX_STACK_LINE(168)
			if (((touch->_current > (int)0))){
				HX_STACK_LINE(170)
				touch->_current = (int)-1;
			}
			else{
				HX_STACK_LINE(174)
				touch->_current = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchEnd,(void))

Void FlxTouchManager_obj::handleTouchBegin( ::flash::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxTouchManager::handleTouchBegin","org/flixel/system/input/FlxTouchManager.hx",140);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(141)
		::org::flixel::system::input::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(142)
		if (((touch != null()))){
			HX_STACK_LINE(143)
			if (((touch->_current > (int)0))){
				HX_STACK_LINE(145)
				touch->_current = (int)1;
			}
			else{
				HX_STACK_LINE(149)
				touch->_current = (int)2;
			}
		}
		else{
			HX_STACK_LINE(155)
			touch = this->recycle(FlashEvent->stageX,FlashEvent->stageY,FlashEvent->touchPointID);
			HX_STACK_LINE(156)
			touch->_current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchBegin,(void))

Void FlxTouchManager_obj::reset( ){
{
		HX_STACK_PUSH("FlxTouchManager::reset","org/flixel/system/input/FlxTouchManager.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_LINE(121)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_touchesCache->keys());  __it->hasNext(); ){
			int key = __it->next();
			this->_touchesCache->remove(key);
		}
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->touches;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(126)
			while(((_g < _g1->length))){
				HX_STACK_LINE(126)
				::org::flixel::system::input::FlxTouch touch = _g1->__get(_g).StaticCast< ::org::flixel::system::input::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(126)
				++(_g);
				HX_STACK_LINE(128)
				touch->deactivate();
				HX_STACK_LINE(129)
				this->_inactiveTouches->push(touch);
			}
		}
		HX_STACK_LINE(132)
		this->touches->splice((int)0,this->touches->length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,reset,(void))

Void FlxTouchManager_obj::update( ){
{
		HX_STACK_PUSH("FlxTouchManager::update","org/flixel/system/input/FlxTouchManager.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_LINE(93)
		int i = (this->touches->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(94)
		::org::flixel::system::input::FlxTouch touch;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(95)
		while(((i >= (int)0))){
			HX_STACK_LINE(97)
			touch = this->touches->__get(i).StaticCast< ::org::flixel::system::input::FlxTouch >();
			HX_STACK_LINE(100)
			if (((touch->_current == (int)0))){
				HX_STACK_LINE(102)
				touch->deactivate();
				HX_STACK_LINE(103)
				this->_touchesCache->remove(touch->get_touchPointID());
				HX_STACK_LINE(104)
				this->touches->splice(i,(int)1);
				HX_STACK_LINE(105)
				this->_inactiveTouches->push(touch);
			}
			else{
				HX_STACK_LINE(108)
				touch->update();
			}
			HX_STACK_LINE(112)
			(i)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,update,(void))

Void FlxTouchManager_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTouchManager::destroy","org/flixel/system/input/FlxTouchManager.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->touches;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(72)
			while(((_g < _g1->length))){
				HX_STACK_LINE(72)
				::org::flixel::system::input::FlxTouch touch = _g1->__get(_g).StaticCast< ::org::flixel::system::input::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(72)
				++(_g);
				HX_STACK_LINE(74)
				touch->destroy();
			}
		}
		HX_STACK_LINE(76)
		this->touches = null();
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_inactiveTouches;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(78)
			while(((_g < _g1->length))){
				HX_STACK_LINE(78)
				::org::flixel::system::input::FlxTouch touch = _g1->__get(_g).StaticCast< ::org::flixel::system::input::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(78)
				++(_g);
				HX_STACK_LINE(80)
				touch->destroy();
			}
		}
		HX_STACK_LINE(82)
		this->_inactiveTouches = null();
		HX_STACK_LINE(84)
		this->_touchesCache = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,destroy,(void))

::org::flixel::system::input::FlxTouch FlxTouchManager_obj::getFirstTouch( ){
	HX_STACK_PUSH("FlxTouchManager::getFirstTouch","org/flixel/system/input/FlxTouchManager.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_LINE(60)
	if (((this->touches->__get((int)0).StaticCast< ::org::flixel::system::input::FlxTouch >() != null()))){
		HX_STACK_LINE(62)
		return this->touches->__get((int)0).StaticCast< ::org::flixel::system::input::FlxTouch >();
	}
	else{
		HX_STACK_LINE(64)
		return null();
	}
	HX_STACK_LINE(60)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,getFirstTouch,return )

int FlxTouchManager_obj::maxTouchPoints;


FlxTouchManager_obj::FlxTouchManager_obj()
{
}

void FlxTouchManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouchManager);
	HX_MARK_MEMBER_NAME(_touchesCache,"_touchesCache");
	HX_MARK_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_MARK_MEMBER_NAME(touches,"touches");
	HX_MARK_END_CLASS();
}

void FlxTouchManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_touchesCache,"_touchesCache");
	HX_VISIT_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_VISIT_MEMBER_NAME(touches,"touches");
}

Dynamic FlxTouchManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"touches") ) { return touches; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFirstTouch") ) { return getFirstTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { return _touchesCache; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { return maxTouchPoints; }
		if (HX_FIELD_EQ(inName,"handleTouchEnd") ) { return handleTouchEnd_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleTouchMove") ) { return handleTouchMove_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleTouchBegin") ) { return handleTouchBegin_dyn(); }
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { return _inactiveTouches; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"justStartedTouches") ) { return justStartedTouches_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"justReleasedTouches") ) { return justReleasedTouches_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTouchManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"touches") ) { touches=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { _touchesCache=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { maxTouchPoints=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { _inactiveTouches=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTouchManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_touchesCache"));
	outFields->push(HX_CSTRING("_inactiveTouches"));
	outFields->push(HX_CSTRING("touches"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("maxTouchPoints"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("recycle"),
	HX_CSTRING("add"),
	HX_CSTRING("justReleasedTouches"),
	HX_CSTRING("justStartedTouches"),
	HX_CSTRING("handleTouchMove"),
	HX_CSTRING("handleTouchEnd"),
	HX_CSTRING("handleTouchBegin"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("getFirstTouch"),
	HX_CSTRING("_touchesCache"),
	HX_CSTRING("_inactiveTouches"),
	HX_CSTRING("touches"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

Class FlxTouchManager_obj::__mClass;

void FlxTouchManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.FlxTouchManager"), hx::TCanCast< FlxTouchManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTouchManager_obj::__boot()
{
	maxTouchPoints= (int)0;
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
