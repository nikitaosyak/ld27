#include <hxcpp.h>

#ifndef INCLUDED_flx_core_KeyStatus
#include <flx/core/KeyStatus.h>
#endif
namespace flx{
namespace core{

::flx::core::KeyStatus KeyStatus_obj::FINISH;

::flx::core::KeyStatus KeyStatus_obj::START;

HX_DEFINE_CREATE_ENUM(KeyStatus_obj)

int KeyStatus_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("FINISH")) return 1;
	if (inName==HX_CSTRING("START")) return 0;
	return super::__FindIndex(inName);
}

int KeyStatus_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("FINISH")) return 0;
	if (inName==HX_CSTRING("START")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic KeyStatus_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("FINISH")) return FINISH;
	if (inName==HX_CSTRING("START")) return START;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("START"),
	HX_CSTRING("FINISH"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyStatus_obj::FINISH,"FINISH");
	HX_MARK_MEMBER_NAME(KeyStatus_obj::START,"START");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyStatus_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyStatus_obj::FINISH,"FINISH");
	HX_VISIT_MEMBER_NAME(KeyStatus_obj::START,"START");
};

static ::String sMemberFields[] = { ::String(null()) };
Class KeyStatus_obj::__mClass;

Dynamic __Create_KeyStatus_obj() { return new KeyStatus_obj; }

void KeyStatus_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flx.core.KeyStatus"), hx::TCanCast< KeyStatus_obj >,sStaticFields,sMemberFields,
	&__Create_KeyStatus_obj, &__Create,
	&super::__SGetClass(), &CreateKeyStatus_obj, sMarkStatics, sVisitStatic);
}

void KeyStatus_obj::__boot()
{
hx::Static(FINISH) = hx::CreateEnum< KeyStatus_obj >(HX_CSTRING("FINISH"),1);
hx::Static(START) = hx::CreateEnum< KeyStatus_obj >(HX_CSTRING("START"),0);
}


} // end namespace flx
} // end namespace core
