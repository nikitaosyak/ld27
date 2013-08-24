#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxColor
#include <org/flixel/util/FlxColor.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxMath
#include <org/flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRandom
#include <org/flixel/util/FlxRandom.h>
#endif
namespace org{
namespace flixel{
namespace util{

Void FlxRandom_obj::__construct()
{
	return null();
}

FlxRandom_obj::~FlxRandom_obj() { }

Dynamic FlxRandom_obj::__CreateEmpty() { return  new FlxRandom_obj; }
hx::ObjectPtr< FlxRandom_obj > FlxRandom_obj::__new()
{  hx::ObjectPtr< FlxRandom_obj > result = new FlxRandom_obj();
	result->__construct();
	return result;}

Dynamic FlxRandom_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRandom_obj > result = new FlxRandom_obj();
	result->__construct();
	return result;}

Float FlxRandom_obj::globalSeed;

int FlxRandom_obj::intHelper;

int FlxRandom_obj::_int( ){
	HX_STACK_PUSH("FlxRandom::int","org/flixel/util/FlxRandom.hx",33);
	HX_STACK_LINE(34)
	int result = ::Std_obj::_int(::org::flixel::util::FlxRandom_obj::intHelper);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(36)
	(result)++;
	HX_STACK_LINE(37)
	hx::MultEq(result,(int)75);
	HX_STACK_LINE(38)
	hx::ModEq(result,(int)65537);
	HX_STACK_LINE(39)
	(result)--;
	HX_STACK_LINE(41)
	(::org::flixel::util::FlxRandom_obj::intHelper)++;
	HX_STACK_LINE(43)
	if (((::org::flixel::util::FlxRandom_obj::intHelper == (int)65536))){
		HX_STACK_LINE(44)
		::org::flixel::util::FlxRandom_obj::intHelper = (int)0;
	}
	HX_STACK_LINE(48)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,_int,return )

int FlxRandom_obj::intRanged( Dynamic min,Dynamic max,Array< Float > excludes){
	HX_STACK_PUSH("FlxRandom::intRanged","org/flixel/util/FlxRandom.hx",64);
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(excludes,"excludes");
	HX_STACK_LINE(65)
	if (((min == null()))){
		HX_STACK_LINE(66)
		min = (int)0;
	}
	HX_STACK_LINE(70)
	if (((max == null()))){
		HX_STACK_LINE(71)
		max = (int)16777215;
	}
	HX_STACK_LINE(75)
	if (((min == max))){
		HX_STACK_LINE(76)
		return ::Math_obj::floor(min);
	}
	HX_STACK_LINE(80)
	if (((excludes != null()))){
		HX_STACK_LINE(84)
		excludes->sort(::org::flixel::util::FlxMath_obj::numericComparison_dyn());
		HX_STACK_LINE(86)
		int result;		HX_STACK_VAR(result,"result");
		struct _Function_2_1{
			inline static int Block( Array< Float > &excludes,int &result){
				HX_STACK_PUSH("*::closure","org/flixel/util/FlxRandom.hx",98);
				{
					HX_STACK_LINE(98)
					int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
					HX_STACK_LINE(98)
					int len = excludes->length;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(98)
					int index = (int)-1;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(98)
					{
						HX_STACK_LINE(98)
						int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(98)
						while(((_g < len))){
							HX_STACK_LINE(98)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(98)
							if (((excludes->__get(i) == result))){
								HX_STACK_LINE(98)
								index = i;
								HX_STACK_LINE(98)
								break;
							}
						}
					}
					HX_STACK_LINE(98)
					return index;
				}
				return null();
			}
		};
		HX_STACK_LINE(88)
		do{
			HX_STACK_LINE(88)
			if (((min < max))){
				HX_STACK_LINE(90)
				result = ::Math_obj::floor((min + (::Math_obj::random() * (((max + (int)1) - min)))));
			}
			else{
				HX_STACK_LINE(94)
				result = ::Math_obj::floor((max + (::Math_obj::random() * (((min + (int)1) - max)))));
			}
		}
while(((_Function_2_1::Block(excludes,result) >= (int)0)));
		HX_STACK_LINE(100)
		return result;
	}
	else{
		HX_STACK_LINE(103)
		if (((min < max))){
			HX_STACK_LINE(106)
			return ::Math_obj::floor((min + (::Math_obj::random() * (((max + (int)1) - min)))));
		}
		else{
			HX_STACK_LINE(110)
			return ::Math_obj::floor((max + (::Math_obj::random() * (((min + (int)1) - max)))));
		}
	}
	HX_STACK_LINE(80)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,intRanged,return )

Float FlxRandom_obj::_float( ){
	HX_STACK_PUSH("FlxRandom::float","org/flixel/util/FlxRandom.hx",122);
	HX_STACK_LINE(123)
	::org::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
	HX_STACK_LINE(124)
	if (((::org::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
		HX_STACK_LINE(124)
		hx::AddEq(::org::flixel::util::FlxRandom_obj::globalSeed,(int)1);
	}
	HX_STACK_LINE(125)
	return ::org::flixel::util::FlxRandom_obj::globalSeed;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,_float,return )

Float FlxRandom_obj::floatRanged( Dynamic min,Dynamic max){
	HX_STACK_PUSH("FlxRandom::floatRanged","org/flixel/util/FlxRandom.hx",140);
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(141)
	if (((min == null()))){
		HX_STACK_LINE(142)
		min = (int)0;
	}
	HX_STACK_LINE(146)
	if (((max == null()))){
		HX_STACK_LINE(147)
		max = (int)16777215;
	}
	HX_STACK_LINE(151)
	if (((min == max))){
		HX_STACK_LINE(152)
		return min;
	}
	else{
		HX_STACK_LINE(155)
		if (((min < max))){
			HX_STACK_LINE(156)
			return (min + (::Math_obj::random() * (((max - min) + (int)1))));
		}
		else{
			HX_STACK_LINE(160)
			return (max + (::Math_obj::random() * (((min - max) + (int)1))));
		}
	}
	HX_STACK_LINE(151)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxRandom_obj,floatRanged,return )

Float FlxRandom_obj::srand( Float Seed){
	HX_STACK_PUSH("FlxRandom::srand","org/flixel/util/FlxRandom.hx",171);
	HX_STACK_ARG(Seed,"Seed");
	HX_STACK_LINE(171)
	return (Float(hx::Mod(((int)69621 * ::Std_obj::_int((Seed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,srand,return )

bool FlxRandom_obj::chanceRoll( hx::Null< int >  __o_chance){
int chance = __o_chance.Default(50);
	HX_STACK_PUSH("FlxRandom::chanceRoll","org/flixel/util/FlxRandom.hx",185);
	HX_STACK_ARG(chance,"chance");
{
		HX_STACK_LINE(185)
		if (((chance <= (int)0))){
			HX_STACK_LINE(187)
			return false;
		}
		else{
			HX_STACK_LINE(190)
			if (((chance >= (int)100))){
				HX_STACK_LINE(191)
				return true;
			}
			else{
				HX_STACK_LINE(195)
				if ((((::Math_obj::random() * (int)100) >= chance))){
					HX_STACK_LINE(197)
					return false;
				}
				else{
					HX_STACK_LINE(201)
					return true;
				}
			}
		}
		HX_STACK_LINE(185)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,chanceRoll,return )

Float FlxRandom_obj::sign( ){
	HX_STACK_PUSH("FlxRandom::sign","org/flixel/util/FlxRandom.hx",213);
	HX_STACK_LINE(213)
	return (  (((::Math_obj::random() > 0.5))) ? Float((int)1) : Float((int)-1) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,sign,return )

int FlxRandom_obj::color( hx::Null< int >  __o_min,hx::Null< int >  __o_max,hx::Null< int >  __o_alpha){
int min = __o_min.Default(0);
int max = __o_max.Default(255);
int alpha = __o_alpha.Default(255);
	HX_STACK_PUSH("FlxRandom::color","org/flixel/util/FlxRandom.hx",229);
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(229)
		return ::org::flixel::util::FlxColor_obj::getRandomColor(min,max,alpha);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,color,return )


FlxRandom_obj::FlxRandom_obj()
{
}

void FlxRandom_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRandom);
	HX_MARK_END_CLASS();
}

void FlxRandom_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxRandom_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return _int_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { return _float_dyn(); }
		if (HX_FIELD_EQ(inName,"srand") ) { return srand_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intHelper") ) { return intHelper; }
		if (HX_FIELD_EQ(inName,"intRanged") ) { return intRanged_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalSeed") ) { return globalSeed; }
		if (HX_FIELD_EQ(inName,"chanceRoll") ) { return chanceRoll_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floatRanged") ) { return floatRanged_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxRandom_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"intHelper") ) { intHelper=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalSeed") ) { globalSeed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRandom_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("globalSeed"),
	HX_CSTRING("intHelper"),
	HX_CSTRING("int"),
	HX_CSTRING("intRanged"),
	HX_CSTRING("float"),
	HX_CSTRING("floatRanged"),
	HX_CSTRING("srand"),
	HX_CSTRING("chanceRoll"),
	HX_CSTRING("sign"),
	HX_CSTRING("color"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::globalSeed,"globalSeed");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::intHelper,"intHelper");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::globalSeed,"globalSeed");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::intHelper,"intHelper");
};

Class FlxRandom_obj::__mClass;

void FlxRandom_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.util.FlxRandom"), hx::TCanCast< FlxRandom_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxRandom_obj::__boot()
{
	intHelper= (int)0;
}

} // end namespace org
} // end namespace flixel
} // end namespace util
