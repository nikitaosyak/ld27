#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_FadeTween
#include <org/flixel/FadeTween.h>
#endif
namespace org{
namespace flixel{

Void FadeTween_obj::__construct(Float StartValue,Float EndValue,Float Duration,Dynamic Ease)
{
HX_STACK_PUSH("FadeTween::new","org/flixel/FlxSound.hx",619);
{
	HX_STACK_LINE(620)
	this->easingFunction = (  (((Ease != null()))) ? Dynamic(Ease) : Dynamic(::org::flixel::FadeTween_obj::linear_dyn()) );
	HX_STACK_LINE(623)
	this->startValue = StartValue;
	HX_STACK_LINE(624)
	this->totalChange = (EndValue - StartValue);
	HX_STACK_LINE(625)
	this->duration = Duration;
	HX_STACK_LINE(627)
	this->_progress = (int)0;
}
;
	return null();
}

FadeTween_obj::~FadeTween_obj() { }

Dynamic FadeTween_obj::__CreateEmpty() { return  new FadeTween_obj; }
hx::ObjectPtr< FadeTween_obj > FadeTween_obj::__new(Float StartValue,Float EndValue,Float Duration,Dynamic Ease)
{  hx::ObjectPtr< FadeTween_obj > result = new FadeTween_obj();
	result->__construct(StartValue,EndValue,Duration,Ease);
	return result;}

Dynamic FadeTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FadeTween_obj > result = new FadeTween_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Float FadeTween_obj::get_value( ){
	HX_STACK_PUSH("FadeTween::get_value","org/flixel/FlxSound.hx",688);
	HX_STACK_THIS(this);
	HX_STACK_LINE(688)
	return this->easingFunction(this->_progress,this->startValue,this->totalChange,this->duration);
}


HX_DEFINE_DYNAMIC_FUNC0(FadeTween_obj,get_value,return )

bool FadeTween_obj::get_finished( ){
	HX_STACK_PUSH("FadeTween::get_finished","org/flixel/FlxSound.hx",681);
	HX_STACK_THIS(this);
	HX_STACK_LINE(681)
	return (this->_progress >= this->duration);
}


HX_DEFINE_DYNAMIC_FUNC0(FadeTween_obj,get_finished,return )

Float FadeTween_obj::set_progress( Float value){
	HX_STACK_PUSH("FadeTween::set_progress","org/flixel/FlxSound.hx",664);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(665)
	if (((value >= this->duration))){
		HX_STACK_LINE(666)
		value = this->duration;
	}
	else{
		HX_STACK_LINE(669)
		if (((value < (int)0))){
			HX_STACK_LINE(670)
			value = (int)0;
		}
	}
	HX_STACK_LINE(674)
	this->_progress = value;
	HX_STACK_LINE(675)
	return this->_progress;
}


HX_DEFINE_DYNAMIC_FUNC1(FadeTween_obj,set_progress,return )

Float FadeTween_obj::get_progress( ){
	HX_STACK_PUSH("FadeTween::get_progress","org/flixel/FlxSound.hx",659);
	HX_STACK_THIS(this);
	HX_STACK_LINE(659)
	return this->_progress;
}


HX_DEFINE_DYNAMIC_FUNC0(FadeTween_obj,get_progress,return )

Void FadeTween_obj::destroy( ){
{
		HX_STACK_PUSH("FadeTween::destroy","org/flixel/FlxSound.hx",631);
		HX_STACK_THIS(this);
		HX_STACK_LINE(631)
		this->easingFunction = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FadeTween_obj,destroy,(void))

Float FadeTween_obj::linear( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("FadeTween::linear","org/flixel/FlxSound.hx",703);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(703)
	return (b + (Float((c * t)) / Float(d)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FadeTween_obj,linear,return )


FadeTween_obj::FadeTween_obj()
{
}

void FadeTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FadeTween);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_progress,"_progress");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(totalChange,"totalChange");
	HX_MARK_MEMBER_NAME(startValue,"startValue");
	HX_MARK_MEMBER_NAME(easingFunction,"easingFunction");
	HX_MARK_END_CLASS();
}

void FadeTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_progress,"_progress");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(totalChange,"totalChange");
	HX_VISIT_MEMBER_NAME(startValue,"startValue");
	HX_VISIT_MEMBER_NAME(easingFunction,"easingFunction");
}

Dynamic FadeTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return inCallProp ? get_value() : value; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"linear") ) { return linear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return inCallProp ? get_finished() : finished; }
		if (HX_FIELD_EQ(inName,"progress") ) { return get_progress(); }
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		if (HX_FIELD_EQ(inName,"_progress") ) { return _progress; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startValue") ) { return startValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalChange") ) { return totalChange; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_finished") ) { return get_finished_dyn(); }
		if (HX_FIELD_EQ(inName,"set_progress") ) { return set_progress_dyn(); }
		if (HX_FIELD_EQ(inName,"get_progress") ) { return get_progress_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"easingFunction") ) { return easingFunction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FadeTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"progress") ) { return set_progress(inValue); }
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_progress") ) { _progress=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startValue") ) { startValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalChange") ) { totalChange=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"easingFunction") ) { easingFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FadeTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("progress"));
	outFields->push(HX_CSTRING("_progress"));
	outFields->push(HX_CSTRING("duration"));
	outFields->push(HX_CSTRING("totalChange"));
	outFields->push(HX_CSTRING("startValue"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("linear"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_value"),
	HX_CSTRING("value"),
	HX_CSTRING("get_finished"),
	HX_CSTRING("finished"),
	HX_CSTRING("set_progress"),
	HX_CSTRING("get_progress"),
	HX_CSTRING("_progress"),
	HX_CSTRING("duration"),
	HX_CSTRING("totalChange"),
	HX_CSTRING("startValue"),
	HX_CSTRING("easingFunction"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FadeTween_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FadeTween_obj::__mClass,"__mClass");
};

Class FadeTween_obj::__mClass;

void FadeTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FadeTween"), hx::TCanCast< FadeTween_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FadeTween_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
