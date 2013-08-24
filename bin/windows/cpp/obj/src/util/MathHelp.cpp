#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_util_MathHelp
#include <util/MathHelp.h>
#endif
namespace util{

Void MathHelp_obj::__construct()
{
	return null();
}

MathHelp_obj::~MathHelp_obj() { }

Dynamic MathHelp_obj::__CreateEmpty() { return  new MathHelp_obj; }
hx::ObjectPtr< MathHelp_obj > MathHelp_obj::__new()
{  hx::ObjectPtr< MathHelp_obj > result = new MathHelp_obj();
	result->__construct();
	return result;}

Dynamic MathHelp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MathHelp_obj > result = new MathHelp_obj();
	result->__construct();
	return result;}

Float MathHelp_obj::roundExp( Float value,hx::Null< int >  __o_exp){
int exp = __o_exp.Default(0);
	HX_STACK_PUSH("MathHelp::roundExp","util/MathHelp.hx",4);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(exp,"exp");
{
		HX_STACK_LINE(5)
		Float expVal = ::Math_obj::pow((int)10,exp);		HX_STACK_VAR(expVal,"expVal");
		HX_STACK_LINE(6)
		return (Float(::Math_obj::floor((value * expVal))) / Float(expVal));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathHelp_obj,roundExp,return )

Float MathHelp_obj::deg2rad( Float degValue){
	HX_STACK_PUSH("MathHelp::deg2rad","util/MathHelp.hx",9);
	HX_STACK_ARG(degValue,"degValue");
	HX_STACK_LINE(9)
	return (Float((degValue * ::Math_obj::PI)) / Float((int)180));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathHelp_obj,deg2rad,return )

Float MathHelp_obj::rad2deg( Float radValue){
	HX_STACK_PUSH("MathHelp::rad2deg","util/MathHelp.hx",13);
	HX_STACK_ARG(radValue,"radValue");
	HX_STACK_LINE(13)
	return (Float((radValue * (int)180)) / Float(::Math_obj::PI));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathHelp_obj,rad2deg,return )

Float MathHelp_obj::angleApproxDeg( Float value){
	HX_STACK_PUSH("MathHelp::angleApproxDeg","util/MathHelp.hx",17);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(18)
	if (((value > (int)180))){
		HX_STACK_LINE(18)
		hx::SubEq(value,(int)360);
	}
	else{
		HX_STACK_LINE(20)
		if (((value < (int)-180))){
			HX_STACK_LINE(20)
			hx::AddEq(value,(int)360);
		}
	}
	HX_STACK_LINE(23)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathHelp_obj,angleApproxDeg,return )

Float MathHelp_obj::angleApproxRad( Float value){
	HX_STACK_PUSH("MathHelp::angleApproxRad","util/MathHelp.hx",26);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(27)
	if (((value > ::Math_obj::PI))){
		HX_STACK_LINE(27)
		hx::SubEq(value,(::Math_obj::PI * (int)2));
	}
	else{
		HX_STACK_LINE(29)
		if (((value < -(::Math_obj::PI)))){
			HX_STACK_LINE(29)
			hx::AddEq(value,(::Math_obj::PI * (int)2));
		}
	}
	HX_STACK_LINE(32)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathHelp_obj,angleApproxRad,return )

Float MathHelp_obj::atanAngleApprox( Float value){
	HX_STACK_PUSH("MathHelp::atanAngleApprox","util/MathHelp.hx",35);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(36)
	if (((value > (Float(::Math_obj::PI) / Float((int)2))))){
		HX_STACK_LINE(36)
		hx::SubEq(value,::Math_obj::PI);
	}
	else{
		HX_STACK_LINE(38)
		if (((value < (Float(::Math_obj::PI) / Float((int)2))))){
			HX_STACK_LINE(38)
			hx::AddEq(value,::Math_obj::PI);
		}
	}
	HX_STACK_LINE(41)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathHelp_obj,atanAngleApprox,return )

bool MathHelp_obj::isInRange( Float value,Float lowerVal,Float upperVal){
	HX_STACK_PUSH("MathHelp::isInRange","util/MathHelp.hx",44);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(lowerVal,"lowerVal");
	HX_STACK_ARG(upperVal,"upperVal");
	HX_STACK_LINE(44)
	return (bool((value >= lowerVal)) && bool((value <= upperVal)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(MathHelp_obj,isInRange,return )

Float MathHelp_obj::randomRange( Float lowerBound,Float upperBound){
	HX_STACK_PUSH("MathHelp::randomRange","util/MathHelp.hx",48);
	HX_STACK_ARG(lowerBound,"lowerBound");
	HX_STACK_ARG(upperBound,"upperBound");
	HX_STACK_LINE(48)
	return ::Math_obj::round(((::Math_obj::random() * ((upperBound - lowerBound))) + lowerBound));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathHelp_obj,randomRange,return )


MathHelp_obj::MathHelp_obj()
{
}

void MathHelp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MathHelp);
	HX_MARK_END_CLASS();
}

void MathHelp_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic MathHelp_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"deg2rad") ) { return deg2rad_dyn(); }
		if (HX_FIELD_EQ(inName,"rad2deg") ) { return rad2deg_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"roundExp") ) { return roundExp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isInRange") ) { return isInRange_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"randomRange") ) { return randomRange_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"angleApproxDeg") ) { return angleApproxDeg_dyn(); }
		if (HX_FIELD_EQ(inName,"angleApproxRad") ) { return angleApproxRad_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"atanAngleApprox") ) { return atanAngleApprox_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MathHelp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MathHelp_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("roundExp"),
	HX_CSTRING("deg2rad"),
	HX_CSTRING("rad2deg"),
	HX_CSTRING("angleApproxDeg"),
	HX_CSTRING("angleApproxRad"),
	HX_CSTRING("atanAngleApprox"),
	HX_CSTRING("isInRange"),
	HX_CSTRING("randomRange"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MathHelp_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MathHelp_obj::__mClass,"__mClass");
};

Class MathHelp_obj::__mClass;

void MathHelp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("util.MathHelp"), hx::TCanCast< MathHelp_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MathHelp_obj::__boot()
{
}

} // end namespace util
