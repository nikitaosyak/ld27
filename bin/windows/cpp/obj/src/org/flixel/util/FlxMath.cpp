#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxMouse
#include <org/flixel/system/input/FlxMouse.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxTouch
#include <org/flixel/system/input/FlxTouch.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_IFlxInput
#include <org/flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxMath
#include <org/flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRect
#include <org/flixel/util/FlxRect.h>
#endif
namespace org{
namespace flixel{
namespace util{

Void FlxMath_obj::__construct()
{
	return null();
}

FlxMath_obj::~FlxMath_obj() { }

Dynamic FlxMath_obj::__CreateEmpty() { return  new FlxMath_obj; }
hx::ObjectPtr< FlxMath_obj > FlxMath_obj::__new()
{  hx::ObjectPtr< FlxMath_obj > result = new FlxMath_obj();
	result->__construct();
	return result;}

Dynamic FlxMath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMath_obj > result = new FlxMath_obj();
	result->__construct();
	return result;}

Float FlxMath_obj::roundDecimal( Float Value,int Precision){
	HX_STACK_PUSH("FlxMath::roundDecimal","org/flixel/util/FlxMath.hx",22);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Precision,"Precision");
	HX_STACK_LINE(23)
	Float num = (Value * ::Math_obj::pow((int)10,Precision));		HX_STACK_VAR(num,"num");
	HX_STACK_LINE(24)
	return (Float(::Math_obj::round(num)) / Float(::Math_obj::pow((int)10,Precision)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,roundDecimal,return )

Float FlxMath_obj::bound( Float Value,Float Min,Float Max){
	HX_STACK_PUSH("FlxMath::bound","org/flixel/util/FlxMath.hx",37);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_LINE(38)
	Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
	HX_STACK_LINE(39)
	return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,bound,return )

Float FlxMath_obj::computeVelocity( Float Velocity,Float Acceleration,Float Drag,Float Max){
	HX_STACK_PUSH("FlxMath::computeVelocity","org/flixel/util/FlxMath.hx",52);
	HX_STACK_ARG(Velocity,"Velocity");
	HX_STACK_ARG(Acceleration,"Acceleration");
	HX_STACK_ARG(Drag,"Drag");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_LINE(53)
	if (((Acceleration != (int)0))){
		HX_STACK_LINE(54)
		hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
	}
	else{
		HX_STACK_LINE(57)
		if (((Drag != (int)0))){
			HX_STACK_LINE(59)
			Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
			HX_STACK_LINE(60)
			if ((((Velocity - drag) > (int)0))){
				HX_STACK_LINE(61)
				Velocity = (Velocity - drag);
			}
			else{
				HX_STACK_LINE(64)
				if ((((Velocity + drag) < (int)0))){
					HX_STACK_LINE(65)
					hx::AddEq(Velocity,drag);
				}
				else{
					HX_STACK_LINE(69)
					Velocity = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(73)
	if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
		HX_STACK_LINE(74)
		if (((Velocity > Max))){
			HX_STACK_LINE(76)
			Velocity = Max;
		}
		else{
			HX_STACK_LINE(79)
			if (((Velocity < -(Max)))){
				HX_STACK_LINE(80)
				Velocity = -(Max);
			}
		}
	}
	HX_STACK_LINE(84)
	return Velocity;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,computeVelocity,return )

Float FlxMath_obj::getDistance( ::org::flixel::util::FlxPoint Point1,::org::flixel::util::FlxPoint Point2){
	HX_STACK_PUSH("FlxMath::getDistance","org/flixel/util/FlxMath.hx",94);
	HX_STACK_ARG(Point1,"Point1");
	HX_STACK_ARG(Point2,"Point2");
	HX_STACK_LINE(95)
	Float dx = (Point1->x - Point2->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(96)
	Float dy = (Point1->y - Point2->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(97)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,getDistance,return )

bool FlxMath_obj::isOdd( Float n){
	HX_STACK_PUSH("FlxMath::isOdd","org/flixel/util/FlxMath.hx",108);
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(108)
	if (((((int(::Std_obj::_int(n)) & int((int)1))) != (int)0))){
		HX_STACK_LINE(110)
		return true;
	}
	else{
		HX_STACK_LINE(114)
		return false;
	}
	HX_STACK_LINE(108)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isOdd,return )

bool FlxMath_obj::isEven( Float n){
	HX_STACK_PUSH("FlxMath::isEven","org/flixel/util/FlxMath.hx",127);
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(127)
	if (((((int(::Std_obj::_int(n)) & int((int)1))) != (int)0))){
		HX_STACK_LINE(129)
		return false;
	}
	else{
		HX_STACK_LINE(133)
		return true;
	}
	HX_STACK_LINE(127)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isEven,return )

int FlxMath_obj::numericComparison( Float num1,Float num2){
	HX_STACK_PUSH("FlxMath::numericComparison","org/flixel/util/FlxMath.hx",147);
	HX_STACK_ARG(num1,"num1");
	HX_STACK_ARG(num2,"num2");
	HX_STACK_LINE(148)
	if (((num2 > num1))){
		HX_STACK_LINE(149)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(152)
		if (((num1 > num2))){
			HX_STACK_LINE(153)
			return (int)1;
		}
	}
	HX_STACK_LINE(156)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,numericComparison,return )

bool FlxMath_obj::pointInCoordinates( Float pointX,Float pointY,Float rectX,Float rectY,Float rectWidth,Float rectHeight){
	HX_STACK_PUSH("FlxMath::pointInCoordinates","org/flixel/util/FlxMath.hx",172);
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_ARG(rectX,"rectX");
	HX_STACK_ARG(rectY,"rectY");
	HX_STACK_ARG(rectWidth,"rectWidth");
	HX_STACK_ARG(rectHeight,"rectHeight");
	HX_STACK_LINE(173)
	if (((bool((pointX >= rectX)) && bool((pointX <= (rectX + rectWidth)))))){
		HX_STACK_LINE(174)
		if (((bool((pointY >= rectY)) && bool((pointY <= (rectY + rectHeight)))))){
			HX_STACK_LINE(176)
			return true;
		}
	}
	HX_STACK_LINE(181)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxMath_obj,pointInCoordinates,return )

bool FlxMath_obj::pointInFlxRect( Float pointX,Float pointY,::org::flixel::util::FlxRect rect){
	HX_STACK_PUSH("FlxMath::pointInFlxRect","org/flixel/util/FlxMath.hx",193);
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(194)
	if (((bool((bool((bool((pointX >= rect->x)) && bool((pointX <= rect->get_right())))) && bool((pointY >= rect->y)))) && bool((pointY <= rect->get_bottom()))))){
		HX_STACK_LINE(195)
		return true;
	}
	HX_STACK_LINE(199)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInFlxRect,return )

bool FlxMath_obj::mouseInFlxRect( bool useWorldCoords,::org::flixel::util::FlxRect rect){
	HX_STACK_PUSH("FlxMath::mouseInFlxRect","org/flixel/util/FlxMath.hx",212);
	HX_STACK_ARG(useWorldCoords,"useWorldCoords");
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(213)
	if (((rect == null()))){
		HX_STACK_LINE(214)
		return true;
	}
	HX_STACK_LINE(218)
	if ((useWorldCoords)){
		HX_STACK_LINE(219)
		return ::org::flixel::util::FlxMath_obj::pointInFlxRect(::Math_obj::floor(::org::flixel::FlxG_obj::mouse->x),::Math_obj::floor(::org::flixel::FlxG_obj::mouse->y),rect);
	}
	else{
		HX_STACK_LINE(223)
		return ::org::flixel::util::FlxMath_obj::pointInFlxRect(::org::flixel::FlxG_obj::mouse->screenX,::org::flixel::FlxG_obj::mouse->screenY,rect);
	}
	HX_STACK_LINE(218)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,mouseInFlxRect,return )

bool FlxMath_obj::pointInRectangle( Float pointX,Float pointY,::flash::geom::Rectangle rect){
	HX_STACK_PUSH("FlxMath::pointInRectangle","org/flixel/util/FlxMath.hx",238);
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(239)
	if (((bool((bool((bool((pointX >= rect->x)) && bool((pointX <= rect->get_right())))) && bool((pointY >= rect->y)))) && bool((pointY <= rect->get_bottom()))))){
		HX_STACK_LINE(240)
		return true;
	}
	HX_STACK_LINE(244)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInRectangle,return )

int FlxMath_obj::maxAdd( int value,int amount,int max){
	HX_STACK_PUSH("FlxMath::maxAdd","org/flixel/util/FlxMath.hx",256);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(257)
	hx::AddEq(value,amount);
	HX_STACK_LINE(259)
	if (((value > max))){
		HX_STACK_LINE(260)
		value = max;
	}
	HX_STACK_LINE(264)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,maxAdd,return )

int FlxMath_obj::wrapValue( int value,int amount,int max){
	HX_STACK_PUSH("FlxMath::wrapValue","org/flixel/util/FlxMath.hx",277);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(278)
	int diff;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(280)
	value = ::Std_obj::_int(::Math_obj::abs(value));
	HX_STACK_LINE(281)
	amount = ::Std_obj::_int(::Math_obj::abs(amount));
	HX_STACK_LINE(282)
	max = ::Std_obj::_int(::Math_obj::abs(max));
	HX_STACK_LINE(284)
	diff = hx::Mod(((value + amount)),max);
	HX_STACK_LINE(286)
	return diff;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,wrapValue,return )

Float FlxMath_obj::dotProduct( Float ax,Float ay,Float bx,Float by){
	HX_STACK_PUSH("FlxMath::dotProduct","org/flixel/util/FlxMath.hx",300);
	HX_STACK_ARG(ax,"ax");
	HX_STACK_ARG(ay,"ay");
	HX_STACK_ARG(bx,"bx");
	HX_STACK_ARG(by,"by");
	HX_STACK_LINE(300)
	return ((ax * bx) + (ay * by));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,dotProduct,return )

Float FlxMath_obj::vectorLength( Float dx,Float dy){
	HX_STACK_PUSH("FlxMath::vectorLength","org/flixel/util/FlxMath.hx",313);
	HX_STACK_ARG(dx,"dx");
	HX_STACK_ARG(dy,"dy");
	HX_STACK_LINE(313)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,vectorLength,return )

int FlxMath_obj::distanceBetween( ::org::flixel::FlxSprite SpriteA,::org::flixel::FlxSprite SpriteB){
	HX_STACK_PUSH("FlxMath::distanceBetween","org/flixel/util/FlxMath.hx",325);
	HX_STACK_ARG(SpriteA,"SpriteA");
	HX_STACK_ARG(SpriteB,"SpriteB");
	HX_STACK_LINE(326)
	Float dx = ((SpriteA->x + SpriteA->origin->x) - ((SpriteB->x + SpriteB->origin->x)));		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(327)
	Float dy = ((SpriteA->y + SpriteA->origin->y) - ((SpriteB->y + SpriteB->origin->y)));		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(329)
	return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceBetween,return )

int FlxMath_obj::distanceToPoint( ::org::flixel::FlxSprite Sprite,::org::flixel::util::FlxPoint Target){
	HX_STACK_PUSH("FlxMath::distanceToPoint","org/flixel/util/FlxMath.hx",341);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Target,"Target");
	HX_STACK_LINE(342)
	Float dx = ((Sprite->x + Sprite->origin->x) - Target->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(343)
	Float dy = ((Sprite->y + Sprite->origin->y) - Target->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(345)
	return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToPoint,return )

int FlxMath_obj::distanceToMouse( ::org::flixel::FlxSprite Sprite){
	HX_STACK_PUSH("FlxMath::distanceToMouse","org/flixel/util/FlxMath.hx",356);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_LINE(357)
	Float dx = ((Sprite->x + Sprite->origin->x) - ::org::flixel::FlxG_obj::mouse->screenX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(358)
	Float dy = ((Sprite->y + Sprite->origin->y) - ::org::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(360)
	return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,distanceToMouse,return )

int FlxMath_obj::distanceToTouch( ::org::flixel::FlxSprite Sprite,::org::flixel::system::input::FlxTouch Touch){
	HX_STACK_PUSH("FlxMath::distanceToTouch","org/flixel/util/FlxMath.hx",373);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Touch,"Touch");
	HX_STACK_LINE(374)
	Float dx = ((Sprite->x + Sprite->origin->x) - Touch->screenX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(375)
	Float dy = ((Sprite->y + Sprite->origin->y) - Touch->screenY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(377)
	return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToTouch,return )


FlxMath_obj::FlxMath_obj()
{
}

void FlxMath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMath);
	HX_MARK_END_CLASS();
}

void FlxMath_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxMath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		if (HX_FIELD_EQ(inName,"isOdd") ) { return isOdd_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isEven") ) { return isEven_dyn(); }
		if (HX_FIELD_EQ(inName,"maxAdd") ) { return maxAdd_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapValue") ) { return wrapValue_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDistance") ) { return getDistance_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"roundDecimal") ) { return roundDecimal_dyn(); }
		if (HX_FIELD_EQ(inName,"vectorLength") ) { return vectorLength_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointInFlxRect") ) { return pointInFlxRect_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseInFlxRect") ) { return mouseInFlxRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"computeVelocity") ) { return computeVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceBetween") ) { return distanceBetween_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { return distanceToPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToMouse") ) { return distanceToMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToTouch") ) { return distanceToTouch_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pointInRectangle") ) { return pointInRectangle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numericComparison") ) { return numericComparison_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pointInCoordinates") ) { return pointInCoordinates_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMath_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("roundDecimal"),
	HX_CSTRING("bound"),
	HX_CSTRING("computeVelocity"),
	HX_CSTRING("getDistance"),
	HX_CSTRING("isOdd"),
	HX_CSTRING("isEven"),
	HX_CSTRING("numericComparison"),
	HX_CSTRING("pointInCoordinates"),
	HX_CSTRING("pointInFlxRect"),
	HX_CSTRING("mouseInFlxRect"),
	HX_CSTRING("pointInRectangle"),
	HX_CSTRING("maxAdd"),
	HX_CSTRING("wrapValue"),
	HX_CSTRING("dotProduct"),
	HX_CSTRING("vectorLength"),
	HX_CSTRING("distanceBetween"),
	HX_CSTRING("distanceToPoint"),
	HX_CSTRING("distanceToMouse"),
	HX_CSTRING("distanceToTouch"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
};

Class FlxMath_obj::__mClass;

void FlxMath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.util.FlxMath"), hx::TCanCast< FlxMath_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxMath_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace util
