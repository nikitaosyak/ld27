#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flx_core_Facade
#include <flx/core/Facade.h>
#endif
#ifndef INCLUDED_flx_core_Player
#include <flx/core/Player.h>
#endif
#ifndef INCLUDED_flx_core_PlayerController
#include <flx/core/PlayerController.h>
#endif
#ifndef INCLUDED_flx_core_SortingGroup
#include <flx/core/SortingGroup.h>
#endif
#ifndef INCLUDED_flx_state_level_LevelBase
#include <flx/state/level/LevelBase.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
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
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxText
#include <org/flixel/FlxText.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_tmx_TiledLevel
#include <tmx/TiledLevel.h>
#endif
namespace flx{
namespace state{
namespace level{

Void LevelBase_obj::__construct()
{
HX_STACK_PUSH("LevelBase::new","flx/state/level/LevelBase.hx",25);
{
	HX_STACK_LINE(25)
	super::__construct();
}
;
	return null();
}

LevelBase_obj::~LevelBase_obj() { }

Dynamic LevelBase_obj::__CreateEmpty() { return  new LevelBase_obj; }
hx::ObjectPtr< LevelBase_obj > LevelBase_obj::__new()
{  hx::ObjectPtr< LevelBase_obj > result = new LevelBase_obj();
	result->__construct();
	return result;}

Dynamic LevelBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LevelBase_obj > result = new LevelBase_obj();
	result->__construct();
	return result;}

Void LevelBase_obj::destroy( ){
{
		HX_STACK_PUSH("LevelBase::destroy","flx/state/level/LevelBase.hx",150);
		HX_STACK_THIS(this);
		HX_STACK_LINE(150)
		this->controller->destroy();
	}
return null();
}


Dynamic LevelBase_obj::remove( Dynamic _tmp_object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_PUSH("LevelBase::remove","flx/state/level/LevelBase.hx",146);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_object,"_tmp_object");
	HX_STACK_ARG(Splice,"Splice");
{
		HX_STACK_LINE(146)
		::org::flixel::FlxBasic object = _tmp_object;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(146)
		return this->super::remove(object,Splice);
	}
}


Dynamic LevelBase_obj::add( Dynamic _tmp_object){
	HX_STACK_PUSH("LevelBase::add","flx/state/level/LevelBase.hx",140);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_object,"_tmp_object");
	HX_STACK_LINE(140)
	::org::flixel::FlxBasic object = _tmp_object;		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(140)
	return this->super::add(object);
}


Void LevelBase_obj::onCollide( ::org::flixel::FlxObject some,::org::flixel::FlxObject some2){
{
		HX_STACK_PUSH("LevelBase::onCollide","flx/state/level/LevelBase.hx",134);
		HX_STACK_THIS(this);
		HX_STACK_ARG(some,"some");
		HX_STACK_ARG(some2,"some2");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LevelBase_obj,onCollide,(void))

Void LevelBase_obj::update( ){
{
		HX_STACK_PUSH("LevelBase::update","flx/state/level/LevelBase.hx",82);
		HX_STACK_THIS(this);
		HX_STACK_LINE(83)
		Float tt = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tt,"tt");
		HX_STACK_LINE(84)
		Float timeDiff = ::org::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(timeDiff,"timeDiff");
		HX_STACK_LINE(86)
		Float moveSpd = (::flx::core::Facade_obj::I->getMoveSpd() * timeDiff);		HX_STACK_VAR(moveSpd,"moveSpd");
		HX_STACK_LINE(87)
		bool wasMove = true;		HX_STACK_VAR(wasMove,"wasMove");
		HX_STACK_LINE(88)
		if (((bool((this->controller->accX != (int)0)) && bool((this->controller->accY != (int)0))))){
			HX_STACK_LINE(89)
			Float diffX = ((moveSpd * this->controller->accX) * ::Math_obj::cos(::flx::state::level::LevelBase_obj::asRadian));		HX_STACK_VAR(diffX,"diffX");
			HX_STACK_LINE(90)
			Float diffY = ((moveSpd * this->controller->accY) * ::Math_obj::cos(::flx::state::level::LevelBase_obj::asRadian));		HX_STACK_VAR(diffY,"diffY");
			struct _Function_2_1{
				inline static Float Block( ::flx::state::level::LevelBase_obj *__this,Float &diffX){
					HX_STACK_PUSH("*::closure","flx/state/level/LevelBase.hx",92);
					{
						HX_STACK_LINE(92)
						Float expVal = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(expVal,"expVal");
						HX_STACK_LINE(92)
						return (Float(::Math_obj::floor((((__this->player->x + diffX)) * expVal))) / Float(expVal));
					}
					return null();
				}
			};
			HX_STACK_LINE(92)
			this->player->x = _Function_2_1::Block(this,diffX);
			struct _Function_2_2{
				inline static Float Block( ::flx::state::level::LevelBase_obj *__this,Float &diffY){
					HX_STACK_PUSH("*::closure","flx/state/level/LevelBase.hx",93);
					{
						HX_STACK_LINE(93)
						Float expVal = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(expVal,"expVal");
						HX_STACK_LINE(93)
						return (Float(::Math_obj::floor((((__this->player->y + diffY)) * expVal))) / Float(expVal));
					}
					return null();
				}
			};
			HX_STACK_LINE(93)
			this->player->y = _Function_2_2::Block(this,diffY);
		}
		else{
			HX_STACK_LINE(95)
			if (((this->controller->accX != (int)0))){
				struct _Function_3_1{
					inline static Float Block( ::flx::state::level::LevelBase_obj *__this,Float &moveSpd){
						HX_STACK_PUSH("*::closure","flx/state/level/LevelBase.hx",97);
						{
							HX_STACK_LINE(97)
							Float expVal = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(expVal,"expVal");
							HX_STACK_LINE(97)
							return (Float(::Math_obj::floor((((__this->player->x + (__this->controller->accX * moveSpd))) * expVal))) / Float(expVal));
						}
						return null();
					}
				};
				HX_STACK_LINE(95)
				this->player->x = _Function_3_1::Block(this,moveSpd);
			}
			else{
				HX_STACK_LINE(98)
				if (((this->controller->accY != (int)0))){
					struct _Function_4_1{
						inline static Float Block( ::flx::state::level::LevelBase_obj *__this,Float &moveSpd){
							HX_STACK_PUSH("*::closure","flx/state/level/LevelBase.hx",100);
							{
								HX_STACK_LINE(100)
								Float expVal = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(expVal,"expVal");
								HX_STACK_LINE(100)
								return (Float(::Math_obj::floor((((__this->player->y + (__this->controller->accY * moveSpd))) * expVal))) / Float(expVal));
							}
							return null();
						}
					};
					HX_STACK_LINE(98)
					this->player->y = _Function_4_1::Block(this,moveSpd);
				}
				else{
					HX_STACK_LINE(101)
					wasMove = false;
				}
			}
		}
		HX_STACK_LINE(105)
		if ((wasMove)){
			HX_STACK_LINE(105)
			this->level->collideWithLevel(this->player,this->onCollide_dyn(),null());
		}
		HX_STACK_LINE(110)
		if ((wasMove)){
			HX_STACK_LINE(110)
			this->layoutObjects->sort(null(),null());
		}
		HX_STACK_LINE(114)
		this->super::update();
	}
return null();
}


Void LevelBase_obj::create( ){
{
		HX_STACK_PUSH("LevelBase::create","flx/state/level/LevelBase.hx",58);
		HX_STACK_THIS(this);
		HX_STACK_LINE(59)
		::org::flixel::FlxG_obj::visualDebug = true;
		HX_STACK_LINE(60)
		this->controller = ::flx::core::PlayerController_obj::__new();
		HX_STACK_LINE(61)
		::flx::state::level::LevelBase_obj::asRadian = (Float(((int)45 * ::Math_obj::PI)) / Float((int)180));
		HX_STACK_LINE(65)
		this->level = ::tmx::TiledLevel_obj::__new(HX_CSTRING("assets/tiled/testmap.tmx"));
		HX_STACK_LINE(67)
		::org::flixel::FlxG_obj::camera->setBounds((int)0,(int)0,this->level->fullWidth,this->level->fullHeight,true);
		HX_STACK_LINE(68)
		::org::flixel::FlxG_obj::camera->followLerp = 0.5;
		HX_STACK_LINE(71)
		this->add(this->level->backgroundTiles);
		HX_STACK_LINE(72)
		this->add(this->level->foregroundTiles);
		HX_STACK_LINE(74)
		this->layoutObjects = ::flx::core::SortingGroup_obj::__new();
		HX_STACK_LINE(75)
		this->add(this->layoutObjects);
		HX_STACK_LINE(76)
		this->level->loadObjects(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(77)
		this->layoutObjects->sort(null(),null());
	}
return null();
}


Float LevelBase_obj::asRadian;


LevelBase_obj::LevelBase_obj()
{
}

void LevelBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LevelBase);
	HX_MARK_MEMBER_NAME(layoutObjects,"layoutObjects");
	HX_MARK_MEMBER_NAME(helpText,"helpText");
	HX_MARK_MEMBER_NAME(hazards,"hazards");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(hud,"hud");
	HX_MARK_MEMBER_NAME(spawnPlaces,"spawnPlaces");
	HX_MARK_MEMBER_NAME(enemies,"enemies");
	HX_MARK_MEMBER_NAME(layout,"layout");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_MEMBER_NAME(controller,"controller");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LevelBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(layoutObjects,"layoutObjects");
	HX_VISIT_MEMBER_NAME(helpText,"helpText");
	HX_VISIT_MEMBER_NAME(hazards,"hazards");
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(hud,"hud");
	HX_VISIT_MEMBER_NAME(spawnPlaces,"spawnPlaces");
	HX_VISIT_MEMBER_NAME(enemies,"enemies");
	HX_VISIT_MEMBER_NAME(layout,"layout");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(controller,"controller");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LevelBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"hud") ) { return hud; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout; }
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"hazards") ) { return hazards; }
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
		if (HX_FIELD_EQ(inName,"enemies") ) { return enemies; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"asRadian") ) { return asRadian; }
		if (HX_FIELD_EQ(inName,"helpText") ) { return helpText; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onCollide") ) { return onCollide_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { return controller; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spawnPlaces") ) { return spawnPlaces; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"layoutObjects") ) { return layoutObjects; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LevelBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hud") ) { hud=inValue.Cast< ::org::flixel::FlxGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< ::tmx::TiledLevel >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { layout=inValue.Cast< ::org::flixel::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::flx::core::Player >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hazards") ) { hazards=inValue.Cast< ::org::flixel::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::org::flixel::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemies") ) { enemies=inValue.Cast< ::org::flixel::FlxTypedGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"asRadian") ) { asRadian=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"helpText") ) { helpText=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { controller=inValue.Cast< ::flx::core::PlayerController >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spawnPlaces") ) { spawnPlaces=inValue.Cast< ::org::flixel::FlxTypedGroup >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"layoutObjects") ) { layoutObjects=inValue.Cast< ::flx::core::SortingGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LevelBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("layoutObjects"));
	outFields->push(HX_CSTRING("helpText"));
	outFields->push(HX_CSTRING("hazards"));
	outFields->push(HX_CSTRING("objects"));
	outFields->push(HX_CSTRING("hud"));
	outFields->push(HX_CSTRING("spawnPlaces"));
	outFields->push(HX_CSTRING("enemies"));
	outFields->push(HX_CSTRING("layout"));
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("level"));
	outFields->push(HX_CSTRING("controller"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("asRadian"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("onCollide"),
	HX_CSTRING("update"),
	HX_CSTRING("create"),
	HX_CSTRING("layoutObjects"),
	HX_CSTRING("helpText"),
	HX_CSTRING("hazards"),
	HX_CSTRING("objects"),
	HX_CSTRING("hud"),
	HX_CSTRING("spawnPlaces"),
	HX_CSTRING("enemies"),
	HX_CSTRING("layout"),
	HX_CSTRING("player"),
	HX_CSTRING("level"),
	HX_CSTRING("controller"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LevelBase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LevelBase_obj::asRadian,"asRadian");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LevelBase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LevelBase_obj::asRadian,"asRadian");
};

Class LevelBase_obj::__mClass;

void LevelBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flx.state.level.LevelBase"), hx::TCanCast< LevelBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LevelBase_obj::__boot()
{
}

} // end namespace flx
} // end namespace state
} // end namespace level
