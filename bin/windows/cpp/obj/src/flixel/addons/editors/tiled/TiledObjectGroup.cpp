#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup
#include <flixel/addons/editors/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledObjectGroup_obj::__construct(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent)
{
HX_STACK_PUSH("TiledObjectGroup::new","flixel/addons/editors/tiled/TiledObjectGroup.hx",25);
{
	HX_STACK_LINE(26)
	this->properties = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();
	HX_STACK_LINE(27)
	this->objects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(29)
	this->map = Parent;
	HX_STACK_LINE(30)
	this->name = Source->att->resolve(HX_CSTRING("name"));
	HX_STACK_LINE(31)
	this->x = (  ((Source->has->resolve(HX_CSTRING("x")))) ? int(::Std_obj::parseInt(Source->att->resolve(HX_CSTRING("x")))) : int((int)0) );
	HX_STACK_LINE(32)
	this->y = (  ((Source->has->resolve(HX_CSTRING("y")))) ? int(::Std_obj::parseInt(Source->att->resolve(HX_CSTRING("y")))) : int((int)0) );
	HX_STACK_LINE(33)
	this->width = ::Std_obj::parseInt(Source->att->resolve(HX_CSTRING("width")));
	HX_STACK_LINE(34)
	this->height = ::Std_obj::parseInt(Source->att->resolve(HX_CSTRING("height")));
	HX_STACK_LINE(35)
	this->visible = (  (((bool(Source->has->resolve(HX_CSTRING("visible"))) && bool((Source->att->resolve(HX_CSTRING("visible")) == HX_CSTRING("1")))))) ? bool(true) : bool(false) );
	HX_STACK_LINE(36)
	this->opacity = (  ((Source->has->resolve(HX_CSTRING("opacity")))) ? Float(::Std_obj::parseFloat(Source->att->resolve(HX_CSTRING("opacity")))) : Float((int)0) );
	HX_STACK_LINE(39)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(41)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(Source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		this->properties->extend(node1);
	}
	HX_STACK_LINE(47)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(Source->nodes->resolve(HX_CSTRING("object"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		this->objects->push(::flixel::addons::editors::tiled::TiledObject_obj::__new(node1,hx::ObjectPtr<OBJ_>(this)));
	}
}
;
	return null();
}

TiledObjectGroup_obj::~TiledObjectGroup_obj() { }

Dynamic TiledObjectGroup_obj::__CreateEmpty() { return  new TiledObjectGroup_obj; }
hx::ObjectPtr< TiledObjectGroup_obj > TiledObjectGroup_obj::__new(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent)
{  hx::ObjectPtr< TiledObjectGroup_obj > result = new TiledObjectGroup_obj();
	result->__construct(Source,Parent);
	return result;}

Dynamic TiledObjectGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledObjectGroup_obj > result = new TiledObjectGroup_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


TiledObjectGroup_obj::TiledObjectGroup_obj()
{
}

void TiledObjectGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObjectGroup);
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_END_CLASS();
}

void TiledObjectGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(map,"map");
}

Dynamic TiledObjectGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledObjectGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::flixel::addons::editors::tiled::TiledMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledObjectGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("objects"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("opacity"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("map"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("objects"),
	HX_CSTRING("properties"),
	HX_CSTRING("visible"),
	HX_CSTRING("opacity"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("name"),
	HX_CSTRING("map"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObjectGroup_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObjectGroup_obj::__mClass,"__mClass");
};

Class TiledObjectGroup_obj::__mClass;

void TiledObjectGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.tiled.TiledObjectGroup"), hx::TCanCast< TiledObjectGroup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TiledObjectGroup_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
