#include <hxcpp.h>

#ifndef INCLUDED_flx_core_Player
#include <flx/core/Player.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace flx{
namespace core{

Void Player_obj::__construct()
{
HX_STACK_PUSH("Player::new","flx/core/Player.hx",5);
{
	HX_STACK_LINE(6)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(7)
	this->loadGraphic(HX_CSTRING("assets/an_hero.png"),false,false,(int)64,(int)128,null(),null());
	HX_STACK_LINE(8)
	this->set_antialiasing(true);
	HX_STACK_LINE(9)
	this->immovable = false;
	HX_STACK_LINE(11)
	this->set_width((int)64);
	HX_STACK_LINE(12)
	this->set_height((int)64);
	HX_STACK_LINE(13)
	{
		HX_STACK_LINE(13)
		::org::flixel::util::FlxPoint _this = this->offset;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(13)
		_this->x = (int)0;
		HX_STACK_LINE(13)
		_this->y = (int)64;
		HX_STACK_LINE(13)
		_this;
	}
	HX_STACK_LINE(14)
	this->setOriginToCenter();
}
;
	return null();
}

Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new()
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

Void Player_obj::initialize( Float spawnX,Float spawnY){
{
		HX_STACK_PUSH("Player::initialize","flx/core/Player.hx",17);
		HX_STACK_THIS(this);
		HX_STACK_ARG(spawnX,"spawnX");
		HX_STACK_ARG(spawnY,"spawnY");
		struct _Function_1_1{
			inline static Float Block( Float &spawnX){
				HX_STACK_PUSH("*::closure","flx/core/Player.hx",18);
				{
					HX_STACK_LINE(18)
					Float expVal = ::Math_obj::pow((int)10,(int)0);		HX_STACK_VAR(expVal,"expVal");
					HX_STACK_LINE(18)
					return (Float(::Math_obj::floor((spawnX * expVal))) / Float(expVal));
				}
				return null();
			}
		};
		HX_STACK_LINE(18)
		this->x = _Function_1_1::Block(spawnX);
		struct _Function_1_2{
			inline static Float Block( Float &spawnY){
				HX_STACK_PUSH("*::closure","flx/core/Player.hx",19);
				{
					HX_STACK_LINE(19)
					Float expVal = ::Math_obj::pow((int)10,(int)0);		HX_STACK_VAR(expVal,"expVal");
					HX_STACK_LINE(19)
					return (Float(::Math_obj::floor((spawnY * expVal))) / Float(expVal));
				}
				return null();
			}
		};
		HX_STACK_LINE(19)
		this->y = _Function_1_2::Block(spawnY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Player_obj,initialize,(void))


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("initialize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flx.core.Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Player_obj::__boot()
{
}

} // end namespace flx
} // end namespace core
