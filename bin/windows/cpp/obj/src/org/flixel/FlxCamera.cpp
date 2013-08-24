#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_geom_Transform
#include <flash/geom/Transform.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
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
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_DrawStackItem
#include <org/flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#include <org/flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetExt
#include <org/flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRandom
#include <org/flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRect
#include <org/flixel/util/FlxRect.h>
#endif
namespace org{
namespace flixel{

Void FlxCamera_obj::__construct(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom)
{
HX_STACK_PUSH("FlxCamera::new","org/flixel/FlxCamera.hx",409);
Float Zoom = __o_Zoom.Default(0);
{
	HX_STACK_LINE(410)
	super::__construct();
	HX_STACK_LINE(412)
	this->_scrollTarget = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(414)
	this->x = X;
	HX_STACK_LINE(415)
	this->y = Y;
	HX_STACK_LINE(416)
	this->set_width(Width);
	HX_STACK_LINE(417)
	this->set_height(Height);
	HX_STACK_LINE(418)
	this->target = null();
	HX_STACK_LINE(419)
	this->deadzone = null();
	HX_STACK_LINE(420)
	this->scroll = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(421)
	this->_point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(422)
	this->bounds = null();
	HX_STACK_LINE(429)
	this->bgColor = ::org::flixel::FlxG_obj::get_bgColor();
	HX_STACK_LINE(436)
	this->_canvas = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(437)
	this->_canvas->set_x((-(this->width) * 0.5));
	HX_STACK_LINE(438)
	this->_canvas->set_y((-(this->height) * 0.5));
	HX_STACK_LINE(444)
	this->set_color((int)-1);
	HX_STACK_LINE(447)
	this->_flashSprite = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(448)
	this->set_zoom(Zoom);
	HX_STACK_LINE(450)
	this->_flashOffsetX = ((this->width * 0.5) * this->zoom);
	HX_STACK_LINE(451)
	this->_flashOffsetY = ((this->height * 0.5) * this->zoom);
	HX_STACK_LINE(453)
	this->_flashSprite->set_x((this->x + this->_flashOffsetX));
	HX_STACK_LINE(454)
	this->_flashSprite->set_y((this->y + this->_flashOffsetY));
	HX_STACK_LINE(459)
	this->_flashSprite->addChild(this->_canvas);
	HX_STACK_LINE(461)
	this->_flashRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);
	HX_STACK_LINE(462)
	this->_flashPoint = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(464)
	this->_fxFlashColor = (int)0;
	HX_STACK_LINE(465)
	this->_fxFlashDuration = 0.0;
	HX_STACK_LINE(466)
	this->_fxFlashComplete = null();
	HX_STACK_LINE(467)
	this->_fxFlashAlpha = 0.0;
	HX_STACK_LINE(469)
	this->_fxFadeColor = (int)0;
	HX_STACK_LINE(470)
	this->_fxFadeDuration = 0.0;
	HX_STACK_LINE(471)
	this->_fxFadeComplete = null();
	HX_STACK_LINE(472)
	this->_fxFadeAlpha = 0.0;
	HX_STACK_LINE(474)
	this->_fxShakeIntensity = 0.0;
	HX_STACK_LINE(475)
	this->_fxShakeDuration = 0.0;
	HX_STACK_LINE(476)
	this->_fxShakeComplete = null();
	HX_STACK_LINE(477)
	this->_fxShakeOffset = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(478)
	this->_fxShakeDirection = (int)0;
	HX_STACK_LINE(485)
	this->_canvas->set_scrollRect(::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height));
	HX_STACK_LINE(490)
	this->_debugLayer = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(491)
	this->_debugLayer->set_x((-(this->width) * 0.5));
	HX_STACK_LINE(492)
	this->_debugLayer->set_y((-(this->height) * 0.5));
	HX_STACK_LINE(493)
	this->_debugLayer->set_scaleX((int)1);
	HX_STACK_LINE(494)
	this->_flashSprite->addChild(this->_debugLayer);
	HX_STACK_LINE(496)
	this->_currentStackItem = ::org::flixel::system::layer::DrawStackItem_obj::__new();
	HX_STACK_LINE(497)
	this->_headOfDrawStack = this->_currentStackItem;
	HX_STACK_LINE(500)
	this->_fxFadeIn = false;
	HX_STACK_LINE(502)
	this->set_alpha(1.0);
	HX_STACK_LINE(503)
	this->set_angle(0.0);
	HX_STACK_LINE(504)
	this->set_antialiasing(false);
}
;
	return null();
}

FlxCamera_obj::~FlxCamera_obj() { }

Dynamic FlxCamera_obj::__CreateEmpty() { return  new FlxCamera_obj; }
hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__new(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(X,Y,Width,Height,__o_Zoom);
	return result;}

Dynamic FlxCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

int FlxCamera_obj::set_height( int val){
	HX_STACK_PUSH("FlxCamera::set_height","org/flixel/FlxCamera.hx",1195);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(1196)
	if (((val > (int)0))){
		HX_STACK_LINE(1198)
		this->height = val;
		HX_STACK_LINE(1206)
		if (((this->_canvas != null()))){
			HX_STACK_LINE(1208)
			::flash::geom::Rectangle rect = this->_canvas->get_scrollRect();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1210)
			rect->height = val;
			HX_STACK_LINE(1214)
			this->_canvas->set_scrollRect(rect);
			HX_STACK_LINE(1216)
			this->_flashOffsetY = ((this->height * 0.5) * this->zoom);
			HX_STACK_LINE(1217)
			this->_debugLayer->set_y(this->_canvas->set_y((-(this->height) * 0.5)));
		}
	}
	HX_STACK_LINE(1221)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_height,return )

int FlxCamera_obj::set_width( int val){
	HX_STACK_PUSH("FlxCamera::set_width","org/flixel/FlxCamera.hx",1165);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(1166)
	if (((val > (int)0))){
		HX_STACK_LINE(1168)
		this->width = val;
		HX_STACK_LINE(1176)
		if (((this->_canvas != null()))){
			HX_STACK_LINE(1178)
			::flash::geom::Rectangle rect = this->_canvas->get_scrollRect();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1180)
			rect->width = val;
			HX_STACK_LINE(1184)
			this->_canvas->set_scrollRect(rect);
			HX_STACK_LINE(1186)
			this->_flashOffsetX = ((this->width * 0.5) * this->zoom);
			HX_STACK_LINE(1187)
			this->_debugLayer->set_x(this->_canvas->set_x((-(this->width) * 0.5)));
		}
	}
	HX_STACK_LINE(1191)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_width,return )

Void FlxCamera_obj::drawFX( ){
{
		HX_STACK_PUSH("FlxCamera::drawFX","org/flixel/FlxCamera.hx",1130);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1131)
		Float alphaComponent;		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(1134)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(1136)
			alphaComponent = (int((int(this->_fxFlashColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1141)
			this->fill((int(this->_fxFlashColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFlashAlpha)) / Float((int)255)),this->_canvas->get_graphics());
		}
		HX_STACK_LINE(1146)
		if (((this->_fxFadeAlpha > 0.0))){
			HX_STACK_LINE(1148)
			alphaComponent = (int((int(this->_fxFadeColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1153)
			this->fill((int(this->_fxFadeColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFadeAlpha)) / Float((int)255)),this->_canvas->get_graphics());
		}
		HX_STACK_LINE(1157)
		if (((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0))))){
			HX_STACK_LINE(1159)
			{
				HX_STACK_LINE(1159)
				::flash::display::Sprite _g = this->_flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1159)
				_g->set_x((_g->get_x() + this->_fxShakeOffset->x));
			}
			HX_STACK_LINE(1160)
			{
				HX_STACK_LINE(1160)
				::flash::display::Sprite _g = this->_flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1160)
				_g->set_y((_g->get_y() + this->_fxShakeOffset->y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,drawFX,(void))

Void FlxCamera_obj::fill( int Color,hx::Null< bool >  __o_BlendAlpha,hx::Null< Float >  __o_FxAlpha,::flash::display::Graphics graphics){
bool BlendAlpha = __o_BlendAlpha.Default(true);
Float FxAlpha = __o_FxAlpha.Default(1.0);
	HX_STACK_PUSH("FlxCamera::fill","org/flixel/FlxCamera.hx",1109);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(BlendAlpha,"BlendAlpha");
	HX_STACK_ARG(FxAlpha,"FxAlpha");
	HX_STACK_ARG(graphics,"graphics");
{
		HX_STACK_LINE(1116)
		::flash::display::Graphics targetGraphics = (  (((graphics == null()))) ? ::flash::display::Graphics(this->_canvas->get_graphics()) : ::flash::display::Graphics(graphics) );		HX_STACK_VAR(targetGraphics,"targetGraphics");
		HX_STACK_LINE(1117)
		Color = (int(Color) & int((int)16777215));
		HX_STACK_LINE(1120)
		targetGraphics->beginFill(Color,FxAlpha);
		HX_STACK_LINE(1121)
		targetGraphics->drawRect((int)0,(int)0,this->width,this->height);
		HX_STACK_LINE(1122)
		targetGraphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,fill,(void))

::flash::display::Sprite FlxCamera_obj::getContainerSprite( ){
	HX_STACK_PUSH("FlxCamera::getContainerSprite","org/flixel/FlxCamera.hx",1099);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1099)
	return this->_flashSprite;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,getContainerSprite,return )

Void FlxCamera_obj::setScale( Float X,Float Y){
{
		HX_STACK_PUSH("FlxCamera::setScale","org/flixel/FlxCamera.hx",1079);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(1080)
		this->_flashSprite->set_scaleX(X);
		HX_STACK_LINE(1081)
		this->_flashSprite->set_scaleY(Y);
		HX_STACK_LINE(1084)
		this->_flashOffsetX = ((this->width * 0.5) * X);
		HX_STACK_LINE(1085)
		this->_flashOffsetY = ((this->height * 0.5) * Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setScale,(void))

::org::flixel::util::FlxPoint FlxCamera_obj::getScale( ){
	HX_STACK_PUSH("FlxCamera::getScale","org/flixel/FlxCamera.hx",1071);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::org::flixel::util::FlxPoint Block( ::org::flixel::FlxCamera_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",1072);
			{
				HX_STACK_LINE(1072)
				::org::flixel::util::FlxPoint _this = __this->_point;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1072)
				_this->x = __this->_flashSprite->get_scaleX();
				HX_STACK_LINE(1072)
				_this->y = __this->_flashSprite->get_scaleY();
				HX_STACK_LINE(1072)
				return _this;
			}
			return null();
		}
	};
	HX_STACK_LINE(1071)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,getScale,return )

bool FlxCamera_obj::set_antialiasing( bool Antialiasing){
	HX_STACK_PUSH("FlxCamera::set_antialiasing","org/flixel/FlxCamera.hx",1057);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Antialiasing,"Antialiasing");
	HX_STACK_LINE(1058)
	this->antialiasing = Antialiasing;
	HX_STACK_LINE(1062)
	return Antialiasing;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_antialiasing,return )

int FlxCamera_obj::set_color( int Color){
	HX_STACK_PUSH("FlxCamera::set_color","org/flixel/FlxCamera.hx",1025);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(1026)
	this->color = (int(Color) & int((int)16777215));
	HX_STACK_LINE(1037)
	::flash::geom::ColorTransform colorTransform = this->_canvas->get_transform()->get_colorTransform();		HX_STACK_VAR(colorTransform,"colorTransform");
	HX_STACK_LINE(1038)
	colorTransform->redMultiplier = (Float(((int(this->color) >> int((int)16)))) / Float((int)255));
	HX_STACK_LINE(1039)
	colorTransform->greenMultiplier = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1040)
	colorTransform->blueMultiplier = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1041)
	this->_canvas->get_transform()->set_colorTransform(colorTransform);
	HX_STACK_LINE(1044)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_color,return )

Float FlxCamera_obj::set_angle( Float Angle){
	HX_STACK_PUSH("FlxCamera::set_angle","org/flixel/FlxCamera.hx",1009);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_LINE(1010)
	this->angle = Angle;
	HX_STACK_LINE(1011)
	this->_flashSprite->set_rotation(Angle);
	HX_STACK_LINE(1012)
	return Angle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_angle,return )

Float FlxCamera_obj::set_alpha( Float Alpha){
	HX_STACK_PUSH("FlxCamera::set_alpha","org/flixel/FlxCamera.hx",991);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alpha,"Alpha");
	struct _Function_1_1{
		inline static Float Block( Float &Alpha){
			HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",992);
			{
				HX_STACK_LINE(992)
				Float lowerBound = (  (((Alpha < (int)0))) ? Float((int)0) : Float(Alpha) );		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(992)
				return (  (((lowerBound > (int)1))) ? Float((int)1) : Float(lowerBound) );
			}
			return null();
		}
	};
	HX_STACK_LINE(992)
	this->alpha = _Function_1_1::Block(Alpha);
	HX_STACK_LINE(996)
	this->_canvas->set_alpha(Alpha);
	HX_STACK_LINE(998)
	return Alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_alpha,return )

Float FlxCamera_obj::set_zoom( Float Zoom){
	HX_STACK_PUSH("FlxCamera::set_zoom","org/flixel/FlxCamera.hx",969);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Zoom,"Zoom");
	HX_STACK_LINE(970)
	if (((Zoom == (int)0))){
		HX_STACK_LINE(971)
		this->zoom = ::org::flixel::FlxCamera_obj::defaultZoom;
	}
	else{
		HX_STACK_LINE(975)
		this->zoom = Zoom;
	}
	HX_STACK_LINE(978)
	this->setScale(this->zoom,this->zoom);
	HX_STACK_LINE(979)
	return this->zoom;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_zoom,return )

::org::flixel::FlxCamera FlxCamera_obj::copyFrom( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxCamera::copyFrom","org/flixel/FlxCamera.hx",930);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(931)
	if (((Camera->bounds == null()))){
		HX_STACK_LINE(932)
		this->bounds = null();
	}
	else{
		HX_STACK_LINE(937)
		if (((this->bounds == null()))){
			HX_STACK_LINE(938)
			this->bounds = ::org::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(941)
		{
			HX_STACK_LINE(941)
			::org::flixel::util::FlxRect _this = this->bounds;		HX_STACK_VAR(_this,"_this");
			::org::flixel::util::FlxRect Rect = Camera->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(941)
			_this->x = Rect->x;
			HX_STACK_LINE(941)
			_this->y = Rect->y;
			HX_STACK_LINE(941)
			_this->width = Rect->width;
			HX_STACK_LINE(941)
			_this->height = Rect->height;
			HX_STACK_LINE(941)
			_this;
		}
	}
	HX_STACK_LINE(943)
	this->target = Camera->target;
	HX_STACK_LINE(944)
	if (((this->target != null()))){
		HX_STACK_LINE(945)
		if (((Camera->deadzone == null()))){
			HX_STACK_LINE(947)
			this->deadzone = null();
		}
		else{
			HX_STACK_LINE(952)
			if (((this->deadzone == null()))){
				HX_STACK_LINE(953)
				this->deadzone = ::org::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
			}
			HX_STACK_LINE(956)
			{
				HX_STACK_LINE(956)
				::org::flixel::util::FlxRect _this = this->deadzone;		HX_STACK_VAR(_this,"_this");
				::org::flixel::util::FlxRect Rect = Camera->deadzone;		HX_STACK_VAR(Rect,"Rect");
				HX_STACK_LINE(956)
				_this->x = Rect->x;
				HX_STACK_LINE(956)
				_this->y = Rect->y;
				HX_STACK_LINE(956)
				_this->width = Rect->width;
				HX_STACK_LINE(956)
				_this->height = Rect->height;
				HX_STACK_LINE(956)
				_this;
			}
		}
	}
	HX_STACK_LINE(959)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,copyFrom,return )

Void FlxCamera_obj::stopFX( ){
{
		HX_STACK_PUSH("FlxCamera::stopFX","org/flixel/FlxCamera.hx",916);
		HX_STACK_THIS(this);
		HX_STACK_LINE(917)
		this->_fxFlashAlpha = 0.0;
		HX_STACK_LINE(918)
		this->_fxFadeAlpha = 0.0;
		HX_STACK_LINE(919)
		this->_fxShakeDuration = (int)0;
		HX_STACK_LINE(920)
		this->_flashSprite->set_x((this->x + this->_flashOffsetX));
		HX_STACK_LINE(921)
		this->_flashSprite->set_y((this->y + this->_flashOffsetY));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,stopFX,(void))

Void FlxCamera_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Direction){
Float Intensity = __o_Intensity.Default(0.05);
Float Duration = __o_Duration.Default(0.5);
bool Force = __o_Force.Default(true);
int Direction = __o_Direction.Default(0);
	HX_STACK_PUSH("FlxCamera::shake","org/flixel/FlxCamera.hx",900);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Intensity,"Intensity");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
	HX_STACK_ARG(Direction,"Direction");
{
		HX_STACK_LINE(901)
		if (((bool(!(Force)) && bool(((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0)))))))){
			HX_STACK_LINE(902)
			return null();
		}
		HX_STACK_LINE(905)
		this->_fxShakeIntensity = Intensity;
		HX_STACK_LINE(906)
		this->_fxShakeDuration = Duration;
		HX_STACK_LINE(907)
		this->_fxShakeComplete = OnComplete;
		HX_STACK_LINE(908)
		this->_fxShakeDirection = Direction;
		HX_STACK_LINE(909)
		{
			HX_STACK_LINE(909)
			::org::flixel::util::FlxPoint _this = this->_fxShakeOffset;		HX_STACK_VAR(_this,"_this");
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(909)
			_this->x = X;
			HX_STACK_LINE(909)
			_this->y = Y;
			HX_STACK_LINE(909)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,shake,(void))

Void FlxCamera_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxCamera::fade","org/flixel/FlxCamera.hx",866);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(FadeIn,"FadeIn");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(867)
		if (((bool(!(Force)) && bool((this->_fxFadeAlpha > 0.0))))){
			HX_STACK_LINE(868)
			return null();
		}
		HX_STACK_LINE(871)
		this->_fxFadeColor = Color;
		HX_STACK_LINE(872)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(873)
			Duration = 5e-324;
		}
		HX_STACK_LINE(877)
		this->_fxFadeIn = FadeIn;
		HX_STACK_LINE(878)
		this->_fxFadeDuration = Duration;
		HX_STACK_LINE(879)
		this->_fxFadeComplete = OnComplete;
		HX_STACK_LINE(881)
		if ((this->_fxFadeIn)){
			HX_STACK_LINE(882)
			this->_fxFadeAlpha = 0.999999;
		}
		else{
			HX_STACK_LINE(886)
			this->_fxFadeAlpha = 5e-324;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,fade,(void))

Void FlxCamera_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxCamera::flash","org/flixel/FlxCamera.hx",842);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(843)
		if (((bool(!(Force)) && bool((this->_fxFlashAlpha > 0.0))))){
			HX_STACK_LINE(844)
			return null();
		}
		HX_STACK_LINE(847)
		this->_fxFlashColor = Color;
		HX_STACK_LINE(848)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(849)
			Duration = 5e-324;
		}
		HX_STACK_LINE(852)
		this->_fxFlashDuration = Duration;
		HX_STACK_LINE(853)
		this->_fxFlashComplete = OnComplete;
		HX_STACK_LINE(854)
		this->_fxFlashAlpha = 1.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,flash,(void))

Void FlxCamera_obj::setBounds( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_UpdateWorld){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(false);
	HX_STACK_PUSH("FlxCamera::setBounds","org/flixel/FlxCamera.hx",821);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(UpdateWorld,"UpdateWorld");
{
		HX_STACK_LINE(822)
		if (((this->bounds == null()))){
			HX_STACK_LINE(823)
			this->bounds = ::org::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(826)
		{
			HX_STACK_LINE(826)
			::org::flixel::util::FlxRect _this = this->bounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(826)
			_this->x = X;
			HX_STACK_LINE(826)
			_this->y = Y;
			HX_STACK_LINE(826)
			_this->width = Width;
			HX_STACK_LINE(826)
			_this->height = Height;
			HX_STACK_LINE(826)
			_this;
		}
		HX_STACK_LINE(827)
		if ((UpdateWorld)){
			HX_STACK_LINE(829)
			::org::flixel::util::FlxRect _this = ::org::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			::org::flixel::util::FlxRect Rect = this->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(829)
			_this->x = Rect->x;
			HX_STACK_LINE(829)
			_this->y = Rect->y;
			HX_STACK_LINE(829)
			_this->width = Rect->width;
			HX_STACK_LINE(829)
			_this->height = Rect->height;
			HX_STACK_LINE(829)
			_this;
		}
		HX_STACK_LINE(831)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,setBounds,(void))

Void FlxCamera_obj::focusOn( ::org::flixel::util::FlxPoint point){
{
		HX_STACK_PUSH("FlxCamera::focusOn","org/flixel/FlxCamera.hx",808);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(809)
		::org::flixel::util::FlxPoint _this = this->scroll;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(809)
		_this->x = (point->x - (this->width * 0.5));
		HX_STACK_LINE(809)
		_this->y = (point->y - (this->height * 0.5));
		HX_STACK_LINE(809)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,focusOn,(void))

Void FlxCamera_obj::followAdjust( hx::Null< Float >  __o_LeadX,hx::Null< Float >  __o_LeadY){
Float LeadX = __o_LeadX.Default(0);
Float LeadY = __o_LeadY.Default(0);
	HX_STACK_PUSH("FlxCamera::followAdjust","org/flixel/FlxCamera.hx",799);
	HX_STACK_THIS(this);
	HX_STACK_ARG(LeadX,"LeadX");
	HX_STACK_ARG(LeadY,"LeadY");
{
		HX_STACK_LINE(799)
		this->followLead = ::flash::geom::Point_obj::__new(LeadX,LeadY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,followAdjust,(void))

Void FlxCamera_obj::follow( ::org::flixel::FlxObject Target,hx::Null< int >  __o_Style,::org::flixel::util::FlxPoint Offset,hx::Null< Float >  __o_Lerp){
int Style = __o_Style.Default(0);
Float Lerp = __o_Lerp.Default(0);
	HX_STACK_PUSH("FlxCamera::follow","org/flixel/FlxCamera.hx",756);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(Style,"Style");
	HX_STACK_ARG(Offset,"Offset");
	HX_STACK_ARG(Lerp,"Lerp");
{
		HX_STACK_LINE(757)
		this->style = Style;
		HX_STACK_LINE(758)
		this->target = Target;
		HX_STACK_LINE(759)
		this->followLerp = Lerp;
		HX_STACK_LINE(760)
		Float helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(761)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(762)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(763)
		this->_lastTargetPosition = null();
		HX_STACK_LINE(764)
		switch( (int)(Style)){
			case (int)1: {
				HX_STACK_LINE(767)
				Float w1 = ((Float(this->width) / Float((int)8)) + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(768)
				Float h1 = ((Float(this->height) / Float((int)3)) + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));		HX_STACK_VAR(h1,"h1");
				HX_STACK_LINE(769)
				this->deadzone = ::org::flixel::util::FlxRect_obj::__new((Float(((this->width - w1))) / Float((int)2)),((Float(((this->height - h1))) / Float((int)2)) - (h1 * 0.25)),w1,h1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(771)
				helper = (Float(::Math_obj::max(this->width,this->height)) / Float((int)4));
				HX_STACK_LINE(772)
				this->deadzone = ::org::flixel::util::FlxRect_obj::__new((Float(((this->width - helper))) / Float((int)2)),(Float(((this->height - helper))) / Float((int)2)),helper,helper);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(774)
				helper = (Float(::Math_obj::max(this->width,this->height)) / Float((int)8));
				HX_STACK_LINE(775)
				this->deadzone = ::org::flixel::util::FlxRect_obj::__new((Float(((this->width - helper))) / Float((int)2)),(Float(((this->height - helper))) / Float((int)2)),helper,helper);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(777)
				if (((this->target != null()))){
					HX_STACK_LINE(779)
					w = (this->target->width + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));
					HX_STACK_LINE(780)
					h = (this->target->height + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));
				}
				HX_STACK_LINE(782)
				this->deadzone = ::org::flixel::util::FlxRect_obj::__new((Float(((this->width - w))) / Float((int)2)),((Float(((this->height - h))) / Float((int)2)) - (h * 0.25)),w,h);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(783)
				this->deadzone = ::org::flixel::util::FlxRect_obj::__new((int)0,(int)0,this->width,this->height);
			}
			;break;
			default: {
				HX_STACK_LINE(785)
				this->deadzone = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,follow,(void))

Void FlxCamera_obj::update( ){
{
		HX_STACK_PUSH("FlxCamera::update","org/flixel/FlxCamera.hx",565);
		HX_STACK_THIS(this);
		HX_STACK_LINE(566)
		if ((::org::flixel::FlxG_obj::paused)){
			HX_STACK_LINE(566)
			return null();
		}
		HX_STACK_LINE(570)
		if (((this->target != null()))){
			HX_STACK_LINE(571)
			if (((this->deadzone == null()))){
				struct _Function_3_1{
					inline static ::org::flixel::util::FlxPoint Block( ::org::flixel::FlxCamera_obj *__this){
						HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",574);
						{
							HX_STACK_LINE(574)
							::org::flixel::FlxObject _this = __this->target;		HX_STACK_VAR(_this,"_this");
							::org::flixel::util::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(574)
							if (((point == null()))){
								HX_STACK_LINE(574)
								point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
							}
							HX_STACK_LINE(574)
							point->x = (_this->x + (_this->width * 0.5));
							HX_STACK_LINE(574)
							point->y = (_this->y + (_this->height * 0.5));
							HX_STACK_LINE(574)
							return point;
						}
						return null();
					}
				};
				HX_STACK_LINE(573)
				this->focusOn(_Function_3_1::Block(this));
			}
			else{
				HX_STACK_LINE(578)
				Float edge;		HX_STACK_VAR(edge,"edge");
				HX_STACK_LINE(579)
				Float targetX = this->target->x;		HX_STACK_VAR(targetX,"targetX");
				HX_STACK_LINE(580)
				Float targetY = this->target->y;		HX_STACK_VAR(targetY,"targetY");
				HX_STACK_LINE(582)
				if (((this->style == (int)4))){
					HX_STACK_LINE(584)
					if (((targetX > (this->scroll->x + this->width)))){
						HX_STACK_LINE(585)
						hx::AddEq(this->_scrollTarget->x,this->width);
					}
					else{
						HX_STACK_LINE(588)
						if (((targetX < this->scroll->x))){
							HX_STACK_LINE(589)
							hx::SubEq(this->_scrollTarget->x,this->width);
						}
					}
					HX_STACK_LINE(593)
					if (((targetY > (this->scroll->y + this->height)))){
						HX_STACK_LINE(594)
						hx::AddEq(this->_scrollTarget->y,this->height);
					}
					else{
						HX_STACK_LINE(597)
						if (((targetY < this->scroll->y))){
							HX_STACK_LINE(598)
							hx::SubEq(this->_scrollTarget->y,this->height);
						}
					}
				}
				else{
					HX_STACK_LINE(604)
					edge = (targetX - this->deadzone->x);
					HX_STACK_LINE(605)
					if (((this->_scrollTarget->x > edge))){
						HX_STACK_LINE(606)
						this->_scrollTarget->x = edge;
					}
					HX_STACK_LINE(609)
					edge = (((targetX + this->target->width) - this->deadzone->x) - this->deadzone->width);
					HX_STACK_LINE(610)
					if (((this->_scrollTarget->x < edge))){
						HX_STACK_LINE(611)
						this->_scrollTarget->x = edge;
					}
					HX_STACK_LINE(615)
					edge = (targetY - this->deadzone->y);
					HX_STACK_LINE(616)
					if (((this->_scrollTarget->y > edge))){
						HX_STACK_LINE(617)
						this->_scrollTarget->y = edge;
					}
					HX_STACK_LINE(620)
					edge = (((targetY + this->target->height) - this->deadzone->y) - this->deadzone->height);
					HX_STACK_LINE(621)
					if (((this->_scrollTarget->y < edge))){
						HX_STACK_LINE(622)
						this->_scrollTarget->y = edge;
					}
				}
				HX_STACK_LINE(627)
				if (((bool((this->followLead != null())) && bool(::Std_obj::is(this->target,hx::ClassOf< ::org::flixel::FlxSprite >()))))){
					HX_STACK_LINE(629)
					if (((this->_lastTargetPosition == null()))){
						HX_STACK_LINE(630)
						this->_lastTargetPosition = ::org::flixel::util::FlxPoint_obj::__new(this->target->x,this->target->y);
					}
					HX_STACK_LINE(633)
					hx::AddEq(this->_scrollTarget->x,(((this->target->x - this->_lastTargetPosition->x)) * this->followLead->x));
					HX_STACK_LINE(634)
					hx::AddEq(this->_scrollTarget->y,(((this->target->y - this->_lastTargetPosition->y)) * this->followLead->y));
					HX_STACK_LINE(636)
					this->_lastTargetPosition->x = this->target->x;
					HX_STACK_LINE(637)
					this->_lastTargetPosition->y = this->target->y;
				}
				HX_STACK_LINE(641)
				if (((this->followLerp == (int)0))){
					HX_STACK_LINE(643)
					this->scroll->x = this->_scrollTarget->x;
					HX_STACK_LINE(644)
					this->scroll->y = this->_scrollTarget->y;
				}
				else{
					HX_STACK_LINE(647)
					hx::AddEq(this->scroll->x,(Float((((this->_scrollTarget->x - this->scroll->x)) * ::org::flixel::FlxG_obj::elapsed)) / Float(((::org::flixel::FlxG_obj::elapsed + (this->followLerp * ::org::flixel::FlxG_obj::elapsed))))));
					HX_STACK_LINE(648)
					hx::AddEq(this->scroll->y,(Float((((this->_scrollTarget->y - this->scroll->y)) * ::org::flixel::FlxG_obj::elapsed)) / Float(((::org::flixel::FlxG_obj::elapsed + (this->followLerp * ::org::flixel::FlxG_obj::elapsed))))));
				}
			}
		}
		HX_STACK_LINE(655)
		if (((this->bounds != null()))){
			HX_STACK_LINE(657)
			if (((this->scroll->x < this->bounds->get_left()))){
				HX_STACK_LINE(658)
				this->scroll->x = this->bounds->get_left();
			}
			HX_STACK_LINE(661)
			if (((this->scroll->x > (this->bounds->get_right() - this->width)))){
				HX_STACK_LINE(662)
				this->scroll->x = (this->bounds->get_right() - this->width);
			}
			HX_STACK_LINE(665)
			if (((this->scroll->y < this->bounds->get_top()))){
				HX_STACK_LINE(666)
				this->scroll->y = this->bounds->get_top();
			}
			HX_STACK_LINE(669)
			if (((this->scroll->y > (this->bounds->get_bottom() - this->height)))){
				HX_STACK_LINE(670)
				this->scroll->y = (this->bounds->get_bottom() - this->height);
			}
		}
		HX_STACK_LINE(676)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(678)
			hx::SubEq(this->_fxFlashAlpha,(Float(::org::flixel::FlxG_obj::elapsed) / Float(this->_fxFlashDuration)));
			HX_STACK_LINE(679)
			if (((bool((this->_fxFlashAlpha <= (int)0)) && bool((this->_fxFlashComplete_dyn() != null()))))){
				HX_STACK_LINE(680)
				this->_fxFlashComplete();
			}
		}
		HX_STACK_LINE(686)
		if (((bool((this->_fxFadeAlpha > 0.0)) && bool((this->_fxFadeAlpha < 1.0))))){
			HX_STACK_LINE(687)
			if ((this->_fxFadeIn)){
				HX_STACK_LINE(690)
				hx::SubEq(this->_fxFadeAlpha,(Float(::org::flixel::FlxG_obj::elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(691)
				if (((this->_fxFadeAlpha <= 0.0))){
					HX_STACK_LINE(693)
					this->_fxFadeAlpha = 0.0;
					HX_STACK_LINE(694)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(695)
						this->_fxFadeComplete();
					}
				}
			}
			else{
				HX_STACK_LINE(702)
				hx::AddEq(this->_fxFadeAlpha,(Float(::org::flixel::FlxG_obj::elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(703)
				if (((this->_fxFadeAlpha >= 1.0))){
					HX_STACK_LINE(705)
					this->_fxFadeAlpha = 1.0;
					HX_STACK_LINE(706)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(707)
						this->_fxFadeComplete();
					}
				}
			}
		}
		HX_STACK_LINE(715)
		if (((this->_fxShakeDuration > (int)0))){
			HX_STACK_LINE(717)
			hx::SubEq(this->_fxShakeDuration,::org::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(718)
			if (((this->_fxShakeDuration <= (int)0))){
				HX_STACK_LINE(720)
				{
					HX_STACK_LINE(720)
					::org::flixel::util::FlxPoint _this = this->_fxShakeOffset;		HX_STACK_VAR(_this,"_this");
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(720)
					_this->x = X;
					HX_STACK_LINE(720)
					_this->y = Y;
					HX_STACK_LINE(720)
					_this;
				}
				HX_STACK_LINE(721)
				if (((this->_fxShakeComplete_dyn() != null()))){
					HX_STACK_LINE(722)
					this->_fxShakeComplete();
				}
			}
			else{
				HX_STACK_LINE(729)
				if (((bool((this->_fxShakeDirection == (int)0)) || bool((this->_fxShakeDirection == (int)1))))){
					struct _Function_4_1{
						inline static Float Block( ){
							HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",731);
							{
								HX_STACK_LINE(731)
								::org::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
								HX_STACK_LINE(731)
								if (((::org::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
									HX_STACK_LINE(731)
									hx::AddEq(::org::flixel::util::FlxRandom_obj::globalSeed,(int)1);
								}
								HX_STACK_LINE(731)
								return ::org::flixel::util::FlxRandom_obj::globalSeed;
							}
							return null();
						}
					};
					HX_STACK_LINE(730)
					this->_fxShakeOffset->x = ((((((_Function_4_1::Block() * this->_fxShakeIntensity) * this->width) * (int)2) - (this->_fxShakeIntensity * this->width))) * this->zoom);
				}
				HX_STACK_LINE(733)
				if (((bool((this->_fxShakeDirection == (int)0)) || bool((this->_fxShakeDirection == (int)2))))){
					struct _Function_4_1{
						inline static Float Block( ){
							HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",735);
							{
								HX_STACK_LINE(735)
								::org::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
								HX_STACK_LINE(735)
								if (((::org::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
									HX_STACK_LINE(735)
									hx::AddEq(::org::flixel::util::FlxRandom_obj::globalSeed,(int)1);
								}
								HX_STACK_LINE(735)
								return ::org::flixel::util::FlxRandom_obj::globalSeed;
							}
							return null();
						}
					};
					HX_STACK_LINE(734)
					this->_fxShakeOffset->y = ((((((_Function_4_1::Block() * this->_fxShakeIntensity) * this->height) * (int)2) - (this->_fxShakeIntensity * this->height))) * this->zoom);
				}
			}
			HX_STACK_LINE(740)
			if (((this->target != null()))){
				HX_STACK_LINE(742)
				this->_flashSprite->set_x((this->x + this->_flashOffsetX));
				HX_STACK_LINE(743)
				this->_flashSprite->set_y((this->y + this->_flashOffsetY));
			}
		}
	}
return null();
}


Void FlxCamera_obj::destroy( ){
{
		HX_STACK_PUSH("FlxCamera::destroy","org/flixel/FlxCamera.hx",511);
		HX_STACK_THIS(this);
		HX_STACK_LINE(519)
		this->target = null();
		HX_STACK_LINE(520)
		this->scroll = null();
		HX_STACK_LINE(521)
		this->deadzone = null();
		HX_STACK_LINE(522)
		this->bounds = null();
		HX_STACK_LINE(527)
		this->_flashRect = null();
		HX_STACK_LINE(528)
		this->_flashPoint = null();
		HX_STACK_LINE(529)
		this->_fxFlashComplete = null();
		HX_STACK_LINE(530)
		this->_fxFadeComplete = null();
		HX_STACK_LINE(531)
		this->_fxShakeComplete = null();
		HX_STACK_LINE(532)
		this->_fxShakeOffset = null();
		HX_STACK_LINE(540)
		this->_flashSprite->removeChild(this->_debugLayer);
		HX_STACK_LINE(541)
		this->_flashSprite->removeChild(this->_canvas);
		HX_STACK_LINE(542)
		int canvasNumChildren = this->_canvas->get_numChildren();		HX_STACK_VAR(canvasNumChildren,"canvasNumChildren");
		HX_STACK_LINE(543)
		{
			HX_STACK_LINE(543)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = canvasNumChildren;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(543)
			while(((_g1 < _g))){
				HX_STACK_LINE(543)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(545)
				this->_canvas->removeChildAt((int)0);
			}
		}
		HX_STACK_LINE(547)
		this->_debugLayer = null();
		HX_STACK_LINE(548)
		this->_canvas = null();
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			::org::flixel::system::layer::DrawStackItem currItem = this->_headOfDrawStack->next;		HX_STACK_VAR(currItem,"currItem");
			HX_STACK_LINE(550)
			while(((currItem != null()))){
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					currItem->atlas = null();
					HX_STACK_LINE(550)
					currItem->initialized = false;
					HX_STACK_LINE(550)
					currItem->position = (int)0;
				}
				HX_STACK_LINE(550)
				::org::flixel::system::layer::DrawStackItem newStorageHead = currItem;		HX_STACK_VAR(newStorageHead,"newStorageHead");
				HX_STACK_LINE(550)
				currItem = currItem->next;
				HX_STACK_LINE(550)
				if (((::org::flixel::FlxCamera_obj::_storageHead == null()))){
					HX_STACK_LINE(550)
					::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
					HX_STACK_LINE(550)
					newStorageHead->next = null();
				}
				else{
					HX_STACK_LINE(550)
					newStorageHead->next = ::org::flixel::FlxCamera_obj::_storageHead;
					HX_STACK_LINE(550)
					::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
				}
			}
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				::org::flixel::system::layer::DrawStackItem _this = this->_headOfDrawStack;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(550)
				_this->atlas = null();
				HX_STACK_LINE(550)
				_this->initialized = false;
				HX_STACK_LINE(550)
				_this->position = (int)0;
			}
			HX_STACK_LINE(550)
			this->_headOfDrawStack->next = null();
			HX_STACK_LINE(550)
			this->_currentStackItem = this->_headOfDrawStack;
		}
		HX_STACK_LINE(552)
		this->_headOfDrawStack->dispose();
		HX_STACK_LINE(553)
		this->_headOfDrawStack = null();
		HX_STACK_LINE(554)
		this->_currentStackItem = null();
		HX_STACK_LINE(556)
		this->_flashSprite = null();
		HX_STACK_LINE(558)
		this->super::destroy();
	}
return null();
}


Void FlxCamera_obj::render( ){
{
		HX_STACK_PUSH("FlxCamera::render","org/flixel/FlxCamera.hx",359);
		HX_STACK_THIS(this);
		HX_STACK_LINE(360)
		::org::flixel::system::layer::DrawStackItem currItem = this->_headOfDrawStack;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(361)
		while(((currItem != null()))){
			HX_STACK_LINE(363)
			Array< Float > data = currItem->drawData;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(364)
			int dataLen = data->length;		HX_STACK_VAR(dataLen,"dataLen");
			HX_STACK_LINE(365)
			int position = currItem->position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(366)
			if (((position > (int)0))){
				HX_STACK_LINE(368)
				if (((dataLen != position))){
					HX_STACK_LINE(369)
					data->splice(position,(dataLen - position));
				}
				HX_STACK_LINE(372)
				int tempFlags = (int)16;		HX_STACK_VAR(tempFlags,"tempFlags");
				HX_STACK_LINE(374)
				hx::OrEq(tempFlags,(int)8);
				HX_STACK_LINE(375)
				if ((currItem->colored)){
					HX_STACK_LINE(376)
					hx::OrEq(tempFlags,(int)4);
				}
				HX_STACK_LINE(379)
				hx::OrEq(tempFlags,currItem->blending);
				HX_STACK_LINE(387)
				currItem->atlas->_tileSheetData->tileSheet->drawTiles(this->_canvas->get_graphics(),data,this->antialiasing,tempFlags);
				HX_STACK_LINE(388)
				(::org::flixel::system::layer::TileSheetExt_obj::_DRAWCALLS)++;
			}
			HX_STACK_LINE(390)
			currItem = currItem->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,render,(void))

Void FlxCamera_obj::clearDrawStack( ){
{
		HX_STACK_PUSH("FlxCamera::clearDrawStack","org/flixel/FlxCamera.hx",334);
		HX_STACK_THIS(this);
		HX_STACK_LINE(335)
		::org::flixel::system::layer::DrawStackItem currItem = this->_headOfDrawStack->next;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(336)
		while(((currItem != null()))){
			HX_STACK_LINE(338)
			{
				HX_STACK_LINE(338)
				currItem->atlas = null();
				HX_STACK_LINE(338)
				currItem->initialized = false;
				HX_STACK_LINE(338)
				currItem->position = (int)0;
			}
			HX_STACK_LINE(339)
			::org::flixel::system::layer::DrawStackItem newStorageHead = currItem;		HX_STACK_VAR(newStorageHead,"newStorageHead");
			HX_STACK_LINE(340)
			currItem = currItem->next;
			HX_STACK_LINE(341)
			if (((::org::flixel::FlxCamera_obj::_storageHead == null()))){
				HX_STACK_LINE(343)
				::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
				HX_STACK_LINE(344)
				newStorageHead->next = null();
			}
			else{
				HX_STACK_LINE(348)
				newStorageHead->next = ::org::flixel::FlxCamera_obj::_storageHead;
				HX_STACK_LINE(349)
				::org::flixel::FlxCamera_obj::_storageHead = newStorageHead;
			}
		}
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			::org::flixel::system::layer::DrawStackItem _this = this->_headOfDrawStack;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(353)
			_this->atlas = null();
			HX_STACK_LINE(353)
			_this->initialized = false;
			HX_STACK_LINE(353)
			_this->position = (int)0;
		}
		HX_STACK_LINE(354)
		this->_headOfDrawStack->next = null();
		HX_STACK_LINE(355)
		this->_currentStackItem = this->_headOfDrawStack;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,clearDrawStack,(void))

::org::flixel::system::layer::DrawStackItem FlxCamera_obj::getDrawStackItem( ::org::flixel::system::layer::Atlas ObjAtlas,bool ObjColored,int ObjBlending){
	HX_STACK_PUSH("FlxCamera::getDrawStackItem","org/flixel/FlxCamera.hx",279);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjAtlas,"ObjAtlas");
	HX_STACK_ARG(ObjColored,"ObjColored");
	HX_STACK_ARG(ObjBlending,"ObjBlending");
	HX_STACK_LINE(280)
	::org::flixel::system::layer::DrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
	HX_STACK_LINE(281)
	if (((this->_currentStackItem->initialized == false))){
		HX_STACK_LINE(283)
		this->_headOfDrawStack = this->_currentStackItem;
		HX_STACK_LINE(284)
		this->_currentStackItem->atlas = ObjAtlas;
		HX_STACK_LINE(286)
		this->_currentStackItem->colored = ObjColored;
		HX_STACK_LINE(287)
		this->_currentStackItem->blending = ObjBlending;
		HX_STACK_LINE(291)
		itemToReturn = this->_currentStackItem;
	}
	else{
		HX_STACK_LINE(294)
		if (((bool((bool((this->_currentStackItem->atlas == ObjAtlas)) && bool((this->_currentStackItem->colored == ObjColored)))) && bool((this->_currentStackItem->blending == ObjBlending))))){
			HX_STACK_LINE(298)
			itemToReturn = this->_currentStackItem;
		}
	}
	HX_STACK_LINE(302)
	if (((itemToReturn == null()))){
		HX_STACK_LINE(304)
		::org::flixel::system::layer::DrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
		HX_STACK_LINE(305)
		if (((::org::flixel::FlxCamera_obj::_storageHead != null()))){
			HX_STACK_LINE(307)
			newItem = ::org::flixel::FlxCamera_obj::_storageHead;
			HX_STACK_LINE(308)
			::org::flixel::system::layer::DrawStackItem newHead = ::org::flixel::FlxCamera_obj::_storageHead->next;		HX_STACK_VAR(newHead,"newHead");
			HX_STACK_LINE(309)
			newItem->next = null();
			HX_STACK_LINE(310)
			::org::flixel::FlxCamera_obj::_storageHead = newHead;
		}
		else{
			HX_STACK_LINE(313)
			newItem = ::org::flixel::system::layer::DrawStackItem_obj::__new();
		}
		HX_STACK_LINE(317)
		newItem->atlas = ObjAtlas;
		HX_STACK_LINE(319)
		newItem->colored = ObjColored;
		HX_STACK_LINE(320)
		newItem->blending = ObjBlending;
		HX_STACK_LINE(324)
		this->_currentStackItem->next = newItem;
		HX_STACK_LINE(325)
		this->_currentStackItem = newItem;
		HX_STACK_LINE(326)
		itemToReturn = this->_currentStackItem;
	}
	HX_STACK_LINE(329)
	itemToReturn->initialized = true;
	HX_STACK_LINE(330)
	return itemToReturn;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxCamera_obj,getDrawStackItem,return )

Float FlxCamera_obj::defaultZoom;

::org::flixel::system::layer::DrawStackItem FlxCamera_obj::_storageHead;


FlxCamera_obj::FlxCamera_obj()
{
}

void FlxCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCamera);
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_MARK_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_MARK_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_MARK_MEMBER_NAME(_debugLayer,"_debugLayer");
	HX_MARK_MEMBER_NAME(_canvas,"_canvas");
	HX_MARK_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_MARK_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_MARK_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_MARK_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_MARK_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_MARK_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_MARK_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_MARK_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_MARK_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_MARK_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_MARK_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_MARK_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_MARK_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_MARK_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_MARK_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashOffsetY,"_flashOffsetY");
	HX_MARK_MEMBER_NAME(_flashOffsetX,"_flashOffsetX");
	HX_MARK_MEMBER_NAME(_flashSprite,"_flashSprite");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	HX_MARK_MEMBER_NAME(followLerp,"followLerp");
	HX_MARK_MEMBER_NAME(followLead,"followLead");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_VISIT_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_VISIT_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_VISIT_MEMBER_NAME(_debugLayer,"_debugLayer");
	HX_VISIT_MEMBER_NAME(_canvas,"_canvas");
	HX_VISIT_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_VISIT_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_VISIT_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_VISIT_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_VISIT_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_VISIT_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_VISIT_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_VISIT_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_VISIT_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_VISIT_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_VISIT_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_VISIT_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_VISIT_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_VISIT_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_VISIT_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashOffsetY,"_flashOffsetY");
	HX_VISIT_MEMBER_NAME(_flashOffsetX,"_flashOffsetX");
	HX_VISIT_MEMBER_NAME(_flashSprite,"_flashSprite");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	HX_VISIT_MEMBER_NAME(followLerp,"followLerp");
	HX_VISIT_MEMBER_NAME(followLead,"followLead");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxCamera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"drawFX") ) { return drawFX_dyn(); }
		if (HX_FIELD_EQ(inName,"stopFX") ) { return stopFX_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_canvas") ) { return _canvas; }
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"getScale") ) { return getScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"deadzone") ) { return deadzone; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"setBounds") ) { return setBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { return _fxFadeIn; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"followLerp") ) { return followLerp; }
		if (HX_FIELD_EQ(inName,"followLead") ) { return followLead; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { return defaultZoom; }
		if (HX_FIELD_EQ(inName,"_debugLayer") ) { return _debugLayer; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { return _storageHead; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"followAdjust") ) { return followAdjust_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { return _fxFadeAlpha; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { return _fxFadeColor; }
		if (HX_FIELD_EQ(inName,"_flashSprite") ) { return _flashSprite; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { return _scrollTarget; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { return _fxFlashAlpha; }
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { return _fxFlashColor; }
		if (HX_FIELD_EQ(inName,"_flashOffsetY") ) { return _flashOffsetY; }
		if (HX_FIELD_EQ(inName,"_flashOffsetX") ) { return _flashOffsetX; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"clearDrawStack") ) { return clearDrawStack_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { return _fxShakeOffset; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { return _fxFadeComplete; }
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { return _fxFadeDuration; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		if (HX_FIELD_EQ(inName,"getDrawStackItem") ) { return getDrawStackItem_dyn(); }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { return _headOfDrawStack; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { return _fxShakeComplete; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { return _fxShakeDuration; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { return _fxFlashComplete; }
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { return _fxFlashDuration; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { return _currentStackItem; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { return _fxShakeDirection; }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { return _fxShakeIntensity; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getContainerSprite") ) { return getContainerSprite_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { return _lastTargetPosition; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::org::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::org::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { _canvas=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast< ::org::flixel::util::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { _fxFadeIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLerp") ) { followLerp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLead") ) { followLead=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { defaultZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debugLayer") ) { _debugLayer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { _storageHead=inValue.Cast< ::org::flixel::system::layer::DrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { _fxFadeAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { _fxFadeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashSprite") ) { _flashSprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { _scrollTarget=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { _fxFlashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { _fxFlashColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffsetY") ) { _flashOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffsetX") ) { _flashOffsetX=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { _fxShakeOffset=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { _fxFadeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { _fxFadeDuration=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { _headOfDrawStack=inValue.Cast< ::org::flixel::system::layer::DrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { _fxShakeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { _fxShakeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { _fxFlashComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { _fxFlashDuration=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { _currentStackItem=inValue.Cast< ::org::flixel::system::layer::DrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { _fxShakeDirection=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { _fxShakeIntensity=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { _lastTargetPosition=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("zoom"));
	outFields->push(HX_CSTRING("_fxFadeIn"));
	outFields->push(HX_CSTRING("_headOfDrawStack"));
	outFields->push(HX_CSTRING("_currentStackItem"));
	outFields->push(HX_CSTRING("_debugLayer"));
	outFields->push(HX_CSTRING("_canvas"));
	outFields->push(HX_CSTRING("_fxShakeDirection"));
	outFields->push(HX_CSTRING("_fxShakeOffset"));
	outFields->push(HX_CSTRING("_fxShakeDuration"));
	outFields->push(HX_CSTRING("_fxShakeIntensity"));
	outFields->push(HX_CSTRING("_fxFadeAlpha"));
	outFields->push(HX_CSTRING("_fxFadeDuration"));
	outFields->push(HX_CSTRING("_scrollTarget"));
	outFields->push(HX_CSTRING("_lastTargetPosition"));
	outFields->push(HX_CSTRING("_fxFadeColor"));
	outFields->push(HX_CSTRING("_fxFlashAlpha"));
	outFields->push(HX_CSTRING("_fxFlashDuration"));
	outFields->push(HX_CSTRING("_fxFlashColor"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashOffsetY"));
	outFields->push(HX_CSTRING("_flashOffsetX"));
	outFields->push(HX_CSTRING("_flashSprite"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("scroll"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("deadzone"));
	outFields->push(HX_CSTRING("followLerp"));
	outFields->push(HX_CSTRING("followLead"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("style"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("defaultZoom"),
	HX_CSTRING("_storageHead"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("drawFX"),
	HX_CSTRING("fill"),
	HX_CSTRING("getContainerSprite"),
	HX_CSTRING("setScale"),
	HX_CSTRING("getScale"),
	HX_CSTRING("set_antialiasing"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("set_color"),
	HX_CSTRING("color"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("angle"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("alpha"),
	HX_CSTRING("set_zoom"),
	HX_CSTRING("zoom"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("stopFX"),
	HX_CSTRING("shake"),
	HX_CSTRING("fade"),
	HX_CSTRING("flash"),
	HX_CSTRING("setBounds"),
	HX_CSTRING("focusOn"),
	HX_CSTRING("followAdjust"),
	HX_CSTRING("follow"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_fxFadeIn"),
	HX_CSTRING("render"),
	HX_CSTRING("clearDrawStack"),
	HX_CSTRING("getDrawStackItem"),
	HX_CSTRING("_headOfDrawStack"),
	HX_CSTRING("_currentStackItem"),
	HX_CSTRING("_debugLayer"),
	HX_CSTRING("_canvas"),
	HX_CSTRING("_fxShakeDirection"),
	HX_CSTRING("_fxShakeOffset"),
	HX_CSTRING("_fxShakeComplete"),
	HX_CSTRING("_fxShakeDuration"),
	HX_CSTRING("_fxShakeIntensity"),
	HX_CSTRING("_fxFadeAlpha"),
	HX_CSTRING("_fxFadeComplete"),
	HX_CSTRING("_fxFadeDuration"),
	HX_CSTRING("_scrollTarget"),
	HX_CSTRING("_lastTargetPosition"),
	HX_CSTRING("_fxFadeColor"),
	HX_CSTRING("_fxFlashAlpha"),
	HX_CSTRING("_fxFlashComplete"),
	HX_CSTRING("_fxFlashDuration"),
	HX_CSTRING("_fxFlashColor"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashOffsetY"),
	HX_CSTRING("_flashOffsetX"),
	HX_CSTRING("_flashSprite"),
	HX_CSTRING("_point"),
	HX_CSTRING("bgColor"),
	HX_CSTRING("scroll"),
	HX_CSTRING("bounds"),
	HX_CSTRING("deadzone"),
	HX_CSTRING("followLerp"),
	HX_CSTRING("followLead"),
	HX_CSTRING("target"),
	HX_CSTRING("style"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

Class FlxCamera_obj::__mClass;

void FlxCamera_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxCamera"), hx::TCanCast< FlxCamera_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxCamera_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
