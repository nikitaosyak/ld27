#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
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
#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#include <org/flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetExt
#include <org/flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_frames_FlxFrame
#include <org/flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxAngle
#include <org/flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace layer{
namespace frames{

Void FlxFrame_obj::__construct(::org::flixel::system::layer::TileSheetData tileSheet)
{
HX_STACK_PUSH("FlxFrame::new","org/flixel/system/layer/frames/FlxFrame.hx",13);
{
	HX_STACK_LINE(36)
	this->center = null();
	HX_STACK_LINE(28)
	this->additionalAngle = (int)0;
	HX_STACK_LINE(26)
	this->tileID = (int)-1;
	HX_STACK_LINE(24)
	this->offset = null();
	HX_STACK_LINE(23)
	this->sourceSize = null();
	HX_STACK_LINE(22)
	this->trimmed = false;
	HX_STACK_LINE(21)
	this->rotated = false;
	HX_STACK_LINE(19)
	this->frame = null();
	HX_STACK_LINE(18)
	this->name = null();
	HX_STACK_LINE(40)
	this->_tileSheet = tileSheet;
	HX_STACK_LINE(41)
	this->additionalAngle = (int)0;
}
;
	return null();
}

FlxFrame_obj::~FlxFrame_obj() { }

Dynamic FlxFrame_obj::__CreateEmpty() { return  new FlxFrame_obj; }
hx::ObjectPtr< FlxFrame_obj > FlxFrame_obj::__new(::org::flixel::system::layer::TileSheetData tileSheet)
{  hx::ObjectPtr< FlxFrame_obj > result = new FlxFrame_obj();
	result->__construct(tileSheet);
	return result;}

Dynamic FlxFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxFrame_obj > result = new FlxFrame_obj();
	result->__construct(inArgs[0]);
	return result;}

Void FlxFrame_obj::destroyBitmapDatas( ){
{
		HX_STACK_PUSH("FlxFrame::destroyBitmapDatas","org/flixel/system/layer/frames/FlxFrame.hx",108);
		HX_STACK_THIS(this);
		HX_STACK_LINE(109)
		if (((this->_bitmapData != null()))){
			HX_STACK_LINE(111)
			this->_bitmapData->dispose();
			HX_STACK_LINE(112)
			this->_bitmapData = null();
		}
		HX_STACK_LINE(115)
		if (((this->_reversedBitmapData != null()))){
			HX_STACK_LINE(117)
			this->_reversedBitmapData->dispose();
			HX_STACK_LINE(118)
			this->_reversedBitmapData = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,destroyBitmapDatas,(void))

::flash::display::BitmapData FlxFrame_obj::getReversedBitmap( ){
	HX_STACK_PUSH("FlxFrame::getReversedBitmap","org/flixel/system/layer/frames/FlxFrame.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_LINE(92)
	if (((this->_reversedBitmapData != null()))){
		HX_STACK_LINE(93)
		return this->_reversedBitmapData;
	}
	HX_STACK_LINE(97)
	::flash::display::BitmapData normalFrame = this->getBitmap();		HX_STACK_VAR(normalFrame,"normalFrame");
	HX_STACK_LINE(98)
	::org::flixel::system::layer::frames::FlxFrame_obj::MATRIX->identity();
	HX_STACK_LINE(99)
	::org::flixel::system::layer::frames::FlxFrame_obj::MATRIX->scale((int)-1,(int)1);
	HX_STACK_LINE(100)
	::org::flixel::system::layer::frames::FlxFrame_obj::MATRIX->translate(::Std_obj::_int(this->sourceSize->x),(int)0);
	HX_STACK_LINE(101)
	this->_reversedBitmapData = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(this->sourceSize->x),::Std_obj::_int(this->sourceSize->y),true,(int)0,null());
	HX_STACK_LINE(102)
	this->_reversedBitmapData->draw(normalFrame,::org::flixel::system::layer::frames::FlxFrame_obj::MATRIX,null(),null(),null(),null());
	HX_STACK_LINE(104)
	return this->_reversedBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,getReversedBitmap,return )

::flash::display::BitmapData FlxFrame_obj::getBitmap( ){
	HX_STACK_PUSH("FlxFrame::getBitmap","org/flixel/system/layer/frames/FlxFrame.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_LINE(60)
	if (((this->_bitmapData != null()))){
		HX_STACK_LINE(61)
		return this->_bitmapData;
	}
	HX_STACK_LINE(65)
	this->_bitmapData = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(this->sourceSize->x),::Std_obj::_int(this->sourceSize->y),true,(int)0,null());
	HX_STACK_LINE(67)
	if ((this->rotated)){
		HX_STACK_LINE(69)
		::flash::display::BitmapData temp = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(this->frame->width),::Std_obj::_int(this->frame->height),true,(int)0,null());		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(70)
		::org::flixel::system::layer::frames::FlxFrame_obj::POINT->x = ::org::flixel::system::layer::frames::FlxFrame_obj::POINT->y = (int)0;
		HX_STACK_LINE(71)
		temp->copyPixels(this->_tileSheet->tileSheet->get_nmeBitmap(),this->frame,::org::flixel::system::layer::frames::FlxFrame_obj::POINT,null(),null(),null());
		HX_STACK_LINE(73)
		::org::flixel::system::layer::frames::FlxFrame_obj::MATRIX->identity();
		HX_STACK_LINE(74)
		::org::flixel::system::layer::frames::FlxFrame_obj::MATRIX->translate((-0.5 * this->frame->width),(-0.5 * this->frame->height));
		HX_STACK_LINE(75)
		::org::flixel::system::layer::frames::FlxFrame_obj::MATRIX->rotate((-90. * ::org::flixel::util::FlxAngle_obj::RAD));
		HX_STACK_LINE(76)
		::org::flixel::system::layer::frames::FlxFrame_obj::MATRIX->translate((this->offset->x + (0.5 * this->frame->height)),(this->offset->y + (0.5 * this->frame->width)));
		HX_STACK_LINE(78)
		this->_bitmapData->draw(temp,::org::flixel::system::layer::frames::FlxFrame_obj::MATRIX,null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(82)
		::org::flixel::system::layer::frames::FlxFrame_obj::POINT->x = this->offset->x;
		HX_STACK_LINE(83)
		::org::flixel::system::layer::frames::FlxFrame_obj::POINT->y = this->offset->y;
		HX_STACK_LINE(84)
		this->_bitmapData->copyPixels(this->_tileSheet->tileSheet->get_nmeBitmap(),this->frame,::org::flixel::system::layer::frames::FlxFrame_obj::POINT,null(),null(),null());
	}
	HX_STACK_LINE(87)
	return this->_bitmapData;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,getBitmap,return )

Void FlxFrame_obj::destroy( ){
{
		HX_STACK_PUSH("FlxFrame::destroy","org/flixel/system/layer/frames/FlxFrame.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_LINE(46)
		this->name = null();
		HX_STACK_LINE(47)
		this->frame = null();
		HX_STACK_LINE(48)
		this->sourceSize = null();
		HX_STACK_LINE(49)
		this->offset = null();
		HX_STACK_LINE(51)
		this->center = null();
		HX_STACK_LINE(53)
		this->_tileSheet = null();
		HX_STACK_LINE(55)
		this->destroyBitmapDatas();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,destroy,(void))

::flash::geom::Point FlxFrame_obj::POINT;

::flash::geom::Matrix FlxFrame_obj::MATRIX;


FlxFrame_obj::FlxFrame_obj()
{
}

void FlxFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFrame);
	HX_MARK_MEMBER_NAME(center,"center");
	HX_MARK_MEMBER_NAME(_tileSheet,"_tileSheet");
	HX_MARK_MEMBER_NAME(_reversedBitmapData,"_reversedBitmapData");
	HX_MARK_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_MARK_MEMBER_NAME(additionalAngle,"additionalAngle");
	HX_MARK_MEMBER_NAME(tileID,"tileID");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(sourceSize,"sourceSize");
	HX_MARK_MEMBER_NAME(trimmed,"trimmed");
	HX_MARK_MEMBER_NAME(rotated,"rotated");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void FlxFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(center,"center");
	HX_VISIT_MEMBER_NAME(_tileSheet,"_tileSheet");
	HX_VISIT_MEMBER_NAME(_reversedBitmapData,"_reversedBitmapData");
	HX_VISIT_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_VISIT_MEMBER_NAME(additionalAngle,"additionalAngle");
	HX_VISIT_MEMBER_NAME(tileID,"tileID");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(sourceSize,"sourceSize");
	HX_VISIT_MEMBER_NAME(trimmed,"trimmed");
	HX_VISIT_MEMBER_NAME(rotated,"rotated");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic FlxFrame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"POINT") ) { return POINT; }
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MATRIX") ) { return MATRIX; }
		if (HX_FIELD_EQ(inName,"center") ) { return center; }
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"trimmed") ) { return trimmed; }
		if (HX_FIELD_EQ(inName,"rotated") ) { return rotated; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBitmap") ) { return getBitmap_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileSheet") ) { return _tileSheet; }
		if (HX_FIELD_EQ(inName,"sourceSize") ) { return sourceSize; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { return _bitmapData; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"additionalAngle") ) { return additionalAngle; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getReversedBitmap") ) { return getReversedBitmap_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"destroyBitmapDatas") ) { return destroyBitmapDatas_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_reversedBitmapData") ) { return _reversedBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"POINT") ) { POINT=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MATRIX") ) { MATRIX=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"center") ) { center=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"trimmed") ) { trimmed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotated") ) { rotated=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileSheet") ) { _tileSheet=inValue.Cast< ::org::flixel::system::layer::TileSheetData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sourceSize") ) { sourceSize=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { _bitmapData=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"additionalAngle") ) { additionalAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_reversedBitmapData") ) { _reversedBitmapData=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("center"));
	outFields->push(HX_CSTRING("_tileSheet"));
	outFields->push(HX_CSTRING("_reversedBitmapData"));
	outFields->push(HX_CSTRING("_bitmapData"));
	outFields->push(HX_CSTRING("additionalAngle"));
	outFields->push(HX_CSTRING("tileID"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("sourceSize"));
	outFields->push(HX_CSTRING("trimmed"));
	outFields->push(HX_CSTRING("rotated"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("POINT"),
	HX_CSTRING("MATRIX"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroyBitmapDatas"),
	HX_CSTRING("getReversedBitmap"),
	HX_CSTRING("getBitmap"),
	HX_CSTRING("destroy"),
	HX_CSTRING("center"),
	HX_CSTRING("_tileSheet"),
	HX_CSTRING("_reversedBitmapData"),
	HX_CSTRING("_bitmapData"),
	HX_CSTRING("additionalAngle"),
	HX_CSTRING("tileID"),
	HX_CSTRING("offset"),
	HX_CSTRING("sourceSize"),
	HX_CSTRING("trimmed"),
	HX_CSTRING("rotated"),
	HX_CSTRING("frame"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFrame_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxFrame_obj::POINT,"POINT");
	HX_MARK_MEMBER_NAME(FlxFrame_obj::MATRIX,"MATRIX");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::POINT,"POINT");
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::MATRIX,"MATRIX");
};

Class FlxFrame_obj::__mClass;

void FlxFrame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.layer.frames.FlxFrame"), hx::TCanCast< FlxFrame_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxFrame_obj::__boot()
{
	POINT= ::flash::geom::Point_obj::__new(null(),null());
	MATRIX= ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames
