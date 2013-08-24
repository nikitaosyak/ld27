#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
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
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledObject_obj::__construct(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledObjectGroup Parent)
{
HX_STACK_PUSH("TiledObject::new","flixel/addons/editors/tiled/TiledObject.hx",49);
{
	HX_STACK_LINE(50)
	this->xmlData = Source;
	HX_STACK_LINE(51)
	this->group = Parent;
	HX_STACK_LINE(52)
	this->name = (  ((Source->has->resolve(HX_CSTRING("name")))) ? ::String(Source->att->resolve(HX_CSTRING("name"))) : ::String(HX_CSTRING("[object]")) );
	HX_STACK_LINE(53)
	this->type = (  ((Source->has->resolve(HX_CSTRING("type")))) ? ::String(Source->att->resolve(HX_CSTRING("type"))) : ::String(Parent->name) );
	HX_STACK_LINE(54)
	this->x = ::Std_obj::parseInt(Source->att->resolve(HX_CSTRING("x")));
	HX_STACK_LINE(55)
	this->y = ::Std_obj::parseInt(Source->att->resolve(HX_CSTRING("y")));
	HX_STACK_LINE(56)
	this->width = (  ((Source->has->resolve(HX_CSTRING("width")))) ? int(::Std_obj::parseInt(Source->att->resolve(HX_CSTRING("width")))) : int((int)0) );
	HX_STACK_LINE(57)
	this->height = (  ((Source->has->resolve(HX_CSTRING("height")))) ? int(::Std_obj::parseInt(Source->att->resolve(HX_CSTRING("height")))) : int((int)0) );
	HX_STACK_LINE(58)
	this->angle = (  ((Source->has->resolve(HX_CSTRING("rotation")))) ? Float(::Std_obj::parseFloat(Source->att->resolve(HX_CSTRING("rotation")))) : Float((int)0) );
	HX_STACK_LINE(60)
	this->objectType = (int)0;
	HX_STACK_LINE(63)
	this->shared = null();
	HX_STACK_LINE(64)
	this->gid = (int)-1;
	HX_STACK_LINE(67)
	if (((bool(Source->has->resolve(HX_CSTRING("gid"))) && bool((Source->att->resolve(HX_CSTRING("gid")).length != (int)0))))){
		HX_STACK_LINE(69)
		this->gid = ::Std_obj::parseInt(Source->att->resolve(HX_CSTRING("gid")));
		HX_STACK_LINE(70)
		::flixel::addons::editors::tiled::TiledTileSet set;		HX_STACK_VAR(set,"set");
		struct _Function_2_1{
			inline static Dynamic Block( ::flixel::addons::editors::tiled::TiledObject_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/addons/editors/tiled/TiledObject.hx",72);
				{
					HX_STACK_LINE(72)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->group->map->tilesets);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_3_1","flixel/addons/editors/tiled/TiledObject.hx",72);
						{
							HX_STACK_LINE(72)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(72)
					return  Dynamic(new _Function_3_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(72)
		for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >((_Function_2_1::Block(this))());  __it->hasNext(); ){
			::flixel::addons::editors::tiled::TiledTileSet set1 = __it->next();
			{
				HX_STACK_LINE(74)
				this->shared = set1->getPropertiesByGid(this->gid);
				HX_STACK_LINE(76)
				if (((this->shared != null()))){
					HX_STACK_LINE(77)
					break;
				}
			}
;
		}
		HX_STACK_LINE(82)
		this->objectType = (int)4;
	}
	HX_STACK_LINE(86)
	::Xml node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(87)
	this->custom = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();
	HX_STACK_LINE(89)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(Source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		this->custom->extend(node1);
	}
	HX_STACK_LINE(95)
	if ((Source->hasNode->resolve(HX_CSTRING("ellipse")))){
		HX_STACK_LINE(95)
		this->objectType = (int)1;
	}
	else{
		HX_STACK_LINE(97)
		if ((Source->hasNode->resolve(HX_CSTRING("polygon")))){
			HX_STACK_LINE(98)
			this->objectType = (int)2;
			HX_STACK_LINE(99)
			this->getPoints(Source->node->resolve(HX_CSTRING("polygon")));
		}
		else{
			HX_STACK_LINE(100)
			if ((Source->hasNode->resolve(HX_CSTRING("polyline")))){
				HX_STACK_LINE(101)
				this->objectType = (int)3;
				HX_STACK_LINE(102)
				this->getPoints(Source->node->resolve(HX_CSTRING("polyline")));
			}
		}
	}
}
;
	return null();
}

TiledObject_obj::~TiledObject_obj() { }

Dynamic TiledObject_obj::__CreateEmpty() { return  new TiledObject_obj; }
hx::ObjectPtr< TiledObject_obj > TiledObject_obj::__new(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledObjectGroup Parent)
{  hx::ObjectPtr< TiledObject_obj > result = new TiledObject_obj();
	result->__construct(Source,Parent);
	return result;}

Dynamic TiledObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledObject_obj > result = new TiledObject_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void TiledObject_obj::getPoints( ::haxe::xml::Fast Node){
{
		HX_STACK_PUSH("TiledObject::getPoints","flixel/addons/editors/tiled/TiledObject.hx",106);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Node,"Node");
		HX_STACK_LINE(107)
		this->points = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(109)
		Array< ::String > pointsStr = Node->att->resolve(HX_CSTRING("points")).split(HX_CSTRING(" "));		HX_STACK_VAR(pointsStr,"pointsStr");
		HX_STACK_LINE(110)
		Array< ::String > pair;		HX_STACK_VAR(pair,"pair");
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(111)
			while(((_g < pointsStr->length))){
				HX_STACK_LINE(111)
				::String p = pointsStr->__get(_g);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(111)
				++(_g);
				HX_STACK_LINE(112)
				pair = p.split(HX_CSTRING(","));
				HX_STACK_LINE(113)
				this->points->push(::org::flixel::util::FlxPoint_obj::__new(::Std_obj::parseFloat(pair->__get((int)0)),::Std_obj::parseFloat(pair->__get((int)1))));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledObject_obj,getPoints,(void))


TiledObject_obj::TiledObject_obj()
{
}

void TiledObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObject);
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(objectType,"objectType");
	HX_MARK_MEMBER_NAME(shared,"shared");
	HX_MARK_MEMBER_NAME(custom,"custom");
	HX_MARK_MEMBER_NAME(gid,"gid");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(xmlData,"xmlData");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_END_CLASS();
}

void TiledObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(objectType,"objectType");
	HX_VISIT_MEMBER_NAME(shared,"shared");
	HX_VISIT_MEMBER_NAME(custom,"custom");
	HX_VISIT_MEMBER_NAME(gid,"gid");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(xmlData,"xmlData");
	HX_VISIT_MEMBER_NAME(group,"group");
}

Dynamic TiledObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { return gid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		if (HX_FIELD_EQ(inName,"shared") ) { return shared; }
		if (HX_FIELD_EQ(inName,"custom") ) { return custom; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xmlData") ) { return xmlData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getPoints") ) { return getPoints_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectType") ) { return objectType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { gid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::flixel::addons::editors::tiled::TiledObjectGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shared") ) { shared=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"custom") ) { custom=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xmlData") ) { xmlData=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectType") ) { objectType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("objectType"));
	outFields->push(HX_CSTRING("shared"));
	outFields->push(HX_CSTRING("custom"));
	outFields->push(HX_CSTRING("gid"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("xmlData"));
	outFields->push(HX_CSTRING("group"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getPoints"),
	HX_CSTRING("points"),
	HX_CSTRING("objectType"),
	HX_CSTRING("shared"),
	HX_CSTRING("custom"),
	HX_CSTRING("gid"),
	HX_CSTRING("angle"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("type"),
	HX_CSTRING("name"),
	HX_CSTRING("xmlData"),
	HX_CSTRING("group"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObject_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObject_obj::__mClass,"__mClass");
};

Class TiledObject_obj::__mClass;

void TiledObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.tiled.TiledObject"), hx::TCanCast< TiledObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TiledObject_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
