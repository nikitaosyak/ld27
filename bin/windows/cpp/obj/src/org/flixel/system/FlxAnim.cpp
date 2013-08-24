#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_system_FlxAnim
#include <org/flixel/system/FlxAnim.h>
#endif
namespace org{
namespace flixel{
namespace system{

Void FlxAnim_obj::__construct(::String Name,Array< int > Frames,hx::Null< Float >  __o_FrameRate,hx::Null< bool >  __o_Looped)
{
HX_STACK_PUSH("FlxAnim::new","org/flixel/system/FlxAnim.hx",33);
Float FrameRate = __o_FrameRate.Default(0);
bool Looped = __o_Looped.Default(true);
{
	HX_STACK_LINE(34)
	this->name = Name;
	HX_STACK_LINE(35)
	this->set_frameRate(FrameRate);
	HX_STACK_LINE(36)
	this->frames = Frames;
	HX_STACK_LINE(37)
	this->looped = Looped;
}
;
	return null();
}

FlxAnim_obj::~FlxAnim_obj() { }

Dynamic FlxAnim_obj::__CreateEmpty() { return  new FlxAnim_obj; }
hx::ObjectPtr< FlxAnim_obj > FlxAnim_obj::__new(::String Name,Array< int > Frames,hx::Null< Float >  __o_FrameRate,hx::Null< bool >  __o_Looped)
{  hx::ObjectPtr< FlxAnim_obj > result = new FlxAnim_obj();
	result->__construct(Name,Frames,__o_FrameRate,__o_Looped);
	return result;}

Dynamic FlxAnim_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAnim_obj > result = new FlxAnim_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Float FlxAnim_obj::set_frameRate( Float value){
	HX_STACK_PUSH("FlxAnim::set_frameRate","org/flixel/system/FlxAnim.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(55)
	this->delay = (int)0;
	HX_STACK_LINE(56)
	this->frameRate = value;
	HX_STACK_LINE(57)
	if (((value > (int)0))){
		HX_STACK_LINE(58)
		this->delay = (Float(1.0) / Float(value));
	}
	HX_STACK_LINE(61)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnim_obj,set_frameRate,return )

Void FlxAnim_obj::destroy( ){
{
		HX_STACK_PUSH("FlxAnim::destroy","org/flixel/system/FlxAnim.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_LINE(44)
		this->frames = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnim_obj,destroy,(void))


FlxAnim_obj::FlxAnim_obj()
{
}

void FlxAnim_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnim);
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(looped,"looped");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void FlxAnim_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(looped,"looped");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic FlxAnim_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"looped") ) { return looped; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAnim_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"looped") ) { looped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp) return set_frameRate(inValue);frameRate=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAnim_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("looped"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("delay"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_frameRate"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("destroy"),
	HX_CSTRING("looped"),
	HX_CSTRING("frames"),
	HX_CSTRING("delay"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAnim_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAnim_obj::__mClass,"__mClass");
};

Class FlxAnim_obj::__mClass;

void FlxAnim_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.FlxAnim"), hx::TCanCast< FlxAnim_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxAnim_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
