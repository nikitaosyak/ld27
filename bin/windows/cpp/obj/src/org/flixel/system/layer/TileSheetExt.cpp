#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetExt
#include <org/flixel/system/layer/TileSheetExt.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace layer{

Void TileSheetExt_obj::__construct(::flash::display::BitmapData bitmap)
{
HX_STACK_PUSH("TileSheetExt::new","org/flixel/system/layer/TileSheetExt.hx",73);
{
	HX_STACK_LINE(74)
	super::__construct(bitmap);
	HX_STACK_LINE(76)
	this->_tileIDs = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(77)
	this->_numTiles = (int)0;
}
;
	return null();
}

TileSheetExt_obj::~TileSheetExt_obj() { }

Dynamic TileSheetExt_obj::__CreateEmpty() { return  new TileSheetExt_obj; }
hx::ObjectPtr< TileSheetExt_obj > TileSheetExt_obj::__new(::flash::display::BitmapData bitmap)
{  hx::ObjectPtr< TileSheetExt_obj > result = new TileSheetExt_obj();
	result->__construct(bitmap);
	return result;}

Dynamic TileSheetExt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSheetExt_obj > result = new TileSheetExt_obj();
	result->__construct(inArgs[0]);
	return result;}

::flash::display::BitmapData TileSheetExt_obj::get_nmeBitmap( ){
	HX_STACK_PUSH("TileSheetExt::get_nmeBitmap","org/flixel/system/layer/TileSheetExt.hx",124);
	HX_STACK_THIS(this);
	HX_STACK_LINE(124)
	return this->__bitmap;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetExt_obj,get_nmeBitmap,return )

Void TileSheetExt_obj::destroy( ){
{
		HX_STACK_PUSH("TileSheetExt::destroy","org/flixel/system/layer/TileSheetExt.hx",111);
		HX_STACK_THIS(this);
		HX_STACK_LINE(113)
		this->__bitmap = null();
		HX_STACK_LINE(117)
		this->_tileIDs = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetExt_obj,destroy,(void))

int TileSheetExt_obj::addTileRectID( ::flash::geom::Rectangle rect,::flash::geom::Point point){
	HX_STACK_PUSH("TileSheetExt::addTileRectID","org/flixel/system/layer/TileSheetExt.hx",95);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(96)
	::String key = this->getKey(rect,point);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(98)
	if ((this->_tileIDs->exists(key))){
		HX_STACK_LINE(99)
		return this->_tileIDs->get(key);
	}
	HX_STACK_LINE(103)
	this->addTileRect(rect,point);
	HX_STACK_LINE(104)
	int tileID = this->_numTiles;		HX_STACK_VAR(tileID,"tileID");
	HX_STACK_LINE(105)
	(this->_numTiles)++;
	HX_STACK_LINE(106)
	this->_tileIDs->set(key,tileID);
	HX_STACK_LINE(107)
	return tileID;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetExt_obj,addTileRectID,return )

::String TileSheetExt_obj::getKey( ::flash::geom::Rectangle rect,::flash::geom::Point point){
	HX_STACK_PUSH("TileSheetExt::getKey","org/flixel/system/layer/TileSheetExt.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(82)
	::String key = (((((((rect->x + HX_CSTRING("_")) + rect->y) + HX_CSTRING("_")) + rect->width) + HX_CSTRING("_")) + rect->height) + HX_CSTRING("_"));		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(83)
	if (((point != null()))){
		HX_STACK_LINE(84)
		key = (((key + point->x) + HX_CSTRING("_")) + point->y);
	}
	HX_STACK_LINE(87)
	return key;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetExt_obj,getKey,return )

::haxe::ds::ObjectMap TileSheetExt_obj::_tileSheetCache;

int TileSheetExt_obj::_DRAWCALLS;

::org::flixel::system::layer::TileSheetExt TileSheetExt_obj::addTileSheet( ::flash::display::BitmapData bitmapData){
	HX_STACK_PUSH("TileSheetExt::addTileSheet","org/flixel/system/layer/TileSheetExt.hx",21);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(22)
	if ((::org::flixel::system::layer::TileSheetExt_obj::containsTileSheet(bitmapData))){
		HX_STACK_LINE(23)
		return ::org::flixel::system::layer::TileSheetExt_obj::getTileSheet(bitmapData);
	}
	HX_STACK_LINE(27)
	::org::flixel::system::layer::TileSheetExt tempTileSheetData = ::org::flixel::system::layer::TileSheetExt_obj::__new(bitmapData);		HX_STACK_VAR(tempTileSheetData,"tempTileSheetData");
	HX_STACK_LINE(28)
	::org::flixel::system::layer::TileSheetExt_obj::_tileSheetCache->__Internal->set(::__hxcpp_obj_id(bitmapData),tempTileSheetData);
	HX_STACK_LINE(29)
	return tempTileSheetData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetExt_obj,addTileSheet,return )

bool TileSheetExt_obj::containsTileSheet( ::flash::display::BitmapData bitmapData){
	HX_STACK_PUSH("TileSheetExt::containsTileSheet","org/flixel/system/layer/TileSheetExt.hx",33);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(33)
	return ::org::flixel::system::layer::TileSheetExt_obj::_tileSheetCache->__Internal->exists(::__hxcpp_obj_id(bitmapData));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetExt_obj,containsTileSheet,return )

::org::flixel::system::layer::TileSheetExt TileSheetExt_obj::getTileSheet( ::flash::display::BitmapData bitmapData){
	HX_STACK_PUSH("TileSheetExt::getTileSheet","org/flixel/system/layer/TileSheetExt.hx",38);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(38)
	return ::org::flixel::system::layer::TileSheetExt_obj::_tileSheetCache->get(bitmapData);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetExt_obj,getTileSheet,return )

Void TileSheetExt_obj::removeTileSheet( ::org::flixel::system::layer::TileSheetExt tileSheetObj){
{
		HX_STACK_PUSH("TileSheetExt::removeTileSheet","org/flixel/system/layer/TileSheetExt.hx",43);
		HX_STACK_ARG(tileSheetObj,"tileSheetObj");
		HX_STACK_LINE(44)
		::flash::display::BitmapData key = tileSheetObj->get_nmeBitmap();		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(45)
		if ((::org::flixel::system::layer::TileSheetExt_obj::containsTileSheet(key))){
			HX_STACK_LINE(47)
			::org::flixel::system::layer::TileSheetExt temp = ::org::flixel::system::layer::TileSheetExt_obj::_tileSheetCache->get(key);		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(48)
			::org::flixel::system::layer::TileSheetExt_obj::_tileSheetCache->__Internal->remove(::__hxcpp_obj_id(key));
			HX_STACK_LINE(49)
			temp->destroy();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetExt_obj,removeTileSheet,(void))

Void TileSheetExt_obj::clear( ){
{
		HX_STACK_PUSH("TileSheetExt::clear","org/flixel/system/layer/TileSheetExt.hx",54);
		HX_STACK_LINE(55)
		for(::cpp::FastIterator_obj< ::flash::display::BitmapData > *__it = ::cpp::CreateFastIterator< ::flash::display::BitmapData >(::org::flixel::system::layer::TileSheetExt_obj::_tileSheetCache->keys());  __it->hasNext(); ){
			::flash::display::BitmapData key = __it->next();
			if (((key != null()))){
				HX_STACK_LINE(59)
				::org::flixel::system::layer::TileSheetExt temp = ::org::flixel::system::layer::TileSheetExt_obj::_tileSheetCache->get(key);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(60)
				::org::flixel::system::layer::TileSheetExt_obj::_tileSheetCache->__Internal->remove(::__hxcpp_obj_id(key));
				HX_STACK_LINE(61)
				temp->destroy();
			}
;
		}
		HX_STACK_LINE(65)
		::org::flixel::system::layer::TileSheetExt_obj::_tileSheetCache = ::haxe::ds::ObjectMap_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TileSheetExt_obj,clear,(void))


TileSheetExt_obj::TileSheetExt_obj()
{
}

void TileSheetExt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileSheetExt);
	HX_MARK_MEMBER_NAME(nmeBitmap,"nmeBitmap");
	HX_MARK_MEMBER_NAME(_tileIDs,"_tileIDs");
	HX_MARK_MEMBER_NAME(_numTiles,"_numTiles");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileSheetExt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeBitmap,"nmeBitmap");
	HX_VISIT_MEMBER_NAME(_tileIDs,"_tileIDs");
	HX_VISIT_MEMBER_NAME(_numTiles,"_numTiles");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TileSheetExt_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getKey") ) { return getKey_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tileIDs") ) { return _tileIDs; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeBitmap") ) { return inCallProp ? get_nmeBitmap() : nmeBitmap; }
		if (HX_FIELD_EQ(inName,"_numTiles") ) { return _numTiles; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { return _DRAWCALLS; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addTileSheet") ) { return addTileSheet_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileSheet") ) { return getTileSheet_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_nmeBitmap") ) { return get_nmeBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"addTileRectID") ) { return addTileRectID_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_tileSheetCache") ) { return _tileSheetCache; }
		if (HX_FIELD_EQ(inName,"removeTileSheet") ) { return removeTileSheet_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"containsTileSheet") ) { return containsTileSheet_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileSheetExt_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_tileIDs") ) { _tileIDs=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeBitmap") ) { nmeBitmap=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numTiles") ) { _numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { _DRAWCALLS=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_tileSheetCache") ) { _tileSheetCache=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileSheetExt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nmeBitmap"));
	outFields->push(HX_CSTRING("_tileIDs"));
	outFields->push(HX_CSTRING("_numTiles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_tileSheetCache"),
	HX_CSTRING("_DRAWCALLS"),
	HX_CSTRING("addTileSheet"),
	HX_CSTRING("containsTileSheet"),
	HX_CSTRING("getTileSheet"),
	HX_CSTRING("removeTileSheet"),
	HX_CSTRING("clear"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_nmeBitmap"),
	HX_CSTRING("nmeBitmap"),
	HX_CSTRING("destroy"),
	HX_CSTRING("addTileRectID"),
	HX_CSTRING("getKey"),
	HX_CSTRING("_tileIDs"),
	HX_CSTRING("_numTiles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileSheetExt_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TileSheetExt_obj::_tileSheetCache,"_tileSheetCache");
	HX_MARK_MEMBER_NAME(TileSheetExt_obj::_DRAWCALLS,"_DRAWCALLS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileSheetExt_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TileSheetExt_obj::_tileSheetCache,"_tileSheetCache");
	HX_VISIT_MEMBER_NAME(TileSheetExt_obj::_DRAWCALLS,"_DRAWCALLS");
};

Class TileSheetExt_obj::__mClass;

void TileSheetExt_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.layer.TileSheetExt"), hx::TCanCast< TileSheetExt_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileSheetExt_obj::__boot()
{
	_tileSheetCache= ::haxe::ds::ObjectMap_obj::__new();
	_DRAWCALLS= (int)0;
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer
