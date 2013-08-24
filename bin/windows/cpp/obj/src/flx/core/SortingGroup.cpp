#include <hxcpp.h>

#ifndef INCLUDED_flx_core_SortingGroup
#include <flx/core/SortingGroup.h>
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
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif
namespace flx{
namespace core{

Void SortingGroup_obj::__construct()
{
HX_STACK_PUSH("SortingGroup::new","flx/core/SortingGroup.hx",5);
{
	HX_STACK_LINE(5)
	super::__construct(null());
}
;
	return null();
}

SortingGroup_obj::~SortingGroup_obj() { }

Dynamic SortingGroup_obj::__CreateEmpty() { return  new SortingGroup_obj; }
hx::ObjectPtr< SortingGroup_obj > SortingGroup_obj::__new()
{  hx::ObjectPtr< SortingGroup_obj > result = new SortingGroup_obj();
	result->__construct();
	return result;}

Dynamic SortingGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SortingGroup_obj > result = new SortingGroup_obj();
	result->__construct();
	return result;}

int SortingGroup_obj::sortHandler( Dynamic _tmp_Obj1,Dynamic _tmp_Obj2){
	HX_STACK_PUSH("SortingGroup::sortHandler","flx/core/SortingGroup.hx",9);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_Obj1,"_tmp_Obj1");
	HX_STACK_ARG(_tmp_Obj2,"_tmp_Obj2");
	HX_STACK_LINE(10)
	::org::flixel::FlxSprite Obj1 = _tmp_Obj1;		HX_STACK_VAR(Obj1,"Obj1");
	::org::flixel::FlxSprite Obj2 = _tmp_Obj2;		HX_STACK_VAR(Obj2,"Obj2");
	HX_STACK_LINE(10)
	Float prop1 = (Obj1->y + Obj1->height);		HX_STACK_VAR(prop1,"prop1");
	HX_STACK_LINE(11)
	Float prop2 = (Obj2->y + Obj2->height);		HX_STACK_VAR(prop2,"prop2");
	HX_STACK_LINE(13)
	if (((prop1 < prop2))){
		HX_STACK_LINE(14)
		return this->_sortOrder;
	}
	else{
		HX_STACK_LINE(17)
		if (((prop1 > prop2))){
			HX_STACK_LINE(18)
			return -(this->_sortOrder);
		}
	}
	HX_STACK_LINE(21)
	return (int)0;
}



SortingGroup_obj::SortingGroup_obj()
{
}

void SortingGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SortingGroup);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SortingGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SortingGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"sortHandler") ) { return sortHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SortingGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SortingGroup_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("sortHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SortingGroup_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SortingGroup_obj::__mClass,"__mClass");
};

Class SortingGroup_obj::__mClass;

void SortingGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flx.core.SortingGroup"), hx::TCanCast< SortingGroup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SortingGroup_obj::__boot()
{
}

} // end namespace flx
} // end namespace core
