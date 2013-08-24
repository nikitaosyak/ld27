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
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_CompressionAlgorithm
#include <flash/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTile
#include <flixel/addons/editors/tiled/TiledTile.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

Void TiledLayer_obj::__construct(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent)
{
HX_STACK_PUSH("TiledLayer::new","flixel/addons/editors/tiled/TiledLayer.hx",31);
{
	HX_STACK_LINE(32)
	this->properties = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();
	HX_STACK_LINE(33)
	this->map = Parent;
	HX_STACK_LINE(34)
	this->name = Source->att->resolve(HX_CSTRING("name"));
	HX_STACK_LINE(35)
	this->x = (  ((Source->has->resolve(HX_CSTRING("x")))) ? int(::Std_obj::parseInt(Source->att->resolve(HX_CSTRING("x")))) : int((int)0) );
	HX_STACK_LINE(36)
	this->y = (  ((Source->has->resolve(HX_CSTRING("y")))) ? int(::Std_obj::parseInt(Source->att->resolve(HX_CSTRING("y")))) : int((int)0) );
	HX_STACK_LINE(37)
	this->width = ::Std_obj::parseInt(Source->att->resolve(HX_CSTRING("width")));
	HX_STACK_LINE(38)
	this->height = ::Std_obj::parseInt(Source->att->resolve(HX_CSTRING("height")));
	HX_STACK_LINE(39)
	this->visible = (  (((bool(Source->has->resolve(HX_CSTRING("visible"))) && bool((Source->att->resolve(HX_CSTRING("visible")) == HX_CSTRING("1")))))) ? bool(true) : bool(false) );
	HX_STACK_LINE(40)
	this->opacity = (  ((Source->has->resolve(HX_CSTRING("opacity")))) ? Float(::Std_obj::parseFloat(Source->att->resolve(HX_CSTRING("opacity")))) : Float(1.0) );
	HX_STACK_LINE(41)
	this->tiles = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(44)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(46)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(Source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		this->properties->extend(node1);
	}
	HX_STACK_LINE(52)
	this->_xmlData = Source->node->resolve(HX_CSTRING("data"));
	HX_STACK_LINE(54)
	if (((this->_xmlData == null()))){
		HX_STACK_LINE(55)
		hx::Throw (HX_CSTRING("Error loading TiledLayer level data"));
	}
}
;
	return null();
}

TiledLayer_obj::~TiledLayer_obj() { }

Dynamic TiledLayer_obj::__CreateEmpty() { return  new TiledLayer_obj; }
hx::ObjectPtr< TiledLayer_obj > TiledLayer_obj::__new(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent)
{  hx::ObjectPtr< TiledLayer_obj > result = new TiledLayer_obj();
	result->__construct(Source,Parent);
	return result;}

Dynamic TiledLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledLayer_obj > result = new TiledLayer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Array< int > TiledLayer_obj::get_tileArray( ){
	HX_STACK_PUSH("TiledLayer::get_tileArray","flixel/addons/editors/tiled/TiledLayer.hx",218);
	HX_STACK_THIS(this);
	HX_STACK_LINE(219)
	if (((this->tileArray == null()))){
		HX_STACK_LINE(221)
		::flash::utils::ByteArray mapData = this->getByteArrayData();		HX_STACK_VAR(mapData,"mapData");
		HX_STACK_LINE(223)
		if (((mapData == null()))){
			HX_STACK_LINE(224)
			hx::Throw (HX_CSTRING("Must use Base64 encoding (with or without zlip compression) in order to get 1D Array."));
		}
		HX_STACK_LINE(228)
		this->tileArray = Array_obj< int >::__new();
		HX_STACK_LINE(230)
		while(((mapData->position < mapData->length))){
			HX_STACK_LINE(231)
			this->tileArray->push(this->resolveTile(mapData->readUnsignedInt()));
		}
	}
	HX_STACK_LINE(236)
	return this->tileArray;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledLayer_obj,get_tileArray,return )

::String TiledLayer_obj::get_csvData( ){
	HX_STACK_PUSH("TiledLayer::get_csvData","flixel/addons/editors/tiled/TiledLayer.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_LINE(201)
	if (((this->csvData == null()))){
		HX_STACK_LINE(202)
		if (((this->_xmlData->att->resolve(HX_CSTRING("encoding")) == HX_CSTRING("csv")))){
			HX_STACK_LINE(204)
			this->csvData = this->_xmlData->get_innerData();
		}
		else{
			HX_STACK_LINE(208)
			hx::Throw (HX_CSTRING("Must use CSV encoding in order to get CSV data."));
		}
	}
	HX_STACK_LINE(212)
	return this->csvData;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledLayer_obj,get_csvData,return )

::String TiledLayer_obj::resolveCsvTiles( ::String csvData){
	HX_STACK_PUSH("TiledLayer::resolveCsvTiles","flixel/addons/editors/tiled/TiledLayer.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_ARG(csvData,"csvData");
	HX_STACK_LINE(176)
	::StringBuf buffer = ::StringBuf_obj::__new();		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(177)
	Array< ::String > rows = csvData.split(HX_CSTRING("\n"));		HX_STACK_VAR(rows,"rows");
	HX_STACK_LINE(178)
	Array< ::String > values;		HX_STACK_VAR(values,"values");
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(179)
		while(((_g < rows->length))){
			HX_STACK_LINE(179)
			::String row = rows->__get(_g);		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(179)
			++(_g);
			HX_STACK_LINE(180)
			values = row.split(HX_CSTRING(","));
			HX_STACK_LINE(181)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(182)
				while(((_g1 < values->length))){
					HX_STACK_LINE(182)
					::String v = values->__get(_g1);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(182)
					++(_g1);
					HX_STACK_LINE(183)
					if (((v == HX_CSTRING("")))){
						HX_STACK_LINE(183)
						continue;
					}
					HX_STACK_LINE(186)
					i = ::Std_obj::parseInt(v);
					HX_STACK_LINE(187)
					buffer->add((this->resolveTile(i) + HX_CSTRING(",")));
				}
			}
			HX_STACK_LINE(189)
			buffer->add(HX_CSTRING("\n"));
		}
	}
	HX_STACK_LINE(192)
	::String result = buffer->b->join(HX_CSTRING(""));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(193)
	buffer = null();
	HX_STACK_LINE(194)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,resolveCsvTiles,return )

int TiledLayer_obj::resolveTile( int GlobalTileID){
	HX_STACK_PUSH("TiledLayer::resolveTile","flixel/addons/editors/tiled/TiledLayer.hx",151);
	HX_STACK_THIS(this);
	HX_STACK_ARG(GlobalTileID,"GlobalTileID");
	HX_STACK_LINE(152)
	::flixel::addons::editors::tiled::TiledTile tile = ::flixel::addons::editors::tiled::TiledTile_obj::__new(GlobalTileID);		HX_STACK_VAR(tile,"tile");
	HX_STACK_LINE(154)
	int tilesetID = tile->tilesetID;		HX_STACK_VAR(tilesetID,"tilesetID");
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::addons::editors::tiled::TiledLayer_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/addons/editors/tiled/TiledLayer.hx",155);
			{
				HX_STACK_LINE(155)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->map->tilesets);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","flixel/addons/editors/tiled/TiledLayer.hx",155);
					{
						HX_STACK_LINE(155)
						return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(155)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(155)
	for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::flixel::addons::editors::tiled::TiledTileSet tileset = __it->next();
		if (((bool((tilesetID >= tileset->firstGID)) && bool((tilesetID < (tileset->firstGID + tileset->numTiles)))))){
			HX_STACK_LINE(159)
			this->tiles->push(tile);
			HX_STACK_LINE(161)
			return tilesetID;
		}
;
	}
	HX_STACK_LINE(164)
	this->tiles->push(null());
	HX_STACK_LINE(165)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,resolveTile,return )

::flash::utils::ByteArray TiledLayer_obj::getByteArrayData( ){
	HX_STACK_PUSH("TiledLayer::getByteArrayData","flixel/addons/editors/tiled/TiledLayer.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	::flash::utils::ByteArray result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(64)
	if (((this->_xmlData->att->resolve(HX_CSTRING("encoding")) == HX_CSTRING("base64")))){
		HX_STACK_LINE(66)
		::String chunk = this->_xmlData->get_innerData();		HX_STACK_VAR(chunk,"chunk");
		HX_STACK_LINE(67)
		bool compressed = false;		HX_STACK_VAR(compressed,"compressed");
		HX_STACK_LINE(69)
		result = ::flixel::addons::editors::tiled::TiledLayer_obj::base64ToByteArray(chunk);
		HX_STACK_LINE(71)
		if ((this->_xmlData->has->resolve(HX_CSTRING("compression")))){
			HX_STACK_LINE(73)
			::String _g = this->_xmlData->att->resolve(HX_CSTRING("compression"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(73)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("zlib"))){
				HX_STACK_LINE(75)
				compressed = true;
			}
			else  {
				HX_STACK_LINE(77)
				hx::Throw (HX_CSTRING("TiledLayer - data compression type not supported!"));
			}
;
;
		}
		HX_STACK_LINE(82)
		if ((compressed)){
			HX_STACK_LINE(83)
			result->uncompress(null());
		}
		HX_STACK_LINE(92)
		result->set_endian(HX_CSTRING("littleEndian"));
	}
	HX_STACK_LINE(95)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledLayer_obj,getByteArrayData,return )

::flash::utils::ByteArray TiledLayer_obj::base64ToByteArray( ::String data){
	HX_STACK_PUSH("TiledLayer::base64ToByteArray","flixel/addons/editors/tiled/TiledLayer.hx",99);
	HX_STACK_ARG(data,"data");
	HX_STACK_LINE(100)
	::flash::utils::ByteArray output = ::flash::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(103)
	Array< int > lookup = Array_obj< int >::__new();		HX_STACK_VAR(lookup,"lookup");
	HX_STACK_LINE(104)
	int c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(106)
	{
		HX_STACK_LINE(106)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=").length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		while(((_g1 < _g))){
			HX_STACK_LINE(106)
			int c1 = (_g1)++;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(108)
			lookup[HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=").charCodeAt(c1)] = c1;
		}
	}
	HX_STACK_LINE(111)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(113)
	while(((i < (data.length - (int)3)))){
		HX_STACK_LINE(116)
		if (((bool((data.charAt(i) == HX_CSTRING(" "))) || bool((data.charAt(i) == HX_CSTRING("\n")))))){
			HX_STACK_LINE(118)
			(i)++;
			HX_STACK_LINE(118)
			continue;
		}
		HX_STACK_LINE(122)
		int a0 = lookup->__get(data.charCodeAt(i));		HX_STACK_VAR(a0,"a0");
		HX_STACK_LINE(123)
		int a1 = lookup->__get(data.charCodeAt((i + (int)1)));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(124)
		int a2 = lookup->__get(data.charCodeAt((i + (int)2)));		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(125)
		int a3 = lookup->__get(data.charCodeAt((i + (int)3)));		HX_STACK_VAR(a3,"a3");
		HX_STACK_LINE(128)
		if (((a1 < (int)64))){
			HX_STACK_LINE(130)
			output->ensureElem(output->position,true);
			HX_STACK_LINE(130)
			output->b[(output->position)++] = (((int(a0) << int((int)2))) + ((int(((int(a1) & int((int)48)))) >> int((int)4))));
		}
		HX_STACK_LINE(132)
		if (((a2 < (int)64))){
			HX_STACK_LINE(134)
			output->ensureElem(output->position,true);
			HX_STACK_LINE(134)
			output->b[(output->position)++] = (((int(((int(a1) & int((int)15)))) << int((int)4))) + ((int(((int(a2) & int((int)60)))) >> int((int)2))));
		}
		HX_STACK_LINE(136)
		if (((a3 < (int)64))){
			HX_STACK_LINE(138)
			output->ensureElem(output->position,true);
			HX_STACK_LINE(138)
			output->b[(output->position)++] = (((int(((int(a2) & int((int)3)))) << int((int)6))) + a3);
		}
		HX_STACK_LINE(141)
		hx::AddEq(i,(int)4);
	}
	HX_STACK_LINE(145)
	output->position = (int)0;
	HX_STACK_LINE(147)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,base64ToByteArray,return )


TiledLayer_obj::TiledLayer_obj()
{
}

void TiledLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledLayer);
	HX_MARK_MEMBER_NAME(tileArray,"tileArray");
	HX_MARK_MEMBER_NAME(csvData,"csvData");
	HX_MARK_MEMBER_NAME(_xmlData,"_xmlData");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
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

void TiledLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileArray,"tileArray");
	HX_VISIT_MEMBER_NAME(csvData,"csvData");
	HX_VISIT_MEMBER_NAME(_xmlData,"_xmlData");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
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

Dynamic TiledLayer_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"tiles") ) { return tiles; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"csvData") ) { return inCallProp ? get_csvData() : csvData; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_xmlData") ) { return _xmlData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileArray") ) { return inCallProp ? get_tileArray() : tileArray; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_csvData") ) { return get_csvData_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveTile") ) { return resolveTile_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tileArray") ) { return get_tileArray_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resolveCsvTiles") ) { return resolveCsvTiles_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getByteArrayData") ) { return getByteArrayData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"base64ToByteArray") ) { return base64ToByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"csvData") ) { csvData=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_xmlData") ) { _xmlData=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileArray") ) { tileArray=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tileArray"));
	outFields->push(HX_CSTRING("csvData"));
	outFields->push(HX_CSTRING("_xmlData"));
	outFields->push(HX_CSTRING("tiles"));
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
	HX_CSTRING("base64ToByteArray"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_tileArray"),
	HX_CSTRING("tileArray"),
	HX_CSTRING("get_csvData"),
	HX_CSTRING("csvData"),
	HX_CSTRING("resolveCsvTiles"),
	HX_CSTRING("resolveTile"),
	HX_CSTRING("getByteArrayData"),
	HX_CSTRING("_xmlData"),
	HX_CSTRING("tiles"),
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
	HX_MARK_MEMBER_NAME(TiledLayer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledLayer_obj::__mClass,"__mClass");
};

Class TiledLayer_obj::__mClass;

void TiledLayer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.tiled.TiledLayer"), hx::TCanCast< TiledLayer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TiledLayer_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
