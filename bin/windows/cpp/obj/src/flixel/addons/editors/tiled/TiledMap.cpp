#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
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
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledMap_obj::__construct(Dynamic Data)
{
HX_STACK_PUSH("TiledMap::new","flixel/addons/editors/tiled/TiledMap.hx",43);
{
	HX_STACK_LINE(44)
	this->properties = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();
	HX_STACK_LINE(45)
	::haxe::xml::Fast source = null();		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(46)
	::haxe::xml::Fast node = null();		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(55)
	if ((::Std_obj::is(Data,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(56)
		source = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(::openfl::Assets_obj::getText(Data)));
	}
	else{
		HX_STACK_LINE(60)
		if ((::Std_obj::is(Data,hx::ClassOf< ::Xml >()))){
			HX_STACK_LINE(61)
			source = ::haxe::xml::Fast_obj::__new(Data);
		}
		else{
			HX_STACK_LINE(65)
			hx::Throw (HX_CSTRING("Unknown TMX map format"));
		}
	}
	HX_STACK_LINE(69)
	source = source->node->resolve(HX_CSTRING("map"));
	HX_STACK_LINE(72)
	this->version = source->att->resolve(HX_CSTRING("version"));
	HX_STACK_LINE(74)
	if (((this->version == null()))){
		HX_STACK_LINE(75)
		this->version = HX_CSTRING("unknown");
	}
	HX_STACK_LINE(79)
	this->orientation = source->att->resolve(HX_CSTRING("orientation"));
	HX_STACK_LINE(81)
	if (((this->orientation == null()))){
		HX_STACK_LINE(82)
		this->orientation = HX_CSTRING("orthogonal");
	}
	HX_STACK_LINE(86)
	this->width = ::Std_obj::parseInt(source->att->resolve(HX_CSTRING("width")));
	HX_STACK_LINE(87)
	this->height = ::Std_obj::parseInt(source->att->resolve(HX_CSTRING("height")));
	HX_STACK_LINE(88)
	this->tileWidth = ::Std_obj::parseInt(source->att->resolve(HX_CSTRING("tilewidth")));
	HX_STACK_LINE(89)
	this->tileHeight = ::Std_obj::parseInt(source->att->resolve(HX_CSTRING("tileheight")));
	HX_STACK_LINE(92)
	this->fullWidth = (this->width * this->tileWidth);
	HX_STACK_LINE(93)
	this->fullHeight = (this->height * this->tileHeight);
	HX_STACK_LINE(95)
	this->noLoadHash = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(96)
	this->tilesets = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(97)
	this->layers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(98)
	this->objectGroups = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(101)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		this->properties->extend(node1);
	}
	HX_STACK_LINE(106)
	::String noLoadStr = this->properties->keys->get(HX_CSTRING("noload"));		HX_STACK_VAR(noLoadStr,"noLoadStr");
	HX_STACK_LINE(108)
	if (((noLoadStr != null()))){
		HX_STACK_LINE(110)
		::EReg regExp = ::EReg_obj::__new(HX_CSTRING("[,;|]"),HX_CSTRING(""));		HX_STACK_VAR(regExp,"regExp");
		HX_STACK_LINE(111)
		Array< ::String > noLoadArr = regExp->split(noLoadStr);		HX_STACK_VAR(noLoadArr,"noLoadArr");
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(113)
			while(((_g < noLoadArr->length))){
				HX_STACK_LINE(113)
				::String s = noLoadArr->__get(_g);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(113)
				++(_g);
				HX_STACK_LINE(115)
				this->noLoadHash->set(::StringTools_obj::trim(s),true);
			}
		}
	}
	HX_STACK_LINE(120)
	::String name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(121)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("tileset"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		{
			HX_STACK_LINE(123)
			name = node1->att->resolve(HX_CSTRING("name"));
			HX_STACK_LINE(125)
			if ((!(this->noLoadHash->exists(name)))){
				HX_STACK_LINE(126)
				this->tilesets->set(name,::flixel::addons::editors::tiled::TiledTileSet_obj::__new(node1));
			}
		}
;
	}
	HX_STACK_LINE(132)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("layer"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		{
			HX_STACK_LINE(134)
			name = node1->att->resolve(HX_CSTRING("name"));
			HX_STACK_LINE(136)
			if ((!(this->noLoadHash->exists(name)))){
				HX_STACK_LINE(137)
				this->layers->push(::flixel::addons::editors::tiled::TiledLayer_obj::__new(node1,hx::ObjectPtr<OBJ_>(this)));
			}
		}
;
	}
	HX_STACK_LINE(143)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("objectgroup"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		{
			HX_STACK_LINE(145)
			name = node1->att->resolve(HX_CSTRING("name"));
			HX_STACK_LINE(147)
			if ((!(this->noLoadHash->exists(name)))){
				HX_STACK_LINE(148)
				this->objectGroups->push(::flixel::addons::editors::tiled::TiledObjectGroup_obj::__new(node1,hx::ObjectPtr<OBJ_>(this)));
			}
		}
;
	}
}
;
	return null();
}

TiledMap_obj::~TiledMap_obj() { }

Dynamic TiledMap_obj::__CreateEmpty() { return  new TiledMap_obj; }
hx::ObjectPtr< TiledMap_obj > TiledMap_obj::__new(Dynamic Data)
{  hx::ObjectPtr< TiledMap_obj > result = new TiledMap_obj();
	result->__construct(Data);
	return result;}

Dynamic TiledMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledMap_obj > result = new TiledMap_obj();
	result->__construct(inArgs[0]);
	return result;}

::flixel::addons::editors::tiled::TiledTileSet TiledMap_obj::getGidOwner( int Gid){
	HX_STACK_PUSH("TiledMap::getGidOwner","flixel/addons/editors/tiled/TiledMap.hx",191);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Gid,"Gid");
	HX_STACK_LINE(192)
	::flixel::addons::editors::tiled::TiledTileSet last = null();		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(193)
	::flixel::addons::editors::tiled::TiledTileSet set;		HX_STACK_VAR(set,"set");
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::addons::editors::tiled::TiledMap_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/addons/editors/tiled/TiledMap.hx",195);
			{
				HX_STACK_LINE(195)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->tilesets);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","flixel/addons/editors/tiled/TiledMap.hx",195);
					{
						HX_STACK_LINE(195)
						return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(195)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(195)
	for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::flixel::addons::editors::tiled::TiledTileSet set1 = __it->next();
		if (((bool((Gid >= set1->firstGID)) && bool((Gid < (set1->firstGID + set1->numTiles)))))){
			HX_STACK_LINE(198)
			return set1;
		}
;
	}
	HX_STACK_LINE(203)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getGidOwner,return )

::flixel::addons::editors::tiled::TiledObjectGroup TiledMap_obj::getObjectGroup( ::String Name){
	HX_STACK_PUSH("TiledMap::getObjectGroup","flixel/addons/editors/tiled/TiledMap.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Name,"Name");
	HX_STACK_LINE(176)
	int i = this->objectGroups->length;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(178)
	while(((i > (int)0))){
		HX_STACK_LINE(179)
		if (((this->objectGroups->__get(--(i)).StaticCast< ::flixel::addons::editors::tiled::TiledObjectGroup >()->name == Name))){
			HX_STACK_LINE(181)
			return this->objectGroups->__get(i).StaticCast< ::flixel::addons::editors::tiled::TiledObjectGroup >();
		}
	}
	HX_STACK_LINE(186)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getObjectGroup,return )

::flixel::addons::editors::tiled::TiledLayer TiledMap_obj::getLayer( ::String Name){
	HX_STACK_PUSH("TiledMap::getLayer","flixel/addons/editors/tiled/TiledMap.hx",160);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Name,"Name");
	HX_STACK_LINE(161)
	int i = this->layers->length;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(163)
	while(((i > (int)0))){
		HX_STACK_LINE(164)
		if (((this->layers->__get(--(i)).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >()->name == Name))){
			HX_STACK_LINE(166)
			return this->layers->__get(i).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >();
		}
	}
	HX_STACK_LINE(171)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getLayer,return )

::flixel::addons::editors::tiled::TiledTileSet TiledMap_obj::getTileSet( ::String Name){
	HX_STACK_PUSH("TiledMap::getTileSet","flixel/addons/editors/tiled/TiledMap.hx",155);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Name,"Name");
	HX_STACK_LINE(155)
	return this->tilesets->get(Name);
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getTileSet,return )


TiledMap_obj::TiledMap_obj()
{
}

void TiledMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledMap);
	HX_MARK_MEMBER_NAME(objectGroups,"objectGroups");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(tilesets,"tilesets");
	HX_MARK_MEMBER_NAME(noLoadHash,"noLoadHash");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(fullHeight,"fullHeight");
	HX_MARK_MEMBER_NAME(fullWidth,"fullWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void TiledMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectGroups,"objectGroups");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(tilesets,"tilesets");
	HX_VISIT_MEMBER_NAME(noLoadHash,"noLoadHash");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(fullHeight,"fullHeight");
	HX_VISIT_MEMBER_NAME(fullWidth,"fullWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(version,"version");
}

Dynamic TiledMap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layers") ) { return layers; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"tilesets") ) { return tilesets; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fullWidth") ) { return fullWidth; }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getTileSet") ) { return getTileSet_dyn(); }
		if (HX_FIELD_EQ(inName,"noLoadHash") ) { return noLoadHash; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { return fullHeight; }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getGidOwner") ) { return getGidOwner_dyn(); }
		if (HX_FIELD_EQ(inName,"orientation") ) { return orientation; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectGroups") ) { return objectGroups; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getObjectGroup") ) { return getObjectGroup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { tilesets=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fullWidth") ) { fullWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noLoadHash") ) { noLoadHash=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { fullHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectGroups") ) { objectGroups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("objectGroups"));
	outFields->push(HX_CSTRING("layers"));
	outFields->push(HX_CSTRING("tilesets"));
	outFields->push(HX_CSTRING("noLoadHash"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("fullHeight"));
	outFields->push(HX_CSTRING("fullWidth"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("orientation"));
	outFields->push(HX_CSTRING("version"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getGidOwner"),
	HX_CSTRING("getObjectGroup"),
	HX_CSTRING("getLayer"),
	HX_CSTRING("getTileSet"),
	HX_CSTRING("objectGroups"),
	HX_CSTRING("layers"),
	HX_CSTRING("tilesets"),
	HX_CSTRING("noLoadHash"),
	HX_CSTRING("properties"),
	HX_CSTRING("fullHeight"),
	HX_CSTRING("fullWidth"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("orientation"),
	HX_CSTRING("version"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledMap_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledMap_obj::__mClass,"__mClass");
};

Class TiledMap_obj::__mClass;

void TiledMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.tiled.TiledMap"), hx::TCanCast< TiledMap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TiledMap_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
