#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxTilemapBuffer
#include <org/flixel/system/FlxTilemapBuffer.h>
#endif
namespace org{
namespace flixel{
namespace system{

Void FlxTilemapBuffer_obj::__construct(Float TileWidth,Float TileHeight,int WidthInTiles,int HeightInTiles,::org::flixel::FlxCamera Camera)
{
HX_STACK_PUSH("FlxTilemapBuffer::new","org/flixel/system/FlxTilemapBuffer.hx",14);
{
	HX_STACK_LINE(45)
	this->forceComplexRender = false;
	HX_STACK_LINE(64)
	if (((WidthInTiles < (int)0))){
		HX_STACK_LINE(64)
		WidthInTiles = (int)0;
	}
	HX_STACK_LINE(65)
	if (((HeightInTiles < (int)0))){
		HX_STACK_LINE(65)
		HeightInTiles = (int)0;
	}
	HX_STACK_LINE(67)
	if (((Camera == null()))){
		HX_STACK_LINE(68)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(72)
	this->columns = (::Math_obj::ceil((Float(Camera->width) / Float(TileWidth))) + (int)1);
	HX_STACK_LINE(73)
	if (((this->columns > WidthInTiles))){
		HX_STACK_LINE(74)
		this->columns = WidthInTiles;
	}
	HX_STACK_LINE(77)
	this->rows = (::Math_obj::ceil((Float(Camera->height) / Float(TileHeight))) + (int)1);
	HX_STACK_LINE(78)
	if (((this->rows > HeightInTiles))){
		HX_STACK_LINE(79)
		this->rows = HeightInTiles;
	}
	HX_STACK_LINE(89)
	this->width = ::Std_obj::_int((this->columns * TileWidth));
	HX_STACK_LINE(90)
	this->height = ::Std_obj::_int((this->rows * TileHeight));
	HX_STACK_LINE(92)
	this->dirty = true;
}
;
	return null();
}

FlxTilemapBuffer_obj::~FlxTilemapBuffer_obj() { }

Dynamic FlxTilemapBuffer_obj::__CreateEmpty() { return  new FlxTilemapBuffer_obj; }
hx::ObjectPtr< FlxTilemapBuffer_obj > FlxTilemapBuffer_obj::__new(Float TileWidth,Float TileHeight,int WidthInTiles,int HeightInTiles,::org::flixel::FlxCamera Camera)
{  hx::ObjectPtr< FlxTilemapBuffer_obj > result = new FlxTilemapBuffer_obj();
	result->__construct(TileWidth,TileHeight,WidthInTiles,HeightInTiles,Camera);
	return result;}

Dynamic FlxTilemapBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemapBuffer_obj > result = new FlxTilemapBuffer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxTilemapBuffer_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTilemapBuffer::destroy","org/flixel/system/FlxTilemapBuffer.hx",99);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapBuffer_obj,destroy,(void))


FlxTilemapBuffer_obj::FlxTilemapBuffer_obj()
{
}

void FlxTilemapBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemapBuffer);
	HX_MARK_MEMBER_NAME(forceComplexRender,"forceComplexRender");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void FlxTilemapBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(forceComplexRender,"forceComplexRender");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic FlxTilemapBuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"forceComplexRender") ) { return forceComplexRender; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemapBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"forceComplexRender") ) { forceComplexRender=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemapBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("forceComplexRender"));
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("forceComplexRender"),
	HX_CSTRING("columns"),
	HX_CSTRING("rows"),
	HX_CSTRING("dirty"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

Class FlxTilemapBuffer_obj::__mClass;

void FlxTilemapBuffer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.FlxTilemapBuffer"), hx::TCanCast< FlxTilemapBuffer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTilemapBuffer_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
