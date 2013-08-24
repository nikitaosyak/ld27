#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxArray
#include <org/flixel/util/FlxArray.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRandom
#include <org/flixel/util/FlxRandom.h>
#endif
namespace org{
namespace flixel{
namespace util{

Void FlxArray_obj::__construct()
{
	return null();
}

FlxArray_obj::~FlxArray_obj() { }

Dynamic FlxArray_obj::__CreateEmpty() { return  new FlxArray_obj; }
hx::ObjectPtr< FlxArray_obj > FlxArray_obj::__new()
{  hx::ObjectPtr< FlxArray_obj > result = new FlxArray_obj();
	result->__construct();
	return result;}

Dynamic FlxArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxArray_obj > result = new FlxArray_obj();
	result->__construct();
	return result;}

int FlxArray_obj::indexOf( Dynamic array,Dynamic whatToFind,hx::Null< int >  __o_fromIndex){
int fromIndex = __o_fromIndex.Default(0);
	HX_STACK_PUSH("FlxArray::indexOf","org/flixel/util/FlxArray.hx",17);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(whatToFind,"whatToFind");
	HX_STACK_ARG(fromIndex,"fromIndex");
{
		HX_STACK_LINE(21)
		int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(22)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(23)
		{
			HX_STACK_LINE(23)
			int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(23)
			while(((_g < len))){
				HX_STACK_LINE(23)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(25)
				if (((array->__GetItem(i) == whatToFind))){
					HX_STACK_LINE(27)
					index = i;
					HX_STACK_LINE(28)
					break;
				}
			}
		}
		HX_STACK_LINE(31)
		return index;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArray_obj,indexOf,return )

Void FlxArray_obj::setLength( Dynamic array,int newLength){
{
		HX_STACK_PUSH("FlxArray::setLength","org/flixel/util/FlxArray.hx",42);
		HX_STACK_ARG(array,"array");
		HX_STACK_ARG(newLength,"newLength");
		HX_STACK_LINE(46)
		if (((newLength < (int)0))){
			HX_STACK_LINE(46)
			return null();
		}
		HX_STACK_LINE(47)
		int oldLength = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(48)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(49)
		if (((diff < (int)0))){
			HX_STACK_LINE(51)
			diff = -(diff);
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(52)
				while(((_g < diff))){
					HX_STACK_LINE(52)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(54)
					array->__Field(HX_CSTRING("pop"),true)();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArray_obj,setLength,(void))

Dynamic FlxArray_obj::shuffle( Dynamic Objects,int HowManyTimes){
	HX_STACK_PUSH("FlxArray::shuffle","org/flixel/util/FlxArray.hx",69);
	HX_STACK_ARG(Objects,"Objects");
	HX_STACK_ARG(HowManyTimes,"HowManyTimes");
	HX_STACK_LINE(70)
	HowManyTimes = ::Std_obj::_int(::Math_obj::max(HowManyTimes,(int)0));
	HX_STACK_LINE(71)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(72)
	int index1;		HX_STACK_VAR(index1,"index1");
	HX_STACK_LINE(73)
	int index2;		HX_STACK_VAR(index2,"index2");
	HX_STACK_LINE(74)
	Dynamic object;		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(75)
	while(((i < HowManyTimes))){
		struct _Function_2_1{
			inline static Float Block( ){
				HX_STACK_PUSH("*::closure","org/flixel/util/FlxArray.hx",77);
				{
					HX_STACK_LINE(77)
					::org::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
					HX_STACK_LINE(77)
					if (((::org::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
						HX_STACK_LINE(77)
						hx::AddEq(::org::flixel::util::FlxRandom_obj::globalSeed,(int)1);
					}
					HX_STACK_LINE(77)
					return ::org::flixel::util::FlxRandom_obj::globalSeed;
				}
				return null();
			}
		};
		HX_STACK_LINE(77)
		index1 = ::Std_obj::_int((_Function_2_1::Block() * Objects->__Field(HX_CSTRING("length"),true)));
		struct _Function_2_2{
			inline static Float Block( ){
				HX_STACK_PUSH("*::closure","org/flixel/util/FlxArray.hx",78);
				{
					HX_STACK_LINE(78)
					::org::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
					HX_STACK_LINE(78)
					if (((::org::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
						HX_STACK_LINE(78)
						hx::AddEq(::org::flixel::util::FlxRandom_obj::globalSeed,(int)1);
					}
					HX_STACK_LINE(78)
					return ::org::flixel::util::FlxRandom_obj::globalSeed;
				}
				return null();
			}
		};
		HX_STACK_LINE(78)
		index2 = ::Std_obj::_int((_Function_2_2::Block() * Objects->__Field(HX_CSTRING("length"),true)));
		HX_STACK_LINE(79)
		object = Objects->__GetItem(index2);
		HX_STACK_LINE(80)
		hx::IndexRef((Objects).mPtr,index2) = Objects->__GetItem(index1);
		HX_STACK_LINE(81)
		hx::IndexRef((Objects).mPtr,index1) = object;
		HX_STACK_LINE(82)
		(i)++;
	}
	HX_STACK_LINE(84)
	return Objects;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArray_obj,shuffle,return )

Dynamic FlxArray_obj::getRandom( Dynamic Objects,hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_PUSH("FlxArray::getRandom","org/flixel/util/FlxArray.hx",98);
	HX_STACK_ARG(Objects,"Objects");
	HX_STACK_ARG(StartIndex,"StartIndex");
	HX_STACK_ARG(Length,"Length");
{
		HX_STACK_LINE(99)
		if (((Objects != null()))){
			HX_STACK_LINE(101)
			if (((StartIndex < (int)0))){
				HX_STACK_LINE(101)
				StartIndex = (int)0;
			}
			HX_STACK_LINE(102)
			if (((Length < (int)0))){
				HX_STACK_LINE(102)
				Length = (int)0;
			}
			HX_STACK_LINE(104)
			int l = Length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(105)
			if (((bool((l == (int)0)) || bool((l > (Objects->__Field(HX_CSTRING("length"),true) - StartIndex)))))){
				HX_STACK_LINE(106)
				l = (Objects->__Field(HX_CSTRING("length"),true) - StartIndex);
			}
			HX_STACK_LINE(109)
			if (((l > (int)0))){
				struct _Function_3_1{
					inline static Float Block( ){
						HX_STACK_PUSH("*::closure","org/flixel/util/FlxArray.hx",111);
						{
							HX_STACK_LINE(111)
							::org::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
							HX_STACK_LINE(111)
							if (((::org::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
								HX_STACK_LINE(111)
								hx::AddEq(::org::flixel::util::FlxRandom_obj::globalSeed,(int)1);
							}
							HX_STACK_LINE(111)
							return ::org::flixel::util::FlxRandom_obj::globalSeed;
						}
						return null();
					}
				};
				HX_STACK_LINE(110)
				return Objects->__GetItem((StartIndex + ::Std_obj::_int((_Function_3_1::Block() * l))));
			}
		}
		HX_STACK_LINE(114)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArray_obj,getRandom,return )


FlxArray_obj::FlxArray_obj()
{
}

void FlxArray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxArray);
	HX_MARK_END_CLASS();
}

void FlxArray_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"shuffle") ) { return shuffle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxArray_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("indexOf"),
	HX_CSTRING("setLength"),
	HX_CSTRING("shuffle"),
	HX_CSTRING("getRandom"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxArray_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxArray_obj::__mClass,"__mClass");
};

Class FlxArray_obj::__mClass;

void FlxArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.util.FlxArray"), hx::TCanCast< FlxArray_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxArray_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace util
