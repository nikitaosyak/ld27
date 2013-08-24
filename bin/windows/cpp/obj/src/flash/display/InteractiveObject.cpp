#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace flash{
namespace display{

Void InteractiveObject_obj::__construct(Dynamic handle,::String type)
{
HX_STACK_PUSH("InteractiveObject::new","flash/display/InteractiveObject.hx",18);
{
	HX_STACK_LINE(20)
	this->doubleClickEnabled = false;
	HX_STACK_LINE(21)
	this->__mouseEnabled = true;
	HX_STACK_LINE(23)
	super::__construct(handle,type);
}
;
	return null();
}

InteractiveObject_obj::~InteractiveObject_obj() { }

Dynamic InteractiveObject_obj::__CreateEmpty() { return  new InteractiveObject_obj; }
hx::ObjectPtr< InteractiveObject_obj > InteractiveObject_obj::__new(Dynamic handle,::String type)
{  hx::ObjectPtr< InteractiveObject_obj > result = new InteractiveObject_obj();
	result->__construct(handle,type);
	return result;}

Dynamic InteractiveObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractiveObject_obj > result = new InteractiveObject_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool InteractiveObject_obj::get_needsSoftKeyboard( ){
	HX_STACK_PUSH("InteractiveObject::get_needsSoftKeyboard","flash/display/InteractiveObject.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_LINE(82)
	return ::flash::display::InteractiveObject_obj::nme_display_object_get_needs_soft_keyboard(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_needsSoftKeyboard,return )

bool InteractiveObject_obj::set_needsSoftKeyboard( bool value){
	HX_STACK_PUSH("InteractiveObject::set_needsSoftKeyboard","flash/display/InteractiveObject.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(76)
	::flash::display::InteractiveObject_obj::nme_display_object_set_needs_soft_keyboard(this->__handle,value);
	HX_STACK_LINE(77)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_needsSoftKeyboard,return )

bool InteractiveObject_obj::get_moveForSoftKeyboard( ){
	HX_STACK_PUSH("InteractiveObject::get_moveForSoftKeyboard","flash/display/InteractiveObject.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_LINE(67)
	return ::flash::display::InteractiveObject_obj::nme_display_object_get_moves_for_soft_keyboard(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_moveForSoftKeyboard,return )

bool InteractiveObject_obj::set_moveForSoftKeyboard( bool value){
	HX_STACK_PUSH("InteractiveObject::set_moveForSoftKeyboard","flash/display/InteractiveObject.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(61)
	::flash::display::InteractiveObject_obj::nme_display_object_set_moves_for_soft_keyboard(this->__handle,value);
	HX_STACK_LINE(62)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_moveForSoftKeyboard,return )

bool InteractiveObject_obj::set_mouseEnabled( bool value){
	HX_STACK_PUSH("InteractiveObject::set_mouseEnabled","flash/display/InteractiveObject.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(52)
	this->__mouseEnabled = value;
	HX_STACK_LINE(53)
	::flash::display::InteractiveObject_obj::nme_display_object_set_mouse_enabled(this->__handle,value);
	HX_STACK_LINE(54)
	return this->__mouseEnabled;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_mouseEnabled,return )

bool InteractiveObject_obj::get_mouseEnabled( ){
	HX_STACK_PUSH("InteractiveObject::get_mouseEnabled","flash/display/InteractiveObject.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_LINE(49)
	return this->__mouseEnabled;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_mouseEnabled,return )

::flash::display::InteractiveObject InteractiveObject_obj::__asInteractiveObject( ){
	HX_STACK_PUSH("InteractiveObject::__asInteractiveObject","flash/display/InteractiveObject.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_LINE(35)
	return hx::ObjectPtr<OBJ_>(this);
}


bool InteractiveObject_obj::requestSoftKeyboard( ){
	HX_STACK_PUSH("InteractiveObject::requestSoftKeyboard","flash/display/InteractiveObject.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_LINE(28)
	return ::flash::display::InteractiveObject_obj::nme_display_object_request_soft_keyboard(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,requestSoftKeyboard,return )

Dynamic InteractiveObject_obj::nme_display_object_set_mouse_enabled;

Dynamic InteractiveObject_obj::nme_display_object_set_needs_soft_keyboard;

Dynamic InteractiveObject_obj::nme_display_object_get_needs_soft_keyboard;

Dynamic InteractiveObject_obj::nme_display_object_set_moves_for_soft_keyboard;

Dynamic InteractiveObject_obj::nme_display_object_get_moves_for_soft_keyboard;

Dynamic InteractiveObject_obj::nme_display_object_request_soft_keyboard;


InteractiveObject_obj::InteractiveObject_obj()
{
}

void InteractiveObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractiveObject);
	HX_MARK_MEMBER_NAME(__mouseEnabled,"__mouseEnabled");
	HX_MARK_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InteractiveObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__mouseEnabled,"__mouseEnabled");
	HX_VISIT_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic InteractiveObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { return get_mouseEnabled(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__mouseEnabled") ) { return __mouseEnabled; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_mouseEnabled") ) { return set_mouseEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseEnabled") ) { return get_mouseEnabled_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { return get_needsSoftKeyboard(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { return doubleClickEnabled; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"requestSoftKeyboard") ) { return requestSoftKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"moveForSoftKeyboard") ) { return get_moveForSoftKeyboard(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_needsSoftKeyboard") ) { return get_needsSoftKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"set_needsSoftKeyboard") ) { return set_needsSoftKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"__asInteractiveObject") ) { return __asInteractiveObject_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_moveForSoftKeyboard") ) { return get_moveForSoftKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"set_moveForSoftKeyboard") ) { return set_moveForSoftKeyboard_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"nme_display_object_set_mouse_enabled") ) { return nme_display_object_set_mouse_enabled; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"nme_display_object_request_soft_keyboard") ) { return nme_display_object_request_soft_keyboard; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"nme_display_object_set_needs_soft_keyboard") ) { return nme_display_object_set_needs_soft_keyboard; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_needs_soft_keyboard") ) { return nme_display_object_get_needs_soft_keyboard; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"nme_display_object_set_moves_for_soft_keyboard") ) { return nme_display_object_set_moves_for_soft_keyboard; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_moves_for_soft_keyboard") ) { return nme_display_object_get_moves_for_soft_keyboard; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractiveObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { return set_mouseEnabled(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__mouseEnabled") ) { __mouseEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { return set_needsSoftKeyboard(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { doubleClickEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"moveForSoftKeyboard") ) { return set_moveForSoftKeyboard(inValue); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"nme_display_object_set_mouse_enabled") ) { nme_display_object_set_mouse_enabled=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"nme_display_object_request_soft_keyboard") ) { nme_display_object_request_soft_keyboard=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"nme_display_object_set_needs_soft_keyboard") ) { nme_display_object_set_needs_soft_keyboard=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_needs_soft_keyboard") ) { nme_display_object_get_needs_soft_keyboard=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"nme_display_object_set_moves_for_soft_keyboard") ) { nme_display_object_set_moves_for_soft_keyboard=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_moves_for_soft_keyboard") ) { nme_display_object_get_moves_for_soft_keyboard=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractiveObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__mouseEnabled"));
	outFields->push(HX_CSTRING("needsSoftKeyboard"));
	outFields->push(HX_CSTRING("moveForSoftKeyboard"));
	outFields->push(HX_CSTRING("mouseEnabled"));
	outFields->push(HX_CSTRING("doubleClickEnabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_display_object_set_mouse_enabled"),
	HX_CSTRING("nme_display_object_set_needs_soft_keyboard"),
	HX_CSTRING("nme_display_object_get_needs_soft_keyboard"),
	HX_CSTRING("nme_display_object_set_moves_for_soft_keyboard"),
	HX_CSTRING("nme_display_object_get_moves_for_soft_keyboard"),
	HX_CSTRING("nme_display_object_request_soft_keyboard"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_needsSoftKeyboard"),
	HX_CSTRING("set_needsSoftKeyboard"),
	HX_CSTRING("get_moveForSoftKeyboard"),
	HX_CSTRING("set_moveForSoftKeyboard"),
	HX_CSTRING("set_mouseEnabled"),
	HX_CSTRING("get_mouseEnabled"),
	HX_CSTRING("__asInteractiveObject"),
	HX_CSTRING("requestSoftKeyboard"),
	HX_CSTRING("__mouseEnabled"),
	HX_CSTRING("doubleClickEnabled"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::nme_display_object_set_mouse_enabled,"nme_display_object_set_mouse_enabled");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::nme_display_object_set_needs_soft_keyboard,"nme_display_object_set_needs_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::nme_display_object_get_needs_soft_keyboard,"nme_display_object_get_needs_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::nme_display_object_set_moves_for_soft_keyboard,"nme_display_object_set_moves_for_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::nme_display_object_get_moves_for_soft_keyboard,"nme_display_object_get_moves_for_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::nme_display_object_request_soft_keyboard,"nme_display_object_request_soft_keyboard");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::nme_display_object_set_mouse_enabled,"nme_display_object_set_mouse_enabled");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::nme_display_object_set_needs_soft_keyboard,"nme_display_object_set_needs_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::nme_display_object_get_needs_soft_keyboard,"nme_display_object_get_needs_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::nme_display_object_set_moves_for_soft_keyboard,"nme_display_object_set_moves_for_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::nme_display_object_get_moves_for_soft_keyboard,"nme_display_object_get_moves_for_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::nme_display_object_request_soft_keyboard,"nme_display_object_request_soft_keyboard");
};

Class InteractiveObject_obj::__mClass;

void InteractiveObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display.InteractiveObject"), hx::TCanCast< InteractiveObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void InteractiveObject_obj::__boot()
{
	nme_display_object_set_mouse_enabled= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_display_object_set_mouse_enabled"),(int)2);
	nme_display_object_set_needs_soft_keyboard= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_display_object_set_needs_soft_keyboard"),(int)2);
	nme_display_object_get_needs_soft_keyboard= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_display_object_get_needs_soft_keyboard"),(int)1);
	nme_display_object_set_moves_for_soft_keyboard= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_display_object_set_moves_for_soft_keyboard"),(int)2);
	nme_display_object_get_moves_for_soft_keyboard= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_display_object_get_moves_for_soft_keyboard"),(int)1);
	nme_display_object_request_soft_keyboard= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_display_object_request_soft_keyboard"),(int)1);
}

} // end namespace flash
} // end namespace display
