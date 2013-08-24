#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
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
#ifndef INCLUDED_org_flixel_system_input_FlxMouse
#include <org/flixel/system/input/FlxMouse.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_IFlxInput
#include <org/flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{

Void FlxState_obj::__construct()
{
HX_STACK_PUSH("FlxState::new","org/flixel/FlxState.hx",12);
{
	HX_STACK_LINE(64)
	this->_useMouse = false;
	HX_STACK_LINE(94)
	super::__construct(null());
	HX_STACK_LINE(96)
	this->persistantUpdate = false;
	HX_STACK_LINE(97)
	this->persistantDraw = true;
	HX_STACK_LINE(99)
	this->set_useMouse(::org::flixel::FlxG_obj::mouse->_updateCursorContainer);
}
;
	return null();
}

FlxState_obj::~FlxState_obj() { }

Dynamic FlxState_obj::__CreateEmpty() { return  new FlxState_obj; }
hx::ObjectPtr< FlxState_obj > FlxState_obj::__new()
{  hx::ObjectPtr< FlxState_obj > result = new FlxState_obj();
	result->__construct();
	return result;}

Dynamic FlxState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxState_obj > result = new FlxState_obj();
	result->__construct();
	return result;}

Void FlxState_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxState::onFocus","org/flixel/FlxState.hx",288);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocus,(void))

Void FlxState_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxState::onFocusLost","org/flixel/FlxState.hx",278);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocusLost,(void))

Void FlxState_obj::removeAtlas( ::org::flixel::system::layer::Atlas atlas,hx::Null< bool >  __o_destroy){
bool destroy = __o_destroy.Default(false);
	HX_STACK_PUSH("FlxState::removeAtlas","org/flixel/FlxState.hx",268);
	HX_STACK_THIS(this);
	HX_STACK_ARG(atlas,"atlas");
	HX_STACK_ARG(destroy,"destroy");
{
		HX_STACK_LINE(268)
		::org::flixel::system::layer::Atlas_obj::removeAtlas(atlas,destroy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxState_obj,removeAtlas,(void))

::org::flixel::system::layer::Atlas FlxState_obj::createAtlas( ::String atlasName,int atlasWidth,int atlasHeight){
	HX_STACK_PUSH("FlxState::createAtlas","org/flixel/FlxState.hx",257);
	HX_STACK_THIS(this);
	HX_STACK_ARG(atlasName,"atlasName");
	HX_STACK_ARG(atlasWidth,"atlasWidth");
	HX_STACK_ARG(atlasHeight,"atlasHeight");
	HX_STACK_LINE(258)
	::String key = ::org::flixel::system::layer::Atlas_obj::getUniqueKey(atlasName);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(259)
	return ::org::flixel::system::layer::Atlas_obj::getAtlas(key,null(),false,atlasWidth,atlasHeight);
}


HX_DEFINE_DYNAMIC_FUNC3(FlxState_obj,createAtlas,return )

::org::flixel::system::layer::Atlas FlxState_obj::getAtlasFor( ::String KeyInBitmapCache){
	HX_STACK_PUSH("FlxState::getAtlasFor","org/flixel/FlxState.hx",232);
	HX_STACK_THIS(this);
	HX_STACK_ARG(KeyInBitmapCache,"KeyInBitmapCache");
	HX_STACK_LINE(233)
	::flash::display::BitmapData bm = ::org::flixel::FlxG_obj::_cache->get(KeyInBitmapCache);		HX_STACK_VAR(bm,"bm");
	HX_STACK_LINE(234)
	if (((bm != null()))){
		HX_STACK_LINE(236)
		::org::flixel::system::layer::Atlas tempAtlas = ::org::flixel::system::layer::Atlas_obj::getAtlas(KeyInBitmapCache,bm,null(),null(),null());		HX_STACK_VAR(tempAtlas,"tempAtlas");
		HX_STACK_LINE(237)
		return tempAtlas;
	}
	else{
		HX_STACK_LINE(240)
		hx::Throw ((HX_CSTRING("There isn't bitmapdata in cache with key: ") + KeyInBitmapCache));
	}
	HX_STACK_LINE(246)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,getAtlasFor,return )

Void FlxState_obj::destroy( ){
{
		HX_STACK_PUSH("FlxState::destroy","org/flixel/FlxState.hx",221);
		HX_STACK_THIS(this);
		HX_STACK_LINE(222)
		if (((this->_subState != null()))){
			HX_STACK_LINE(222)
			this->closeSubState(null());
		}
		HX_STACK_LINE(223)
		this->super::destroy();
	}
return null();
}


Void FlxState_obj::subStateCloseHandler( hx::Null< bool >  __o_destroy){
bool destroy = __o_destroy.Default(true);
	HX_STACK_PUSH("FlxState::subStateCloseHandler","org/flixel/FlxState.hx",205);
	HX_STACK_THIS(this);
	HX_STACK_ARG(destroy,"destroy");
{
		HX_STACK_LINE(206)
		if (((this->_subState->closeCallback != null()))){
			HX_STACK_LINE(207)
			this->_subState->closeCallback();
		}
		HX_STACK_LINE(211)
		if ((destroy)){
			HX_STACK_LINE(212)
			this->_subState->destroy();
		}
		HX_STACK_LINE(215)
		this->_subState = null();
		HX_STACK_LINE(217)
		this->updateMouseVisibility();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,subStateCloseHandler,(void))

Void FlxState_obj::setSubState( ::org::flixel::FlxSubState requestedState,Dynamic closeCallback,hx::Null< bool >  __o_destroyPrevious){
bool destroyPrevious = __o_destroyPrevious.Default(true);
	HX_STACK_PUSH("FlxState::setSubState","org/flixel/FlxState.hx",166);
	HX_STACK_THIS(this);
	HX_STACK_ARG(requestedState,"requestedState");
	HX_STACK_ARG(closeCallback,"closeCallback");
	HX_STACK_ARG(destroyPrevious,"destroyPrevious");
{
		HX_STACK_LINE(167)
		if (((this->_subState == requestedState))){
			HX_STACK_LINE(167)
			return null();
		}
		HX_STACK_LINE(170)
		if (((this->_subState != null()))){
			HX_STACK_LINE(171)
			this->_subState->close(destroyPrevious);
		}
		HX_STACK_LINE(176)
		this->_subState = requestedState;
		HX_STACK_LINE(178)
		if (((this->_subState != null()))){
			HX_STACK_LINE(182)
			this->_subState->_parentState = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(184)
			this->_subState->closeCallback = closeCallback;
			HX_STACK_LINE(187)
			if ((!(this->persistantUpdate))){
				HX_STACK_LINE(188)
				::org::flixel::FlxG_obj::resetInput();
			}
			HX_STACK_LINE(192)
			if ((!(this->_subState->get_initialized()))){
				HX_STACK_LINE(194)
				this->_subState->initialize();
				HX_STACK_LINE(195)
				this->_subState->create();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxState_obj,setSubState,(void))

Void FlxState_obj::closeSubState( hx::Null< bool >  __o_destroy){
bool destroy = __o_destroy.Default(true);
	HX_STACK_PUSH("FlxState::closeSubState","org/flixel/FlxState.hx",155);
	HX_STACK_THIS(this);
	HX_STACK_ARG(destroy,"destroy");
{
		HX_STACK_LINE(155)
		this->setSubState(null(),null(),destroy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,closeSubState,(void))

Void FlxState_obj::tryUpdate( ){
{
		HX_STACK_PUSH("FlxState::tryUpdate","org/flixel/FlxState.hx",139);
		HX_STACK_THIS(this);
		HX_STACK_LINE(140)
		if (((bool(this->persistantUpdate) || bool((this->_subState == null()))))){
			HX_STACK_LINE(141)
			this->update();
		}
		HX_STACK_LINE(145)
		if (((this->_subState != null()))){
			HX_STACK_LINE(146)
			this->_subState->tryUpdate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,tryUpdate,(void))

Void FlxState_obj::drawDebug( ){
{
		HX_STACK_PUSH("FlxState::drawDebug","org/flixel/FlxState.hx",125);
		HX_STACK_THIS(this);
		HX_STACK_LINE(126)
		if (((bool(this->persistantDraw) || bool((this->_subState == null()))))){
			HX_STACK_LINE(127)
			this->super::drawDebug();
		}
		HX_STACK_LINE(131)
		if (((this->_subState != null()))){
			HX_STACK_LINE(132)
			this->_subState->drawDebug();
		}
	}
return null();
}


Void FlxState_obj::draw( ){
{
		HX_STACK_PUSH("FlxState::draw","org/flixel/FlxState.hx",111);
		HX_STACK_THIS(this);
		HX_STACK_LINE(112)
		if (((bool(this->persistantDraw) || bool((this->_subState == null()))))){
			HX_STACK_LINE(113)
			this->super::draw();
		}
		HX_STACK_LINE(117)
		if (((this->_subState != null()))){
			HX_STACK_LINE(118)
			this->_subState->draw();
		}
	}
return null();
}


Void FlxState_obj::create( ){
{
		HX_STACK_PUSH("FlxState::create","org/flixel/FlxState.hx",108);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,create,(void))

Void FlxState_obj::updateMouseVisibility( ){
{
		HX_STACK_PUSH("FlxState::updateMouseVisibility","org/flixel/FlxState.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_LINE(78)
		if ((this->_useMouse)){
			HX_STACK_LINE(83)
			::org::flixel::FlxG_obj::mouse->show(null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(84)
			::org::flixel::system::input::FlxMouse _this = ::org::flixel::FlxG_obj::mouse;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(84)
			_this->_updateCursorContainer = false;
			HX_STACK_LINE(84)
			_this->cursorContainer->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,updateMouseVisibility,(void))

bool FlxState_obj::set_useMouse( bool value){
	HX_STACK_PUSH("FlxState::set_useMouse","org/flixel/FlxState.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(73)
	this->_useMouse = value;
	HX_STACK_LINE(74)
	this->updateMouseVisibility();
	HX_STACK_LINE(75)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,set_useMouse,return )

bool FlxState_obj::get_useMouse( ){
	HX_STACK_PUSH("FlxState::get_useMouse","org/flixel/FlxState.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_LINE(70)
	return this->_useMouse;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_useMouse,return )

int FlxState_obj::set_bgColor( int value){
	HX_STACK_PUSH("FlxState::set_bgColor","org/flixel/FlxState.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(60)
	return ::org::flixel::FlxG_obj::set_bgColor(value);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,set_bgColor,return )

int FlxState_obj::get_bgColor( ){
	HX_STACK_PUSH("FlxState::get_bgColor","org/flixel/FlxState.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_LINE(55)
	return ::org::flixel::FlxG_obj::get_bgColor();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_bgColor,return )

::org::flixel::FlxSubState FlxState_obj::get_subState( ){
	HX_STACK_PUSH("FlxState::get_subState","org/flixel/FlxState.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_LINE(44)
	return this->_subState;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_subState,return )


FlxState_obj::FlxState_obj()
{
}

void FlxState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxState);
	HX_MARK_MEMBER_NAME(_useMouse,"_useMouse");
	HX_MARK_MEMBER_NAME(_bgColor,"_bgColor");
	HX_MARK_MEMBER_NAME(subState,"subState");
	HX_MARK_MEMBER_NAME(_subState,"_subState");
	HX_MARK_MEMBER_NAME(persistantDraw,"persistantDraw");
	HX_MARK_MEMBER_NAME(persistantUpdate,"persistantUpdate");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_useMouse,"_useMouse");
	HX_VISIT_MEMBER_NAME(_bgColor,"_bgColor");
	HX_VISIT_MEMBER_NAME(subState,"subState");
	HX_VISIT_MEMBER_NAME(_subState,"_subState");
	HX_VISIT_MEMBER_NAME(persistantDraw,"persistantDraw");
	HX_VISIT_MEMBER_NAME(persistantUpdate,"persistantUpdate");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"bgColor") ) { return get_bgColor(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useMouse") ) { return get_useMouse(); }
		if (HX_FIELD_EQ(inName,"_bgColor") ) { return _bgColor; }
		if (HX_FIELD_EQ(inName,"subState") ) { return inCallProp ? get_subState() : subState; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tryUpdate") ) { return tryUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"_useMouse") ) { return _useMouse; }
		if (HX_FIELD_EQ(inName,"_subState") ) { return _subState; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAtlas") ) { return removeAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"createAtlas") ) { return createAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"getAtlasFor") ) { return getAtlasFor_dyn(); }
		if (HX_FIELD_EQ(inName,"setSubState") ) { return setSubState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_useMouse") ) { return set_useMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_useMouse") ) { return get_useMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_subState") ) { return get_subState_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return closeSubState_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistantDraw") ) { return persistantDraw; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistantUpdate") ) { return persistantUpdate; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"subStateCloseHandler") ) { return subStateCloseHandler_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateMouseVisibility") ) { return updateMouseVisibility_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return set_bgColor(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useMouse") ) { return set_useMouse(inValue); }
		if (HX_FIELD_EQ(inName,"_bgColor") ) { _bgColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"subState") ) { subState=inValue.Cast< ::org::flixel::FlxSubState >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_useMouse") ) { _useMouse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_subState") ) { _subState=inValue.Cast< ::org::flixel::FlxSubState >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistantDraw") ) { persistantDraw=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistantUpdate") ) { persistantUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("useMouse"));
	outFields->push(HX_CSTRING("_useMouse"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("_bgColor"));
	outFields->push(HX_CSTRING("subState"));
	outFields->push(HX_CSTRING("_subState"));
	outFields->push(HX_CSTRING("persistantDraw"));
	outFields->push(HX_CSTRING("persistantUpdate"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("removeAtlas"),
	HX_CSTRING("createAtlas"),
	HX_CSTRING("getAtlasFor"),
	HX_CSTRING("destroy"),
	HX_CSTRING("subStateCloseHandler"),
	HX_CSTRING("setSubState"),
	HX_CSTRING("closeSubState"),
	HX_CSTRING("tryUpdate"),
	HX_CSTRING("drawDebug"),
	HX_CSTRING("draw"),
	HX_CSTRING("create"),
	HX_CSTRING("updateMouseVisibility"),
	HX_CSTRING("set_useMouse"),
	HX_CSTRING("get_useMouse"),
	HX_CSTRING("_useMouse"),
	HX_CSTRING("set_bgColor"),
	HX_CSTRING("get_bgColor"),
	HX_CSTRING("_bgColor"),
	HX_CSTRING("get_subState"),
	HX_CSTRING("subState"),
	HX_CSTRING("_subState"),
	HX_CSTRING("persistantDraw"),
	HX_CSTRING("persistantUpdate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

Class FlxState_obj::__mClass;

void FlxState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxState"), hx::TCanCast< FlxState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxState_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
