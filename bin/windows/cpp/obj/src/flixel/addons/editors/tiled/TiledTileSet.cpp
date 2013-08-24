#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledTileSet_obj::__construct(Dynamic data)
{
HX_STACK_PUSH("TiledTileSet::new","flixel/addons/editors/tiled/TiledTileSet.hx",32);
{
	HX_STACK_LINE(33)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	::haxe::xml::Fast source;		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(34)
	this->numTiles = (int)16777215;
	HX_STACK_LINE(35)
	this->numRows = this->numCols = (int)1;
	HX_STACK_LINE(38)
	if ((::Std_obj::is(data,hx::ClassOf< ::haxe::xml::Fast >()))){
		HX_STACK_LINE(39)
		source = data;
	}
	else{
		HX_STACK_LINE(42)
		if ((::Std_obj::is(data,hx::ClassOf< ::flash::utils::ByteArray >()))){
			HX_STACK_LINE(44)
			source = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(data->toString()));
			HX_STACK_LINE(45)
			source = source->node->resolve(HX_CSTRING("tileset"));
		}
		else{
			HX_STACK_LINE(48)
			hx::Throw (HX_CSTRING("Unknown TMX tileset format"));
		}
	}
	HX_STACK_LINE(52)
	this->firstGID = (  ((source->has->resolve(HX_CSTRING("firstgid")))) ? int(::Std_obj::parseInt(source->att->resolve(HX_CSTRING("firstgid")))) : int((int)1) );
	HX_STACK_LINE(55)
	if ((source->has->resolve(HX_CSTRING("source")))){
	}
	else{
		HX_STACK_LINE(62)
		::haxe::xml::Fast node1 = source->node->resolve(HX_CSTRING("image"));		HX_STACK_VAR(node1,"node1");
		HX_STACK_LINE(63)
		this->imageSource = node1->att->resolve(HX_CSTRING("source"));
		HX_STACK_LINE(65)
		Dynamic imgWidth = ::Std_obj::parseInt(node1->att->resolve(HX_CSTRING("width")));		HX_STACK_VAR(imgWidth,"imgWidth");
		HX_STACK_LINE(66)
		Dynamic imgHeight = ::Std_obj::parseInt(node1->att->resolve(HX_CSTRING("height")));		HX_STACK_VAR(imgHeight,"imgHeight");
		HX_STACK_LINE(68)
		this->name = source->att->resolve(HX_CSTRING("name"));
		HX_STACK_LINE(70)
		if ((source->has->resolve(HX_CSTRING("tilewidth")))){
			HX_STACK_LINE(71)
			this->tileWidth = ::Std_obj::parseInt(source->att->resolve(HX_CSTRING("tilewidth")));
		}
		HX_STACK_LINE(74)
		if ((source->has->resolve(HX_CSTRING("tileheight")))){
			HX_STACK_LINE(75)
			this->tileHeight = ::Std_obj::parseInt(source->att->resolve(HX_CSTRING("tileheight")));
		}
		HX_STACK_LINE(78)
		if ((source->has->resolve(HX_CSTRING("spacing")))){
			HX_STACK_LINE(79)
			this->spacing = ::Std_obj::parseInt(source->att->resolve(HX_CSTRING("spacing")));
		}
		HX_STACK_LINE(82)
		if ((source->has->resolve(HX_CSTRING("margin")))){
			HX_STACK_LINE(83)
			this->margin = ::Std_obj::parseInt(source->att->resolve(HX_CSTRING("margin")));
		}
		HX_STACK_LINE(88)
		this->properties = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();
		HX_STACK_LINE(89)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast prop = __it->next();
			this->properties->extend(prop);
		}
		HX_STACK_LINE(94)
		this->tileProps = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(96)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("tile"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast node2 = __it->next();
			{
				HX_STACK_LINE(98)
				if ((!(node2->has->resolve(HX_CSTRING("id"))))){
					HX_STACK_LINE(99)
					continue;
				}
				HX_STACK_LINE(103)
				int id = ::Std_obj::parseInt(node2->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(104)
				this->tileProps[id] = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();
				HX_STACK_LINE(106)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(node2->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast prop = __it->next();
					this->tileProps->__get(id).StaticCast< ::flixel::addons::editors::tiled::TiledPropertySet >()->extend(prop);
				}
			}
;
		}
		HX_STACK_LINE(112)
		if (((bool((this->tileWidth > (int)0)) && bool((this->tileHeight > (int)0))))){
			HX_STACK_LINE(114)
			this->numRows = (Float(imgWidth) / Float(this->tileWidth));
			HX_STACK_LINE(115)
			this->numCols = (Float(imgHeight) / Float(this->tileHeight));
			HX_STACK_LINE(116)
			this->numTiles = (this->numRows * this->numCols);
		}
	}
}
;
	return null();
}

TiledTileSet_obj::~TiledTileSet_obj() { }

Dynamic TiledTileSet_obj::__CreateEmpty() { return  new TiledTileSet_obj; }
hx::ObjectPtr< TiledTileSet_obj > TiledTileSet_obj::__new(Dynamic data)
{  hx::ObjectPtr< TiledTileSet_obj > result = new TiledTileSet_obj();
	result->__construct(data);
	return result;}

Dynamic TiledTileSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledTileSet_obj > result = new TiledTileSet_obj();
	result->__construct(inArgs[0]);
	return result;}

::flash::geom::Rectangle TiledTileSet_obj::getRect( int ID){
	HX_STACK_PUSH("TiledTileSet::getRect","flixel/addons/editors/tiled/TiledTileSet.hx",152);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_LINE(152)
	return ::flash::geom::Rectangle_obj::__new((hx::Mod(ID,this->numCols) * this->tileWidth),((Float(ID) / Float(this->numCols)) * this->tileHeight),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getRect,return )

::flixel::addons::editors::tiled::TiledPropertySet TiledTileSet_obj::getProperties( int ID){
	HX_STACK_PUSH("TiledTileSet::getProperties","flixel/addons/editors/tiled/TiledTileSet.hx",147);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_LINE(147)
	return this->tileProps->__get(ID).StaticCast< ::flixel::addons::editors::tiled::TiledPropertySet >();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getProperties,return )

::flixel::addons::editors::tiled::TiledPropertySet TiledTileSet_obj::getPropertiesByGid( int Gid){
	HX_STACK_PUSH("TiledTileSet::getPropertiesByGid","flixel/addons/editors/tiled/TiledTileSet.hx",137);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Gid,"Gid");
	HX_STACK_LINE(138)
	if (((this->tileProps != null()))){
		HX_STACK_LINE(139)
		return this->tileProps->__get((Gid - this->firstGID)).StaticCast< ::flixel::addons::editors::tiled::TiledPropertySet >();
	}
	HX_STACK_LINE(143)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getPropertiesByGid,return )

int TiledTileSet_obj::toGid( int ID){
	HX_STACK_PUSH("TiledTileSet::toGid","flixel/addons/editors/tiled/TiledTileSet.hx",132);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_LINE(132)
	return (this->firstGID + ID);
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,toGid,return )

int TiledTileSet_obj::fromGid( int Gid){
	HX_STACK_PUSH("TiledTileSet::fromGid","flixel/addons/editors/tiled/TiledTileSet.hx",127);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Gid,"Gid");
	HX_STACK_LINE(127)
	return (Gid - ((this->firstGID - (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,fromGid,return )

bool TiledTileSet_obj::hasGid( int Gid){
	HX_STACK_PUSH("TiledTileSet::hasGid","flixel/addons/editors/tiled/TiledTileSet.hx",122);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Gid,"Gid");
	HX_STACK_LINE(122)
	return (bool((Gid >= this->firstGID)) && bool((Gid < (this->firstGID + this->numTiles))));
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,hasGid,return )


TiledTileSet_obj::TiledTileSet_obj()
{
}

void TiledTileSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledTileSet);
	HX_MARK_MEMBER_NAME(tileProps,"tileProps");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(numTiles,"numTiles");
	HX_MARK_MEMBER_NAME(imageSource,"imageSource");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(firstGID,"firstGID");
	HX_MARK_END_CLASS();
}

void TiledTileSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileProps,"tileProps");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(numTiles,"numTiles");
	HX_VISIT_MEMBER_NAME(imageSource,"imageSource");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(firstGID,"firstGID");
}

Dynamic TiledTileSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toGid") ) { return toGid_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hasGid") ) { return hasGid_dyn(); }
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		if (HX_FIELD_EQ(inName,"fromGid") ) { return fromGid_dyn(); }
		if (HX_FIELD_EQ(inName,"numCols") ) { return numCols; }
		if (HX_FIELD_EQ(inName,"numRows") ) { return numRows; }
		if (HX_FIELD_EQ(inName,"spacing") ) { return spacing; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numTiles") ) { return numTiles; }
		if (HX_FIELD_EQ(inName,"firstGID") ) { return firstGID; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileProps") ) { return tileProps; }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { return imageSource; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getProperties") ) { return getProperties_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPropertiesByGid") ) { return getPropertiesByGid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledTileSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spacing") ) { spacing=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firstGID") ) { firstGID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileProps") ) { tileProps=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { imageSource=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledTileSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tileProps"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("numCols"));
	outFields->push(HX_CSTRING("numRows"));
	outFields->push(HX_CSTRING("numTiles"));
	outFields->push(HX_CSTRING("imageSource"));
	outFields->push(HX_CSTRING("margin"));
	outFields->push(HX_CSTRING("spacing"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("firstGID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getRect"),
	HX_CSTRING("getProperties"),
	HX_CSTRING("getPropertiesByGid"),
	HX_CSTRING("toGid"),
	HX_CSTRING("fromGid"),
	HX_CSTRING("hasGid"),
	HX_CSTRING("tileProps"),
	HX_CSTRING("properties"),
	HX_CSTRING("numCols"),
	HX_CSTRING("numRows"),
	HX_CSTRING("numTiles"),
	HX_CSTRING("imageSource"),
	HX_CSTRING("margin"),
	HX_CSTRING("spacing"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("name"),
	HX_CSTRING("firstGID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledTileSet_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledTileSet_obj::__mClass,"__mClass");
};

Class TiledTileSet_obj::__mClass;

void TiledTileSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.tiled.TiledTileSet"), hx::TCanCast< TiledTileSet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TiledTileSet_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
