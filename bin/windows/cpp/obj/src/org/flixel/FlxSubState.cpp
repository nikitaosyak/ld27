#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
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
#ifndef INCLUDED_org_flixel_system_BGSprite
#include <org/flixel/system/BGSprite.h>
#endif
namespace org{
namespace flixel{

Void FlxSubState_obj::__construct(hx::Null< int >  __o_bgColor,hx::Null< bool >  __o_useMouse)
{
HX_STACK_PUSH("FlxSubState::new","org/flixel/FlxSubState.hx",11);
int bgColor = __o_bgColor.Default(0);
bool useMouse = __o_useMouse.Default(false);
{
	HX_STACK_LINE(33)
	this->_initialized = false;
	HX_STACK_LINE(51)
	super::__construct();
	HX_STACK_LINE(52)
	this->closeCallback = null();
	HX_STACK_LINE(55)
	this->_bgSprite = ::org::flixel::system::BGSprite_obj::__new();
	HX_STACK_LINE(57)
	this->set_bgColor(bgColor);
	HX_STACK_LINE(58)
	this->set_useMouse(useMouse);
}
;
	return null();
}

FlxSubState_obj::~FlxSubState_obj() { }

Dynamic FlxSubState_obj::__CreateEmpty() { return  new FlxSubState_obj; }
hx::ObjectPtr< FlxSubState_obj > FlxSubState_obj::__new(hx::Null< int >  __o_bgColor,hx::Null< bool >  __o_useMouse)
{  hx::ObjectPtr< FlxSubState_obj > result = new FlxSubState_obj();
	result->__construct(__o_bgColor,__o_useMouse);
	return result;}

Dynamic FlxSubState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSubState_obj > result = new FlxSubState_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void FlxSubState_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSubState::destroy","org/flixel/FlxSubState.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_LINE(121)
		this->super::destroy();
		HX_STACK_LINE(122)
		this->_initialized = false;
		HX_STACK_LINE(123)
		this->_parentState = null();
		HX_STACK_LINE(124)
		this->closeCallback = null();
	}
return null();
}


Void FlxSubState_obj::close( hx::Null< bool >  __o_destroy){
bool destroy = __o_destroy.Default(true);
	HX_STACK_PUSH("FlxSubState::close","org/flixel/FlxSubState.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_ARG(destroy,"destroy");
{
		HX_STACK_LINE(105)
		if (((this->_parentState != null()))){
			HX_STACK_LINE(107)
			this->_parentState->subStateCloseHandler(destroy);
		}
		else{
			HX_STACK_LINE(111)
			hx::Throw (HX_CSTRING("This subState haven't any parent state"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSubState_obj,close,(void))

Void FlxSubState_obj::draw( ){
{
		HX_STACK_PUSH("FlxSubState::draw","org/flixel/FlxSubState.hx",80);
		HX_STACK_THIS(this);
		HX_STACK_LINE(93)
		this->_bgSprite->draw();
		HX_STACK_LINE(97)
		this->super::draw();
	}
return null();
}


int FlxSubState_obj::set_bgColor( int value){
	HX_STACK_PUSH("FlxSubState::set_bgColor","org/flixel/FlxSubState.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(68)
	this->_bgColor = value;
	HX_STACK_LINE(70)
	if (((this->_bgSprite != null()))){
		HX_STACK_LINE(71)
		this->_bgSprite->get_pixels()->setPixel32((int)0,(int)0,this->_bgColor);
	}
	HX_STACK_LINE(76)
	return value;
}


int FlxSubState_obj::get_bgColor( ){
	HX_STACK_PUSH("FlxSubState::get_bgColor","org/flixel/FlxSubState.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	return this->_bgColor;
}


Void FlxSubState_obj::initialize( ){
{
		HX_STACK_PUSH("FlxSubState::initialize","org/flixel/FlxSubState.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_LINE(42)
		this->_initialized = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSubState_obj,initialize,(void))

bool FlxSubState_obj::get_initialized( ){
	HX_STACK_PUSH("FlxSubState::get_initialized","org/flixel/FlxSubState.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_LINE(37)
	return this->_initialized;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSubState_obj,get_initialized,return )


FlxSubState_obj::FlxSubState_obj()
{
}

void FlxSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSubState);
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(_initialized,"_initialized");
	HX_MARK_MEMBER_NAME(_bgSprite,"_bgSprite");
	HX_MARK_MEMBER_NAME(closeCallback,"closeCallback");
	HX_MARK_MEMBER_NAME(_parentState,"_parentState");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(_initialized,"_initialized");
	HX_VISIT_MEMBER_NAME(_bgSprite,"_bgSprite");
	HX_VISIT_MEMBER_NAME(closeCallback,"closeCallback");
	HX_VISIT_MEMBER_NAME(_parentState,"_parentState");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSubState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgSprite") ) { return _bgSprite; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"initialized") ) { return inCallProp ? get_initialized() : initialized; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { return _initialized; }
		if (HX_FIELD_EQ(inName,"_parentState") ) { return _parentState; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeCallback") ) { return closeCallback; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_initialized") ) { return get_initialized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSubState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_bgSprite") ) { _bgSprite=inValue.Cast< ::org::flixel::system::BGSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { _initialized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parentState") ) { _parentState=inValue.Cast< ::org::flixel::FlxState >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeCallback") ) { closeCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("initialized"));
	outFields->push(HX_CSTRING("_initialized"));
	outFields->push(HX_CSTRING("_bgSprite"));
	outFields->push(HX_CSTRING("_parentState"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("close"),
	HX_CSTRING("draw"),
	HX_CSTRING("set_bgColor"),
	HX_CSTRING("get_bgColor"),
	HX_CSTRING("initialize"),
	HX_CSTRING("get_initialized"),
	HX_CSTRING("initialized"),
	HX_CSTRING("_initialized"),
	HX_CSTRING("_bgSprite"),
	HX_CSTRING("closeCallback"),
	HX_CSTRING("_parentState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSubState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSubState_obj::__mClass,"__mClass");
};

Class FlxSubState_obj::__mClass;

void FlxSubState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxSubState"), hx::TCanCast< FlxSubState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSubState_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
