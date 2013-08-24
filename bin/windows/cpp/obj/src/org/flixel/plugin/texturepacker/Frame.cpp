#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_texturepacker_Frame
#include <org/flixel/plugin/texturepacker/Frame.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace plugin{
namespace texturepacker{

Void Frame_obj::__construct()
{
HX_STACK_PUSH("Frame::new","org/flixel/plugin/texturepacker/Frame.hx",6);
{
	HX_STACK_LINE(14)
	this->offset = null();
	HX_STACK_LINE(13)
	this->sourceSize = null();
	HX_STACK_LINE(12)
	this->trimmed = false;
	HX_STACK_LINE(11)
	this->rotated = false;
	HX_STACK_LINE(9)
	this->frame = null();
	HX_STACK_LINE(8)
	this->name = null();
}
;
	return null();
}

Frame_obj::~Frame_obj() { }

Dynamic Frame_obj::__CreateEmpty() { return  new Frame_obj; }
hx::ObjectPtr< Frame_obj > Frame_obj::__new()
{  hx::ObjectPtr< Frame_obj > result = new Frame_obj();
	result->__construct();
	return result;}

Dynamic Frame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Frame_obj > result = new Frame_obj();
	result->__construct();
	return result;}

Void Frame_obj::destroy( ){
{
		HX_STACK_PUSH("Frame::destroy","org/flixel/plugin/texturepacker/Frame.hx",19);
		HX_STACK_THIS(this);
		HX_STACK_LINE(20)
		this->name = null();
		HX_STACK_LINE(21)
		this->frame = null();
		HX_STACK_LINE(22)
		this->sourceSize = null();
		HX_STACK_LINE(23)
		this->offset = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Frame_obj,destroy,(void))


Frame_obj::Frame_obj()
{
}

void Frame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Frame);
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(sourceSize,"sourceSize");
	HX_MARK_MEMBER_NAME(trimmed,"trimmed");
	HX_MARK_MEMBER_NAME(rotated,"rotated");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Frame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(sourceSize,"sourceSize");
	HX_VISIT_MEMBER_NAME(trimmed,"trimmed");
	HX_VISIT_MEMBER_NAME(rotated,"rotated");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Frame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"trimmed") ) { return trimmed; }
		if (HX_FIELD_EQ(inName,"rotated") ) { return rotated; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { return sourceSize; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Frame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"trimmed") ) { trimmed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotated") ) { rotated=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { sourceSize=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Frame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("sourceSize"));
	outFields->push(HX_CSTRING("trimmed"));
	outFields->push(HX_CSTRING("rotated"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("offset"),
	HX_CSTRING("sourceSize"),
	HX_CSTRING("trimmed"),
	HX_CSTRING("rotated"),
	HX_CSTRING("frame"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Frame_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Frame_obj::__mClass,"__mClass");
};

Class Frame_obj::__mClass;

void Frame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.plugin.texturepacker.Frame"), hx::TCanCast< Frame_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Frame_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace texturepacker
