#include <hxcpp.h>

#ifndef INCLUDED_flx_core_Facade
#include <flx/core/Facade.h>
#endif
namespace flx{
namespace core{

Void Facade_obj::__construct()
{
HX_STACK_PUSH("Facade::new","flx/core/Facade.hx",4);
{
}
;
	return null();
}

Facade_obj::~Facade_obj() { }

Dynamic Facade_obj::__CreateEmpty() { return  new Facade_obj; }
hx::ObjectPtr< Facade_obj > Facade_obj::__new()
{  hx::ObjectPtr< Facade_obj > result = new Facade_obj();
	result->__construct();
	return result;}

Dynamic Facade_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Facade_obj > result = new Facade_obj();
	result->__construct();
	return result;}

Void Facade_obj::init( ){
{
		HX_STACK_PUSH("Facade::init","flx/core/Facade.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_LINE(44)
		this->xp = (int)0;
		HX_STACK_LINE(45)
		this->health = (int)100;
		HX_STACK_LINE(46)
		this->armor = (int)0;
		HX_STACK_LINE(48)
		this->moveSpd = (int)200;
		HX_STACK_LINE(49)
		this->attackSpd = 1.0;
		HX_STACK_LINE(50)
		this->regen = 0.8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,init,(void))

Float Facade_obj::getRegen( ){
	HX_STACK_PUSH("Facade::getRegen","flx/core/Facade.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_LINE(39)
	return this->regen;
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,getRegen,return )

Float Facade_obj::getAttackSpd( ){
	HX_STACK_PUSH("Facade::getAttackSpd","flx/core/Facade.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_LINE(35)
	return this->attackSpd;
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,getAttackSpd,return )

Float Facade_obj::getMoveSpd( ){
	HX_STACK_PUSH("Facade::getMoveSpd","flx/core/Facade.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_LINE(31)
	return this->moveSpd;
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,getMoveSpd,return )

int Facade_obj::getArmor( ){
	HX_STACK_PUSH("Facade::getArmor","flx/core/Facade.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return this->armor;
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,getArmor,return )

int Facade_obj::getHealth( ){
	HX_STACK_PUSH("Facade::getHealth","flx/core/Facade.hx",23);
	HX_STACK_THIS(this);
	HX_STACK_LINE(23)
	return this->health;
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,getHealth,return )

int Facade_obj::getXp( ){
	HX_STACK_PUSH("Facade::getXp","flx/core/Facade.hx",19);
	HX_STACK_THIS(this);
	HX_STACK_LINE(19)
	return this->xp;
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,getXp,return )

::flx::core::Facade Facade_obj::I;


Facade_obj::Facade_obj()
{
}

void Facade_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Facade);
	HX_MARK_MEMBER_NAME(regen,"regen");
	HX_MARK_MEMBER_NAME(attackSpd,"attackSpd");
	HX_MARK_MEMBER_NAME(moveSpd,"moveSpd");
	HX_MARK_MEMBER_NAME(armor,"armor");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(xp,"xp");
	HX_MARK_END_CLASS();
}

void Facade_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(regen,"regen");
	HX_VISIT_MEMBER_NAME(attackSpd,"attackSpd");
	HX_VISIT_MEMBER_NAME(moveSpd,"moveSpd");
	HX_VISIT_MEMBER_NAME(armor,"armor");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(xp,"xp");
}

Dynamic Facade_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"I") ) { return I; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xp") ) { return xp; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getXp") ) { return getXp_dyn(); }
		if (HX_FIELD_EQ(inName,"regen") ) { return regen; }
		if (HX_FIELD_EQ(inName,"armor") ) { return armor; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"moveSpd") ) { return moveSpd; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRegen") ) { return getRegen_dyn(); }
		if (HX_FIELD_EQ(inName,"getArmor") ) { return getArmor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHealth") ) { return getHealth_dyn(); }
		if (HX_FIELD_EQ(inName,"attackSpd") ) { return attackSpd; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getMoveSpd") ) { return getMoveSpd_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getAttackSpd") ) { return getAttackSpd_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Facade_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"I") ) { I=inValue.Cast< ::flx::core::Facade >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xp") ) { xp=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"regen") ) { regen=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"armor") ) { armor=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"moveSpd") ) { moveSpd=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"attackSpd") ) { attackSpd=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Facade_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("regen"));
	outFields->push(HX_CSTRING("attackSpd"));
	outFields->push(HX_CSTRING("moveSpd"));
	outFields->push(HX_CSTRING("armor"));
	outFields->push(HX_CSTRING("health"));
	outFields->push(HX_CSTRING("xp"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("I"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("getRegen"),
	HX_CSTRING("getAttackSpd"),
	HX_CSTRING("getMoveSpd"),
	HX_CSTRING("getArmor"),
	HX_CSTRING("getHealth"),
	HX_CSTRING("getXp"),
	HX_CSTRING("regen"),
	HX_CSTRING("attackSpd"),
	HX_CSTRING("moveSpd"),
	HX_CSTRING("armor"),
	HX_CSTRING("health"),
	HX_CSTRING("xp"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Facade_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Facade_obj::I,"I");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Facade_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Facade_obj::I,"I");
};

Class Facade_obj::__mClass;

void Facade_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flx.core.Facade"), hx::TCanCast< Facade_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Facade_obj::__boot()
{
	I= ::flx::core::Facade_obj::__new();
}

} // end namespace flx
} // end namespace core
