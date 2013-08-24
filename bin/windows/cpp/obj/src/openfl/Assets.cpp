#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_media_SoundLoaderContext
#include <flash/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_FontStyle
#include <flash/text/FontStyle.h>
#endif
#ifndef INCLUDED_flash_text_FontType
#include <flash/text/FontType.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_AssetData
#include <nme/AssetData.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace openfl{

Void Assets_obj::__construct()
{
	return null();
}

Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap Assets_obj::cachedBitmapData;

Array< ::String > Assets_obj::id;

::haxe::ds::StringMap Assets_obj::library;

::haxe::ds::StringMap Assets_obj::path;

::haxe::ds::StringMap Assets_obj::type;

bool Assets_obj::initialized;

Void Assets_obj::initialize( ){
{
		HX_STACK_PUSH("Assets::initialize","openfl/Assets.hx",62);
		HX_STACK_LINE(62)
		if ((!(::openfl::Assets_obj::initialized))){
			HX_STACK_LINE(68)
			::nme::AssetData_obj::initialize();
			HX_STACK_LINE(72)
			::openfl::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

::flash::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getBitmapData","openfl/Assets.hx",86);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(88)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(92)
		if (((bool(::nme::AssetData_obj::type->exists(id)) && bool((::nme::AssetData_obj::type->get(id) == ::openfl::AssetType_obj::IMAGE))))){
			HX_STACK_LINE(92)
			if (((bool(useCache) && bool(::openfl::Assets_obj::cachedBitmapData->exists(id))))){
				HX_STACK_LINE(94)
				return ::openfl::Assets_obj::cachedBitmapData->get(id);
			}
			else{
				HX_STACK_LINE(110)
				::flash::display::BitmapData data = ::flash::display::BitmapData_obj::load(::nme::AssetData_obj::path->get(id),null());		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(114)
				if ((useCache)){
					HX_STACK_LINE(114)
					::openfl::Assets_obj::cachedBitmapData->set(id,data);
				}
				HX_STACK_LINE(120)
				return data;
			}
		}
		else{
			HX_STACK_LINE(124)
			if (((id.indexOf(HX_CSTRING(":"),null()) > (int)-1))){
				HX_STACK_LINE(126)
				::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
				HX_STACK_LINE(127)
				::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
				HX_STACK_LINE(129)
				if ((::nme::AssetData_obj::library->exists(libraryName))){
				}
				else{
					HX_STACK_LINE(173)
					::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),175,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBitmapData")));
				}
			}
			else{
				HX_STACK_LINE(179)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),181,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBitmapData")));
			}
		}
		HX_STACK_LINE(187)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::flash::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_PUSH("Assets::getBytes","openfl/Assets.hx",198);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(200)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(204)
	if ((::nme::AssetData_obj::type->exists(id))){
		HX_STACK_LINE(204)
		return ::flash::utils::ByteArray_obj::readFile(::nme::AssetData_obj::path->get(id));
	}
	else{
		HX_STACK_LINE(236)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),238,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBytes")));
	}
	HX_STACK_LINE(244)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::flash::text::Font Assets_obj::getFont( ::String id){
	HX_STACK_PUSH("Assets::getFont","openfl/Assets.hx",255);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(257)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(261)
	if (((bool(::nme::AssetData_obj::type->exists(id)) && bool((::nme::AssetData_obj::type->get(id) == ::openfl::AssetType_obj::FONT))))){
		HX_STACK_LINE(261)
		return ::flash::text::Font_obj::__new(::nme::AssetData_obj::path->get(id),null(),null());
	}
	else{
		HX_STACK_LINE(273)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),275,HX_CSTRING("openfl.Assets"),HX_CSTRING("getFont")));
	}
	HX_STACK_LINE(281)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::flash::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_PUSH("Assets::getMovieClip","openfl/Assets.hx",293);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(295)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(299)
	::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(300)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(302)
	if ((::nme::AssetData_obj::library->exists(libraryName))){
	}
	else{
		HX_STACK_LINE(346)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),348,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMovieClip")));
	}
	HX_STACK_LINE(354)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::flash::media::Sound Assets_obj::getSound( ::String id){
	HX_STACK_PUSH("Assets::getSound","openfl/Assets.hx",366);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(368)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(372)
	if ((::nme::AssetData_obj::type->exists(id))){
		HX_STACK_LINE(374)
		::openfl::AssetType type = ::nme::AssetData_obj::type->get(id);		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(376)
		if (((bool((type == ::openfl::AssetType_obj::SOUND)) || bool((type == ::openfl::AssetType_obj::MUSIC))))){
			HX_STACK_LINE(376)
			return ::flash::media::Sound_obj::__new(::flash::net::URLRequest_obj::__new(::nme::AssetData_obj::path->get(id)),null(),(type == ::openfl::AssetType_obj::MUSIC));
		}
	}
	HX_STACK_LINE(396)
	::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),396,HX_CSTRING("openfl.Assets"),HX_CSTRING("getSound")));
	HX_STACK_LINE(400)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_PUSH("Assets::getText","openfl/Assets.hx",411);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(413)
	::flash::utils::ByteArray bytes = ::openfl::Assets_obj::getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(415)
	if (((bytes == null()))){
		HX_STACK_LINE(415)
		return null();
	}
	else{
		HX_STACK_LINE(419)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(415)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

Array< ::String > Assets_obj::get_id( ){
	HX_STACK_PUSH("Assets::get_id","openfl/Assets.hx",473);
	HX_STACK_LINE(475)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(477)
	Array< ::String > ids = Array_obj< ::String >::__new();		HX_STACK_VAR(ids,"ids");
	HX_STACK_LINE(481)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::nme::AssetData_obj::type->keys());  __it->hasNext(); ){
		::String key = __it->next();
		ids->push(key);
	}
	HX_STACK_LINE(489)
	return ids;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_id,return )

::haxe::ds::StringMap Assets_obj::get_library( ){
	HX_STACK_PUSH("Assets::get_library","openfl/Assets.hx",494);
	HX_STACK_LINE(496)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(500)
	return ::nme::AssetData_obj::library;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_library,return )

::haxe::ds::StringMap Assets_obj::get_path( ){
	HX_STACK_PUSH("Assets::get_path","openfl/Assets.hx",511);
	HX_STACK_LINE(513)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(517)
	return ::nme::AssetData_obj::path;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_path,return )

::haxe::ds::StringMap Assets_obj::get_type( ){
	HX_STACK_PUSH("Assets::get_type","openfl/Assets.hx",528);
	HX_STACK_LINE(530)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(534)
	return ::nme::AssetData_obj::type;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_type,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return inCallProp ? get_id() : id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return inCallProp ? get_path() : path; }
		if (HX_FIELD_EQ(inName,"type") ) { return inCallProp ? get_type() : type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { return inCallProp ? get_library() : library; }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_path") ) { return get_path_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"get_library") ) { return get_library_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return getMovieClip_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { return cachedBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { cachedBitmapData=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cachedBitmapData"),
	HX_CSTRING("id"),
	HX_CSTRING("library"),
	HX_CSTRING("path"),
	HX_CSTRING("type"),
	HX_CSTRING("initialized"),
	HX_CSTRING("initialize"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getMovieClip"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	HX_CSTRING("get_id"),
	HX_CSTRING("get_library"),
	HX_CSTRING("get_path"),
	HX_CSTRING("get_type"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_MARK_MEMBER_NAME(Assets_obj::id,"id");
	HX_MARK_MEMBER_NAME(Assets_obj::library,"library");
	HX_MARK_MEMBER_NAME(Assets_obj::path,"path");
	HX_MARK_MEMBER_NAME(Assets_obj::type,"type");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_VISIT_MEMBER_NAME(Assets_obj::id,"id");
	HX_VISIT_MEMBER_NAME(Assets_obj::library,"library");
	HX_VISIT_MEMBER_NAME(Assets_obj::path,"path");
	HX_VISIT_MEMBER_NAME(Assets_obj::type,"type");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Assets_obj::__boot()
{
	cachedBitmapData= ::haxe::ds::StringMap_obj::__new();
	initialized= false;
}

} // end namespace openfl
