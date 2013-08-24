#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
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
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace openfl{
namespace display{

Void Tilesheet_obj::__construct(::flash::display::BitmapData image)
{
HX_STACK_PUSH("Tilesheet::new","openfl/display/Tilesheet.hx",29);
{
	HX_STACK_LINE(31)
	this->__bitmap = image;
	HX_STACK_LINE(32)
	this->__handle = ::openfl::display::Tilesheet_obj::nme_tilesheet_create(image->__handle);
}
;
	return null();
}

Tilesheet_obj::~Tilesheet_obj() { }

Dynamic Tilesheet_obj::__CreateEmpty() { return  new Tilesheet_obj; }
hx::ObjectPtr< Tilesheet_obj > Tilesheet_obj::__new(::flash::display::BitmapData image)
{  hx::ObjectPtr< Tilesheet_obj > result = new Tilesheet_obj();
	result->__construct(image);
	return result;}

Dynamic Tilesheet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tilesheet_obj > result = new Tilesheet_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Tilesheet_obj::drawTiles( ::flash::display::Graphics graphics,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
	HX_STACK_PUSH("Tilesheet::drawTiles","openfl/display/Tilesheet.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_ARG(graphics,"graphics");
	HX_STACK_ARG(tileData,"tileData");
	HX_STACK_ARG(smooth,"smooth");
	HX_STACK_ARG(flags,"flags");
{
		HX_STACK_LINE(44)
		graphics->drawTiles(hx::ObjectPtr<OBJ_>(this),tileData,smooth,flags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Tilesheet_obj,drawTiles,(void))

int Tilesheet_obj::addTileRect( ::flash::geom::Rectangle rectangle,::flash::geom::Point centerPoint){
	HX_STACK_PUSH("Tilesheet::addTileRect","openfl/display/Tilesheet.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rectangle,"rectangle");
	HX_STACK_ARG(centerPoint,"centerPoint");
	HX_STACK_LINE(37)
	return ::openfl::display::Tilesheet_obj::nme_tilesheet_add_rect(this->__handle,rectangle,centerPoint);
}


HX_DEFINE_DYNAMIC_FUNC2(Tilesheet_obj,addTileRect,return )

Dynamic Tilesheet_obj::nme_tilesheet_create;

Dynamic Tilesheet_obj::nme_tilesheet_add_rect;


Tilesheet_obj::Tilesheet_obj()
{
}

void Tilesheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tilesheet);
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__bitmap,"__bitmap");
	HX_MARK_END_CLASS();
}

void Tilesheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__bitmap,"__bitmap");
}

Dynamic Tilesheet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return __bitmap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_tilesheet_create") ) { return nme_tilesheet_create; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_tilesheet_add_rect") ) { return nme_tilesheet_add_rect; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tilesheet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { __bitmap=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_tilesheet_create") ) { nme_tilesheet_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_tilesheet_add_rect") ) { nme_tilesheet_add_rect=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tilesheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__handle"));
	outFields->push(HX_CSTRING("__bitmap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_tilesheet_create"),
	HX_CSTRING("nme_tilesheet_add_rect"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawTiles"),
	HX_CSTRING("addTileRect"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__bitmap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::nme_tilesheet_create,"nme_tilesheet_create");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::nme_tilesheet_add_rect,"nme_tilesheet_add_rect");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::nme_tilesheet_create,"nme_tilesheet_create");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::nme_tilesheet_add_rect,"nme_tilesheet_add_rect");
};

Class Tilesheet_obj::__mClass;

void Tilesheet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.Tilesheet"), hx::TCanCast< Tilesheet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Tilesheet_obj::__boot()
{
	nme_tilesheet_create= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_tilesheet_create"),(int)1);
	nme_tilesheet_add_rect= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_tilesheet_add_rect"),(int)3);
}

} // end namespace openfl
} // end namespace display
