#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_system_input_FlxMapObject
#include <org/flixel/system/input/FlxMapObject.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

Void FlxMapObject_obj::__construct(::String name,int current,int last)
{
HX_STACK_PUSH("FlxMapObject::new","org/flixel/system/input/FlxMapObject.hx",15);
{
	HX_STACK_LINE(16)
	this->name = name;
	HX_STACK_LINE(17)
	this->current = current;
	HX_STACK_LINE(18)
	this->last = last;
}
;
	return null();
}

FlxMapObject_obj::~FlxMapObject_obj() { }

Dynamic FlxMapObject_obj::__CreateEmpty() { return  new FlxMapObject_obj; }
hx::ObjectPtr< FlxMapObject_obj > FlxMapObject_obj::__new(::String name,int current,int last)
{  hx::ObjectPtr< FlxMapObject_obj > result = new FlxMapObject_obj();
	result->__construct(name,current,last);
	return result;}

Dynamic FlxMapObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMapObject_obj > result = new FlxMapObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


FlxMapObject_obj::FlxMapObject_obj()
{
}

void FlxMapObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMapObject);
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void FlxMapObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic FlxMapObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMapObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMapObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("last"),
	HX_CSTRING("current"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMapObject_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMapObject_obj::__mClass,"__mClass");
};

Class FlxMapObject_obj::__mClass;

void FlxMapObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.FlxMapObject"), hx::TCanCast< FlxMapObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxMapObject_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
