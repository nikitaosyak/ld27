#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Loader
#include <flash/display/Loader.h>
#endif
#ifndef INCLUDED_flash_display_LoaderInfo
#include <flash/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
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
#ifndef INCLUDED_flash_net_URLLoader
#include <flash/net/URLLoader.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
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

Void ApplicationMain_obj::__construct()
{
	return null();
}

ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

::flash::display::Sprite ApplicationMain_obj::barA;

::flash::display::Sprite ApplicationMain_obj::barB;

::flash::display::Sprite ApplicationMain_obj::container;

int ApplicationMain_obj::forceHeight;

int ApplicationMain_obj::forceWidth;

Void ApplicationMain_obj::main( ){
{
		HX_STACK_PUSH("ApplicationMain::main","ApplicationMain.hx",32);
		HX_STACK_LINE(34)
		::flash::Lib_obj::setPackage(HX_CSTRING("none"),HX_CSTRING("ld27game"),HX_CSTRING("com.grozamorei.game"),HX_CSTRING("0.0.0"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
			HX_STACK_PUSH("*::_Function_1_1","ApplicationMain.hx",85);
			{
				HX_STACK_LINE(88)
				::flash::Lib_obj::get_current()->get_stage()->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
				HX_STACK_LINE(89)
				::flash::Lib_obj::get_current()->get_stage()->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
				HX_STACK_LINE(90)
				::flash::Lib_obj::get_current()->loaderInfo = ::flash::display::LoaderInfo_obj::create(null());
				HX_STACK_LINE(118)
				try{
					HX_STACK_LINE(120)
					::String currentPath = ::haxe::io::Path_obj::directory(::Sys_obj::executablePath());		HX_STACK_VAR(currentPath,"currentPath");
					HX_STACK_LINE(121)
					::Sys_obj::setCwd(currentPath);
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
						}
					}
				}
				HX_STACK_LINE(127)
				bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
				HX_STACK_LINE(129)
				{
					HX_STACK_LINE(129)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Array< ::String > _g1 = ::Type_obj::getClassFields(hx::ClassOf< ::Main >());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(129)
					while(((_g < _g1->length))){
						HX_STACK_LINE(129)
						::String methodName = _g1->__get(_g);		HX_STACK_VAR(methodName,"methodName");
						HX_STACK_LINE(129)
						++(_g);
						HX_STACK_LINE(131)
						if (((methodName == HX_CSTRING("main")))){
							HX_STACK_LINE(133)
							hasMain = true;
							HX_STACK_LINE(134)
							break;
						}
					}
				}
				HX_STACK_LINE(138)
				if ((hasMain)){
					HX_STACK_LINE(139)
					::Reflect_obj::callMethod(hx::ClassOf< ::Main >(),::Reflect_obj::field(hx::ClassOf< ::Main >(),HX_CSTRING("main")),Dynamic( Array_obj<Dynamic>::__new()));
				}
				else{
					HX_STACK_LINE(144)
					::DocumentClass instance = ::Type_obj::createInstance(hx::ClassOf< ::DocumentClass >(),Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(instance,"instance");
					HX_STACK_LINE(146)
					if ((::Std_obj::is(instance,hx::ClassOf< ::flash::display::DisplayObject >()))){
						HX_STACK_LINE(146)
						::flash::Lib_obj::get_current()->addChild(instance);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(84)
		::flash::Lib_obj::create( Dynamic(new _Function_1_1()),(int)800,(int)600,(int)30,(int)16777215,(int((int((int((int((int((int((int((int((int((int(::flash::Lib_obj::HARDWARE) | int(::flash::Lib_obj::ALLOW_SHADERS))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0)),HX_CSTRING("ld27jam"),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Void ApplicationMain_obj::applyScale( Dynamic _){
{
		HX_STACK_PUSH("ApplicationMain::applyScale","ApplicationMain.hx",178);
		HX_STACK_ARG(_,"_");
		HX_STACK_LINE(180)
		Float xScale = (Float(::flash::Lib_obj::get_current()->get_stage()->get_stageWidth()) / Float(::ApplicationMain_obj::forceWidth));		HX_STACK_VAR(xScale,"xScale");
		HX_STACK_LINE(181)
		Float yScale = (Float(::flash::Lib_obj::get_current()->get_stage()->get_stageHeight()) / Float(::ApplicationMain_obj::forceHeight));		HX_STACK_VAR(yScale,"yScale");
		HX_STACK_LINE(183)
		if (((xScale < yScale))){
			HX_STACK_LINE(185)
			::flash::Lib_obj::get_current()->set_scaleX(xScale);
			HX_STACK_LINE(186)
			::flash::Lib_obj::get_current()->set_scaleY(xScale);
			HX_STACK_LINE(187)
			::flash::Lib_obj::get_current()->set_x((Float(((::flash::Lib_obj::get_current()->get_stage()->get_stageWidth() - (::ApplicationMain_obj::forceWidth * xScale)))) / Float((int)2)));
			HX_STACK_LINE(188)
			::flash::Lib_obj::get_current()->set_y((Float(((::flash::Lib_obj::get_current()->get_stage()->get_stageHeight() - (::ApplicationMain_obj::forceHeight * xScale)))) / Float((int)2)));
		}
		else{
			HX_STACK_LINE(192)
			::flash::Lib_obj::get_current()->set_scaleX(yScale);
			HX_STACK_LINE(193)
			::flash::Lib_obj::get_current()->set_scaleY(yScale);
			HX_STACK_LINE(194)
			::flash::Lib_obj::get_current()->set_x((Float(((::flash::Lib_obj::get_current()->get_stage()->get_stageWidth() - (::ApplicationMain_obj::forceWidth * yScale)))) / Float((int)2)));
			HX_STACK_LINE(195)
			::flash::Lib_obj::get_current()->set_y((Float(((::flash::Lib_obj::get_current()->get_stage()->get_stageHeight() - (::ApplicationMain_obj::forceHeight * yScale)))) / Float((int)2)));
		}
		HX_STACK_LINE(199)
		if (((::flash::Lib_obj::get_current()->get_x() > (int)0))){
			HX_STACK_LINE(201)
			::ApplicationMain_obj::barA->get_graphics()->clear();
			HX_STACK_LINE(202)
			::ApplicationMain_obj::barA->get_graphics()->beginFill((int)0,null());
			HX_STACK_LINE(203)
			::ApplicationMain_obj::barA->get_graphics()->drawRect((int)0,(int)0,::flash::Lib_obj::get_current()->get_x(),::flash::Lib_obj::get_current()->get_stage()->get_stageHeight());
			HX_STACK_LINE(205)
			::ApplicationMain_obj::barB->get_graphics()->clear();
			HX_STACK_LINE(206)
			::ApplicationMain_obj::barB->get_graphics()->beginFill((int)0,null());
			HX_STACK_LINE(207)
			Float x = (::flash::Lib_obj::get_current()->get_x() + (::ApplicationMain_obj::forceWidth * ::flash::Lib_obj::get_current()->get_scaleX()));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(208)
			::ApplicationMain_obj::barB->get_graphics()->drawRect(x,(int)0,(::flash::Lib_obj::get_current()->get_stage()->get_stageWidth() - x),::flash::Lib_obj::get_current()->get_stage()->get_stageHeight());
		}
		else{
			HX_STACK_LINE(212)
			::ApplicationMain_obj::barA->get_graphics()->clear();
			HX_STACK_LINE(213)
			::ApplicationMain_obj::barA->get_graphics()->beginFill((int)0,null());
			HX_STACK_LINE(214)
			::ApplicationMain_obj::barA->get_graphics()->drawRect((int)0,(int)0,::flash::Lib_obj::get_current()->get_stage()->get_stageWidth(),::flash::Lib_obj::get_current()->get_y());
			HX_STACK_LINE(216)
			::ApplicationMain_obj::barB->get_graphics()->clear();
			HX_STACK_LINE(217)
			::ApplicationMain_obj::barB->get_graphics()->beginFill((int)0,null());
			HX_STACK_LINE(218)
			Float y = (::flash::Lib_obj::get_current()->get_y() + (::ApplicationMain_obj::forceHeight * ::flash::Lib_obj::get_current()->get_scaleY()));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(219)
			::ApplicationMain_obj::barB->get_graphics()->drawRect((int)0,y,::flash::Lib_obj::get_current()->get_stage()->get_stageWidth(),(::flash::Lib_obj::get_current()->get_stage()->get_stageHeight() - y));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,applyScale,(void))

Dynamic ApplicationMain_obj::getAsset( ::String inName){
	HX_STACK_PUSH("ApplicationMain::getAsset","ApplicationMain.hx",226);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_LINE(227)
	::haxe::ds::StringMap types = ::openfl::Assets_obj::get_type();		HX_STACK_VAR(types,"types");
	HX_STACK_LINE(228)
	if (((bool(types->exists(inName)) && bool((types->get(inName) != null()))))){
		HX_STACK_LINE(229)
		::openfl::AssetType _g = types->get(inName);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		{
			::openfl::AssetType _switch_1 = (_g);
			switch((_switch_1)->GetIndex()){
				case 0: case 5: {
					HX_STACK_LINE(231)
					return ::openfl::Assets_obj::getBytes(inName);
				}
				;break;
				case 1: {
					HX_STACK_LINE(232)
					return ::openfl::Assets_obj::getFont(inName);
				}
				;break;
				case 2: {
					HX_STACK_LINE(233)
					return ::openfl::Assets_obj::getBitmapData(inName,false);
				}
				;break;
				case 3: case 4: {
					HX_STACK_LINE(234)
					return ::openfl::Assets_obj::getSound(inName);
				}
				;break;
			}
		}
	}
	HX_STACK_LINE(237)
	hx::Throw ((HX_CSTRING("Asset does not exist: ") + inName));
	HX_STACK_LINE(238)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,getAsset,return )


ApplicationMain_obj::ApplicationMain_obj()
{
}

void ApplicationMain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationMain);
	HX_MARK_END_CLASS();
}

void ApplicationMain_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ApplicationMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"barA") ) { return barA; }
		if (HX_FIELD_EQ(inName,"barB") ) { return barB; }
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAsset") ) { return getAsset_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { return container; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceWidth") ) { return forceWidth; }
		if (HX_FIELD_EQ(inName,"applyScale") ) { return applyScale_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"forceHeight") ) { return forceHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"barA") ) { barA=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"barB") ) { barB=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { container=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceWidth") ) { forceWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"forceHeight") ) { forceHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationMain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("barA"),
	HX_CSTRING("barB"),
	HX_CSTRING("container"),
	HX_CSTRING("forceHeight"),
	HX_CSTRING("forceWidth"),
	HX_CSTRING("main"),
	HX_CSTRING("applyScale"),
	HX_CSTRING("getAsset"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::barA,"barA");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::barB,"barB");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::container,"container");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::forceHeight,"forceHeight");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::forceWidth,"forceWidth");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::barA,"barA");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::barB,"barB");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::container,"container");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::forceHeight,"forceHeight");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::forceWidth,"forceWidth");
};

Class ApplicationMain_obj::__mClass;

void ApplicationMain_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ApplicationMain"), hx::TCanCast< ApplicationMain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ApplicationMain_obj::__boot()
{
}

