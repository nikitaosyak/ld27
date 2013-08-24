#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
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
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
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
#ifndef INCLUDED_org_flixel_FlxPath
#include <org/flixel/FlxPath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTilemap
#include <org/flixel/FlxTilemap.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRect
#include <org/flixel/util/FlxRect.h>
#endif
namespace org{
namespace flixel{

Void FlxObject_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_PUSH("FlxObject::new","org/flixel/FlxObject.hx",17);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	HX_STACK_LINE(275)
	this->_boundingBoxColorOverritten = false;
	HX_STACK_LINE(252)
	this->forceComplexRender = false;
	HX_STACK_LINE(294)
	super::__construct();
	HX_STACK_LINE(296)
	this->x = X;
	HX_STACK_LINE(297)
	this->y = Y;
	HX_STACK_LINE(298)
	this->last = ::org::flixel::util::FlxPoint_obj::__new(this->x,this->y);
	HX_STACK_LINE(299)
	this->set_width(Width);
	HX_STACK_LINE(300)
	this->set_height(Height);
	HX_STACK_LINE(301)
	this->mass = 1.0;
	HX_STACK_LINE(302)
	this->elasticity = 0.0;
	HX_STACK_LINE(304)
	this->health = (int)1;
	HX_STACK_LINE(306)
	this->immovable = false;
	HX_STACK_LINE(307)
	this->moves = true;
	HX_STACK_LINE(309)
	this->touching = (int)0;
	HX_STACK_LINE(310)
	this->wasTouching = (int)0;
	HX_STACK_LINE(311)
	this->allowCollisions = (int)4369;
	HX_STACK_LINE(313)
	this->velocity = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(314)
	this->acceleration = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(315)
	this->drag = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(316)
	this->maxVelocity = ::org::flixel::util::FlxPoint_obj::__new((int)10000,(int)10000);
	HX_STACK_LINE(318)
	this->angle = (int)0;
	HX_STACK_LINE(319)
	this->angularVelocity = (int)0;
	HX_STACK_LINE(320)
	this->angularAcceleration = (int)0;
	HX_STACK_LINE(321)
	this->angularDrag = (int)0;
	HX_STACK_LINE(322)
	this->maxAngular = (int)10000;
	HX_STACK_LINE(324)
	this->scrollFactor = ::org::flixel::util::FlxPoint_obj::__new(1.0,1.0);
	HX_STACK_LINE(325)
	this->_flicker = false;
	HX_STACK_LINE(326)
	this->_flickerTimer = (int)0;
	HX_STACK_LINE(328)
	this->_point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(330)
	this->path = null();
	HX_STACK_LINE(331)
	this->pathSpeed = (int)0;
	HX_STACK_LINE(332)
	this->pathAngle = (int)0;
	HX_STACK_LINE(333)
	this->pathAutoCenter = true;
}
;
	return null();
}

FlxObject_obj::~FlxObject_obj() { }

Dynamic FlxObject_obj::__CreateEmpty() { return  new FlxObject_obj; }
hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxObject_obj > result = new FlxObject_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return result;}

Dynamic FlxObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxObject_obj > result = new FlxObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

bool FlxObject_obj::set_forceComplexRender( bool value){
	HX_STACK_PUSH("FlxObject::set_forceComplexRender","org/flixel/FlxObject.hx",1360);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1360)
	return this->forceComplexRender = value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_forceComplexRender,return )

Void FlxObject_obj::move( Float x,Float y){
{
		HX_STACK_PUSH("FlxObject::move","org/flixel/FlxObject.hx",1354);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(1355)
		this->x = x;
		HX_STACK_LINE(1356)
		this->y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,move,(void))

Void FlxObject_obj::hurt( Float Damage){
{
		HX_STACK_PUSH("FlxObject::hurt","org/flixel/FlxObject.hx",1100);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Damage,"Damage");
		HX_STACK_LINE(1101)
		this->health = (this->health - Damage);
		HX_STACK_LINE(1102)
		if (((this->health <= (int)0))){
			HX_STACK_LINE(1103)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

bool FlxObject_obj::justTouched( int Direction){
	HX_STACK_PUSH("FlxObject::justTouched","org/flixel/FlxObject.hx",1090);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Direction,"Direction");
	HX_STACK_LINE(1090)
	return (bool((((int(this->touching) & int(Direction))) > (int)0)) && bool((((int(this->wasTouching) & int(Direction))) <= (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

bool FlxObject_obj::isTouching( int Direction){
	HX_STACK_PUSH("FlxObject::isTouching","org/flixel/FlxObject.hx",1080);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Direction,"Direction");
	HX_STACK_LINE(1080)
	return (((int(this->touching) & int(Direction))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

Void FlxObject_obj::reset( Float X,Float Y){
{
		HX_STACK_PUSH("FlxObject::reset","org/flixel/FlxObject.hx",1062);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(1063)
		this->revive();
		HX_STACK_LINE(1064)
		this->touching = (int)0;
		HX_STACK_LINE(1065)
		this->wasTouching = (int)0;
		HX_STACK_LINE(1066)
		this->x = X;
		HX_STACK_LINE(1067)
		this->y = Y;
		HX_STACK_LINE(1068)
		this->last->x = this->x;
		HX_STACK_LINE(1069)
		this->last->y = this->y;
		HX_STACK_LINE(1070)
		this->velocity->x = (int)0;
		HX_STACK_LINE(1071)
		this->velocity->y = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

::org::flixel::util::FlxPoint FlxObject_obj::getMidpoint( ::org::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxObject::getMidpoint","org/flixel/FlxObject.hx",1045);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(1046)
	if (((point == null()))){
		HX_STACK_LINE(1047)
		point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(1050)
	point->x = (this->x + (this->width * 0.5));
	HX_STACK_LINE(1051)
	point->y = (this->y + (this->height * 0.5));
	HX_STACK_LINE(1052)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

bool FlxObject_obj::set_solid( bool Solid){
	HX_STACK_PUSH("FlxObject::set_solid","org/flixel/FlxObject.hx",1027);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Solid,"Solid");
	HX_STACK_LINE(1028)
	if ((Solid)){
		HX_STACK_LINE(1029)
		this->allowCollisions = (int)4369;
	}
	else{
		HX_STACK_LINE(1033)
		this->allowCollisions = (int)0;
	}
	HX_STACK_LINE(1036)
	return Solid;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_solid,return )

bool FlxObject_obj::get_solid( ){
	HX_STACK_PUSH("FlxObject::get_solid","org/flixel/FlxObject.hx",1019);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1019)
	return (((int(this->allowCollisions) & int((int)4369))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_solid,return )

Float FlxObject_obj::set_height( Float Height){
	HX_STACK_PUSH("FlxObject::set_height","org/flixel/FlxObject.hx",1004);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Height,"Height");
	HX_STACK_LINE(1005)
	if (((Height < (int)0))){
		HX_STACK_LINE(1006)
		::org::flixel::FlxG_obj::warn(HX_CSTRING("An object's height cannot be smaller than 0. Use offset for sprites to control the hitbox position!"));
	}
	else{
		HX_STACK_LINE(1008)
		this->height = Height;
	}
	HX_STACK_LINE(1010)
	return Height;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_height,return )

Float FlxObject_obj::set_width( Float Width){
	HX_STACK_PUSH("FlxObject::set_width","org/flixel/FlxObject.hx",991);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_LINE(992)
	if (((Width < (int)0))){
		HX_STACK_LINE(993)
		::org::flixel::FlxG_obj::warn(HX_CSTRING("An object's width cannot be smaller than 0. Use offset for sprites to control the hitbox position!"));
	}
	else{
		HX_STACK_LINE(995)
		this->width = Width;
	}
	HX_STACK_LINE(997)
	return Width;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_width,return )

bool FlxObject_obj::get_flickering( ){
	HX_STACK_PUSH("FlxObject::get_flickering","org/flixel/FlxObject.hx",981);
	HX_STACK_THIS(this);
	HX_STACK_LINE(981)
	return (this->_flickerTimer != (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_flickering,return )

Void FlxObject_obj::flicker( hx::Null< Float >  __o_Duration){
Float Duration = __o_Duration.Default(1);
	HX_STACK_PUSH("FlxObject::flicker","org/flixel/FlxObject.hx",966);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Duration,"Duration");
{
		HX_STACK_LINE(967)
		this->_flickerTimer = Duration;
		HX_STACK_LINE(968)
		if (((this->_flickerTimer == (int)0))){
			HX_STACK_LINE(969)
			this->_flicker = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,flicker,(void))

::org::flixel::util::FlxPoint FlxObject_obj::getScreenXY( ::org::flixel::util::FlxPoint point,::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxObject::getScreenXY","org/flixel/FlxObject.hx",946);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(947)
	if (((point == null()))){
		HX_STACK_LINE(948)
		point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(951)
	if (((Camera == null()))){
		HX_STACK_LINE(952)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(955)
	point->x = (this->x - (Camera->scroll->x * this->scrollFactor->x));
	HX_STACK_LINE(956)
	point->y = (this->y - (Camera->scroll->y * this->scrollFactor->y));
	HX_STACK_LINE(957)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenXY,return )

bool FlxObject_obj::onScreenObject( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxObject::onScreenObject","org/flixel/FlxObject.hx",930);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(931)
	if (((Camera == null()))){
		HX_STACK_LINE(932)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(935)
	{
		HX_STACK_LINE(935)
		::org::flixel::util::FlxPoint point = this->_point;		HX_STACK_VAR(point,"point");
		::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
		HX_STACK_LINE(935)
		if (((point == null()))){
			HX_STACK_LINE(935)
			point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
		}
		HX_STACK_LINE(935)
		if (((Camera1 == null()))){
			HX_STACK_LINE(935)
			Camera1 = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(935)
		point->x = (this->x - (Camera1->scroll->x * this->scrollFactor->x));
		HX_STACK_LINE(935)
		point->y = (this->y - (Camera1->scroll->y * this->scrollFactor->y));
		HX_STACK_LINE(935)
		point;
	}
	HX_STACK_LINE(936)
	return (bool((bool((bool(((this->_point->x + this->width) > (int)0)) && bool((this->_point->x < Camera->width)))) && bool(((this->_point->y + this->height) > (int)0)))) && bool((this->_point->y < Camera->height)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,onScreenObject,return )

bool FlxObject_obj::onScreen( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxObject::onScreen","org/flixel/FlxObject.hx",925);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	struct _Function_1_1{
		inline static bool Block( ::org::flixel::FlxCamera &Camera,::org::flixel::FlxObject_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",926);
			{
				HX_STACK_LINE(926)
				::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
				HX_STACK_LINE(926)
				if (((Camera1 == null()))){
					HX_STACK_LINE(926)
					Camera1 = ::org::flixel::FlxG_obj::camera;
				}
				HX_STACK_LINE(926)
				{
					HX_STACK_LINE(926)
					::org::flixel::util::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera2 = Camera1;		HX_STACK_VAR(Camera2,"Camera2");
					HX_STACK_LINE(926)
					if (((point == null()))){
						HX_STACK_LINE(926)
						point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(926)
					if (((Camera2 == null()))){
						HX_STACK_LINE(926)
						Camera2 = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(926)
					point->x = (__this->x - (Camera2->scroll->x * __this->scrollFactor->x));
					HX_STACK_LINE(926)
					point->y = (__this->y - (Camera2->scroll->y * __this->scrollFactor->y));
					HX_STACK_LINE(926)
					point;
				}
				HX_STACK_LINE(926)
				return (bool((bool((bool(((__this->_point->x + __this->width) > (int)0)) && bool((__this->_point->x < Camera1->width)))) && bool(((__this->_point->y + __this->height) > (int)0)))) && bool((__this->_point->y < Camera1->height)));
			}
			return null();
		}
	};
	HX_STACK_LINE(925)
	return _Function_1_1::Block(Camera,this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,onScreen,return )

bool FlxObject_obj::overlapsPoint( ::org::flixel::util::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxObject::overlapsPoint","org/flixel/FlxObject.hx",903);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(904)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(905)
			return (bool((bool((bool((point->x > this->x)) && bool((point->x < (this->x + this->width))))) && bool((point->y > this->y)))) && bool((point->y < (this->y + this->height))));
		}
		HX_STACK_LINE(909)
		if (((Camera == null()))){
			HX_STACK_LINE(910)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(913)
		Float X = (point->x - Camera->scroll->x);		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(914)
		Float Y = (point->y - Camera->scroll->y);		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(915)
		{
			HX_STACK_LINE(915)
			::org::flixel::util::FlxPoint point1 = this->_point;		HX_STACK_VAR(point1,"point1");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(915)
			if (((point1 == null()))){
				HX_STACK_LINE(915)
				point1 = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(915)
			if (((Camera1 == null()))){
				HX_STACK_LINE(915)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(915)
			point1->x = (this->x - (Camera1->scroll->x * this->scrollFactor->x));
			HX_STACK_LINE(915)
			point1->y = (this->y - (Camera1->scroll->y * this->scrollFactor->y));
			HX_STACK_LINE(915)
			point1;
		}
		HX_STACK_LINE(916)
		return (bool((bool((bool((X > this->_point->x)) && bool((X < (this->_point->x + this->width))))) && bool((Y > this->_point->y)))) && bool((Y < (this->_point->y + this->height))));
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::overlapsAt( Float X,Float Y,::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxObject::overlapsAt","org/flixel/FlxObject.hx",847);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(848)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxTypedGroup >()))){
			HX_STACK_LINE(850)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(851)
			::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(852)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(853)
			::org::flixel::FlxTypedGroup grp = ObjectOrGroup;		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(854)
			Array< ::Dynamic > members = grp->members;		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(855)
			while(((i < ::Std_obj::_int(grp->length)))){
				HX_STACK_LINE(857)
				basic = members->__get((i)++).StaticCast< ::org::flixel::FlxBasic >();
				HX_STACK_LINE(858)
				if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(this->overlapsAt(X,Y,basic,InScreenSpace,Camera))))){
					HX_STACK_LINE(860)
					results = true;
					HX_STACK_LINE(861)
					break;
				}
			}
			HX_STACK_LINE(864)
			return results;
		}
		HX_STACK_LINE(867)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
			HX_STACK_LINE(873)
			::org::flixel::FlxTilemap tilemap = hx::TCast< org::flixel::FlxTilemap >::cast(ObjectOrGroup);		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(874)
			return tilemap->overlapsAt((tilemap->x - ((X - this->x))),(tilemap->y - ((Y - this->y))),hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
		}
		HX_STACK_LINE(877)
		::org::flixel::FlxObject object = hx::TCast< org::flixel::FlxObject >::cast(ObjectOrGroup);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(878)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(879)
			return (bool((bool((bool(((object->x + object->width) > X)) && bool((object->x < (X + this->width))))) && bool(((object->y + object->height) > Y)))) && bool((object->y < (Y + this->height))));
		}
		HX_STACK_LINE(884)
		if (((Camera == null()))){
			HX_STACK_LINE(885)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		struct _Function_1_1{
			inline static ::org::flixel::util::FlxPoint Block( ::org::flixel::FlxCamera &Camera,::org::flixel::FlxObject &object){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",888);
				{
					HX_STACK_LINE(888)
					::org::flixel::util::FlxPoint point = null();		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
					HX_STACK_LINE(888)
					if (((point == null()))){
						HX_STACK_LINE(888)
						point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(888)
					if (((Camera1 == null()))){
						HX_STACK_LINE(888)
						Camera1 = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(888)
					point->x = (object->x - (Camera1->scroll->x * object->scrollFactor->x));
					HX_STACK_LINE(888)
					point->y = (object->y - (Camera1->scroll->y * object->scrollFactor->y));
					HX_STACK_LINE(888)
					return point;
				}
				return null();
			}
		};
		HX_STACK_LINE(888)
		::org::flixel::util::FlxPoint objectScreenPos = _Function_1_1::Block(Camera,object);		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(889)
		this->_point->x = (X - (Camera->scroll->x * this->scrollFactor->x));
		HX_STACK_LINE(890)
		this->_point->y = (Y - (Camera->scroll->y * this->scrollFactor->y));
		HX_STACK_LINE(891)
		return (bool((bool((bool(((objectScreenPos->x + object->width) > this->_point->x)) && bool((objectScreenPos->x < (this->_point->x + this->width))))) && bool(((objectScreenPos->y + object->height) > this->_point->y)))) && bool((objectScreenPos->y < (this->_point->y + this->height))));
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlaps( ::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxObject::overlaps","org/flixel/FlxObject.hx",791);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(792)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxTypedGroup >()))){
			HX_STACK_LINE(794)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(795)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(796)
			::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(797)
			::org::flixel::FlxTypedGroup grp = ObjectOrGroup;		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(798)
			Array< ::Dynamic > members = grp->members;		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(799)
			while(((i < grp->length))){
				HX_STACK_LINE(801)
				basic = members->__get((i)++).StaticCast< ::org::flixel::FlxBasic >();
				HX_STACK_LINE(802)
				if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(this->overlaps(basic,InScreenSpace,Camera))))){
					HX_STACK_LINE(804)
					results = true;
					HX_STACK_LINE(805)
					break;
				}
			}
			HX_STACK_LINE(808)
			return results;
		}
		HX_STACK_LINE(811)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
			HX_STACK_LINE(812)
			return (hx::TCast< org::flixel::FlxTilemap >::cast(ObjectOrGroup))->overlaps(hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
		}
		HX_STACK_LINE(818)
		::org::flixel::FlxObject object = hx::TCast< org::flixel::FlxObject >::cast(ObjectOrGroup);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(819)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(820)
			return (bool((bool((bool(((object->x + object->width) > this->x)) && bool((object->x < (this->x + this->width))))) && bool(((object->y + object->height) > this->y)))) && bool((object->y < (this->y + this->height))));
		}
		HX_STACK_LINE(825)
		if (((Camera == null()))){
			HX_STACK_LINE(826)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		struct _Function_1_1{
			inline static ::org::flixel::util::FlxPoint Block( ::org::flixel::FlxCamera &Camera,::org::flixel::FlxObject &object){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",829);
				{
					HX_STACK_LINE(829)
					::org::flixel::util::FlxPoint point = null();		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
					HX_STACK_LINE(829)
					if (((point == null()))){
						HX_STACK_LINE(829)
						point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(829)
					if (((Camera1 == null()))){
						HX_STACK_LINE(829)
						Camera1 = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(829)
					point->x = (object->x - (Camera1->scroll->x * object->scrollFactor->x));
					HX_STACK_LINE(829)
					point->y = (object->y - (Camera1->scroll->y * object->scrollFactor->y));
					HX_STACK_LINE(829)
					return point;
				}
				return null();
			}
		};
		HX_STACK_LINE(829)
		::org::flixel::util::FlxPoint objectScreenPos = _Function_1_1::Block(Camera,object);		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(830)
		{
			HX_STACK_LINE(830)
			::org::flixel::util::FlxPoint point = this->_point;		HX_STACK_VAR(point,"point");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(830)
			if (((point == null()))){
				HX_STACK_LINE(830)
				point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(830)
			if (((Camera1 == null()))){
				HX_STACK_LINE(830)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(830)
			point->x = (this->x - (Camera1->scroll->x * this->scrollFactor->x));
			HX_STACK_LINE(830)
			point->y = (this->y - (Camera1->scroll->y * this->scrollFactor->y));
			HX_STACK_LINE(830)
			point;
		}
		HX_STACK_LINE(831)
		return (bool((bool((bool(((objectScreenPos->x + object->width) > this->_point->x)) && bool((objectScreenPos->x < (this->_point->x + this->width))))) && bool(((objectScreenPos->y + object->height) > this->_point->y)))) && bool((objectScreenPos->y < (this->_point->y + this->height))));
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

Void FlxObject_obj::updatePathMotion( ){
{
		HX_STACK_PUSH("FlxObject::updatePathMotion","org/flixel/FlxObject.hx",683);
		HX_STACK_THIS(this);
		HX_STACK_LINE(685)
		this->_point->x = this->x;
		HX_STACK_LINE(686)
		this->_point->y = this->y;
		HX_STACK_LINE(687)
		if ((this->pathAutoCenter)){
			HX_STACK_LINE(689)
			hx::AddEq(this->_point->x,(this->width * 0.5));
			HX_STACK_LINE(690)
			hx::AddEq(this->_point->y,(this->height * 0.5));
		}
		HX_STACK_LINE(692)
		::org::flixel::util::FlxPoint node = this->path->nodes->__get(this->_pathNodeIndex).StaticCast< ::org::flixel::util::FlxPoint >();		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(693)
		Float deltaX = (node->x - this->_point->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(694)
		Float deltaY = (node->y - this->_point->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(696)
		bool horizontalOnly = (((int(this->_pathMode) & int((int)65536))) > (int)0);		HX_STACK_VAR(horizontalOnly,"horizontalOnly");
		HX_STACK_LINE(697)
		bool verticalOnly = (((int(this->_pathMode) & int((int)1048576))) > (int)0);		HX_STACK_VAR(verticalOnly,"verticalOnly");
		HX_STACK_LINE(699)
		if ((horizontalOnly)){
			HX_STACK_LINE(700)
			if (((((  (((deltaX > (int)0))) ? Float(deltaX) : Float(-(deltaX)) )) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
				HX_STACK_LINE(702)
				node = this->advancePath(null());
			}
		}
		else{
			HX_STACK_LINE(706)
			if ((verticalOnly)){
				HX_STACK_LINE(707)
				if (((((  (((deltaY > (int)0))) ? Float(deltaY) : Float(-(deltaY)) )) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
					HX_STACK_LINE(709)
					node = this->advancePath(null());
				}
			}
			else{
				HX_STACK_LINE(714)
				if (((::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY))) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
					HX_STACK_LINE(716)
					node = this->advancePath(null());
				}
			}
		}
		HX_STACK_LINE(722)
		if (((this->pathSpeed != (int)0))){
			HX_STACK_LINE(725)
			this->_point->x = this->x;
			HX_STACK_LINE(726)
			this->_point->y = this->y;
			HX_STACK_LINE(727)
			if ((this->pathAutoCenter)){
				HX_STACK_LINE(729)
				hx::AddEq(this->_point->x,(this->width * 0.5));
				HX_STACK_LINE(730)
				hx::AddEq(this->_point->y,(this->height * 0.5));
			}
			HX_STACK_LINE(733)
			if (((bool(horizontalOnly) || bool((this->_point->y == node->y))))){
				HX_STACK_LINE(735)
				this->velocity->x = (  (((this->_point->x < node->x))) ? Float(this->pathSpeed) : Float(-(this->pathSpeed)) );
				HX_STACK_LINE(736)
				if (((this->velocity->x < (int)0))){
					HX_STACK_LINE(737)
					this->pathAngle = (int)-90;
				}
				else{
					HX_STACK_LINE(741)
					this->pathAngle = (int)90;
				}
				HX_STACK_LINE(744)
				if ((!(horizontalOnly))){
					HX_STACK_LINE(745)
					this->velocity->y = (int)0;
				}
			}
			else{
				HX_STACK_LINE(749)
				if (((bool(verticalOnly) || bool((this->_point->x == node->x))))){
					HX_STACK_LINE(751)
					this->velocity->y = (  (((this->_point->y < node->y))) ? Float(this->pathSpeed) : Float(-(this->pathSpeed)) );
					HX_STACK_LINE(752)
					if (((this->velocity->y < (int)0))){
						HX_STACK_LINE(753)
						this->pathAngle = (int)0;
					}
					else{
						HX_STACK_LINE(757)
						this->pathAngle = (int)180;
					}
					HX_STACK_LINE(760)
					if ((!(verticalOnly))){
						HX_STACK_LINE(761)
						this->velocity->x = (int)0;
					}
				}
				else{
					struct _Function_4_1{
						inline static Float Block( ::org::flixel::FlxObject_obj *__this,::org::flixel::util::FlxPoint &node){
							HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",767);
							{
								HX_STACK_LINE(767)
								::org::flixel::util::FlxPoint Point1 = __this->_point;		HX_STACK_VAR(Point1,"Point1");
								HX_STACK_LINE(767)
								Float x = (node->x - Point1->x);		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(767)
								Float y = (node->y - Point1->y);		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(767)
								Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
								HX_STACK_LINE(767)
								if (((bool((x != (int)0)) || bool((y != (int)0))))){
									HX_STACK_LINE(767)
									Float c1 = 0.7853981625;		HX_STACK_VAR(c1,"c1");
									HX_STACK_LINE(767)
									Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
									HX_STACK_LINE(767)
									Float ay = (  (((y < (int)0))) ? Float(-(y)) : Float(y) );		HX_STACK_VAR(ay,"ay");
									HX_STACK_LINE(767)
									if (((x >= (int)0))){
										HX_STACK_LINE(767)
										angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
									}
									else{
										HX_STACK_LINE(767)
										angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
									}
									HX_STACK_LINE(767)
									angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * 57.2957796);
									HX_STACK_LINE(767)
									if (((angle > (int)90))){
										HX_STACK_LINE(767)
										angle = (angle - (int)270);
									}
									else{
										HX_STACK_LINE(767)
										hx::AddEq(angle,(int)90);
									}
								}
								HX_STACK_LINE(767)
								return angle;
							}
							return null();
						}
					};
					HX_STACK_LINE(767)
					this->pathAngle = _Function_4_1::Block(this,node);
					HX_STACK_LINE(768)
					{
						HX_STACK_LINE(768)
						::org::flixel::util::FlxPoint point = this->velocity;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(768)
						Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
						HX_STACK_LINE(768)
						Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
						HX_STACK_LINE(768)
						Float radians = (this->pathAngle * -0.017453293);		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(768)
						while(((radians < -3.14159265))){
							HX_STACK_LINE(768)
							hx::AddEq(radians,6.28318531);
						}
						HX_STACK_LINE(768)
						while(((radians > 3.14159265))){
							HX_STACK_LINE(768)
							radians = (radians - 6.28318531);
						}
						HX_STACK_LINE(768)
						if (((radians < (int)0))){
							HX_STACK_LINE(768)
							sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
							HX_STACK_LINE(768)
							if (((sin < (int)0))){
								HX_STACK_LINE(768)
								sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
							}
							else{
								HX_STACK_LINE(768)
								sin = ((.225 * (((sin * sin) - sin))) + sin);
							}
						}
						else{
							HX_STACK_LINE(768)
							sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
							HX_STACK_LINE(768)
							if (((sin < (int)0))){
								HX_STACK_LINE(768)
								sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
							}
							else{
								HX_STACK_LINE(768)
								sin = ((.225 * (((sin * sin) - sin))) + sin);
							}
						}
						HX_STACK_LINE(768)
						hx::AddEq(radians,1.57079632);
						HX_STACK_LINE(768)
						if (((radians > 3.14159265))){
							HX_STACK_LINE(768)
							radians = (radians - 6.28318531);
						}
						HX_STACK_LINE(768)
						if (((radians < (int)0))){
							HX_STACK_LINE(768)
							cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
							HX_STACK_LINE(768)
							if (((cos < (int)0))){
								HX_STACK_LINE(768)
								cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
							}
							else{
								HX_STACK_LINE(768)
								cos = ((.225 * (((cos * cos) - cos))) + cos);
							}
						}
						else{
							HX_STACK_LINE(768)
							cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
							HX_STACK_LINE(768)
							if (((cos < (int)0))){
								HX_STACK_LINE(768)
								cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
							}
							else{
								HX_STACK_LINE(768)
								cos = ((.225 * (((cos * cos) - cos))) + cos);
							}
						}
						HX_STACK_LINE(768)
						Float dx = (int)0;		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(768)
						Float dy = this->pathSpeed;		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(768)
						if (((point == null()))){
							HX_STACK_LINE(768)
							point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
						}
						HX_STACK_LINE(768)
						point->x = ((cos * dx) - (sin * dy));
						HX_STACK_LINE(768)
						point->y = (((int)0 - (sin * dx)) - (cos * dy));
						HX_STACK_LINE(768)
						point;
					}
				}
			}
			HX_STACK_LINE(772)
			if ((this->_pathRotate)){
				HX_STACK_LINE(774)
				this->angularVelocity = (int)0;
				HX_STACK_LINE(775)
				this->angularAcceleration = (int)0;
				HX_STACK_LINE(776)
				this->angle = this->pathAngle;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,updatePathMotion,(void))

::org::flixel::util::FlxPoint FlxObject_obj::advancePath( hx::Null< bool >  __o_Snap){
bool Snap = __o_Snap.Default(true);
	HX_STACK_PUSH("FlxObject::advancePath","org/flixel/FlxObject.hx",587);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Snap,"Snap");
{
		HX_STACK_LINE(588)
		if ((Snap)){
			HX_STACK_LINE(590)
			::org::flixel::util::FlxPoint oldNode = this->path->nodes->__get(this->_pathNodeIndex).StaticCast< ::org::flixel::util::FlxPoint >();		HX_STACK_VAR(oldNode,"oldNode");
			HX_STACK_LINE(591)
			if (((oldNode != null()))){
				HX_STACK_LINE(593)
				if (((((int(this->_pathMode) & int((int)1048576))) == (int)0))){
					HX_STACK_LINE(595)
					this->x = oldNode->x;
					HX_STACK_LINE(596)
					if ((this->pathAutoCenter)){
						HX_STACK_LINE(597)
						hx::SubEq(this->x,(this->width * 0.5));
					}
				}
				HX_STACK_LINE(599)
				if (((((int(this->_pathMode) & int((int)65536))) == (int)0))){
					HX_STACK_LINE(601)
					this->y = oldNode->y;
					HX_STACK_LINE(602)
					if ((this->pathAutoCenter)){
						HX_STACK_LINE(603)
						hx::SubEq(this->y,(this->height * 0.5));
					}
				}
			}
		}
		HX_STACK_LINE(608)
		hx::AddEq(this->_pathNodeIndex,this->_pathInc);
		HX_STACK_LINE(610)
		if (((((int(this->_pathMode) & int((int)1))) > (int)0))){
			HX_STACK_LINE(611)
			if (((this->_pathNodeIndex < (int)0))){
				HX_STACK_LINE(614)
				this->_pathNodeIndex = (int)0;
				HX_STACK_LINE(615)
				this->stopFollowingPath(false);
			}
		}
		else{
			HX_STACK_LINE(618)
			if (((((int(this->_pathMode) & int((int)16))) > (int)0))){
				HX_STACK_LINE(619)
				if (((this->_pathNodeIndex >= this->path->nodes->length))){
					HX_STACK_LINE(621)
					this->_pathNodeIndex = (int)0;
				}
			}
			else{
				HX_STACK_LINE(625)
				if (((((int(this->_pathMode) & int((int)256))) > (int)0))){
					HX_STACK_LINE(626)
					if (((this->_pathNodeIndex < (int)0))){
						HX_STACK_LINE(629)
						this->_pathNodeIndex = (this->path->nodes->length - (int)1);
						HX_STACK_LINE(630)
						if (((this->_pathNodeIndex < (int)0))){
							HX_STACK_LINE(631)
							this->_pathNodeIndex = (int)0;
						}
					}
				}
				else{
					HX_STACK_LINE(636)
					if (((((int(this->_pathMode) & int((int)4096))) > (int)0))){
						HX_STACK_LINE(637)
						if (((this->_pathInc > (int)0))){
							HX_STACK_LINE(639)
							if (((this->_pathNodeIndex >= this->path->nodes->length))){
								HX_STACK_LINE(642)
								this->_pathNodeIndex = (this->path->nodes->length - (int)2);
								HX_STACK_LINE(643)
								if (((this->_pathNodeIndex < (int)0))){
									HX_STACK_LINE(644)
									this->_pathNodeIndex = (int)0;
								}
								HX_STACK_LINE(647)
								this->_pathInc = -(this->_pathInc);
							}
						}
						else{
							HX_STACK_LINE(650)
							if (((this->_pathNodeIndex < (int)0))){
								HX_STACK_LINE(652)
								this->_pathNodeIndex = (int)1;
								HX_STACK_LINE(653)
								if (((this->_pathNodeIndex >= this->path->nodes->length))){
									HX_STACK_LINE(654)
									this->_pathNodeIndex = (this->path->nodes->length - (int)1);
								}
								HX_STACK_LINE(657)
								if (((this->_pathNodeIndex < (int)0))){
									HX_STACK_LINE(658)
									this->_pathNodeIndex = (int)0;
								}
								HX_STACK_LINE(661)
								this->_pathInc = -(this->_pathInc);
							}
						}
					}
					else{
						HX_STACK_LINE(665)
						if (((this->_pathNodeIndex >= this->path->nodes->length))){
							HX_STACK_LINE(668)
							this->_pathNodeIndex = (this->path->nodes->length - (int)1);
							HX_STACK_LINE(669)
							this->stopFollowingPath(false);
						}
					}
				}
			}
		}
		HX_STACK_LINE(673)
		return this->path->nodes->__get(this->_pathNodeIndex).StaticCast< ::org::flixel::util::FlxPoint >();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,advancePath,return )

Void FlxObject_obj::setPathNode( int NodeIndex){
{
		HX_STACK_PUSH("FlxObject::setPathNode","org/flixel/FlxObject.hx",569);
		HX_STACK_THIS(this);
		HX_STACK_ARG(NodeIndex,"NodeIndex");
		HX_STACK_LINE(570)
		if (((this->path == null()))){
			HX_STACK_LINE(571)
			return null();
		}
		HX_STACK_LINE(573)
		if (((NodeIndex < (int)0))){
			HX_STACK_LINE(574)
			NodeIndex = (int)0;
		}
		else{
			HX_STACK_LINE(575)
			if (((NodeIndex > (this->path->nodes->length - (int)1)))){
				HX_STACK_LINE(576)
				NodeIndex = (this->path->nodes->length - (int)1);
			}
		}
		HX_STACK_LINE(578)
		this->_pathNodeIndex = NodeIndex;
		HX_STACK_LINE(579)
		this->advancePath(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,setPathNode,(void))

Void FlxObject_obj::stopFollowingPath( hx::Null< bool >  __o_DestroyPath){
bool DestroyPath = __o_DestroyPath.Default(false);
	HX_STACK_PUSH("FlxObject::stopFollowingPath","org/flixel/FlxObject.hx",552);
	HX_STACK_THIS(this);
	HX_STACK_ARG(DestroyPath,"DestroyPath");
{
		HX_STACK_LINE(553)
		this->pathSpeed = (int)0;
		HX_STACK_LINE(554)
		this->velocity->x = (int)0;
		HX_STACK_LINE(555)
		this->velocity->y = (int)0;
		HX_STACK_LINE(557)
		if (((bool(DestroyPath) && bool((this->path != null()))))){
			HX_STACK_LINE(559)
			this->path->destroy();
			HX_STACK_LINE(560)
			this->path = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,stopFollowingPath,(void))

Void FlxObject_obj::followPath( ::org::flixel::FlxPath Path,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate){
Float Speed = __o_Speed.Default(100);
int Mode = __o_Mode.Default(0);
bool AutoRotate = __o_AutoRotate.Default(false);
	HX_STACK_PUSH("FlxObject::followPath","org/flixel/FlxObject.hx",522);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Path,"Path");
	HX_STACK_ARG(Speed,"Speed");
	HX_STACK_ARG(Mode,"Mode");
	HX_STACK_ARG(AutoRotate,"AutoRotate");
{
		HX_STACK_LINE(523)
		if (((Path->nodes->length <= (int)0))){
			HX_STACK_LINE(525)
			::org::flixel::FlxG_obj::warn(HX_CSTRING("Paths need at least one node in them to be followed."));
			HX_STACK_LINE(526)
			return null();
		}
		HX_STACK_LINE(529)
		this->path = Path;
		HX_STACK_LINE(530)
		this->pathSpeed = ::Math_obj::abs(Speed);
		HX_STACK_LINE(531)
		this->_pathMode = Mode;
		HX_STACK_LINE(532)
		this->_pathRotate = AutoRotate;
		HX_STACK_LINE(535)
		if (((bool((this->_pathMode == (int)1)) || bool((this->_pathMode == (int)256))))){
			HX_STACK_LINE(537)
			this->_pathNodeIndex = (this->path->nodes->length - (int)1);
			HX_STACK_LINE(538)
			this->_pathInc = (int)-1;
		}
		else{
			HX_STACK_LINE(542)
			this->_pathNodeIndex = (int)0;
			HX_STACK_LINE(543)
			this->_pathInc = (int)1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxObject_obj,followPath,(void))

Void FlxObject_obj::drawDebugOnCamera( ::org::flixel::FlxCamera Camera){
{
		HX_STACK_PUSH("FlxObject::drawDebugOnCamera","org/flixel/FlxObject.hx",453);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Camera,"Camera");
		HX_STACK_LINE(454)
		if (((Camera == null()))){
			HX_STACK_LINE(455)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		struct _Function_1_1{
			inline static bool Block( ::org::flixel::FlxCamera &Camera,::org::flixel::FlxObject_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",459);
				{
					HX_STACK_LINE(459)
					::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
					HX_STACK_LINE(459)
					if (((Camera1 == null()))){
						HX_STACK_LINE(459)
						Camera1 = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(459)
					{
						HX_STACK_LINE(459)
						::org::flixel::util::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
						::org::flixel::FlxCamera Camera2 = Camera1;		HX_STACK_VAR(Camera2,"Camera2");
						HX_STACK_LINE(459)
						if (((point == null()))){
							HX_STACK_LINE(459)
							point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
						}
						HX_STACK_LINE(459)
						if (((Camera2 == null()))){
							HX_STACK_LINE(459)
							Camera2 = ::org::flixel::FlxG_obj::camera;
						}
						HX_STACK_LINE(459)
						point->x = (__this->x - (Camera2->scroll->x * __this->scrollFactor->x));
						HX_STACK_LINE(459)
						point->y = (__this->y - (Camera2->scroll->y * __this->scrollFactor->y));
						HX_STACK_LINE(459)
						point;
					}
					HX_STACK_LINE(459)
					return (bool((bool((bool(((__this->_point->x + __this->width) > (int)0)) && bool((__this->_point->x < Camera1->width)))) && bool(((__this->_point->y + __this->height) > (int)0)))) && bool((__this->_point->y < Camera1->height)));
				}
				return null();
			}
		};
		HX_STACK_LINE(459)
		if (((bool((bool(!(_Function_1_1::Block(Camera,this))) || bool(!(Camera->visible)))) || bool(!(Camera->exists))))){
			HX_STACK_LINE(460)
			return null();
		}
		HX_STACK_LINE(465)
		Float boundingBoxX = (this->x - (Camera->scroll->x * this->scrollFactor->x));		HX_STACK_VAR(boundingBoxX,"boundingBoxX");
		HX_STACK_LINE(466)
		Float boundingBoxY = (this->y - (Camera->scroll->y * this->scrollFactor->y));		HX_STACK_VAR(boundingBoxY,"boundingBoxY");
		HX_STACK_LINE(472)
		if (((bool((this->allowCollisions != (int)0)) && bool(!(this->_boundingBoxColorOverritten))))){
			HX_STACK_LINE(474)
			if (((this->allowCollisions != (int)4369))){
				HX_STACK_LINE(475)
				this->set_debugBoundingBoxColor((int)-16181);
			}
			HX_STACK_LINE(478)
			if ((this->immovable)){
				HX_STACK_LINE(479)
				this->set_debugBoundingBoxColor((int)-16744448);
			}
			else{
				HX_STACK_LINE(483)
				this->set_debugBoundingBoxColor((int)-65536);
			}
		}
		else{
			HX_STACK_LINE(487)
			if ((!(this->_boundingBoxColorOverritten))){
				HX_STACK_LINE(488)
				this->set_debugBoundingBoxColor((int)-16776961);
			}
		}
		HX_STACK_LINE(505)
		::flash::display::Graphics gfx = Camera->_debugLayer->get_graphics();		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(506)
		gfx->lineStyle((int)1,this->debugBoundingBoxColor,0.5,null(),null(),null(),null(),null());
		HX_STACK_LINE(507)
		gfx->drawRect(boundingBoxX,boundingBoxY,this->width,this->height);
	}
return null();
}


Void FlxObject_obj::draw( ){
{
		HX_STACK_PUSH("FlxObject::draw","org/flixel/FlxObject.hx",426);
		HX_STACK_THIS(this);
		HX_STACK_LINE(427)
		if (((this->cameras == null()))){
			HX_STACK_LINE(428)
			this->cameras = ::org::flixel::FlxG_obj::cameras;
		}
		HX_STACK_LINE(431)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(432)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(433)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(434)
		while(((i < l))){
			HX_STACK_LINE(436)
			camera = this->cameras->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
			struct _Function_2_1{
				inline static bool Block( ::org::flixel::FlxCamera &camera,::org::flixel::FlxObject_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",437);
					{
						HX_STACK_LINE(437)
						::org::flixel::FlxCamera Camera = camera;		HX_STACK_VAR(Camera,"Camera");
						HX_STACK_LINE(437)
						if (((Camera == null()))){
							HX_STACK_LINE(437)
							Camera = ::org::flixel::FlxG_obj::camera;
						}
						HX_STACK_LINE(437)
						{
							HX_STACK_LINE(437)
							::org::flixel::util::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
							::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
							HX_STACK_LINE(437)
							if (((point == null()))){
								HX_STACK_LINE(437)
								point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
							}
							HX_STACK_LINE(437)
							if (((Camera1 == null()))){
								HX_STACK_LINE(437)
								Camera1 = ::org::flixel::FlxG_obj::camera;
							}
							HX_STACK_LINE(437)
							point->x = (__this->x - (Camera1->scroll->x * __this->scrollFactor->x));
							HX_STACK_LINE(437)
							point->y = (__this->y - (Camera1->scroll->y * __this->scrollFactor->y));
							HX_STACK_LINE(437)
							point;
						}
						HX_STACK_LINE(437)
						return (bool((bool((bool(((__this->_point->x + __this->width) > (int)0)) && bool((__this->_point->x < Camera->width)))) && bool(((__this->_point->y + __this->height) > (int)0)))) && bool((__this->_point->y < Camera->height)));
					}
					return null();
				}
			};
			HX_STACK_LINE(437)
			if (((bool((bool(!(_Function_2_1::Block(camera,this))) || bool(!(camera->visible)))) || bool(!(camera->exists))))){
				HX_STACK_LINE(438)
				continue;
			}
			HX_STACK_LINE(441)
			(::org::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
		}
	}
return null();
}


Void FlxObject_obj::updateMotion( ){
{
		HX_STACK_PUSH("FlxObject::updateMotion","org/flixel/FlxObject.hx",398);
		HX_STACK_THIS(this);
		HX_STACK_LINE(399)
		Float delta;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(400)
		Float velocityDelta;		HX_STACK_VAR(velocityDelta,"velocityDelta");
		HX_STACK_LINE(402)
		Float dt = ::org::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(dt,"dt");
		struct _Function_1_1{
			inline static Float Block( ::org::flixel::FlxObject_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",404);
				{
					HX_STACK_LINE(404)
					Float Velocity = __this->angularVelocity;		HX_STACK_VAR(Velocity,"Velocity");
					Float Acceleration = __this->angularAcceleration;		HX_STACK_VAR(Acceleration,"Acceleration");
					Float Drag = __this->angularDrag;		HX_STACK_VAR(Drag,"Drag");
					Float Max = __this->maxAngular;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(404)
					if (((Acceleration != (int)0))){
						HX_STACK_LINE(404)
						hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
					}
					else{
						HX_STACK_LINE(404)
						if (((Drag != (int)0))){
							HX_STACK_LINE(404)
							Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
							HX_STACK_LINE(404)
							if ((((Velocity - drag) > (int)0))){
								HX_STACK_LINE(404)
								Velocity = (Velocity - drag);
							}
							else{
								HX_STACK_LINE(404)
								if ((((Velocity + drag) < (int)0))){
									HX_STACK_LINE(404)
									hx::AddEq(Velocity,drag);
								}
								else{
									HX_STACK_LINE(404)
									Velocity = (int)0;
								}
							}
						}
					}
					HX_STACK_LINE(404)
					if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
						HX_STACK_LINE(404)
						if (((Velocity > Max))){
							HX_STACK_LINE(404)
							Velocity = Max;
						}
						else{
							HX_STACK_LINE(404)
							if (((Velocity < -(Max)))){
								HX_STACK_LINE(404)
								Velocity = -(Max);
							}
						}
					}
					HX_STACK_LINE(404)
					return Velocity;
				}
				return null();
			}
		};
		HX_STACK_LINE(404)
		velocityDelta = (0.5 * ((_Function_1_1::Block(this) - this->angularVelocity)));
		HX_STACK_LINE(405)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(406)
		hx::AddEq(this->angle,(this->angularVelocity * dt));
		HX_STACK_LINE(407)
		hx::AddEq(this->angularVelocity,velocityDelta);
		struct _Function_1_2{
			inline static Float Block( ::org::flixel::FlxObject_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",409);
				{
					HX_STACK_LINE(409)
					Float Velocity = __this->velocity->x;		HX_STACK_VAR(Velocity,"Velocity");
					Float Acceleration = __this->acceleration->x;		HX_STACK_VAR(Acceleration,"Acceleration");
					Float Drag = __this->drag->x;		HX_STACK_VAR(Drag,"Drag");
					Float Max = __this->maxVelocity->x;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(409)
					if (((Acceleration != (int)0))){
						HX_STACK_LINE(409)
						hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
					}
					else{
						HX_STACK_LINE(409)
						if (((Drag != (int)0))){
							HX_STACK_LINE(409)
							Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
							HX_STACK_LINE(409)
							if ((((Velocity - drag) > (int)0))){
								HX_STACK_LINE(409)
								Velocity = (Velocity - drag);
							}
							else{
								HX_STACK_LINE(409)
								if ((((Velocity + drag) < (int)0))){
									HX_STACK_LINE(409)
									hx::AddEq(Velocity,drag);
								}
								else{
									HX_STACK_LINE(409)
									Velocity = (int)0;
								}
							}
						}
					}
					HX_STACK_LINE(409)
					if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
						HX_STACK_LINE(409)
						if (((Velocity > Max))){
							HX_STACK_LINE(409)
							Velocity = Max;
						}
						else{
							HX_STACK_LINE(409)
							if (((Velocity < -(Max)))){
								HX_STACK_LINE(409)
								Velocity = -(Max);
							}
						}
					}
					HX_STACK_LINE(409)
					return Velocity;
				}
				return null();
			}
		};
		HX_STACK_LINE(409)
		velocityDelta = (0.5 * ((_Function_1_2::Block(this) - this->velocity->x)));
		HX_STACK_LINE(410)
		hx::AddEq(this->velocity->x,velocityDelta);
		HX_STACK_LINE(411)
		delta = (this->velocity->x * dt);
		HX_STACK_LINE(412)
		hx::AddEq(this->velocity->x,velocityDelta);
		HX_STACK_LINE(413)
		hx::AddEq(this->x,delta);
		struct _Function_1_3{
			inline static Float Block( ::org::flixel::FlxObject_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",415);
				{
					HX_STACK_LINE(415)
					Float Velocity = __this->velocity->y;		HX_STACK_VAR(Velocity,"Velocity");
					Float Acceleration = __this->acceleration->y;		HX_STACK_VAR(Acceleration,"Acceleration");
					Float Drag = __this->drag->y;		HX_STACK_VAR(Drag,"Drag");
					Float Max = __this->maxVelocity->y;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(415)
					if (((Acceleration != (int)0))){
						HX_STACK_LINE(415)
						hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
					}
					else{
						HX_STACK_LINE(415)
						if (((Drag != (int)0))){
							HX_STACK_LINE(415)
							Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
							HX_STACK_LINE(415)
							if ((((Velocity - drag) > (int)0))){
								HX_STACK_LINE(415)
								Velocity = (Velocity - drag);
							}
							else{
								HX_STACK_LINE(415)
								if ((((Velocity + drag) < (int)0))){
									HX_STACK_LINE(415)
									hx::AddEq(Velocity,drag);
								}
								else{
									HX_STACK_LINE(415)
									Velocity = (int)0;
								}
							}
						}
					}
					HX_STACK_LINE(415)
					if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
						HX_STACK_LINE(415)
						if (((Velocity > Max))){
							HX_STACK_LINE(415)
							Velocity = Max;
						}
						else{
							HX_STACK_LINE(415)
							if (((Velocity < -(Max)))){
								HX_STACK_LINE(415)
								Velocity = -(Max);
							}
						}
					}
					HX_STACK_LINE(415)
					return Velocity;
				}
				return null();
			}
		};
		HX_STACK_LINE(415)
		velocityDelta = (0.5 * ((_Function_1_3::Block(this) - this->velocity->y)));
		HX_STACK_LINE(416)
		hx::AddEq(this->velocity->y,velocityDelta);
		HX_STACK_LINE(417)
		delta = (this->velocity->y * dt);
		HX_STACK_LINE(418)
		hx::AddEq(this->velocity->y,velocityDelta);
		HX_STACK_LINE(419)
		hx::AddEq(this->y,delta);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,updateMotion,(void))

Void FlxObject_obj::update( ){
{
		HX_STACK_PUSH("FlxObject::update","org/flixel/FlxObject.hx",362);
		HX_STACK_THIS(this);
		HX_STACK_LINE(363)
		(::org::flixel::FlxBasic_obj::_ACTIVECOUNT)++;
		HX_STACK_LINE(365)
		if (((this->_flickerTimer > (int)0))){
			HX_STACK_LINE(367)
			hx::SubEq(this->_flickerTimer,::org::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(368)
			if (((this->_flickerTimer <= (int)0))){
				HX_STACK_LINE(370)
				this->_flickerTimer = (int)0;
				HX_STACK_LINE(371)
				this->_flicker = false;
			}
		}
		HX_STACK_LINE(375)
		this->last->x = this->x;
		HX_STACK_LINE(376)
		this->last->y = this->y;
		HX_STACK_LINE(378)
		if (((bool((bool((this->path != null())) && bool((this->pathSpeed != (int)0)))) && bool((this->path->nodes->__get(this->_pathNodeIndex).StaticCast< ::org::flixel::util::FlxPoint >() != null()))))){
			HX_STACK_LINE(380)
			this->_point->x = this->x;
			HX_STACK_LINE(380)
			this->_point->y = this->y;
			HX_STACK_LINE(380)
			if ((this->pathAutoCenter)){
				HX_STACK_LINE(380)
				hx::AddEq(this->_point->x,(this->width * 0.5));
				HX_STACK_LINE(380)
				hx::AddEq(this->_point->y,(this->height * 0.5));
			}
			HX_STACK_LINE(380)
			::org::flixel::util::FlxPoint node = this->path->nodes->__get(this->_pathNodeIndex).StaticCast< ::org::flixel::util::FlxPoint >();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(380)
			Float deltaX = (node->x - this->_point->x);		HX_STACK_VAR(deltaX,"deltaX");
			HX_STACK_LINE(380)
			Float deltaY = (node->y - this->_point->y);		HX_STACK_VAR(deltaY,"deltaY");
			HX_STACK_LINE(380)
			bool horizontalOnly = (((int(this->_pathMode) & int((int)65536))) > (int)0);		HX_STACK_VAR(horizontalOnly,"horizontalOnly");
			HX_STACK_LINE(380)
			bool verticalOnly = (((int(this->_pathMode) & int((int)1048576))) > (int)0);		HX_STACK_VAR(verticalOnly,"verticalOnly");
			HX_STACK_LINE(380)
			if ((horizontalOnly)){
				HX_STACK_LINE(380)
				if (((((  (((deltaX > (int)0))) ? Float(deltaX) : Float(-(deltaX)) )) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
					HX_STACK_LINE(380)
					node = this->advancePath(null());
				}
			}
			else{
				HX_STACK_LINE(380)
				if ((verticalOnly)){
					HX_STACK_LINE(380)
					if (((((  (((deltaY > (int)0))) ? Float(deltaY) : Float(-(deltaY)) )) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
						HX_STACK_LINE(380)
						node = this->advancePath(null());
					}
				}
				else{
					HX_STACK_LINE(380)
					if (((::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY))) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
						HX_STACK_LINE(380)
						node = this->advancePath(null());
					}
				}
			}
			HX_STACK_LINE(380)
			if (((this->pathSpeed != (int)0))){
				HX_STACK_LINE(380)
				this->_point->x = this->x;
				HX_STACK_LINE(380)
				this->_point->y = this->y;
				HX_STACK_LINE(380)
				if ((this->pathAutoCenter)){
					HX_STACK_LINE(380)
					hx::AddEq(this->_point->x,(this->width * 0.5));
					HX_STACK_LINE(380)
					hx::AddEq(this->_point->y,(this->height * 0.5));
				}
				HX_STACK_LINE(380)
				if (((bool(horizontalOnly) || bool((this->_point->y == node->y))))){
					HX_STACK_LINE(380)
					this->velocity->x = (  (((this->_point->x < node->x))) ? Float(this->pathSpeed) : Float(-(this->pathSpeed)) );
					HX_STACK_LINE(380)
					if (((this->velocity->x < (int)0))){
						HX_STACK_LINE(380)
						this->pathAngle = (int)-90;
					}
					else{
						HX_STACK_LINE(380)
						this->pathAngle = (int)90;
					}
					HX_STACK_LINE(380)
					if ((!(horizontalOnly))){
						HX_STACK_LINE(380)
						this->velocity->y = (int)0;
					}
				}
				else{
					HX_STACK_LINE(380)
					if (((bool(verticalOnly) || bool((this->_point->x == node->x))))){
						HX_STACK_LINE(380)
						this->velocity->y = (  (((this->_point->y < node->y))) ? Float(this->pathSpeed) : Float(-(this->pathSpeed)) );
						HX_STACK_LINE(380)
						if (((this->velocity->y < (int)0))){
							HX_STACK_LINE(380)
							this->pathAngle = (int)0;
						}
						else{
							HX_STACK_LINE(380)
							this->pathAngle = (int)180;
						}
						HX_STACK_LINE(380)
						if ((!(verticalOnly))){
							HX_STACK_LINE(380)
							this->velocity->x = (int)0;
						}
					}
					else{
						struct _Function_5_1{
							inline static Float Block( ::org::flixel::FlxObject_obj *__this,::org::flixel::util::FlxPoint &node){
								HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",380);
								{
									HX_STACK_LINE(380)
									::org::flixel::util::FlxPoint Point1 = __this->_point;		HX_STACK_VAR(Point1,"Point1");
									HX_STACK_LINE(380)
									Float x = (node->x - Point1->x);		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(380)
									Float y = (node->y - Point1->y);		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(380)
									Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
									HX_STACK_LINE(380)
									if (((bool((x != (int)0)) || bool((y != (int)0))))){
										HX_STACK_LINE(380)
										Float c1 = 0.7853981625;		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(380)
										Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
										HX_STACK_LINE(380)
										Float ay = (  (((y < (int)0))) ? Float(-(y)) : Float(y) );		HX_STACK_VAR(ay,"ay");
										HX_STACK_LINE(380)
										if (((x >= (int)0))){
											HX_STACK_LINE(380)
											angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
										}
										else{
											HX_STACK_LINE(380)
											angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
										}
										HX_STACK_LINE(380)
										angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * 57.2957796);
										HX_STACK_LINE(380)
										if (((angle > (int)90))){
											HX_STACK_LINE(380)
											angle = (angle - (int)270);
										}
										else{
											HX_STACK_LINE(380)
											hx::AddEq(angle,(int)90);
										}
									}
									HX_STACK_LINE(380)
									return angle;
								}
								return null();
							}
						};
						HX_STACK_LINE(380)
						this->pathAngle = _Function_5_1::Block(this,node);
						HX_STACK_LINE(380)
						{
							HX_STACK_LINE(380)
							::org::flixel::util::FlxPoint point = this->velocity;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(380)
							Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
							HX_STACK_LINE(380)
							Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
							HX_STACK_LINE(380)
							Float radians = (this->pathAngle * -0.017453293);		HX_STACK_VAR(radians,"radians");
							HX_STACK_LINE(380)
							while(((radians < -3.14159265))){
								HX_STACK_LINE(380)
								hx::AddEq(radians,6.28318531);
							}
							HX_STACK_LINE(380)
							while(((radians > 3.14159265))){
								HX_STACK_LINE(380)
								radians = (radians - 6.28318531);
							}
							HX_STACK_LINE(380)
							if (((radians < (int)0))){
								HX_STACK_LINE(380)
								sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
								HX_STACK_LINE(380)
								if (((sin < (int)0))){
									HX_STACK_LINE(380)
									sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
								}
								else{
									HX_STACK_LINE(380)
									sin = ((.225 * (((sin * sin) - sin))) + sin);
								}
							}
							else{
								HX_STACK_LINE(380)
								sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
								HX_STACK_LINE(380)
								if (((sin < (int)0))){
									HX_STACK_LINE(380)
									sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
								}
								else{
									HX_STACK_LINE(380)
									sin = ((.225 * (((sin * sin) - sin))) + sin);
								}
							}
							HX_STACK_LINE(380)
							hx::AddEq(radians,1.57079632);
							HX_STACK_LINE(380)
							if (((radians > 3.14159265))){
								HX_STACK_LINE(380)
								radians = (radians - 6.28318531);
							}
							HX_STACK_LINE(380)
							if (((radians < (int)0))){
								HX_STACK_LINE(380)
								cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
								HX_STACK_LINE(380)
								if (((cos < (int)0))){
									HX_STACK_LINE(380)
									cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
								}
								else{
									HX_STACK_LINE(380)
									cos = ((.225 * (((cos * cos) - cos))) + cos);
								}
							}
							else{
								HX_STACK_LINE(380)
								cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
								HX_STACK_LINE(380)
								if (((cos < (int)0))){
									HX_STACK_LINE(380)
									cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
								}
								else{
									HX_STACK_LINE(380)
									cos = ((.225 * (((cos * cos) - cos))) + cos);
								}
							}
							HX_STACK_LINE(380)
							Float dx = (int)0;		HX_STACK_VAR(dx,"dx");
							HX_STACK_LINE(380)
							Float dy = this->pathSpeed;		HX_STACK_VAR(dy,"dy");
							HX_STACK_LINE(380)
							if (((point == null()))){
								HX_STACK_LINE(380)
								point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
							}
							HX_STACK_LINE(380)
							point->x = ((cos * dx) - (sin * dy));
							HX_STACK_LINE(380)
							point->y = (((int)0 - (sin * dx)) - (cos * dy));
							HX_STACK_LINE(380)
							point;
						}
					}
				}
				HX_STACK_LINE(380)
				if ((this->_pathRotate)){
					HX_STACK_LINE(380)
					this->angularVelocity = (int)0;
					HX_STACK_LINE(380)
					this->angularAcceleration = (int)0;
					HX_STACK_LINE(380)
					this->angle = this->pathAngle;
				}
			}
		}
		HX_STACK_LINE(383)
		if ((this->moves)){
			HX_STACK_LINE(385)
			Float delta;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(385)
			Float velocityDelta;		HX_STACK_VAR(velocityDelta,"velocityDelta");
			HX_STACK_LINE(385)
			Float dt = ::org::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(dt,"dt");
			struct _Function_2_1{
				inline static Float Block( ::org::flixel::FlxObject_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",385);
					{
						HX_STACK_LINE(385)
						Float Velocity = __this->angularVelocity;		HX_STACK_VAR(Velocity,"Velocity");
						Float Acceleration = __this->angularAcceleration;		HX_STACK_VAR(Acceleration,"Acceleration");
						Float Drag = __this->angularDrag;		HX_STACK_VAR(Drag,"Drag");
						Float Max = __this->maxAngular;		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(385)
						if (((Acceleration != (int)0))){
							HX_STACK_LINE(385)
							hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
						}
						else{
							HX_STACK_LINE(385)
							if (((Drag != (int)0))){
								HX_STACK_LINE(385)
								Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
								HX_STACK_LINE(385)
								if ((((Velocity - drag) > (int)0))){
									HX_STACK_LINE(385)
									Velocity = (Velocity - drag);
								}
								else{
									HX_STACK_LINE(385)
									if ((((Velocity + drag) < (int)0))){
										HX_STACK_LINE(385)
										hx::AddEq(Velocity,drag);
									}
									else{
										HX_STACK_LINE(385)
										Velocity = (int)0;
									}
								}
							}
						}
						HX_STACK_LINE(385)
						if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
							HX_STACK_LINE(385)
							if (((Velocity > Max))){
								HX_STACK_LINE(385)
								Velocity = Max;
							}
							else{
								HX_STACK_LINE(385)
								if (((Velocity < -(Max)))){
									HX_STACK_LINE(385)
									Velocity = -(Max);
								}
							}
						}
						HX_STACK_LINE(385)
						return Velocity;
					}
					return null();
				}
			};
			HX_STACK_LINE(385)
			velocityDelta = (0.5 * ((_Function_2_1::Block(this) - this->angularVelocity)));
			HX_STACK_LINE(385)
			hx::AddEq(this->angularVelocity,velocityDelta);
			HX_STACK_LINE(385)
			hx::AddEq(this->angle,(this->angularVelocity * dt));
			HX_STACK_LINE(385)
			hx::AddEq(this->angularVelocity,velocityDelta);
			struct _Function_2_2{
				inline static Float Block( ::org::flixel::FlxObject_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",385);
					{
						HX_STACK_LINE(385)
						Float Velocity = __this->velocity->x;		HX_STACK_VAR(Velocity,"Velocity");
						Float Acceleration = __this->acceleration->x;		HX_STACK_VAR(Acceleration,"Acceleration");
						Float Drag = __this->drag->x;		HX_STACK_VAR(Drag,"Drag");
						Float Max = __this->maxVelocity->x;		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(385)
						if (((Acceleration != (int)0))){
							HX_STACK_LINE(385)
							hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
						}
						else{
							HX_STACK_LINE(385)
							if (((Drag != (int)0))){
								HX_STACK_LINE(385)
								Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
								HX_STACK_LINE(385)
								if ((((Velocity - drag) > (int)0))){
									HX_STACK_LINE(385)
									Velocity = (Velocity - drag);
								}
								else{
									HX_STACK_LINE(385)
									if ((((Velocity + drag) < (int)0))){
										HX_STACK_LINE(385)
										hx::AddEq(Velocity,drag);
									}
									else{
										HX_STACK_LINE(385)
										Velocity = (int)0;
									}
								}
							}
						}
						HX_STACK_LINE(385)
						if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
							HX_STACK_LINE(385)
							if (((Velocity > Max))){
								HX_STACK_LINE(385)
								Velocity = Max;
							}
							else{
								HX_STACK_LINE(385)
								if (((Velocity < -(Max)))){
									HX_STACK_LINE(385)
									Velocity = -(Max);
								}
							}
						}
						HX_STACK_LINE(385)
						return Velocity;
					}
					return null();
				}
			};
			HX_STACK_LINE(385)
			velocityDelta = (0.5 * ((_Function_2_2::Block(this) - this->velocity->x)));
			HX_STACK_LINE(385)
			hx::AddEq(this->velocity->x,velocityDelta);
			HX_STACK_LINE(385)
			delta = (this->velocity->x * dt);
			HX_STACK_LINE(385)
			hx::AddEq(this->velocity->x,velocityDelta);
			HX_STACK_LINE(385)
			hx::AddEq(this->x,delta);
			struct _Function_2_3{
				inline static Float Block( ::org::flixel::FlxObject_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",385);
					{
						HX_STACK_LINE(385)
						Float Velocity = __this->velocity->y;		HX_STACK_VAR(Velocity,"Velocity");
						Float Acceleration = __this->acceleration->y;		HX_STACK_VAR(Acceleration,"Acceleration");
						Float Drag = __this->drag->y;		HX_STACK_VAR(Drag,"Drag");
						Float Max = __this->maxVelocity->y;		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(385)
						if (((Acceleration != (int)0))){
							HX_STACK_LINE(385)
							hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
						}
						else{
							HX_STACK_LINE(385)
							if (((Drag != (int)0))){
								HX_STACK_LINE(385)
								Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
								HX_STACK_LINE(385)
								if ((((Velocity - drag) > (int)0))){
									HX_STACK_LINE(385)
									Velocity = (Velocity - drag);
								}
								else{
									HX_STACK_LINE(385)
									if ((((Velocity + drag) < (int)0))){
										HX_STACK_LINE(385)
										hx::AddEq(Velocity,drag);
									}
									else{
										HX_STACK_LINE(385)
										Velocity = (int)0;
									}
								}
							}
						}
						HX_STACK_LINE(385)
						if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
							HX_STACK_LINE(385)
							if (((Velocity > Max))){
								HX_STACK_LINE(385)
								Velocity = Max;
							}
							else{
								HX_STACK_LINE(385)
								if (((Velocity < -(Max)))){
									HX_STACK_LINE(385)
									Velocity = -(Max);
								}
							}
						}
						HX_STACK_LINE(385)
						return Velocity;
					}
					return null();
				}
			};
			HX_STACK_LINE(385)
			velocityDelta = (0.5 * ((_Function_2_3::Block(this) - this->velocity->y)));
			HX_STACK_LINE(385)
			hx::AddEq(this->velocity->y,velocityDelta);
			HX_STACK_LINE(385)
			delta = (this->velocity->y * dt);
			HX_STACK_LINE(385)
			hx::AddEq(this->velocity->y,velocityDelta);
			HX_STACK_LINE(385)
			hx::AddEq(this->y,delta);
		}
		HX_STACK_LINE(388)
		this->wasTouching = this->touching;
		HX_STACK_LINE(389)
		this->touching = (int)0;
	}
return null();
}


Void FlxObject_obj::destroy( ){
{
		HX_STACK_PUSH("FlxObject::destroy","org/flixel/FlxObject.hx",344);
		HX_STACK_THIS(this);
		HX_STACK_LINE(345)
		this->velocity = null();
		HX_STACK_LINE(346)
		this->acceleration = null();
		HX_STACK_LINE(347)
		this->drag = null();
		HX_STACK_LINE(348)
		this->maxVelocity = null();
		HX_STACK_LINE(349)
		this->scrollFactor = null();
		HX_STACK_LINE(350)
		this->_point = null();
		HX_STACK_LINE(351)
		this->last = null();
		HX_STACK_LINE(352)
		this->cameras = null();
		HX_STACK_LINE(353)
		if (((this->path != null()))){
			HX_STACK_LINE(354)
			this->path->destroy();
		}
		HX_STACK_LINE(357)
		this->path = null();
		HX_STACK_LINE(358)
		this->super::destroy();
	}
return null();
}


int FlxObject_obj::set_debugBoundingBoxColor( int val){
	HX_STACK_PUSH("FlxObject::set_debugBoundingBoxColor","org/flixel/FlxObject.hx",277);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(278)
	this->_boundingBoxColorOverritten = true;
	HX_STACK_LINE(279)
	this->debugBoundingBoxColor = val;
	HX_STACK_LINE(280)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_debugBoundingBoxColor,return )

Float FlxObject_obj::SEPARATE_BIAS;

::org::flixel::util::FlxRect FlxObject_obj::_firstSeparateFlxRect;

::org::flixel::util::FlxRect FlxObject_obj::_secondSeparateFlxRect;

::org::flixel::util::FlxPoint FlxObject_obj::_pZero;

bool FlxObject_obj::separate( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2){
	HX_STACK_PUSH("FlxObject::separate","org/flixel/FlxObject.hx",1115);
	HX_STACK_ARG(Object1,"Object1");
	HX_STACK_ARG(Object2,"Object2");
	HX_STACK_LINE(1116)
	bool separatedX = ::org::flixel::FlxObject_obj::separateX(Object1,Object2);		HX_STACK_VAR(separatedX,"separatedX");
	HX_STACK_LINE(1117)
	bool separatedY = ::org::flixel::FlxObject_obj::separateY(Object1,Object2);		HX_STACK_VAR(separatedY,"separatedY");
	HX_STACK_LINE(1118)
	return (bool(separatedX) || bool(separatedY));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::separateX( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2){
	HX_STACK_PUSH("FlxObject::separateX","org/flixel/FlxObject.hx",1128);
	HX_STACK_ARG(Object1,"Object1");
	HX_STACK_ARG(Object2,"Object2");
	HX_STACK_LINE(1130)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(1131)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(1132)
	if (((bool(obj1immovable) && bool(obj2immovable)))){
		HX_STACK_LINE(1133)
		return false;
	}
	HX_STACK_LINE(1138)
	if ((::Std_obj::is(Object1,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
		HX_STACK_LINE(1139)
		return (hx::TCast< org::flixel::FlxTilemap >::cast(Object1))->overlapsWithCallback(Object2,::org::flixel::FlxObject_obj::separateX_dyn(),null(),null());
	}
	HX_STACK_LINE(1142)
	if ((::Std_obj::is(Object2,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
		HX_STACK_LINE(1143)
		return (hx::TCast< org::flixel::FlxTilemap >::cast(Object2))->overlapsWithCallback(Object1,::org::flixel::FlxObject_obj::separateX_dyn(),true,null());
	}
	HX_STACK_LINE(1148)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(1149)
	Float obj1delta = (Object1->x - Object1->last->x);		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(1150)
	Float obj2delta = (Object2->x - Object2->last->x);		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(1151)
	if (((obj1delta != obj2delta))){
		HX_STACK_LINE(1154)
		Float obj1deltaAbs = (  (((obj1delta > (int)0))) ? Float(obj1delta) : Float(-(obj1delta)) );		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(1155)
		Float obj2deltaAbs = (  (((obj2delta > (int)0))) ? Float(obj2delta) : Float(-(obj2delta)) );		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		struct _Function_2_1{
			inline static ::org::flixel::util::FlxRect Block( ::org::flixel::FlxObject &Object1,Float &obj1delta){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",1157);
				{
					HX_STACK_LINE(1157)
					::org::flixel::util::FlxRect _this = ::org::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1157)
					_this->x = (Object1->x - ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float((int)0) )));
					HX_STACK_LINE(1157)
					_this->y = Object1->last->y;
					HX_STACK_LINE(1157)
					_this->width = (Object1->width + ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float(-(obj1delta)) )));
					HX_STACK_LINE(1157)
					_this->height = Object1->height;
					HX_STACK_LINE(1157)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(1157)
		::org::flixel::util::FlxRect obj1rect = _Function_2_1::Block(Object1,obj1delta);		HX_STACK_VAR(obj1rect,"obj1rect");
		struct _Function_2_2{
			inline static ::org::flixel::util::FlxRect Block( ::org::flixel::FlxObject &Object2,Float &obj2delta){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",1158);
				{
					HX_STACK_LINE(1158)
					::org::flixel::util::FlxRect _this = ::org::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1158)
					_this->x = (Object2->x - ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float((int)0) )));
					HX_STACK_LINE(1158)
					_this->y = Object2->last->y;
					HX_STACK_LINE(1158)
					_this->width = (Object2->width + ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float(-(obj2delta)) )));
					HX_STACK_LINE(1158)
					_this->height = Object2->height;
					HX_STACK_LINE(1158)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(1158)
		::org::flixel::util::FlxRect obj2rect = _Function_2_2::Block(Object2,obj2delta);		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(1160)
		if (((bool((bool((bool(((obj1rect->x + obj1rect->width) > obj2rect->x)) && bool((obj1rect->x < (obj2rect->x + obj2rect->width))))) && bool(((obj1rect->y + obj1rect->height) > obj2rect->y)))) && bool((obj1rect->y < (obj2rect->y + obj2rect->height)))))){
			HX_STACK_LINE(1162)
			Float maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::org::flixel::FlxObject_obj::SEPARATE_BIAS);		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(1165)
			if (((obj1delta > obj2delta))){
				HX_STACK_LINE(1167)
				overlap = ((Object1->x + Object1->width) - Object2->x);
				HX_STACK_LINE(1168)
				if (((bool((bool((overlap > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)16))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)1))) == (int)0))))){
					HX_STACK_LINE(1169)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(1174)
					hx::OrEq(Object1->touching,(int)16);
					HX_STACK_LINE(1175)
					hx::OrEq(Object2->touching,(int)1);
				}
			}
			else{
				HX_STACK_LINE(1178)
				if (((obj1delta < obj2delta))){
					HX_STACK_LINE(1180)
					overlap = ((Object1->x - Object2->width) - Object2->x);
					HX_STACK_LINE(1181)
					if (((bool((bool((-(overlap) > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)1))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)16))) == (int)0))))){
						HX_STACK_LINE(1182)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(1187)
						hx::OrEq(Object1->touching,(int)1);
						HX_STACK_LINE(1188)
						hx::OrEq(Object2->touching,(int)16);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1195)
	if (((overlap != (int)0))){
		HX_STACK_LINE(1197)
		Float obj1v = Object1->velocity->x;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(1198)
		Float obj2v = Object2->velocity->x;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(1200)
		if (((bool(!(obj1immovable)) && bool(!(obj2immovable))))){
			HX_STACK_LINE(1202)
			hx::MultEq(overlap,0.5);
			HX_STACK_LINE(1203)
			Object1->x = (Object1->x - overlap);
			HX_STACK_LINE(1204)
			hx::AddEq(Object2->x,overlap);
			HX_STACK_LINE(1206)
			Float obj1velocity = (::Math_obj::sqrt((Float(((obj2v * obj2v) * Object2->mass)) / Float(Object1->mass))) * ((  (((obj2v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(1207)
			Float obj2velocity = (::Math_obj::sqrt((Float(((obj1v * obj1v) * Object1->mass)) / Float(Object2->mass))) * ((  (((obj1v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(1208)
			Float average = (((obj1velocity + obj2velocity)) * 0.5);		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(1209)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(1210)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(1211)
			Object1->velocity->x = (average + (obj1velocity * Object1->elasticity));
			HX_STACK_LINE(1212)
			Object2->velocity->x = (average + (obj2velocity * Object2->elasticity));
		}
		else{
			HX_STACK_LINE(1214)
			if ((!(obj1immovable))){
				HX_STACK_LINE(1216)
				Object1->x = (Object1->x - overlap);
				HX_STACK_LINE(1217)
				Object1->velocity->x = (obj2v - (obj1v * Object1->elasticity));
			}
			else{
				HX_STACK_LINE(1219)
				if ((!(obj2immovable))){
					HX_STACK_LINE(1221)
					hx::AddEq(Object2->x,overlap);
					HX_STACK_LINE(1222)
					Object2->velocity->x = (obj1v - (obj2v * Object2->elasticity));
				}
			}
		}
		HX_STACK_LINE(1224)
		return true;
	}
	else{
		HX_STACK_LINE(1227)
		return false;
	}
	HX_STACK_LINE(1195)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::separateY( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2){
	HX_STACK_PUSH("FlxObject::separateY","org/flixel/FlxObject.hx",1239);
	HX_STACK_ARG(Object1,"Object1");
	HX_STACK_ARG(Object2,"Object2");
	HX_STACK_LINE(1241)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(1242)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(1243)
	if (((bool(obj1immovable) && bool(obj2immovable)))){
		HX_STACK_LINE(1244)
		return false;
	}
	HX_STACK_LINE(1249)
	if ((::Std_obj::is(Object1,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
		HX_STACK_LINE(1250)
		return (hx::TCast< org::flixel::FlxTilemap >::cast(Object1))->overlapsWithCallback(Object2,::org::flixel::FlxObject_obj::separateY_dyn(),null(),null());
	}
	HX_STACK_LINE(1253)
	if ((::Std_obj::is(Object2,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
		HX_STACK_LINE(1254)
		return (hx::TCast< org::flixel::FlxTilemap >::cast(Object2))->overlapsWithCallback(Object1,::org::flixel::FlxObject_obj::separateY_dyn(),true,null());
	}
	HX_STACK_LINE(1259)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(1260)
	Float obj1delta = (Object1->y - Object1->last->y);		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(1261)
	Float obj2delta = (Object2->y - Object2->last->y);		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(1262)
	if (((obj1delta != obj2delta))){
		HX_STACK_LINE(1265)
		Float obj1deltaAbs = (  (((obj1delta > (int)0))) ? Float(obj1delta) : Float(-(obj1delta)) );		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(1266)
		Float obj2deltaAbs = (  (((obj2delta > (int)0))) ? Float(obj2delta) : Float(-(obj2delta)) );		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		struct _Function_2_1{
			inline static ::org::flixel::util::FlxRect Block( Float &obj1delta,::org::flixel::FlxObject &Object1,Float &obj1deltaAbs){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",1268);
				{
					HX_STACK_LINE(1268)
					::org::flixel::util::FlxRect _this = ::org::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1268)
					_this->x = Object1->x;
					HX_STACK_LINE(1268)
					_this->y = (Object1->y - ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float((int)0) )));
					HX_STACK_LINE(1268)
					_this->width = Object1->width;
					HX_STACK_LINE(1268)
					_this->height = (Object1->height + obj1deltaAbs);
					HX_STACK_LINE(1268)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(1268)
		::org::flixel::util::FlxRect obj1rect = _Function_2_1::Block(obj1delta,Object1,obj1deltaAbs);		HX_STACK_VAR(obj1rect,"obj1rect");
		struct _Function_2_2{
			inline static ::org::flixel::util::FlxRect Block( Float &obj2delta,::org::flixel::FlxObject &Object2,Float &obj2deltaAbs){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",1269);
				{
					HX_STACK_LINE(1269)
					::org::flixel::util::FlxRect _this = ::org::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1269)
					_this->x = Object2->x;
					HX_STACK_LINE(1269)
					_this->y = (Object2->y - ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float((int)0) )));
					HX_STACK_LINE(1269)
					_this->width = Object2->width;
					HX_STACK_LINE(1269)
					_this->height = (Object2->height + obj2deltaAbs);
					HX_STACK_LINE(1269)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(1269)
		::org::flixel::util::FlxRect obj2rect = _Function_2_2::Block(obj2delta,Object2,obj2deltaAbs);		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(1271)
		if (((bool((bool((bool(((obj1rect->x + obj1rect->width) > obj2rect->x)) && bool((obj1rect->x < (obj2rect->x + obj2rect->width))))) && bool(((obj1rect->y + obj1rect->height) > obj2rect->y)))) && bool((obj1rect->y < (obj2rect->y + obj2rect->height)))))){
			HX_STACK_LINE(1273)
			Float maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::org::flixel::FlxObject_obj::SEPARATE_BIAS);		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(1276)
			if (((obj1delta > obj2delta))){
				HX_STACK_LINE(1278)
				overlap = ((Object1->y + Object1->height) - Object2->y);
				HX_STACK_LINE(1279)
				if (((bool((bool((overlap > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)4096))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)256))) == (int)0))))){
					HX_STACK_LINE(1280)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(1285)
					hx::OrEq(Object1->touching,(int)4096);
					HX_STACK_LINE(1286)
					hx::OrEq(Object2->touching,(int)256);
				}
			}
			else{
				HX_STACK_LINE(1289)
				if (((obj1delta < obj2delta))){
					HX_STACK_LINE(1291)
					overlap = ((Object1->y - Object2->height) - Object2->y);
					HX_STACK_LINE(1292)
					if (((bool((bool((-(overlap) > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)256))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)4096))) == (int)0))))){
						HX_STACK_LINE(1293)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(1298)
						hx::OrEq(Object1->touching,(int)256);
						HX_STACK_LINE(1299)
						hx::OrEq(Object2->touching,(int)4096);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1306)
	if (((overlap != (int)0))){
		HX_STACK_LINE(1308)
		Float obj1v = Object1->velocity->y;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(1309)
		Float obj2v = Object2->velocity->y;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(1311)
		if (((bool(!(obj1immovable)) && bool(!(obj2immovable))))){
			HX_STACK_LINE(1313)
			hx::MultEq(overlap,0.5);
			HX_STACK_LINE(1314)
			Object1->y = (Object1->y - overlap);
			HX_STACK_LINE(1315)
			hx::AddEq(Object2->y,overlap);
			HX_STACK_LINE(1317)
			Float obj1velocity = (::Math_obj::sqrt((Float(((obj2v * obj2v) * Object2->mass)) / Float(Object1->mass))) * ((  (((obj2v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(1318)
			Float obj2velocity = (::Math_obj::sqrt((Float(((obj1v * obj1v) * Object1->mass)) / Float(Object2->mass))) * ((  (((obj1v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(1319)
			Float average = (((obj1velocity + obj2velocity)) * 0.5);		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(1320)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(1321)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(1322)
			Object1->velocity->y = (average + (obj1velocity * Object1->elasticity));
			HX_STACK_LINE(1323)
			Object2->velocity->y = (average + (obj2velocity * Object2->elasticity));
		}
		else{
			HX_STACK_LINE(1325)
			if ((!(obj1immovable))){
				HX_STACK_LINE(1327)
				Object1->y = (Object1->y - overlap);
				HX_STACK_LINE(1328)
				Object1->velocity->y = (obj2v - (obj1v * Object1->elasticity));
				HX_STACK_LINE(1330)
				if (((bool((bool(Object2->active) && bool(Object2->moves))) && bool((obj1delta > obj2delta))))){
					HX_STACK_LINE(1331)
					hx::AddEq(Object1->x,(Object2->x - Object2->last->x));
				}
			}
			else{
				HX_STACK_LINE(1335)
				if ((!(obj2immovable))){
					HX_STACK_LINE(1337)
					hx::AddEq(Object2->y,overlap);
					HX_STACK_LINE(1338)
					Object2->velocity->y = (obj1v - (obj2v * Object2->elasticity));
					HX_STACK_LINE(1340)
					if (((bool((bool(Object1->active) && bool(Object1->moves))) && bool((obj1delta < obj2delta))))){
						HX_STACK_LINE(1341)
						hx::AddEq(Object2->x,(Object1->x - Object1->last->x));
					}
				}
			}
		}
		HX_STACK_LINE(1345)
		return true;
	}
	else{
		HX_STACK_LINE(1348)
		return false;
	}
	HX_STACK_LINE(1306)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )


FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(flickering,"flickering");
	HX_MARK_MEMBER_NAME(_boundingBoxColorOverritten,"_boundingBoxColorOverritten");
	HX_MARK_MEMBER_NAME(debugBoundingBoxColor,"debugBoundingBoxColor");
	HX_MARK_MEMBER_NAME(_pathRotate,"_pathRotate");
	HX_MARK_MEMBER_NAME(_pathInc,"_pathInc");
	HX_MARK_MEMBER_NAME(_pathMode,"_pathMode");
	HX_MARK_MEMBER_NAME(_pathNodeIndex,"_pathNodeIndex");
	HX_MARK_MEMBER_NAME(forceComplexRender,"forceComplexRender");
	HX_MARK_MEMBER_NAME(pathAutoCenter,"pathAutoCenter");
	HX_MARK_MEMBER_NAME(pathAngle,"pathAngle");
	HX_MARK_MEMBER_NAME(pathSpeed,"pathSpeed");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(_flickerTimer,"_flickerTimer");
	HX_MARK_MEMBER_NAME(_flicker,"_flicker");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flickering,"flickering");
	HX_VISIT_MEMBER_NAME(_boundingBoxColorOverritten,"_boundingBoxColorOverritten");
	HX_VISIT_MEMBER_NAME(debugBoundingBoxColor,"debugBoundingBoxColor");
	HX_VISIT_MEMBER_NAME(_pathRotate,"_pathRotate");
	HX_VISIT_MEMBER_NAME(_pathInc,"_pathInc");
	HX_VISIT_MEMBER_NAME(_pathMode,"_pathMode");
	HX_VISIT_MEMBER_NAME(_pathNodeIndex,"_pathNodeIndex");
	HX_VISIT_MEMBER_NAME(forceComplexRender,"forceComplexRender");
	HX_VISIT_MEMBER_NAME(pathAutoCenter,"pathAutoCenter");
	HX_VISIT_MEMBER_NAME(pathAngle,"pathAngle");
	HX_VISIT_MEMBER_NAME(pathSpeed,"pathSpeed");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(_flickerTimer,"_flickerTimer");
	HX_VISIT_MEMBER_NAME(_flicker,"_flicker");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"solid") ) { return get_solid(); }
		if (HX_FIELD_EQ(inName,"moves") ) { return moves; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pZero") ) { return _pZero; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flicker") ) { return flicker_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { return separate_dyn(); }
		if (HX_FIELD_EQ(inName,"onScreen") ) { return onScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"_pathInc") ) { return _pathInc; }
		if (HX_FIELD_EQ(inName,"touching") ) { return touching; }
		if (HX_FIELD_EQ(inName,"_flicker") ) { return _flicker; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"separateX") ) { return separateX_dyn(); }
		if (HX_FIELD_EQ(inName,"separateY") ) { return separateY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return set_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return get_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"_pathMode") ) { return _pathMode; }
		if (HX_FIELD_EQ(inName,"pathAngle") ) { return pathAngle; }
		if (HX_FIELD_EQ(inName,"pathSpeed") ) { return pathSpeed; }
		if (HX_FIELD_EQ(inName,"immovable") ) { return immovable; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isTouching") ) { return isTouching_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"flickering") ) { return inCallProp ? get_flickering() : flickering; }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"followPath") ) { return followPath_dyn(); }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return maxAngular; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justTouched") ) { return justTouched_dyn(); }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return getMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenXY") ) { return getScreenXY_dyn(); }
		if (HX_FIELD_EQ(inName,"advancePath") ) { return advancePath_dyn(); }
		if (HX_FIELD_EQ(inName,"setPathNode") ) { return setPathNode_dyn(); }
		if (HX_FIELD_EQ(inName,"_pathRotate") ) { return _pathRotate; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return wasTouching; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return angularDrag; }
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return maxVelocity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return updateMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return scrollFactor; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { return SEPARATE_BIAS; }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"_flickerTimer") ) { return _flickerTimer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_flickering") ) { return get_flickering_dyn(); }
		if (HX_FIELD_EQ(inName,"onScreenObject") ) { return onScreenObject_dyn(); }
		if (HX_FIELD_EQ(inName,"_pathNodeIndex") ) { return _pathNodeIndex; }
		if (HX_FIELD_EQ(inName,"pathAutoCenter") ) { return pathAutoCenter; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return allowCollisions; }
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updatePathMotion") ) { return updatePathMotion_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"stopFollowingPath") ) { return stopFollowingPath_dyn(); }
		if (HX_FIELD_EQ(inName,"drawDebugOnCamera") ) { return drawDebugOnCamera_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"forceComplexRender") ) { return forceComplexRender; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return angularAcceleration; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { return _firstSeparateFlxRect; }
		if (HX_FIELD_EQ(inName,"debugBoundingBoxColor") ) { return debugBoundingBoxColor; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { return _secondSeparateFlxRect; }
		if (HX_FIELD_EQ(inName,"set_forceComplexRender") ) { return set_forceComplexRender_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"set_debugBoundingBoxColor") ) { return set_debugBoundingBoxColor_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_boundingBoxColorOverritten") ) { return _boundingBoxColorOverritten; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::org::flixel::FlxPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"solid") ) { return set_solid(inValue); }
		if (HX_FIELD_EQ(inName,"moves") ) { moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return set_width(inValue);width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pZero") ) { _pZero=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return set_height(inValue);height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pathInc") ) { _pathInc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flicker") ) { _flicker=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_pathMode") ) { _pathMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pathAngle") ) { pathAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pathSpeed") ) { pathSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immovable") ) { immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flickering") ) { flickering=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_pathRotate") ) { _pathRotate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { scrollFactor=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flickerTimer") ) { _flickerTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_pathNodeIndex") ) { _pathNodeIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pathAutoCenter") ) { pathAutoCenter=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { allowCollisions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"forceComplexRender") ) { if (inCallProp) return set_forceComplexRender(inValue);forceComplexRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=inValue.Cast< ::org::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugBoundingBoxColor") ) { if (inCallProp) return set_debugBoundingBoxColor(inValue);debugBoundingBoxColor=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=inValue.Cast< ::org::flixel::util::FlxRect >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_boundingBoxColorOverritten") ) { _boundingBoxColorOverritten=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("solid"));
	outFields->push(HX_CSTRING("flickering"));
	outFields->push(HX_CSTRING("_boundingBoxColorOverritten"));
	outFields->push(HX_CSTRING("debugBoundingBoxColor"));
	outFields->push(HX_CSTRING("_pathRotate"));
	outFields->push(HX_CSTRING("_pathInc"));
	outFields->push(HX_CSTRING("_pathMode"));
	outFields->push(HX_CSTRING("_pathNodeIndex"));
	outFields->push(HX_CSTRING("forceComplexRender"));
	outFields->push(HX_CSTRING("pathAutoCenter"));
	outFields->push(HX_CSTRING("pathAngle"));
	outFields->push(HX_CSTRING("pathSpeed"));
	outFields->push(HX_CSTRING("path"));
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("allowCollisions"));
	outFields->push(HX_CSTRING("wasTouching"));
	outFields->push(HX_CSTRING("touching"));
	outFields->push(HX_CSTRING("moves"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("health"));
	outFields->push(HX_CSTRING("_flickerTimer"));
	outFields->push(HX_CSTRING("_flicker"));
	outFields->push(HX_CSTRING("scrollFactor"));
	outFields->push(HX_CSTRING("maxAngular"));
	outFields->push(HX_CSTRING("angularDrag"));
	outFields->push(HX_CSTRING("angularAcceleration"));
	outFields->push(HX_CSTRING("angularVelocity"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("maxVelocity"));
	outFields->push(HX_CSTRING("drag"));
	outFields->push(HX_CSTRING("acceleration"));
	outFields->push(HX_CSTRING("elasticity"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("immovable"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SEPARATE_BIAS"),
	HX_CSTRING("_firstSeparateFlxRect"),
	HX_CSTRING("_secondSeparateFlxRect"),
	HX_CSTRING("_pZero"),
	HX_CSTRING("separate"),
	HX_CSTRING("separateX"),
	HX_CSTRING("separateY"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_forceComplexRender"),
	HX_CSTRING("move"),
	HX_CSTRING("hurt"),
	HX_CSTRING("justTouched"),
	HX_CSTRING("isTouching"),
	HX_CSTRING("reset"),
	HX_CSTRING("getMidpoint"),
	HX_CSTRING("set_solid"),
	HX_CSTRING("get_solid"),
	HX_CSTRING("set_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_flickering"),
	HX_CSTRING("flickering"),
	HX_CSTRING("flicker"),
	HX_CSTRING("getScreenXY"),
	HX_CSTRING("onScreenObject"),
	HX_CSTRING("onScreen"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("updatePathMotion"),
	HX_CSTRING("advancePath"),
	HX_CSTRING("setPathNode"),
	HX_CSTRING("stopFollowingPath"),
	HX_CSTRING("followPath"),
	HX_CSTRING("drawDebugOnCamera"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateMotion"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("set_debugBoundingBoxColor"),
	HX_CSTRING("_boundingBoxColorOverritten"),
	HX_CSTRING("debugBoundingBoxColor"),
	HX_CSTRING("_pathRotate"),
	HX_CSTRING("_pathInc"),
	HX_CSTRING("_pathMode"),
	HX_CSTRING("_pathNodeIndex"),
	HX_CSTRING("forceComplexRender"),
	HX_CSTRING("pathAutoCenter"),
	HX_CSTRING("pathAngle"),
	HX_CSTRING("pathSpeed"),
	HX_CSTRING("path"),
	HX_CSTRING("last"),
	HX_CSTRING("allowCollisions"),
	HX_CSTRING("wasTouching"),
	HX_CSTRING("touching"),
	HX_CSTRING("moves"),
	HX_CSTRING("_point"),
	HX_CSTRING("health"),
	HX_CSTRING("_flickerTimer"),
	HX_CSTRING("_flicker"),
	HX_CSTRING("scrollFactor"),
	HX_CSTRING("maxAngular"),
	HX_CSTRING("angularDrag"),
	HX_CSTRING("angularAcceleration"),
	HX_CSTRING("angularVelocity"),
	HX_CSTRING("angle"),
	HX_CSTRING("maxVelocity"),
	HX_CSTRING("drag"),
	HX_CSTRING("acceleration"),
	HX_CSTRING("elasticity"),
	HX_CSTRING("mass"),
	HX_CSTRING("velocity"),
	HX_CSTRING("immovable"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_pZero,"_pZero");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_pZero,"_pZero");
};

Class FlxObject_obj::__mClass;

void FlxObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxObject"), hx::TCanCast< FlxObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxObject_obj::__boot()
{
	SEPARATE_BIAS= (int)4;
	_firstSeparateFlxRect= ::org::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
	_secondSeparateFlxRect= ::org::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
	_pZero= ::org::flixel::util::FlxPoint_obj::__new(null(),null());
}

} // end namespace org
} // end namespace flixel
