#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_system_input_IFlxInput
#include <org/flixel/system/input/IFlxInput.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

HX_DEFINE_DYNAMIC_FUNC0(IFlxInput_obj,destroy,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxInput_obj,toString,return )

HX_DEFINE_DYNAMIC_FUNC0(IFlxInput_obj,onFocusLost,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxInput_obj,onFocus,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxInput_obj,update,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxInput_obj,reset,)


static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("toString"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("update"),
	HX_CSTRING("reset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxInput_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxInput_obj::__mClass,"__mClass");
};

Class IFlxInput_obj::__mClass;

void IFlxInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.IFlxInput"), hx::TCanCast< IFlxInput_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IFlxInput_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
