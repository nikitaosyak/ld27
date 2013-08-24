#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
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
#ifndef INCLUDED_org_flixel_util_FlxAngle
#include <org/flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace util{

Void FlxAngle_obj::__construct()
{
	return null();
}

FlxAngle_obj::~FlxAngle_obj() { }

Dynamic FlxAngle_obj::__CreateEmpty() { return  new FlxAngle_obj; }
hx::ObjectPtr< FlxAngle_obj > FlxAngle_obj::__new()
{  hx::ObjectPtr< FlxAngle_obj > result = new FlxAngle_obj();
	result->__construct();
	return result;}

Dynamic FlxAngle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAngle_obj > result = new FlxAngle_obj();
	result->__construct();
	return result;}

Array< Float > FlxAngle_obj::cosTable;

Array< Float > FlxAngle_obj::sinTable;

Float FlxAngle_obj::DEG;

Float FlxAngle_obj::RAD;

Float FlxAngle_obj::coefficient1;

::org::flixel::util::FlxPoint FlxAngle_obj::rotatePoint( Float X,Float Y,Float PivotX,Float PivotY,Float Angle,::org::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxAngle::rotatePoint","org/flixel/util/FlxAngle.hx",33);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(PivotX,"PivotX");
	HX_STACK_ARG(PivotY,"PivotY");
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(34)
	Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
	HX_STACK_LINE(35)
	Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
	HX_STACK_LINE(36)
	Float radians = (Angle * -0.017453293);		HX_STACK_VAR(radians,"radians");
	HX_STACK_LINE(37)
	while(((radians < -3.14159265))){
		HX_STACK_LINE(38)
		hx::AddEq(radians,6.28318531);
	}
	HX_STACK_LINE(41)
	while(((radians > 3.14159265))){
		HX_STACK_LINE(42)
		radians = (radians - 6.28318531);
	}
	HX_STACK_LINE(46)
	if (((radians < (int)0))){
		HX_STACK_LINE(48)
		sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
		HX_STACK_LINE(49)
		if (((sin < (int)0))){
			HX_STACK_LINE(50)
			sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
		}
		else{
			HX_STACK_LINE(54)
			sin = ((.225 * (((sin * sin) - sin))) + sin);
		}
	}
	else{
		HX_STACK_LINE(60)
		sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
		HX_STACK_LINE(61)
		if (((sin < (int)0))){
			HX_STACK_LINE(62)
			sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
		}
		else{
			HX_STACK_LINE(66)
			sin = ((.225 * (((sin * sin) - sin))) + sin);
		}
	}
	HX_STACK_LINE(71)
	hx::AddEq(radians,1.57079632);
	HX_STACK_LINE(72)
	if (((radians > 3.14159265))){
		HX_STACK_LINE(73)
		radians = (radians - 6.28318531);
	}
	HX_STACK_LINE(76)
	if (((radians < (int)0))){
		HX_STACK_LINE(78)
		cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
		HX_STACK_LINE(79)
		if (((cos < (int)0))){
			HX_STACK_LINE(80)
			cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
		}
		else{
			HX_STACK_LINE(84)
			cos = ((.225 * (((cos * cos) - cos))) + cos);
		}
	}
	else{
		HX_STACK_LINE(90)
		cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
		HX_STACK_LINE(91)
		if (((cos < (int)0))){
			HX_STACK_LINE(92)
			cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
		}
		else{
			HX_STACK_LINE(96)
			cos = ((.225 * (((cos * cos) - cos))) + cos);
		}
	}
	HX_STACK_LINE(101)
	Float dx = (X - PivotX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(104)
	Float dy = (Y - PivotY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(105)
	if (((point == null()))){
		HX_STACK_LINE(106)
		point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(109)
	point->x = ((PivotX + (cos * dx)) - (sin * dy));
	HX_STACK_LINE(110)
	point->y = ((PivotY - (sin * dx)) - (cos * dy));
	HX_STACK_LINE(111)
	return point;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxAngle_obj,rotatePoint,return )

Float FlxAngle_obj::getAngle( ::org::flixel::util::FlxPoint Point1,::org::flixel::util::FlxPoint Point2){
	HX_STACK_PUSH("FlxAngle::getAngle","org/flixel/util/FlxAngle.hx",121);
	HX_STACK_ARG(Point1,"Point1");
	HX_STACK_ARG(Point2,"Point2");
	HX_STACK_LINE(122)
	Float x = (Point2->x - Point1->x);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(123)
	Float y = (Point2->y - Point1->y);		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(124)
	Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(125)
	if (((bool((x != (int)0)) || bool((y != (int)0))))){
		HX_STACK_LINE(127)
		Float c1 = 0.7853981625;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(128)
		Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(129)
		Float ay = (  (((y < (int)0))) ? Float(-(y)) : Float(y) );		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(130)
		if (((x >= (int)0))){
			HX_STACK_LINE(131)
			angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
		}
		else{
			HX_STACK_LINE(135)
			angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
		}
		HX_STACK_LINE(138)
		angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * 57.2957796);
		HX_STACK_LINE(139)
		if (((angle > (int)90))){
			HX_STACK_LINE(140)
			angle = (angle - (int)270);
		}
		else{
			HX_STACK_LINE(144)
			hx::AddEq(angle,(int)90);
		}
	}
	HX_STACK_LINE(149)
	return angle;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,getAngle,return )

Float FlxAngle_obj::atan2( Float y,Float x){
	HX_STACK_PUSH("FlxAngle::atan2","org/flixel/util/FlxAngle.hx",166);
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(167)
	Float absY = y;		HX_STACK_VAR(absY,"absY");
	HX_STACK_LINE(168)
	Float coefficient2 = ((int)3 * ::org::flixel::util::FlxAngle_obj::coefficient1);		HX_STACK_VAR(coefficient2,"coefficient2");
	HX_STACK_LINE(169)
	Float r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(170)
	Float angle;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(172)
	if (((absY < (int)0))){
		HX_STACK_LINE(173)
		absY = -(absY);
	}
	HX_STACK_LINE(177)
	if (((x >= (int)0))){
		HX_STACK_LINE(179)
		r = (Float(((x - absY))) / Float(((x + absY))));
		HX_STACK_LINE(180)
		angle = (::org::flixel::util::FlxAngle_obj::coefficient1 - (::org::flixel::util::FlxAngle_obj::coefficient1 * r));
	}
	else{
		HX_STACK_LINE(184)
		r = (Float(((x + absY))) / Float(((absY - x))));
		HX_STACK_LINE(185)
		angle = (coefficient2 - (::org::flixel::util::FlxAngle_obj::coefficient1 * r));
	}
	HX_STACK_LINE(188)
	return (  (((y < (int)0))) ? Float(-(angle)) : Float(angle) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,atan2,return )

Array< Float > FlxAngle_obj::sinCosGenerator( int length,hx::Null< Float >  __o_sinAmplitude,hx::Null< Float >  __o_cosAmplitude,hx::Null< Float >  __o_frequency){
Float sinAmplitude = __o_sinAmplitude.Default(1.0);
Float cosAmplitude = __o_cosAmplitude.Default(1.0);
Float frequency = __o_frequency.Default(1.0);
	HX_STACK_PUSH("FlxAngle::sinCosGenerator","org/flixel/util/FlxAngle.hx",206);
	HX_STACK_ARG(length,"length");
	HX_STACK_ARG(sinAmplitude,"sinAmplitude");
	HX_STACK_ARG(cosAmplitude,"cosAmplitude");
	HX_STACK_ARG(frequency,"frequency");
{
		HX_STACK_LINE(207)
		Float sin = sinAmplitude;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(208)
		Float cos = cosAmplitude;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(209)
		Float frq = (Float((frequency * ::Math_obj::PI)) / Float(length));		HX_STACK_VAR(frq,"frq");
		HX_STACK_LINE(211)
		::org::flixel::util::FlxAngle_obj::cosTable = Array_obj< Float >::__new();
		HX_STACK_LINE(212)
		::org::flixel::util::FlxAngle_obj::sinTable = Array_obj< Float >::__new();
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(214)
			while(((_g < length))){
				HX_STACK_LINE(214)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(216)
				hx::SubEq(cos,(sin * frq));
				HX_STACK_LINE(217)
				hx::AddEq(sin,(cos * frq));
				HX_STACK_LINE(219)
				::org::flixel::util::FlxAngle_obj::cosTable[c] = cos;
				HX_STACK_LINE(220)
				::org::flixel::util::FlxAngle_obj::sinTable[c] = sin;
			}
		}
		HX_STACK_LINE(223)
		return ::org::flixel::util::FlxAngle_obj::sinTable;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxAngle_obj,sinCosGenerator,return )

Array< Float > FlxAngle_obj::getSinTable( ){
	HX_STACK_PUSH("FlxAngle::getSinTable","org/flixel/util/FlxAngle.hx",232);
	HX_STACK_LINE(232)
	return ::org::flixel::util::FlxAngle_obj::sinTable;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,getSinTable,return )

Array< Float > FlxAngle_obj::getCosTable( ){
	HX_STACK_PUSH("FlxAngle::getCosTable","org/flixel/util/FlxAngle.hx",242);
	HX_STACK_LINE(242)
	return ::org::flixel::util::FlxAngle_obj::cosTable;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,getCosTable,return )

int FlxAngle_obj::wrapAngle( Float angle){
	HX_STACK_PUSH("FlxAngle::wrapAngle","org/flixel/util/FlxAngle.hx",255);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(256)
	int result = ::Std_obj::_int(angle);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(258)
	if (((angle > (int)180))){
		HX_STACK_LINE(259)
		result = (int)-180;
	}
	else{
		HX_STACK_LINE(262)
		if (((angle < (int)-180))){
			HX_STACK_LINE(263)
			result = (int)180;
		}
	}
	HX_STACK_LINE(267)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,wrapAngle,return )

int FlxAngle_obj::angleLimit( int angle,int min,int max){
	HX_STACK_PUSH("FlxAngle::angleLimit","org/flixel/util/FlxAngle.hx",280);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(281)
	int result = angle;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(283)
	if (((angle > max))){
		HX_STACK_LINE(284)
		result = max;
	}
	else{
		HX_STACK_LINE(287)
		if (((angle < min))){
			HX_STACK_LINE(288)
			result = min;
		}
	}
	HX_STACK_LINE(292)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleLimit,return )

Float FlxAngle_obj::asDegrees( Float radians){
	HX_STACK_PUSH("FlxAngle::asDegrees","org/flixel/util/FlxAngle.hx",303);
	HX_STACK_ARG(radians,"radians");
	HX_STACK_LINE(303)
	return (radians * ::org::flixel::util::FlxAngle_obj::DEG);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asDegrees,return )

Float FlxAngle_obj::asRadians( Float degrees){
	HX_STACK_PUSH("FlxAngle::asRadians","org/flixel/util/FlxAngle.hx",315);
	HX_STACK_ARG(degrees,"degrees");
	HX_STACK_LINE(315)
	return (degrees * ::org::flixel::util::FlxAngle_obj::RAD);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asRadians,return )

Float FlxAngle_obj::angleBetween( ::org::flixel::FlxSprite SpriteA,::org::flixel::FlxSprite SpriteB,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_PUSH("FlxAngle::angleBetween","org/flixel/util/FlxAngle.hx",329);
	HX_STACK_ARG(SpriteA,"SpriteA");
	HX_STACK_ARG(SpriteB,"SpriteB");
	HX_STACK_ARG(AsDegrees,"AsDegrees");
{
		HX_STACK_LINE(330)
		Float dx = ((SpriteB->x + SpriteB->origin->x) - ((SpriteA->x + SpriteA->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(331)
		Float dy = ((SpriteB->y + SpriteB->origin->y) - ((SpriteA->y + SpriteA->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(333)
		if ((AsDegrees)){
			HX_STACK_LINE(334)
			return (::Math_obj::atan2(dy,dx) * ::org::flixel::util::FlxAngle_obj::DEG);
		}
		else{
			HX_STACK_LINE(336)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(333)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetween,return )

Float FlxAngle_obj::angleBetweenPoint( ::org::flixel::FlxSprite Sprite,::org::flixel::util::FlxPoint Target,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_PUSH("FlxAngle::angleBetweenPoint","org/flixel/util/FlxAngle.hx",349);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(AsDegrees,"AsDegrees");
{
		HX_STACK_LINE(350)
		Float dx = (Target->x - ((Sprite->x + Sprite->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(351)
		Float dy = (Target->y - ((Sprite->y + Sprite->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(353)
		if ((AsDegrees)){
			HX_STACK_LINE(354)
			return (::Math_obj::atan2(dy,dx) * ::org::flixel::util::FlxAngle_obj::DEG);
		}
		else{
			HX_STACK_LINE(356)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(353)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenPoint,return )

Float FlxAngle_obj::angleBetweenMouse( ::org::flixel::FlxObject Object,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_PUSH("FlxAngle::angleBetweenMouse","org/flixel/util/FlxAngle.hx",369);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(AsDegrees,"AsDegrees");
{
		HX_STACK_LINE(371)
		if (((Object == null()))){
			HX_STACK_LINE(372)
			return (int)0;
		}
		struct _Function_1_1{
			inline static ::org::flixel::util::FlxPoint Block( ::org::flixel::FlxObject &Object){
				HX_STACK_PUSH("*::closure","org/flixel/util/FlxAngle.hx",374);
				{
					HX_STACK_LINE(374)
					::org::flixel::util::FlxPoint point = null();		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera = null();		HX_STACK_VAR(Camera,"Camera");
					HX_STACK_LINE(374)
					if (((point == null()))){
						HX_STACK_LINE(374)
						point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(374)
					if (((Camera == null()))){
						HX_STACK_LINE(374)
						Camera = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(374)
					point->x = (Object->x - (Camera->scroll->x * Object->scrollFactor->x));
					HX_STACK_LINE(374)
					point->y = (Object->y - (Camera->scroll->y * Object->scrollFactor->y));
					HX_STACK_LINE(374)
					return point;
				}
				return null();
			}
		};
		HX_STACK_LINE(374)
		::org::flixel::util::FlxPoint p = _Function_1_1::Block(Object);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(376)
		Float dx = (::org::flixel::FlxG_obj::mouse->screenX - p->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(377)
		Float dy = (::org::flixel::FlxG_obj::mouse->screenY - p->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(379)
		if ((AsDegrees)){
			HX_STACK_LINE(380)
			return (::Math_obj::atan2(dy,dx) * ::org::flixel::util::FlxAngle_obj::DEG);
		}
		else{
			HX_STACK_LINE(382)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(379)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleBetweenMouse,return )

Float FlxAngle_obj::angleBetweenTouch( ::org::flixel::FlxObject Object,::org::flixel::system::input::FlxTouch Touch,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_PUSH("FlxAngle::angleBetweenTouch","org/flixel/util/FlxAngle.hx",397);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Touch,"Touch");
	HX_STACK_ARG(AsDegrees,"AsDegrees");
{
		struct _Function_1_1{
			inline static ::org::flixel::util::FlxPoint Block( ::org::flixel::FlxObject &Object){
				HX_STACK_PUSH("*::closure","org/flixel/util/FlxAngle.hx",399);
				{
					HX_STACK_LINE(399)
					::org::flixel::util::FlxPoint point = null();		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera = null();		HX_STACK_VAR(Camera,"Camera");
					HX_STACK_LINE(399)
					if (((point == null()))){
						HX_STACK_LINE(399)
						point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(399)
					if (((Camera == null()))){
						HX_STACK_LINE(399)
						Camera = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(399)
					point->x = (Object->x - (Camera->scroll->x * Object->scrollFactor->x));
					HX_STACK_LINE(399)
					point->y = (Object->y - (Camera->scroll->y * Object->scrollFactor->y));
					HX_STACK_LINE(399)
					return point;
				}
				return null();
			}
		};
		HX_STACK_LINE(399)
		::org::flixel::util::FlxPoint p = _Function_1_1::Block(Object);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(401)
		Float dx = (Touch->screenX - p->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(402)
		Float dy = (Touch->screenY - p->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(404)
		if ((AsDegrees)){
			HX_STACK_LINE(405)
			return (::Math_obj::atan2(dy,dx) * ::org::flixel::util::FlxAngle_obj::DEG);
		}
		else{
			HX_STACK_LINE(407)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(404)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenTouch,return )


FlxAngle_obj::FlxAngle_obj()
{
}

void FlxAngle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAngle);
	HX_MARK_END_CLASS();
}

void FlxAngle_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxAngle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"DEG") ) { return DEG; }
		if (HX_FIELD_EQ(inName,"RAD") ) { return RAD; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"atan2") ) { return atan2_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cosTable") ) { return cosTable; }
		if (HX_FIELD_EQ(inName,"sinTable") ) { return sinTable; }
		if (HX_FIELD_EQ(inName,"getAngle") ) { return getAngle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapAngle") ) { return wrapAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"asDegrees") ) { return asDegrees_dyn(); }
		if (HX_FIELD_EQ(inName,"asRadians") ) { return asRadians_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angleLimit") ) { return angleLimit_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rotatePoint") ) { return rotatePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getSinTable") ) { return getSinTable_dyn(); }
		if (HX_FIELD_EQ(inName,"getCosTable") ) { return getCosTable_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"coefficient1") ) { return coefficient1; }
		if (HX_FIELD_EQ(inName,"angleBetween") ) { return angleBetween_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sinCosGenerator") ) { return sinCosGenerator_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"angleBetweenPoint") ) { return angleBetweenPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"angleBetweenMouse") ) { return angleBetweenMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"angleBetweenTouch") ) { return angleBetweenTouch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAngle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"DEG") ) { DEG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RAD") ) { RAD=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cosTable") ) { cosTable=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sinTable") ) { sinTable=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"coefficient1") ) { coefficient1=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAngle_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cosTable"),
	HX_CSTRING("sinTable"),
	HX_CSTRING("DEG"),
	HX_CSTRING("RAD"),
	HX_CSTRING("coefficient1"),
	HX_CSTRING("rotatePoint"),
	HX_CSTRING("getAngle"),
	HX_CSTRING("atan2"),
	HX_CSTRING("sinCosGenerator"),
	HX_CSTRING("getSinTable"),
	HX_CSTRING("getCosTable"),
	HX_CSTRING("wrapAngle"),
	HX_CSTRING("angleLimit"),
	HX_CSTRING("asDegrees"),
	HX_CSTRING("asRadians"),
	HX_CSTRING("angleBetween"),
	HX_CSTRING("angleBetweenPoint"),
	HX_CSTRING("angleBetweenMouse"),
	HX_CSTRING("angleBetweenTouch"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::cosTable,"cosTable");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::sinTable,"sinTable");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::DEG,"DEG");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::RAD,"RAD");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::coefficient1,"coefficient1");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::cosTable,"cosTable");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::sinTable,"sinTable");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::DEG,"DEG");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::RAD,"RAD");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::coefficient1,"coefficient1");
};

Class FlxAngle_obj::__mClass;

void FlxAngle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.util.FlxAngle"), hx::TCanCast< FlxAngle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxAngle_obj::__boot()
{
	cosTable= Array_obj< Float >::__new();
	sinTable= Array_obj< Float >::__new();
	DEG= (Float((int)180) / Float(::Math_obj::PI));
	RAD= (Float(::Math_obj::PI) / Float((int)180));
	coefficient1= (Float(::Math_obj::PI) / Float((int)4));
}

} // end namespace org
} // end namespace flixel
} // end namespace util
