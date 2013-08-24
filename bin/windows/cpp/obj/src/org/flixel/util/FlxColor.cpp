#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxColor
#include <org/flixel/util/FlxColor.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxMath
#include <org/flixel/util/FlxMath.h>
#endif
namespace org{
namespace flixel{
namespace util{

Void FlxColor_obj::__construct()
{
	return null();
}

FlxColor_obj::~FlxColor_obj() { }

Dynamic FlxColor_obj::__CreateEmpty() { return  new FlxColor_obj; }
hx::ObjectPtr< FlxColor_obj > FlxColor_obj::__new()
{  hx::ObjectPtr< FlxColor_obj > result = new FlxColor_obj();
	result->__construct();
	return result;}

Dynamic FlxColor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxColor_obj > result = new FlxColor_obj();
	result->__construct();
	return result;}

int FlxColor_obj::makeFromRGBA( int Red,int Green,int Blue,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1.0);
	HX_STACK_PUSH("FlxColor::makeFromRGBA","org/flixel/util/FlxColor.hx",228);
	HX_STACK_ARG(Red,"Red");
	HX_STACK_ARG(Green,"Green");
	HX_STACK_ARG(Blue,"Blue");
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(228)
		return (int((int((int((int(((int(::Std_obj::_int((  (((Alpha > (int)1))) ? Float(Alpha) : Float((Alpha * (int)255)) ))) & int((int)255)))) << int((int)24))) | int((int(((int(Red) & int((int)255)))) << int((int)16))))) | int((int(((int(Green) & int((int)255)))) << int((int)8))))) | int((int(Blue) & int((int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_obj,makeFromRGBA,return )

int FlxColor_obj::makeFromHSBA( Float Hue,Float Saturation,Float Brightness,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1.0);
	HX_STACK_PUSH("FlxColor::makeFromHSBA","org/flixel/util/FlxColor.hx",242);
	HX_STACK_ARG(Hue,"Hue");
	HX_STACK_ARG(Saturation,"Saturation");
	HX_STACK_ARG(Brightness,"Brightness");
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(243)
		Float red;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(244)
		Float green;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(245)
		Float blue;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(246)
		if (((Saturation == 0.0))){
			HX_STACK_LINE(248)
			red = Brightness;
			HX_STACK_LINE(249)
			green = Brightness;
			HX_STACK_LINE(250)
			blue = Brightness;
		}
		else{
			HX_STACK_LINE(254)
			if (((Hue == (int)360))){
				HX_STACK_LINE(255)
				Hue = (int)0;
			}
			HX_STACK_LINE(258)
			int slice = ::Std_obj::_int((Float(Hue) / Float((int)60)));		HX_STACK_VAR(slice,"slice");
			HX_STACK_LINE(259)
			Float hf = ((Float(Hue) / Float((int)60)) - slice);		HX_STACK_VAR(hf,"hf");
			HX_STACK_LINE(260)
			Float aa = (Brightness * (((int)1 - Saturation)));		HX_STACK_VAR(aa,"aa");
			HX_STACK_LINE(261)
			Float bb = (Brightness * (((int)1 - (Saturation * hf))));		HX_STACK_VAR(bb,"bb");
			HX_STACK_LINE(262)
			Float cc = (Brightness * (((int)1 - (Saturation * ((1.0 - hf))))));		HX_STACK_VAR(cc,"cc");
			HX_STACK_LINE(263)
			switch( (int)(slice)){
				case (int)0: {
					HX_STACK_LINE(266)
					red = Brightness;
					HX_STACK_LINE(267)
					green = cc;
					HX_STACK_LINE(268)
					blue = aa;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(270)
					red = bb;
					HX_STACK_LINE(271)
					green = Brightness;
					HX_STACK_LINE(272)
					blue = aa;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(274)
					red = aa;
					HX_STACK_LINE(275)
					green = Brightness;
					HX_STACK_LINE(276)
					blue = cc;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(278)
					red = aa;
					HX_STACK_LINE(279)
					green = bb;
					HX_STACK_LINE(280)
					blue = Brightness;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(282)
					red = cc;
					HX_STACK_LINE(283)
					green = aa;
					HX_STACK_LINE(284)
					blue = Brightness;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(286)
					red = Brightness;
					HX_STACK_LINE(287)
					green = aa;
					HX_STACK_LINE(288)
					blue = bb;
				}
				;break;
				default: {
					HX_STACK_LINE(290)
					red = (int)0;
					HX_STACK_LINE(291)
					green = (int)0;
					HX_STACK_LINE(292)
					blue = (int)0;
				}
			}
		}
		HX_STACK_LINE(296)
		return (int((int((int((int(((int(::Std_obj::_int((  (((Alpha > (int)1))) ? Float(Alpha) : Float((Alpha * (int)255)) ))) & int((int)255)))) << int((int)24))) | int((int(::Std_obj::_int((red * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((green * (int)255))) << int((int)8))))) | int(::Std_obj::_int((blue * (int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_obj,makeFromHSBA,return )

Dynamic FlxColor_obj::getRGBA( int Color,Dynamic Results){
	HX_STACK_PUSH("FlxColor::getRGBA","org/flixel/util/FlxColor.hx",307);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Results,"Results");
	HX_STACK_LINE(308)
	int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(309)
	int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(310)
	int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
	struct _Function_1_1{
		inline static Float Block( int &Color){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",311);
			{
				HX_STACK_LINE(311)
				Float num = ((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)) * ::Math_obj::pow((int)10,(int)4));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(311)
				return (Float(::Math_obj::round(num)) / Float(::Math_obj::pow((int)10,(int)4)));
			}
			return null();
		}
	};
	HX_STACK_LINE(311)
	Float alpha = _Function_1_1::Block(Color);		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(313)
	if (((Results != null()))){
		struct _Function_2_1{
			inline static Dynamic Block( Float &alpha,int &green,int &blue,int &red){
				HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",314);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("red") , red,false);
					__result->Add(HX_CSTRING("green") , green,false);
					__result->Add(HX_CSTRING("blue") , blue,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(314)
		Results = _Function_2_1::Block(alpha,green,blue,red);
	}
	struct _Function_1_2{
		inline static Dynamic Block( Float &alpha,int &green,int &blue,int &red){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",315);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("red") , red,false);
				__result->Add(HX_CSTRING("green") , green,false);
				__result->Add(HX_CSTRING("blue") , blue,false);
				__result->Add(HX_CSTRING("alpha") , alpha,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(315)
	return _Function_1_2::Block(alpha,green,blue,red);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_obj,getRGBA,return )

Dynamic FlxColor_obj::getHSBA( int Color,Dynamic Results){
	HX_STACK_PUSH("FlxColor::getHSBA","org/flixel/util/FlxColor.hx",327);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Results,"Results");
	HX_STACK_LINE(328)
	Float hue;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(329)
	Float saturation;		HX_STACK_VAR(saturation,"saturation");
	HX_STACK_LINE(330)
	Float brightness;		HX_STACK_VAR(brightness,"brightness");
	HX_STACK_LINE(331)
	Float alpha;		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(333)
	Float red = (Float(((int((int(Color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(334)
	Float green = (Float(((int((int(Color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(335)
	Float blue = (Float(((int(Color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(337)
	Float m = (  (((red > green))) ? Float(red) : Float(green) );		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(338)
	Float dmax = (  (((m > blue))) ? Float(m) : Float(blue) );		HX_STACK_VAR(dmax,"dmax");
	HX_STACK_LINE(339)
	m = (  (((red > green))) ? Float(green) : Float(red) );
	HX_STACK_LINE(340)
	Float dmin = (  (((m > blue))) ? Float(blue) : Float(m) );		HX_STACK_VAR(dmin,"dmin");
	HX_STACK_LINE(341)
	Float range = (dmax - dmin);		HX_STACK_VAR(range,"range");
	struct _Function_1_1{
		inline static Float Block( Float &dmax){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",343);
			{
				HX_STACK_LINE(343)
				Float num = (dmax * ::Math_obj::pow((int)10,(int)4));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(343)
				return (Float(::Math_obj::round(num)) / Float(::Math_obj::pow((int)10,(int)4)));
			}
			return null();
		}
	};
	HX_STACK_LINE(343)
	brightness = _Function_1_1::Block(dmax);
	HX_STACK_LINE(344)
	saturation = (int)0;
	HX_STACK_LINE(345)
	hue = (int)0;
	HX_STACK_LINE(347)
	if (((dmax != (int)0))){
		struct _Function_2_1{
			inline static Float Block( Float &range,Float &dmax){
				HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",349);
				{
					HX_STACK_LINE(349)
					Float num = ((Float(range) / Float(dmax)) * ::Math_obj::pow((int)10,(int)4));		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(349)
					return (Float(::Math_obj::round(num)) / Float(::Math_obj::pow((int)10,(int)4)));
				}
				return null();
			}
		};
		HX_STACK_LINE(348)
		saturation = _Function_2_1::Block(range,dmax);
	}
	HX_STACK_LINE(351)
	if (((saturation != (int)0))){
		HX_STACK_LINE(353)
		if (((red == dmax))){
			HX_STACK_LINE(354)
			hue = (Float(((green - blue))) / Float(range));
		}
		else{
			HX_STACK_LINE(357)
			if (((green == dmax))){
				HX_STACK_LINE(358)
				hue = ((int)2 + (Float(((blue - red))) / Float(range)));
			}
			else{
				HX_STACK_LINE(361)
				if (((blue == dmax))){
					HX_STACK_LINE(362)
					hue = ((int)4 + (Float(((red - green))) / Float(range)));
				}
			}
		}
		HX_STACK_LINE(365)
		hx::MultEq(hue,(int)60);
		HX_STACK_LINE(366)
		if (((hue < (int)0))){
			HX_STACK_LINE(367)
			hx::AddEq(hue,(int)360);
		}
	}
	struct _Function_1_2{
		inline static Float Block( int &Color){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",372);
			{
				HX_STACK_LINE(372)
				Float num = ((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)) * ::Math_obj::pow((int)10,(int)4));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(372)
				return (Float(::Math_obj::round(num)) / Float(::Math_obj::pow((int)10,(int)4)));
			}
			return null();
		}
	};
	HX_STACK_LINE(372)
	alpha = _Function_1_2::Block(Color);
	HX_STACK_LINE(374)
	if (((Results != null()))){
		struct _Function_2_1{
			inline static Dynamic Block( Float &brightness,Float &saturation,Float &alpha,Float &hue){
				HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",375);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("hue") , ::Std_obj::_int(hue),false);
					__result->Add(HX_CSTRING("brightness") , brightness,false);
					__result->Add(HX_CSTRING("saturation") , saturation,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(375)
		Results = _Function_2_1::Block(brightness,saturation,alpha,hue);
	}
	struct _Function_1_3{
		inline static Dynamic Block( Float &brightness,Float &saturation,Float &alpha,Float &hue){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",376);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("hue") , ::Std_obj::_int(hue),false);
				__result->Add(HX_CSTRING("brightness") , brightness,false);
				__result->Add(HX_CSTRING("saturation") , saturation,false);
				__result->Add(HX_CSTRING("alpha") , alpha,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(376)
	return _Function_1_3::Block(brightness,saturation,alpha,hue);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_obj,getHSBA,return )

int FlxColor_obj::getAlpha( int color){
	HX_STACK_PUSH("FlxColor::getAlpha","org/flixel/util/FlxColor.hx",387);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(387)
	return (int((int(color) >> int((int)24))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getAlpha,return )

Float FlxColor_obj::getAlphaFloat( int color){
	HX_STACK_PUSH("FlxColor::getAlphaFloat","org/flixel/util/FlxColor.hx",400);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(402)
	int f = (int((int(color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(403)
	return (Float(f) / Float((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getAlphaFloat,return )

int FlxColor_obj::getRed( int color){
	HX_STACK_PUSH("FlxColor::getRed","org/flixel/util/FlxColor.hx",414);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(414)
	return (int((int(color) >> int((int)16))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getRed,return )

int FlxColor_obj::getGreen( int color){
	HX_STACK_PUSH("FlxColor::getGreen","org/flixel/util/FlxColor.hx",426);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(426)
	return (int((int(color) >> int((int)8))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getGreen,return )

int FlxColor_obj::getBlue( int color){
	HX_STACK_PUSH("FlxColor::getBlue","org/flixel/util/FlxColor.hx",438);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(438)
	return (int(color) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getBlue,return )

int FlxColor_obj::getRandomColor( hx::Null< int >  __o_min,hx::Null< int >  __o_max,hx::Null< int >  __o_alpha){
int min = __o_min.Default(0);
int max = __o_max.Default(255);
int alpha = __o_alpha.Default(255);
	HX_STACK_PUSH("FlxColor::getRandomColor","org/flixel/util/FlxColor.hx",454);
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(456)
		if (((max > (int)255))){
			HX_STACK_LINE(458)
			::org::flixel::FlxG_obj::warn(HX_CSTRING("FlxColor: getRandomColor - max value too high"));
			HX_STACK_LINE(459)
			return (int)16777215;
		}
		HX_STACK_LINE(462)
		if (((min > max))){
			HX_STACK_LINE(464)
			::org::flixel::FlxG_obj::warn(HX_CSTRING("FlxColor: getRandomColor - min value higher than max"));
			HX_STACK_LINE(465)
			return (int)16777215;
		}
		HX_STACK_LINE(468)
		int red = (min + ::Std_obj::_int((::Math_obj::random() * ((max - min)))));		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(469)
		int green = (min + ::Std_obj::_int((::Math_obj::random() * ((max - min)))));		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(470)
		int blue = (min + ::Std_obj::_int((::Math_obj::random() * ((max - min)))));		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(472)
		return (int((int((int((int(alpha) << int((int)24))) | int((int(red) << int((int)16))))) | int((int(green) << int((int)8))))) | int(blue));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColor_obj,getRandomColor,return )

int FlxColor_obj::getColor32( int alpha,int red,int green,int blue){
	HX_STACK_PUSH("FlxColor::getColor32","org/flixel/util/FlxColor.hx",486);
	HX_STACK_ARG(alpha,"alpha");
	HX_STACK_ARG(red,"red");
	HX_STACK_ARG(green,"green");
	HX_STACK_ARG(blue,"blue");
	HX_STACK_LINE(486)
	return (int((int((int((int(alpha) << int((int)24))) | int((int(red) << int((int)16))))) | int((int(green) << int((int)8))))) | int(blue));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_obj,getColor32,return )

int FlxColor_obj::getColor24( int red,int green,int blue){
	HX_STACK_PUSH("FlxColor::getColor24","org/flixel/util/FlxColor.hx",500);
	HX_STACK_ARG(red,"red");
	HX_STACK_ARG(green,"green");
	HX_STACK_ARG(blue,"blue");
	HX_STACK_LINE(500)
	return (int((int((int(red) << int((int)16))) | int((int(green) << int((int)8))))) | int(blue));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColor_obj,getColor24,return )

Array< int > FlxColor_obj::getHSVColorWheel( hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_PUSH("FlxColor::getHSVColorWheel","org/flixel/util/FlxColor.hx",511);
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(512)
		Array< int > colors = Array_obj< int >::__new();		HX_STACK_VAR(colors,"colors");
		HX_STACK_LINE(514)
		{
			HX_STACK_LINE(514)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(514)
			while(((_g < (int)360))){
				HX_STACK_LINE(514)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(516)
				colors[c] = ::org::flixel::util::FlxColor_obj::HSVtoRGB(c,1.0,1.0,Alpha);
			}
		}
		HX_STACK_LINE(519)
		return colors;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getHSVColorWheel,return )

int FlxColor_obj::getComplementHarmony( int Color){
	HX_STACK_PUSH("FlxColor::getComplementHarmony","org/flixel/util/FlxColor.hx",531);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(532)
	Dynamic hsv = ::org::flixel::util::FlxColor_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
	HX_STACK_LINE(534)
	int opposite = ::org::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(int)180,(int)359);		HX_STACK_VAR(opposite,"opposite");
	HX_STACK_LINE(536)
	return ::org::flixel::util::FlxColor_obj::HSVtoRGB(opposite,1.0,1.0,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getComplementHarmony,return )

Dynamic FlxColor_obj::getAnalogousHarmony( int Color,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_PUSH("FlxColor::getAnalogousHarmony","org/flixel/util/FlxColor.hx",549);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Threshold,"Threshold");
{
		HX_STACK_LINE(550)
		Dynamic hsv = ::org::flixel::util::FlxColor_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
		HX_STACK_LINE(552)
		if (((bool((Threshold > (int)359)) || bool((Threshold < (int)0))))){
			HX_STACK_LINE(553)
			::org::flixel::FlxG_obj::warn(HX_CSTRING("FlxColor Warning: Invalid threshold given to getAnalogousHarmony()"));
		}
		HX_STACK_LINE(557)
		int warmer = ::org::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),((int)359 - Threshold),(int)359);		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(558)
		int colder = ::org::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),Threshold,(int)359);		HX_STACK_VAR(colder,"colder");
		struct _Function_1_1{
			inline static Dynamic Block( int &Color,Dynamic &hsv,int &warmer,int &colder){
				HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",560);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("color1") , Color,false);
					__result->Add(HX_CSTRING("color2") , ::org::flixel::util::FlxColor_obj::HSVtoRGB(warmer,1.0,1.0,null()),false);
					__result->Add(HX_CSTRING("color3") , ::org::flixel::util::FlxColor_obj::HSVtoRGB(colder,1.0,1.0,null()),false);
					__result->Add(HX_CSTRING("hue1") , ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),false);
					__result->Add(HX_CSTRING("hue2") , warmer,false);
					__result->Add(HX_CSTRING("hue3") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(560)
		return _Function_1_1::Block(Color,hsv,warmer,colder);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_obj,getAnalogousHarmony,return )

Dynamic FlxColor_obj::getSplitComplementHarmony( int Color,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_PUSH("FlxColor::getSplitComplementHarmony","org/flixel/util/FlxColor.hx",573);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Threshold,"Threshold");
{
		HX_STACK_LINE(574)
		Dynamic hsv = ::org::flixel::util::FlxColor_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
		HX_STACK_LINE(576)
		if (((bool((Threshold >= (int)359)) || bool((Threshold <= (int)0))))){
			HX_STACK_LINE(577)
			::org::flixel::FlxG_obj::warn(HX_CSTRING("FlxColor: Invalid threshold given to getSplitComplementHarmony()"));
		}
		HX_STACK_LINE(581)
		int opposite = ::org::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(int)180,(int)359);		HX_STACK_VAR(opposite,"opposite");
		HX_STACK_LINE(583)
		int warmer = ::org::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(opposite - Threshold),(int)359);		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(584)
		int colder = ::org::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(opposite + Threshold),(int)359);		HX_STACK_VAR(colder,"colder");
		HX_STACK_LINE(586)
		::org::flixel::FlxG_obj::notice((((((((HX_CSTRING("hue: ") + hsv->__Field(HX_CSTRING("hue"),true)) + HX_CSTRING(" opposite: ")) + opposite) + HX_CSTRING(" warmer: ")) + warmer) + HX_CSTRING(" colder: ")) + colder));
		struct _Function_1_1{
			inline static Dynamic Block( int &Color,Dynamic &hsv,int &warmer,int &colder){
				HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",590);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("color1") , Color,false);
					__result->Add(HX_CSTRING("color2") , ::org::flixel::util::FlxColor_obj::HSVtoRGB(warmer,hsv->__Field(HX_CSTRING("saturation"),true),hsv->__Field(HX_CSTRING("value"),true),null()),false);
					__result->Add(HX_CSTRING("color3") , ::org::flixel::util::FlxColor_obj::HSVtoRGB(colder,hsv->__Field(HX_CSTRING("saturation"),true),hsv->__Field(HX_CSTRING("value"),true),null()),false);
					__result->Add(HX_CSTRING("hue1") , ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),false);
					__result->Add(HX_CSTRING("hue2") , warmer,false);
					__result->Add(HX_CSTRING("hue3") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(590)
		return _Function_1_1::Block(Color,hsv,warmer,colder);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_obj,getSplitComplementHarmony,return )

Dynamic FlxColor_obj::getTriadicHarmony( int Color){
	HX_STACK_PUSH("FlxColor::getTriadicHarmony","org/flixel/util/FlxColor.hx",602);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(603)
	Dynamic hsv = ::org::flixel::util::FlxColor_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
	HX_STACK_LINE(605)
	int triadic1 = ::org::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(int)120,(int)359);		HX_STACK_VAR(triadic1,"triadic1");
	HX_STACK_LINE(606)
	int triadic2 = ::org::flixel::util::FlxMath_obj::wrapValue(triadic1,(int)120,(int)359);		HX_STACK_VAR(triadic2,"triadic2");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color,int &triadic2,int &triadic1){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",608);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color1") , Color,false);
				__result->Add(HX_CSTRING("color2") , ::org::flixel::util::FlxColor_obj::HSVtoRGB(triadic1,1.0,1.0,null()),false);
				__result->Add(HX_CSTRING("color3") , ::org::flixel::util::FlxColor_obj::HSVtoRGB(triadic2,1.0,1.0,null()),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(608)
	return _Function_1_1::Block(Color,triadic2,triadic1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getTriadicHarmony,return )

::String FlxColor_obj::getColorInfo( int Color){
	HX_STACK_PUSH("FlxColor::getColorInfo","org/flixel/util/FlxColor.hx",619);
	HX_STACK_ARG(Color,"Color");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",620);
			{
				HX_STACK_LINE(620)
				int alpha = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(620)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(620)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(620)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				struct _Function_2_1{
					inline static Dynamic Block( int &alpha,int &green,int &blue,int &red){
						HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",620);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(620)
				return _Function_2_1::Block(alpha,green,blue,red);
			}
			return null();
		}
	};
	HX_STACK_LINE(620)
	Dynamic argb = _Function_1_1::Block(Color);		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(621)
	Dynamic hsl = ::org::flixel::util::FlxColor_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsl,"hsl");
	struct _Function_1_2{
		inline static ::String Block( int &Color){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",624);
			{
				struct _Function_2_1{
					inline static Dynamic Block( int &Color){
						HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",624);
						{
							HX_STACK_LINE(624)
							int alpha = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(alpha,"alpha");
							HX_STACK_LINE(624)
							int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
							HX_STACK_LINE(624)
							int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
							HX_STACK_LINE(624)
							int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
							struct _Function_3_1{
								inline static Dynamic Block( int &alpha,int &green,int &blue,int &red){
									HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",624);
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("alpha") , alpha,false);
										__result->Add(HX_CSTRING("red") , red,false);
										__result->Add(HX_CSTRING("green") , green,false);
										__result->Add(HX_CSTRING("blue") , blue,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(624)
							return _Function_3_1::Block(alpha,green,blue,red);
						}
						return null();
					}
				};
				HX_STACK_LINE(624)
				Dynamic argb1 = _Function_2_1::Block(Color);		HX_STACK_VAR(argb1,"argb1");
				struct _Function_2_2{
					inline static ::String Block( Dynamic &argb1){
						HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",624);
						{
							HX_STACK_LINE(624)
							int Color1 = ::Std_obj::_int(argb1->__Field(HX_CSTRING("alpha"),true));		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(624)
							::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
							HX_STACK_LINE(624)
							Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
							HX_STACK_LINE(624)
							Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
							HX_STACK_LINE(624)
							return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static ::String Block( Dynamic &argb1){
						HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",624);
						{
							HX_STACK_LINE(624)
							int Color1 = argb1->__Field(HX_CSTRING("red"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(624)
							::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
							HX_STACK_LINE(624)
							Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
							HX_STACK_LINE(624)
							Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
							HX_STACK_LINE(624)
							return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
						}
						return null();
					}
				};
				struct _Function_2_4{
					inline static ::String Block( Dynamic &argb1){
						HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",624);
						{
							HX_STACK_LINE(624)
							int Color1 = argb1->__Field(HX_CSTRING("green"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(624)
							::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
							HX_STACK_LINE(624)
							Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
							HX_STACK_LINE(624)
							Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
							HX_STACK_LINE(624)
							return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
						}
						return null();
					}
				};
				struct _Function_2_5{
					inline static ::String Block( Dynamic &argb1){
						HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",624);
						{
							HX_STACK_LINE(624)
							int Color1 = argb1->__Field(HX_CSTRING("blue"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(624)
							::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
							HX_STACK_LINE(624)
							Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
							HX_STACK_LINE(624)
							Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
							HX_STACK_LINE(624)
							return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
						}
						return null();
					}
				};
				HX_STACK_LINE(624)
				return ((((HX_CSTRING("0x") + _Function_2_2::Block(argb1)) + _Function_2_3::Block(argb1)) + _Function_2_4::Block(argb1)) + _Function_2_5::Block(argb1));
			}
			return null();
		}
	};
	HX_STACK_LINE(624)
	::String result = (_Function_1_2::Block(Color) + HX_CSTRING("\n"));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(627)
	hx::AddEq(result,((((((((HX_CSTRING("Alpha: ") + argb->__Field(HX_CSTRING("alpha"),true)) + HX_CSTRING(" Red: ")) + argb->__Field(HX_CSTRING("red"),true)) + HX_CSTRING(" Green: ")) + argb->__Field(HX_CSTRING("green"),true)) + HX_CSTRING(" Blue: ")) + argb->__Field(HX_CSTRING("blue"),true)) + HX_CSTRING("\n")));
	HX_STACK_LINE(630)
	hx::AddEq(result,(((((HX_CSTRING("Hue: ") + hsl->__Field(HX_CSTRING("hue"),true)) + HX_CSTRING(" Saturation: ")) + hsl->__Field(HX_CSTRING("saturation"),true)) + HX_CSTRING(" Lightnes: ")) + hsl->__Field(HX_CSTRING("lightness"),true)));
	HX_STACK_LINE(632)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getColorInfo,return )

::String FlxColor_obj::RGBtoHexString( int Color){
	HX_STACK_PUSH("FlxColor::RGBtoHexString","org/flixel/util/FlxColor.hx",642);
	HX_STACK_ARG(Color,"Color");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",643);
			{
				HX_STACK_LINE(643)
				int alpha = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(643)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(643)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(643)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				struct _Function_2_1{
					inline static Dynamic Block( int &alpha,int &green,int &blue,int &red){
						HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",643);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(643)
				return _Function_2_1::Block(alpha,green,blue,red);
			}
			return null();
		}
	};
	HX_STACK_LINE(643)
	Dynamic argb = _Function_1_1::Block(Color);		HX_STACK_VAR(argb,"argb");
	struct _Function_1_2{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",645);
			{
				HX_STACK_LINE(645)
				int Color1 = ::Std_obj::_int(argb->__Field(HX_CSTRING("alpha"),true));		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(645)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(645)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(645)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(645)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",645);
			{
				HX_STACK_LINE(645)
				int Color1 = argb->__Field(HX_CSTRING("red"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(645)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(645)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(645)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(645)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",645);
			{
				HX_STACK_LINE(645)
				int Color1 = argb->__Field(HX_CSTRING("green"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(645)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(645)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(645)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(645)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",645);
			{
				HX_STACK_LINE(645)
				int Color1 = argb->__Field(HX_CSTRING("blue"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(645)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(645)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(645)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(645)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	HX_STACK_LINE(645)
	return ((((HX_CSTRING("0x") + _Function_1_2::Block(argb)) + _Function_1_3::Block(argb)) + _Function_1_4::Block(argb)) + _Function_1_5::Block(argb));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,RGBtoHexString,return )

::String FlxColor_obj::RGBtoWebString( int Color){
	HX_STACK_PUSH("FlxColor::RGBtoWebString","org/flixel/util/FlxColor.hx",655);
	HX_STACK_ARG(Color,"Color");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",656);
			{
				HX_STACK_LINE(656)
				int alpha = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(656)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(656)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(656)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				struct _Function_2_1{
					inline static Dynamic Block( int &alpha,int &green,int &blue,int &red){
						HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",656);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(656)
				return _Function_2_1::Block(alpha,green,blue,red);
			}
			return null();
		}
	};
	HX_STACK_LINE(656)
	Dynamic argb = _Function_1_1::Block(Color);		HX_STACK_VAR(argb,"argb");
	struct _Function_1_2{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",658);
			{
				HX_STACK_LINE(658)
				int Color1 = argb->__Field(HX_CSTRING("red"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(658)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(658)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(658)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(658)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",658);
			{
				HX_STACK_LINE(658)
				int Color1 = argb->__Field(HX_CSTRING("green"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(658)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(658)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(658)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(658)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",658);
			{
				HX_STACK_LINE(658)
				int Color1 = argb->__Field(HX_CSTRING("blue"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(658)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(658)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(658)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(658)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	HX_STACK_LINE(658)
	return (((HX_CSTRING("#") + _Function_1_2::Block(argb)) + _Function_1_3::Block(argb)) + _Function_1_4::Block(argb));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,RGBtoWebString,return )

::String FlxColor_obj::colorToHexString( int Color){
	HX_STACK_PUSH("FlxColor::colorToHexString","org/flixel/util/FlxColor.hx",668);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(669)
	::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
	HX_STACK_LINE(671)
	Float lsd = hx::Mod(Color,(int)16);		HX_STACK_VAR(lsd,"lsd");
	HX_STACK_LINE(672)
	Float msd = (Float(((Color - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
	HX_STACK_LINE(674)
	return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,colorToHexString,return )

int FlxColor_obj::HSVtoRGB( Float H,Float S,Float V,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_PUSH("FlxColor::HSVtoRGB","org/flixel/util/FlxColor.hx",687);
	HX_STACK_ARG(H,"H");
	HX_STACK_ARG(S,"S");
	HX_STACK_ARG(V,"V");
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(688)
		int result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(690)
		if (((S == 0.0))){
			HX_STACK_LINE(691)
			result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)8))))) | int(::Std_obj::_int((V * (int)255))));
		}
		else{
			HX_STACK_LINE(696)
			H = (Float(H) / Float(60.0));
			HX_STACK_LINE(697)
			Float f = (H - ::Std_obj::_int(H));		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(698)
			Float p = (V * ((1.0 - S)));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(699)
			Float q = (V * ((1.0 - (S * f))));		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(700)
			Float t = (V * ((1.0 - (S * ((1.0 - f))))));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(702)
			{
				HX_STACK_LINE(702)
				int _g = ::Std_obj::_int(H);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(702)
				switch( (int)(_g)){
					case (int)0: {
						HX_STACK_LINE(704)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((t * (int)255))) << int((int)8))))) | int(::Std_obj::_int((p * (int)255))));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(706)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((q * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)8))))) | int(::Std_obj::_int((p * (int)255))));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(708)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)8))))) | int(::Std_obj::_int((t * (int)255))));
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(710)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((q * (int)255))) << int((int)8))))) | int(::Std_obj::_int((V * (int)255))));
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(712)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((t * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)8))))) | int(::Std_obj::_int((V * (int)255))));
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(714)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)8))))) | int(::Std_obj::_int((q * (int)255))));
					}
					;break;
					default: {
						HX_STACK_LINE(716)
						::org::flixel::FlxG_obj::warn(HX_CSTRING("FlxColor: HSVtoRGB: Unknown color"));
					}
				}
			}
		}
		HX_STACK_LINE(721)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_obj,HSVtoRGB,return )

Dynamic FlxColor_obj::RGBtoHSV( int Color){
	HX_STACK_PUSH("FlxColor::RGBtoHSV","org/flixel/util/FlxColor.hx",731);
	HX_STACK_ARG(Color,"Color");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",732);
			{
				HX_STACK_LINE(732)
				int alpha = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(732)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(732)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(732)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				struct _Function_2_1{
					inline static Dynamic Block( int &alpha,int &green,int &blue,int &red){
						HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",732);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(732)
				return _Function_2_1::Block(alpha,green,blue,red);
			}
			return null();
		}
	};
	HX_STACK_LINE(732)
	Dynamic rgb = _Function_1_1::Block(Color);		HX_STACK_VAR(rgb,"rgb");
	HX_STACK_LINE(734)
	Float red = (Float(rgb->__Field(HX_CSTRING("red"),true)) / Float((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(735)
	Float green = (Float(rgb->__Field(HX_CSTRING("green"),true)) / Float((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(736)
	Float blue = (Float(rgb->__Field(HX_CSTRING("blue"),true)) / Float((int)255));		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(738)
	Float min = ::Math_obj::min(red,::Math_obj::min(green,blue));		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(739)
	Float max = ::Math_obj::max(red,::Math_obj::max(green,blue));		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(740)
	Float delta = (max - min);		HX_STACK_VAR(delta,"delta");
	HX_STACK_LINE(741)
	Float lightness = (Float(((max + min))) / Float((int)2));		HX_STACK_VAR(lightness,"lightness");
	HX_STACK_LINE(742)
	Float hue = (int)0;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(743)
	Float saturation;		HX_STACK_VAR(saturation,"saturation");
	HX_STACK_LINE(746)
	if (((delta == (int)0))){
		HX_STACK_LINE(748)
		hue = (int)0;
		HX_STACK_LINE(749)
		saturation = (int)0;
	}
	else{
		HX_STACK_LINE(753)
		if (((lightness < 0.5))){
			HX_STACK_LINE(754)
			saturation = (Float(delta) / Float(((max + min))));
		}
		else{
			HX_STACK_LINE(758)
			saturation = (Float(delta) / Float(((((int)2 - max) - min))));
		}
		HX_STACK_LINE(762)
		Float delta_r = (Float((((Float(((max - red))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_r,"delta_r");
		HX_STACK_LINE(763)
		Float delta_g = (Float((((Float(((max - green))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_g,"delta_g");
		HX_STACK_LINE(764)
		Float delta_b = (Float((((Float(((max - blue))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_b,"delta_b");
		HX_STACK_LINE(766)
		if (((red == max))){
			HX_STACK_LINE(767)
			hue = (delta_b - delta_g);
		}
		else{
			HX_STACK_LINE(770)
			if (((green == max))){
				HX_STACK_LINE(771)
				hue = (((Float((int)1) / Float((int)3)) + delta_r) - delta_b);
			}
			else{
				HX_STACK_LINE(774)
				if (((blue == max))){
					HX_STACK_LINE(775)
					hue = (((Float((int)2) / Float((int)3)) + delta_g) - delta_r);
				}
			}
		}
		HX_STACK_LINE(779)
		if (((hue < (int)0))){
			HX_STACK_LINE(780)
			hx::AddEq(hue,(int)1);
		}
		HX_STACK_LINE(784)
		if (((hue > (int)1))){
			HX_STACK_LINE(785)
			hx::SubEq(hue,(int)1);
		}
	}
	HX_STACK_LINE(791)
	hx::MultEq(hue,(int)360);
	HX_STACK_LINE(792)
	hue = ::Math_obj::round(hue);
	struct _Function_1_2{
		inline static Dynamic Block( Float &saturation,Float &lightness,Float &hue){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",798);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("hue") , hue,false);
				__result->Add(HX_CSTRING("saturation") , saturation,false);
				__result->Add(HX_CSTRING("lightness") , lightness,false);
				__result->Add(HX_CSTRING("value") , lightness,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(798)
	return _Function_1_2::Block(saturation,lightness,hue);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,RGBtoHSV,return )

int FlxColor_obj::interpolateColor( int Color1,int Color2,int Steps,int CurrentStep,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_PUSH("FlxColor::interpolateColor","org/flixel/util/FlxColor.hx",802);
	HX_STACK_ARG(Color1,"Color1");
	HX_STACK_ARG(Color2,"Color2");
	HX_STACK_ARG(Steps,"Steps");
	HX_STACK_ARG(CurrentStep,"CurrentStep");
	HX_STACK_ARG(Alpha,"Alpha");
{
		struct _Function_1_1{
			inline static Dynamic Block( int &Color1){
				HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",803);
				{
					HX_STACK_LINE(803)
					int alpha = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(803)
					int red = (int((int(Color1) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
					HX_STACK_LINE(803)
					int green = (int((int(Color1) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
					HX_STACK_LINE(803)
					int blue = (int(Color1) & int((int)255));		HX_STACK_VAR(blue,"blue");
					struct _Function_2_1{
						inline static Dynamic Block( int &alpha,int &green,int &blue,int &red){
							HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",803);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(803)
					return _Function_2_1::Block(alpha,green,blue,red);
				}
				return null();
			}
		};
		HX_STACK_LINE(803)
		Dynamic src1 = _Function_1_1::Block(Color1);		HX_STACK_VAR(src1,"src1");
		struct _Function_1_2{
			inline static Dynamic Block( int &Color2){
				HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",804);
				{
					HX_STACK_LINE(804)
					int alpha = (int((int(Color2) >> int((int)24))) & int((int)255));		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(804)
					int red = (int((int(Color2) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
					HX_STACK_LINE(804)
					int green = (int((int(Color2) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
					HX_STACK_LINE(804)
					int blue = (int(Color2) & int((int)255));		HX_STACK_VAR(blue,"blue");
					struct _Function_2_1{
						inline static Dynamic Block( int &alpha,int &green,int &blue,int &red){
							HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",804);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(804)
					return _Function_2_1::Block(alpha,green,blue,red);
				}
				return null();
			}
		};
		HX_STACK_LINE(804)
		Dynamic src2 = _Function_1_2::Block(Color2);		HX_STACK_VAR(src2,"src2");
		HX_STACK_LINE(806)
		int r = ::Std_obj::_int(((Float((((src2->__Field(HX_CSTRING("red"),true) - src1->__Field(HX_CSTRING("red"),true))) * CurrentStep)) / Float(Steps)) + src1->__Field(HX_CSTRING("red"),true)));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(807)
		int g = ::Std_obj::_int(((Float((((src2->__Field(HX_CSTRING("green"),true) - src1->__Field(HX_CSTRING("green"),true))) * CurrentStep)) / Float(Steps)) + src1->__Field(HX_CSTRING("green"),true)));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(808)
		int b = ::Std_obj::_int(((Float((((src2->__Field(HX_CSTRING("blue"),true) - src1->__Field(HX_CSTRING("blue"),true))) * CurrentStep)) / Float(Steps)) + src1->__Field(HX_CSTRING("blue"),true)));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(810)
		return (int((int((int((int(Alpha) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_obj,interpolateColor,return )

int FlxColor_obj::interpolateColorWithRGB( int Color,int R2,int G2,int B2,int Steps,int CurrentStep){
	HX_STACK_PUSH("FlxColor::interpolateColorWithRGB","org/flixel/util/FlxColor.hx",814);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(R2,"R2");
	HX_STACK_ARG(G2,"G2");
	HX_STACK_ARG(B2,"B2");
	HX_STACK_ARG(Steps,"Steps");
	HX_STACK_ARG(CurrentStep,"CurrentStep");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",815);
			{
				HX_STACK_LINE(815)
				int alpha = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(815)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(815)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(815)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				struct _Function_2_1{
					inline static Dynamic Block( int &alpha,int &green,int &blue,int &red){
						HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",815);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(815)
				return _Function_2_1::Block(alpha,green,blue,red);
			}
			return null();
		}
	};
	HX_STACK_LINE(815)
	Dynamic src = _Function_1_1::Block(Color);		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(817)
	int r = ::Std_obj::_int(((Float((((R2 - src->__Field(HX_CSTRING("red"),true))) * CurrentStep)) / Float(Steps)) + src->__Field(HX_CSTRING("red"),true)));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(818)
	int g = ::Std_obj::_int(((Float((((G2 - src->__Field(HX_CSTRING("green"),true))) * CurrentStep)) / Float(Steps)) + src->__Field(HX_CSTRING("green"),true)));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(819)
	int b = ::Std_obj::_int(((Float((((B2 - src->__Field(HX_CSTRING("blue"),true))) * CurrentStep)) / Float(Steps)) + src->__Field(HX_CSTRING("blue"),true)));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(821)
	return (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColor_obj,interpolateColorWithRGB,return )

int FlxColor_obj::interpolateRGB( int R1,int G1,int B1,int R2,int G2,int B2,int Steps,int CurrentStep){
	HX_STACK_PUSH("FlxColor::interpolateRGB","org/flixel/util/FlxColor.hx",825);
	HX_STACK_ARG(R1,"R1");
	HX_STACK_ARG(G1,"G1");
	HX_STACK_ARG(B1,"B1");
	HX_STACK_ARG(R2,"R2");
	HX_STACK_ARG(G2,"G2");
	HX_STACK_ARG(B2,"B2");
	HX_STACK_ARG(Steps,"Steps");
	HX_STACK_ARG(CurrentStep,"CurrentStep");
	HX_STACK_LINE(826)
	int r = ::Std_obj::_int(((Float((((R2 - R1)) * CurrentStep)) / Float(Steps)) + R1));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(827)
	int g = ::Std_obj::_int(((Float((((G2 - G1)) * CurrentStep)) / Float(Steps)) + G1));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(828)
	int b = ::Std_obj::_int(((Float((((B2 - B1)) * CurrentStep)) / Float(Steps)) + B1));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(830)
	return (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxColor_obj,interpolateRGB,return )

Dynamic FlxColor_obj::getRGB( int Color){
	HX_STACK_PUSH("FlxColor::getRGB","org/flixel/util/FlxColor.hx",841);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(843)
	int alpha = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(844)
	int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(845)
	int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(846)
	int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
	struct _Function_1_1{
		inline static Dynamic Block( int &alpha,int &green,int &blue,int &red){
			HX_STACK_PUSH("*::closure","org/flixel/util/FlxColor.hx",848);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("alpha") , alpha,false);
				__result->Add(HX_CSTRING("red") , red,false);
				__result->Add(HX_CSTRING("green") , green,false);
				__result->Add(HX_CSTRING("blue") , blue,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(848)
	return _Function_1_1::Block(alpha,green,blue,red);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getRGB,return )


FlxColor_obj::FlxColor_obj()
{
}

void FlxColor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxColor);
	HX_MARK_END_CLASS();
}

void FlxColor_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxColor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getRed") ) { return getRed_dyn(); }
		if (HX_FIELD_EQ(inName,"getRGB") ) { return getRGB_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getRGBA") ) { return getRGBA_dyn(); }
		if (HX_FIELD_EQ(inName,"getHSBA") ) { return getHSBA_dyn(); }
		if (HX_FIELD_EQ(inName,"getBlue") ) { return getBlue_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAlpha") ) { return getAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"getGreen") ) { return getGreen_dyn(); }
		if (HX_FIELD_EQ(inName,"HSVtoRGB") ) { return HSVtoRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"RGBtoHSV") ) { return RGBtoHSV_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getColor32") ) { return getColor32_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor24") ) { return getColor24_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"makeFromRGBA") ) { return makeFromRGBA_dyn(); }
		if (HX_FIELD_EQ(inName,"makeFromHSBA") ) { return makeFromHSBA_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorInfo") ) { return getColorInfo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getAlphaFloat") ) { return getAlphaFloat_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getRandomColor") ) { return getRandomColor_dyn(); }
		if (HX_FIELD_EQ(inName,"RGBtoHexString") ) { return RGBtoHexString_dyn(); }
		if (HX_FIELD_EQ(inName,"RGBtoWebString") ) { return RGBtoWebString_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateRGB") ) { return interpolateRGB_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getHSVColorWheel") ) { return getHSVColorWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"colorToHexString") ) { return colorToHexString_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateColor") ) { return interpolateColor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTriadicHarmony") ) { return getTriadicHarmony_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAnalogousHarmony") ) { return getAnalogousHarmony_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getComplementHarmony") ) { return getComplementHarmony_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"interpolateColorWithRGB") ) { return interpolateColorWithRGB_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getSplitComplementHarmony") ) { return getSplitComplementHarmony_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxColor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxColor_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("makeFromRGBA"),
	HX_CSTRING("makeFromHSBA"),
	HX_CSTRING("getRGBA"),
	HX_CSTRING("getHSBA"),
	HX_CSTRING("getAlpha"),
	HX_CSTRING("getAlphaFloat"),
	HX_CSTRING("getRed"),
	HX_CSTRING("getGreen"),
	HX_CSTRING("getBlue"),
	HX_CSTRING("getRandomColor"),
	HX_CSTRING("getColor32"),
	HX_CSTRING("getColor24"),
	HX_CSTRING("getHSVColorWheel"),
	HX_CSTRING("getComplementHarmony"),
	HX_CSTRING("getAnalogousHarmony"),
	HX_CSTRING("getSplitComplementHarmony"),
	HX_CSTRING("getTriadicHarmony"),
	HX_CSTRING("getColorInfo"),
	HX_CSTRING("RGBtoHexString"),
	HX_CSTRING("RGBtoWebString"),
	HX_CSTRING("colorToHexString"),
	HX_CSTRING("HSVtoRGB"),
	HX_CSTRING("RGBtoHSV"),
	HX_CSTRING("interpolateColor"),
	HX_CSTRING("interpolateColorWithRGB"),
	HX_CSTRING("interpolateRGB"),
	HX_CSTRING("getRGB"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColor_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColor_obj::__mClass,"__mClass");
};

Class FlxColor_obj::__mClass;

void FlxColor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.util.FlxColor"), hx::TCanCast< FlxColor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxColor_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace util
