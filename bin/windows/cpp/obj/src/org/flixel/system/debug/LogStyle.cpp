#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_system_debug_LogStyle
#include <org/flixel/system/debug/LogStyle.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace debug{

Void LogStyle_obj::__construct(::String __o_Prefix,::String __o_Color,hx::Null< int >  __o_Size,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined,::String ErrorSound,hx::Null< bool >  __o_OpenConsole,Dynamic CallbackFunction)
{
HX_STACK_PUSH("LogStyle::new","org/flixel/system/debug/LogStyle.hx",69);
::String Prefix = __o_Prefix.Default(HX_CSTRING(""));
::String Color = __o_Color.Default(HX_CSTRING("FFFFFF"));
int Size = __o_Size.Default(12);
bool Bold = __o_Bold.Default(false);
bool Italic = __o_Italic.Default(false);
bool Underlined = __o_Underlined.Default(false);
bool OpenConsole = __o_OpenConsole.Default(false);
{
	HX_STACK_LINE(70)
	this->prefix = Prefix;
	HX_STACK_LINE(71)
	this->color = Color;
	HX_STACK_LINE(72)
	this->size = Size;
	HX_STACK_LINE(73)
	this->bold = Bold;
	HX_STACK_LINE(74)
	this->italic = Italic;
	HX_STACK_LINE(75)
	this->underlined = Underlined;
	HX_STACK_LINE(76)
	this->errorSound = ErrorSound;
	HX_STACK_LINE(77)
	this->openConsole = OpenConsole;
	HX_STACK_LINE(78)
	this->callbackFunction = CallbackFunction;
}
;
	return null();
}

LogStyle_obj::~LogStyle_obj() { }

Dynamic LogStyle_obj::__CreateEmpty() { return  new LogStyle_obj; }
hx::ObjectPtr< LogStyle_obj > LogStyle_obj::__new(::String __o_Prefix,::String __o_Color,hx::Null< int >  __o_Size,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined,::String ErrorSound,hx::Null< bool >  __o_OpenConsole,Dynamic CallbackFunction)
{  hx::ObjectPtr< LogStyle_obj > result = new LogStyle_obj();
	result->__construct(__o_Prefix,__o_Color,__o_Size,__o_Bold,__o_Italic,__o_Underlined,ErrorSound,__o_OpenConsole,CallbackFunction);
	return result;}

Dynamic LogStyle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogStyle_obj > result = new LogStyle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return result;}


LogStyle_obj::LogStyle_obj()
{
}

void LogStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogStyle);
	HX_MARK_MEMBER_NAME(callbackFunction,"callbackFunction");
	HX_MARK_MEMBER_NAME(openConsole,"openConsole");
	HX_MARK_MEMBER_NAME(errorSound,"errorSound");
	HX_MARK_MEMBER_NAME(underlined,"underlined");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(prefix,"prefix");
	HX_MARK_END_CLASS();
}

void LogStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callbackFunction,"callbackFunction");
	HX_VISIT_MEMBER_NAME(openConsole,"openConsole");
	HX_VISIT_MEMBER_NAME(errorSound,"errorSound");
	HX_VISIT_MEMBER_NAME(underlined,"underlined");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(prefix,"prefix");
}

Dynamic LogStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return bold; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return italic; }
		if (HX_FIELD_EQ(inName,"prefix") ) { return prefix; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"errorSound") ) { return errorSound; }
		if (HX_FIELD_EQ(inName,"underlined") ) { return underlined; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"openConsole") ) { return openConsole; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { return callbackFunction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LogStyle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prefix") ) { prefix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"errorSound") ) { errorSound=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"underlined") ) { underlined=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"openConsole") ) { openConsole=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { callbackFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("callbackFunction"));
	outFields->push(HX_CSTRING("openConsole"));
	outFields->push(HX_CSTRING("errorSound"));
	outFields->push(HX_CSTRING("underlined"));
	outFields->push(HX_CSTRING("italic"));
	outFields->push(HX_CSTRING("bold"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("prefix"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("callbackFunction"),
	HX_CSTRING("openConsole"),
	HX_CSTRING("errorSound"),
	HX_CSTRING("underlined"),
	HX_CSTRING("italic"),
	HX_CSTRING("bold"),
	HX_CSTRING("size"),
	HX_CSTRING("color"),
	HX_CSTRING("prefix"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogStyle_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogStyle_obj::__mClass,"__mClass");
};

Class LogStyle_obj::__mClass;

void LogStyle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.debug.LogStyle"), hx::TCanCast< LogStyle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LogStyle_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug
