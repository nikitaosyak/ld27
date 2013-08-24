#include <hxcpp.h>

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
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxMisc
#include <org/flixel/util/FlxMisc.h>
#endif
namespace org{
namespace flixel{
namespace util{

Void FlxMisc_obj::__construct()
{
	return null();
}

FlxMisc_obj::~FlxMisc_obj() { }

Dynamic FlxMisc_obj::__CreateEmpty() { return  new FlxMisc_obj; }
hx::ObjectPtr< FlxMisc_obj > FlxMisc_obj::__new()
{  hx::ObjectPtr< FlxMisc_obj > result = new FlxMisc_obj();
	result->__construct();
	return result;}

Dynamic FlxMisc_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMisc_obj > result = new FlxMisc_obj();
	result->__construct();
	return result;}

Void FlxMisc_obj::openURL( ::String URL){
{
		HX_STACK_PUSH("FlxMisc::openURL","org/flixel/util/FlxMisc.hx",19);
		HX_STACK_ARG(URL,"URL");
		HX_STACK_LINE(19)
		::flash::Lib_obj::getURL(::flash::net::URLRequest_obj::__new(URL),HX_CSTRING("_blank"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMisc_obj,openURL,(void))

int FlxMisc_obj::getTicks( ){
	HX_STACK_PUSH("FlxMisc::getTicks","org/flixel/util/FlxMisc.hx",29);
	HX_STACK_LINE(29)
	return ::org::flixel::FlxGame_obj::_mark;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMisc_obj,getTicks,return )


FlxMisc_obj::FlxMisc_obj()
{
}

void FlxMisc_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMisc);
	HX_MARK_END_CLASS();
}

void FlxMisc_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxMisc_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"openURL") ) { return openURL_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTicks") ) { return getTicks_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMisc_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMisc_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("openURL"),
	HX_CSTRING("getTicks"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMisc_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMisc_obj::__mClass,"__mClass");
};

Class FlxMisc_obj::__mClass;

void FlxMisc_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.util.FlxMisc"), hx::TCanCast< FlxMisc_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxMisc_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace util
