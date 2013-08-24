#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace util{

Void FlxPoint_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_PUSH("FlxPoint::new","org/flixel/util/FlxPoint.hx",26);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(27)
	this->x = X;
	HX_STACK_LINE(28)
	this->y = Y;
}
;
	return null();
}

FlxPoint_obj::~FlxPoint_obj() { }

Dynamic FlxPoint_obj::__CreateEmpty() { return  new FlxPoint_obj; }
hx::ObjectPtr< FlxPoint_obj > FlxPoint_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< FlxPoint_obj > result = new FlxPoint_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic FlxPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPoint_obj > result = new FlxPoint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String FlxPoint_obj::toString( ){
	HX_STACK_PUSH("FlxPoint::toString","org/flixel/util/FlxPoint.hx",95);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::String Block( ::org::flixel::util::FlxPoint_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxPoint.hx",96);
			{
				HX_STACK_LINE(96)
				::String s = ::Type_obj::getClassName(::Type_obj::getClass(__this));		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(96)
				if (((s != null()))){
					HX_STACK_LINE(96)
					s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
					HX_STACK_LINE(96)
					s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
				}
				HX_STACK_LINE(96)
				return s;
			}
			return null();
		}
	};
	HX_STACK_LINE(95)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,toString,return )

::flash::geom::Point FlxPoint_obj::copyToFlash( ::flash::geom::Point FlashPoint){
	HX_STACK_PUSH("FlxPoint::copyToFlash","org/flixel/util/FlxPoint.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FlashPoint,"FlashPoint");
	HX_STACK_LINE(86)
	FlashPoint->x = this->x;
	HX_STACK_LINE(87)
	FlashPoint->y = this->y;
	HX_STACK_LINE(88)
	return FlashPoint;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyToFlash,return )

::org::flixel::util::FlxPoint FlxPoint_obj::copyFromFlash( ::flash::geom::Point FlashPoint){
	HX_STACK_PUSH("FlxPoint::copyFromFlash","org/flixel/util/FlxPoint.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FlashPoint,"FlashPoint");
	HX_STACK_LINE(74)
	this->x = FlashPoint->x;
	HX_STACK_LINE(75)
	this->y = FlashPoint->y;
	HX_STACK_LINE(76)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFromFlash,return )

::org::flixel::util::FlxPoint FlxPoint_obj::copyTo( ::org::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxPoint::copyTo","org/flixel/util/FlxPoint.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(62)
	point->x = this->x;
	HX_STACK_LINE(63)
	point->y = this->y;
	HX_STACK_LINE(64)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyTo,return )

::org::flixel::util::FlxPoint FlxPoint_obj::copyFrom( ::org::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxPoint::copyFrom","org/flixel/util/FlxPoint.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(50)
	this->x = point->x;
	HX_STACK_LINE(51)
	this->y = point->y;
	HX_STACK_LINE(52)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFrom,return )

::org::flixel::util::FlxPoint FlxPoint_obj::make( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_PUSH("FlxPoint::make","org/flixel/util/FlxPoint.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
{
		HX_STACK_LINE(38)
		this->x = X;
		HX_STACK_LINE(39)
		this->y = Y;
		HX_STACK_LINE(40)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,make,return )


FlxPoint_obj::FlxPoint_obj()
{
}

void FlxPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPoint);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void FlxPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic FlxPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("copyToFlash"),
	HX_CSTRING("copyFromFlash"),
	HX_CSTRING("copyTo"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("make"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
};

Class FlxPoint_obj::__mClass;

void FlxPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.util.FlxPoint"), hx::TCanCast< FlxPoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxPoint_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace util
