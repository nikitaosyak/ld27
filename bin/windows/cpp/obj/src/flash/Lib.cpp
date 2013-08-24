#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
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
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_openfl_display_ManagedStage
#include <openfl/display/ManagedStage.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace flash{

Void Lib_obj::__construct()
{
	return null();
}

Lib_obj::~Lib_obj() { }

Dynamic Lib_obj::__CreateEmpty() { return  new Lib_obj; }
hx::ObjectPtr< Lib_obj > Lib_obj::__new()
{  hx::ObjectPtr< Lib_obj > result = new Lib_obj();
	result->__construct();
	return result;}

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lib_obj > result = new Lib_obj();
	result->__construct();
	return result;}

int Lib_obj::FULLSCREEN;

int Lib_obj::BORDERLESS;

int Lib_obj::RESIZABLE;

int Lib_obj::HARDWARE;

int Lib_obj::VSYNC;

int Lib_obj::HW_AA;

int Lib_obj::HW_AA_HIRES;

int Lib_obj::ALLOW_SHADERS;

int Lib_obj::REQUIRE_SHADERS;

int Lib_obj::DEPTH_BUFFER;

int Lib_obj::STENCIL_BUFFER;

::String Lib_obj::company;

::flash::display::MovieClip Lib_obj::current;

::String Lib_obj::file;

int Lib_obj::initHeight;

int Lib_obj::initWidth;

::String Lib_obj::packageName;

bool Lib_obj::silentRecreate;

::flash::display::Stage Lib_obj::stage;

::String Lib_obj::version;

::flash::display::MovieClip Lib_obj::__current;

bool Lib_obj::__isInit;

Dynamic Lib_obj::__mainFrame;

::haxe::ds::StringMap Lib_obj::__moduleNames;

::flash::display::Stage Lib_obj::__stage;

Dynamic Lib_obj::as( Dynamic v,::Class c){
	HX_STACK_PUSH("Lib::as","flash/Lib.hx",46);
	HX_STACK_ARG(v,"v");
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(46)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,as,return )

::flash::display::MovieClip Lib_obj::attach( ::String name){
	HX_STACK_PUSH("Lib::attach","flash/Lib.hx",53);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(53)
	return ::flash::display::MovieClip_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,attach,return )

Void Lib_obj::close( ){
{
		HX_STACK_PUSH("Lib::close","flash/Lib.hx",60);
		HX_STACK_LINE(62)
		Dynamic close = ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_close"),(int)0);		HX_STACK_VAR(close,"close");
		HX_STACK_LINE(63)
		close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,close,(void))

Void Lib_obj::create( Dynamic onLoaded,int width,int height,hx::Null< Float >  __o_frameRate,hx::Null< int >  __o_color,hx::Null< int >  __o_flags,::String __o_title,::flash::display::BitmapData icon,::Class stageClass){
Float frameRate = __o_frameRate.Default(60.0);
int color = __o_color.Default(16777215);
int flags = __o_flags.Default(15);
::String title = __o_title.Default(HX_CSTRING("OpenFL"));
	HX_STACK_PUSH("Lib::create","flash/Lib.hx",68);
	HX_STACK_ARG(onLoaded,"onLoaded");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(frameRate,"frameRate");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(flags,"flags");
	HX_STACK_ARG(title,"title");
	HX_STACK_ARG(icon,"icon");
	HX_STACK_ARG(stageClass,"stageClass");
{
		HX_STACK_LINE(68)
		Array< ::Dynamic > stageClass1 = Array_obj< ::Dynamic >::__new().Add(stageClass);		HX_STACK_VAR(stageClass1,"stageClass1");
		HX_STACK_LINE(68)
		Array< int > color1 = Array_obj< int >::__new().Add(color);		HX_STACK_VAR(color1,"color1");
		HX_STACK_LINE(68)
		Array< Float > frameRate1 = Array_obj< Float >::__new().Add(frameRate);		HX_STACK_VAR(frameRate1,"frameRate1");
		HX_STACK_LINE(68)
		Array< int > height1 = Array_obj< int >::__new().Add(height);		HX_STACK_VAR(height1,"height1");
		HX_STACK_LINE(68)
		Array< int > width1 = Array_obj< int >::__new().Add(width);		HX_STACK_VAR(width1,"width1");
		HX_STACK_LINE(68)
		Dynamic onLoaded1 = Dynamic( Array_obj<Dynamic>::__new().Add(onLoaded));		HX_STACK_VAR(onLoaded1,"onLoaded1");
		HX_STACK_LINE(70)
		if ((::flash::Lib_obj::__isInit)){
			HX_STACK_LINE(72)
			if ((::flash::Lib_obj::silentRecreate)){
				HX_STACK_LINE(74)
				onLoaded1->__GetItem((int)0)().Cast< Void >();
				HX_STACK_LINE(75)
				return null();
			}
			HX_STACK_LINE(79)
			hx::Throw (HX_CSTRING("flash.Lib.create called multiple times. This function is automatically called by the project code."));
		}
		HX_STACK_LINE(83)
		::flash::Lib_obj::__isInit = true;
		HX_STACK_LINE(84)
		::flash::Lib_obj::initWidth = width1->__get((int)0);
		HX_STACK_LINE(85)
		::flash::Lib_obj::initHeight = height1->__get((int)0);
		HX_STACK_LINE(87)
		Dynamic create_main_frame = ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_create_main_frame"),(int)-1);		HX_STACK_VAR(create_main_frame,"create_main_frame");

		HX_BEGIN_LOCAL_FUNC_S6(hx::LocalFunc,_Function_1_1,Array< int >,width1,Array< Float >,frameRate1,Array< int >,color1,Dynamic,onLoaded1,Array< ::Dynamic >,stageClass1,Array< int >,height1)
		Void run(Dynamic frameHandle){
			HX_STACK_PUSH("*::_Function_1_1","flash/Lib.hx",89);
			HX_STACK_ARG(frameHandle,"frameHandle");
			{
				HX_STACK_LINE(92)
				::flash::Lib_obj::__mainFrame = frameHandle;
				HX_STACK_LINE(93)
				Dynamic stage_handle = ::flash::Lib_obj::nme_get_frame_stage(::flash::Lib_obj::__mainFrame);		HX_STACK_VAR(stage_handle,"stage_handle");
				HX_STACK_LINE(95)
				::flash::Lib_obj::__stage = (  (((stageClass1->__get((int)0).StaticCast< ::Class >() == null()))) ? ::flash::display::Stage(::flash::display::Stage_obj::__new(stage_handle,width1->__get((int)0),height1->__get((int)0))) : ::flash::display::Stage(::Type_obj::createInstance(stageClass1->__get((int)0).StaticCast< ::Class >(),Dynamic( Array_obj<Dynamic>::__new().Add(stage_handle).Add(width1->__get((int)0)).Add(height1->__get((int)0))))) );
				HX_STACK_LINE(96)
				::flash::Lib_obj::__stage->set_frameRate(frameRate1->__get((int)0));
				HX_STACK_LINE(97)
				::flash::Lib_obj::__stage->set_opaqueBackground(color1->__get((int)0));
				HX_STACK_LINE(98)
				::flash::Lib_obj::__stage->onQuit = ::flash::Lib_obj::close_dyn();
				HX_STACK_LINE(100)
				if (((::flash::Lib_obj::__current != null()))){
					HX_STACK_LINE(100)
					::flash::Lib_obj::__stage->addChild(::flash::Lib_obj::__current);
				}
				HX_STACK_LINE(106)
				onLoaded1->__GetItem((int)0)().Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(89)
		create_main_frame( Dynamic(new _Function_1_1(width1,frameRate1,color1,onLoaded1,stageClass1,height1)),width1->__get((int)0),height1->__get((int)0),flags,title,(  (((icon == null()))) ? Dynamic(null()) : Dynamic(icon->__handle) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Lib_obj,create,(void))

::openfl::display::ManagedStage Lib_obj::createManagedStage( int width,int height,hx::Null< int >  __o_flags){
int flags = __o_flags.Default(0);
	HX_STACK_PUSH("Lib::createManagedStage","flash/Lib.hx",114);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(flags,"flags");
{
		HX_STACK_LINE(116)
		::flash::Lib_obj::initWidth = width;
		HX_STACK_LINE(117)
		::flash::Lib_obj::initHeight = height;
		HX_STACK_LINE(119)
		::openfl::display::ManagedStage result = ::openfl::display::ManagedStage_obj::__new(width,height,flags);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(120)
		::flash::Lib_obj::__stage = result;
		HX_STACK_LINE(122)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,createManagedStage,return )

::String Lib_obj::findHaxeLib( ::String library){
	HX_STACK_PUSH("Lib::findHaxeLib","flash/Lib.hx",127);
	HX_STACK_ARG(library,"library");
	HX_STACK_LINE(129)
	try{
		HX_STACK_LINE(131)
		::sys::io::Process proc = ::sys::io::Process_obj::__new(HX_CSTRING("haxelib"),Array_obj< ::String >::__new().Add(HX_CSTRING("path")).Add(library));		HX_STACK_VAR(proc,"proc");
		HX_STACK_LINE(133)
		if (((proc != null()))){
			HX_STACK_LINE(135)
			::haxe::io::Input stream = proc->_stdout;		HX_STACK_VAR(stream,"stream");
			HX_STACK_LINE(137)
			try{
				HX_STACK_LINE(137)
				while((true)){
					HX_STACK_LINE(141)
					::String s = stream->readLine();		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(143)
					if (((s.substr((int)0,(int)1) != HX_CSTRING("-")))){
						HX_STACK_LINE(145)
						stream->close();
						HX_STACK_LINE(146)
						proc->close();
						HX_STACK_LINE(147)
						::flash::Lib_obj::loaderTrace((HX_CSTRING("Found haxelib ") + s));
						HX_STACK_LINE(148)
						return s;
					}
				}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(156)
			stream->close();
			HX_STACK_LINE(157)
			proc->close();
		}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(163)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,findHaxeLib,return )

Dynamic Lib_obj::load( ::String library,::String method,hx::Null< int >  __o_args){
int args = __o_args.Default(0);
	HX_STACK_PUSH("Lib::load","flash/Lib.hx",168);
	HX_STACK_ARG(library,"library");
	HX_STACK_ARG(method,"method");
	HX_STACK_ARG(args,"args");
{
		HX_STACK_LINE(174)
		if (((::flash::Lib_obj::__moduleNames == null()))){
			HX_STACK_LINE(174)
			::flash::Lib_obj::__moduleNames = ::haxe::ds::StringMap_obj::__new();
		}
		HX_STACK_LINE(175)
		if ((::flash::Lib_obj::__moduleNames->exists(library))){
			HX_STACK_LINE(175)
			return ::cpp::Lib_obj::load(::flash::Lib_obj::__moduleNames->get(library),method,args);
		}
		HX_STACK_LINE(193)
		::flash::Lib_obj::__moduleNames->set(library,library);
		HX_STACK_LINE(195)
		Dynamic result = ::flash::Lib_obj::tryLoad((HX_CSTRING("./") + library),library,method,args);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(197)
		if (((result == null()))){
			HX_STACK_LINE(197)
			result = ::flash::Lib_obj::tryLoad((HX_CSTRING(".\\") + library),library,method,args);
		}
		HX_STACK_LINE(203)
		if (((result == null()))){
			HX_STACK_LINE(203)
			result = ::flash::Lib_obj::tryLoad(library,library,method,args);
		}
		HX_STACK_LINE(209)
		if (((result == null()))){
			HX_STACK_LINE(211)
			::String slash = (  (((::flash::Lib_obj::sysName().substr((int)7,null()).toLowerCase() == HX_CSTRING("windows")))) ? ::String(HX_CSTRING("\\")) : ::String(HX_CSTRING("/")) );		HX_STACK_VAR(slash,"slash");
			HX_STACK_LINE(212)
			::String haxelib = ::flash::Lib_obj::findHaxeLib(HX_CSTRING("openfl-native"));		HX_STACK_VAR(haxelib,"haxelib");
			HX_STACK_LINE(214)
			if (((haxelib != HX_CSTRING("")))){
				HX_STACK_LINE(216)
				result = ::flash::Lib_obj::tryLoad(((((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + ::flash::Lib_obj::sysName()) + slash) + library),library,method,args);
				HX_STACK_LINE(218)
				if (((result == null()))){
					HX_STACK_LINE(218)
					result = ::flash::Lib_obj::tryLoad((((((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + ::flash::Lib_obj::sysName()) + HX_CSTRING("64")) + slash) + library),library,method,args);
				}
			}
		}
		HX_STACK_LINE(228)
		::flash::Lib_obj::loaderTrace((HX_CSTRING("Result : ") + ::Std_obj::string(result)));
		HX_STACK_LINE(238)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,load,return )

Void Lib_obj::loaderTrace( ::String message){
{
		HX_STACK_PUSH("Lib::loaderTrace","flash/Lib.hx",243);
		HX_STACK_ARG(message,"message");
		HX_STACK_LINE(246)
		Dynamic get_env = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("get_env"),(int)1);		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(247)
		bool debug = (get_env(HX_CSTRING("OPENFL_LOAD_DEBUG")) != null());		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(252)
		if ((debug)){
			HX_STACK_LINE(252)
			::Sys_obj::println(message);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,loaderTrace,(void))

::String Lib_obj::sysName( ){
	HX_STACK_PUSH("Lib::sysName","flash/Lib.hx",261);
	HX_STACK_LINE(264)
	Dynamic sys_string = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_string"),(int)0);		HX_STACK_VAR(sys_string,"sys_string");
	HX_STACK_LINE(265)
	return sys_string().Cast< ::String >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,sysName,return )

Dynamic Lib_obj::tryLoad( ::String name,::String library,::String func,int args){
	HX_STACK_PUSH("Lib::tryLoad","flash/Lib.hx",273);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(library,"library");
	HX_STACK_ARG(func,"func");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(275)
	try{
		HX_STACK_LINE(278)
		Dynamic result = ::cpp::Lib_obj::load(name,func,args);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(285)
		if (((result != null()))){
			HX_STACK_LINE(287)
			::flash::Lib_obj::loaderTrace((HX_CSTRING("Got result ") + name));
			HX_STACK_LINE(288)
			::flash::Lib_obj::__moduleNames->set(library,name);
			HX_STACK_LINE(289)
			return result;
		}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(293)
				::flash::Lib_obj::loaderTrace((HX_CSTRING("Failed to load : ") + name));
			}
		}
	}
	HX_STACK_LINE(299)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Lib_obj,tryLoad,return )

Void Lib_obj::exit( ){
{
		HX_STACK_PUSH("Lib::exit","flash/Lib.hx",326);
		HX_STACK_LINE(328)
		Dynamic quit = ::flash::Lib_obj::get_stage()->onQuit;		HX_STACK_VAR(quit,"quit");
		HX_STACK_LINE(330)
		if (((quit != null()))){
			HX_STACK_LINE(330)
			quit().Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,exit,(void))

Void Lib_obj::forceClose( ){
{
		HX_STACK_PUSH("Lib::forceClose","flash/Lib.hx",347);
		HX_STACK_LINE(349)
		Dynamic terminate = ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_terminate"),(int)0);		HX_STACK_VAR(terminate,"terminate");
		HX_STACK_LINE(350)
		terminate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,forceClose,(void))

int Lib_obj::getTimer( ){
	HX_STACK_PUSH("Lib::getTimer","flash/Lib.hx",355);
	HX_STACK_LINE(355)
	return ::Std_obj::_int((::haxe::Timer_obj::stamp() * 1000.0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getTimer,return )

Void Lib_obj::getURL( ::flash::net::URLRequest url,::String target){
{
		HX_STACK_PUSH("Lib::getURL","flash/Lib.hx",362);
		HX_STACK_ARG(url,"url");
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(362)
		::flash::Lib_obj::nme_get_url(url->url);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,getURL,(void))

Void Lib_obj::pause( ){
{
		HX_STACK_PUSH("Lib::pause","flash/Lib.hx",369);
		HX_STACK_LINE(369)
		::flash::Lib_obj::nme_pause_animation();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,pause,(void))

Void Lib_obj::postUICallback( Dynamic inCallback){
{
		HX_STACK_PUSH("Lib::postUICallback","flash/Lib.hx",376);
		HX_STACK_ARG(inCallback,"inCallback");
		HX_STACK_LINE(376)
		inCallback().Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,postUICallback,(void))

Void Lib_obj::resume( ){
{
		HX_STACK_PUSH("Lib::resume","flash/Lib.hx",387);
		HX_STACK_LINE(387)
		::flash::Lib_obj::nme_resume_animation();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,resume,(void))

Void Lib_obj::setIcon( ::String path){
{
		HX_STACK_PUSH("Lib::setIcon","flash/Lib.hx",394);
		HX_STACK_ARG(path,"path");
		HX_STACK_LINE(396)
		Dynamic set_icon = ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_set_icon"),(int)1);		HX_STACK_VAR(set_icon,"set_icon");
		HX_STACK_LINE(397)
		set_icon(path);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,setIcon,(void))

Void Lib_obj::setPackage( ::String company,::String file,::String packageName,::String version){
{
		HX_STACK_PUSH("Lib::setPackage","flash/Lib.hx",402);
		HX_STACK_ARG(company,"company");
		HX_STACK_ARG(file,"file");
		HX_STACK_ARG(packageName,"packageName");
		HX_STACK_ARG(version,"version");
		HX_STACK_LINE(404)
		::flash::Lib_obj::company = company;
		HX_STACK_LINE(405)
		::flash::Lib_obj::file = file;
		HX_STACK_LINE(406)
		::flash::Lib_obj::packageName = packageName;
		HX_STACK_LINE(407)
		::flash::Lib_obj::version = version;
		HX_STACK_LINE(409)
		::flash::Lib_obj::nme_set_package(company,file,packageName,version);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Lib_obj,setPackage,(void))

Void Lib_obj::__setCurrentStage( ::flash::display::Stage stage){
{
		HX_STACK_PUSH("Lib::__setCurrentStage","flash/Lib.hx",414);
		HX_STACK_ARG(stage,"stage");
		HX_STACK_LINE(414)
		::flash::Lib_obj::__stage = stage;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,__setCurrentStage,(void))

Void Lib_obj::trace( Dynamic arg){
{
		HX_STACK_PUSH("Lib::trace","flash/Lib.hx",421);
		HX_STACK_ARG(arg,"arg");
		HX_STACK_LINE(421)
		::haxe::Log_obj::trace(arg,hx::SourceInfo(HX_CSTRING("Lib.hx"),423,HX_CSTRING("flash.Lib"),HX_CSTRING("trace")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,trace,(void))

::flash::display::MovieClip Lib_obj::get_current( ){
	HX_STACK_PUSH("Lib::get_current","flash/Lib.hx",435);
	HX_STACK_LINE(437)
	if (((::flash::Lib_obj::__current == null()))){
		HX_STACK_LINE(439)
		::flash::Lib_obj::__current = ::flash::display::MovieClip_obj::__new();
		HX_STACK_LINE(441)
		if (((::flash::Lib_obj::__stage != null()))){
			HX_STACK_LINE(441)
			::flash::Lib_obj::__stage->addChild(::flash::Lib_obj::__current);
		}
	}
	HX_STACK_LINE(449)
	return ::flash::Lib_obj::__current;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_current,return )

::flash::display::Stage Lib_obj::get_stage( ){
	HX_STACK_PUSH("Lib::get_stage","flash/Lib.hx",454);
	HX_STACK_LINE(456)
	if (((::flash::Lib_obj::__stage == null()))){
		HX_STACK_LINE(456)
		hx::Throw (HX_CSTRING("Error : stage can't be accessed until init is called"));
	}
	HX_STACK_LINE(462)
	return ::flash::Lib_obj::__stage;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_stage,return )

Dynamic Lib_obj::nme_set_package;

Dynamic Lib_obj::nme_get_frame_stage;

Dynamic Lib_obj::nme_get_url;

Dynamic Lib_obj::nme_pause_animation;

Dynamic Lib_obj::nme_resume_animation;


Lib_obj::Lib_obj()
{
}

void Lib_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Lib);
	HX_MARK_END_CLASS();
}

void Lib_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Lib_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"as") ) { return as_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return file; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"VSYNC") ) { return VSYNC; }
		if (HX_FIELD_EQ(inName,"HW_AA") ) { return HW_AA; }
		if (HX_FIELD_EQ(inName,"stage") ) { return inCallProp ? get_stage() : stage; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"trace") ) { return trace_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { return attach_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"getURL") ) { return getURL_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"company") ) { return company; }
		if (HX_FIELD_EQ(inName,"current") ) { return inCallProp ? get_current() : current; }
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"__stage") ) { return __stage; }
		if (HX_FIELD_EQ(inName,"sysName") ) { return sysName_dyn(); }
		if (HX_FIELD_EQ(inName,"tryLoad") ) { return tryLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"setIcon") ) { return setIcon_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { return HARDWARE; }
		if (HX_FIELD_EQ(inName,"__isInit") ) { return __isInit; }
		if (HX_FIELD_EQ(inName,"getTimer") ) { return getTimer_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RESIZABLE") ) { return RESIZABLE; }
		if (HX_FIELD_EQ(inName,"initWidth") ) { return initWidth; }
		if (HX_FIELD_EQ(inName,"__current") ) { return __current; }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FULLSCREEN") ) { return FULLSCREEN; }
		if (HX_FIELD_EQ(inName,"BORDERLESS") ) { return BORDERLESS; }
		if (HX_FIELD_EQ(inName,"initHeight") ) { return initHeight; }
		if (HX_FIELD_EQ(inName,"forceClose") ) { return forceClose_dyn(); }
		if (HX_FIELD_EQ(inName,"setPackage") ) { return setPackage_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HW_AA_HIRES") ) { return HW_AA_HIRES; }
		if (HX_FIELD_EQ(inName,"packageName") ) { return packageName; }
		if (HX_FIELD_EQ(inName,"__mainFrame") ) { return __mainFrame; }
		if (HX_FIELD_EQ(inName,"findHaxeLib") ) { return findHaxeLib_dyn(); }
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { return loaderTrace_dyn(); }
		if (HX_FIELD_EQ(inName,"get_current") ) { return get_current_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_get_url") ) { return nme_get_url; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER") ) { return DEPTH_BUFFER; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALLOW_SHADERS") ) { return ALLOW_SHADERS; }
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { return __moduleNames; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER") ) { return STENCIL_BUFFER; }
		if (HX_FIELD_EQ(inName,"silentRecreate") ) { return silentRecreate; }
		if (HX_FIELD_EQ(inName,"postUICallback") ) { return postUICallback_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"REQUIRE_SHADERS") ) { return REQUIRE_SHADERS; }
		if (HX_FIELD_EQ(inName,"nme_set_package") ) { return nme_set_package; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__setCurrentStage") ) { return __setCurrentStage_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createManagedStage") ) { return createManagedStage_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_get_frame_stage") ) { return nme_get_frame_stage; }
		if (HX_FIELD_EQ(inName,"nme_pause_animation") ) { return nme_pause_animation; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_resume_animation") ) { return nme_resume_animation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lib_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"VSYNC") ) { VSYNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HW_AA") ) { HW_AA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::flash::display::Stage >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"company") ) { company=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::flash::display::MovieClip >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stage") ) { __stage=inValue.Cast< ::flash::display::Stage >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { HARDWARE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isInit") ) { __isInit=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RESIZABLE") ) { RESIZABLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initWidth") ) { initWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__current") ) { __current=inValue.Cast< ::flash::display::MovieClip >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FULLSCREEN") ) { FULLSCREEN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BORDERLESS") ) { BORDERLESS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initHeight") ) { initHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HW_AA_HIRES") ) { HW_AA_HIRES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"packageName") ) { packageName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mainFrame") ) { __mainFrame=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_get_url") ) { nme_get_url=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER") ) { DEPTH_BUFFER=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALLOW_SHADERS") ) { ALLOW_SHADERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { __moduleNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER") ) { STENCIL_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"silentRecreate") ) { silentRecreate=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"REQUIRE_SHADERS") ) { REQUIRE_SHADERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_set_package") ) { nme_set_package=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_get_frame_stage") ) { nme_get_frame_stage=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_pause_animation") ) { nme_pause_animation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_resume_animation") ) { nme_resume_animation=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Lib_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FULLSCREEN"),
	HX_CSTRING("BORDERLESS"),
	HX_CSTRING("RESIZABLE"),
	HX_CSTRING("HARDWARE"),
	HX_CSTRING("VSYNC"),
	HX_CSTRING("HW_AA"),
	HX_CSTRING("HW_AA_HIRES"),
	HX_CSTRING("ALLOW_SHADERS"),
	HX_CSTRING("REQUIRE_SHADERS"),
	HX_CSTRING("DEPTH_BUFFER"),
	HX_CSTRING("STENCIL_BUFFER"),
	HX_CSTRING("company"),
	HX_CSTRING("current"),
	HX_CSTRING("file"),
	HX_CSTRING("initHeight"),
	HX_CSTRING("initWidth"),
	HX_CSTRING("packageName"),
	HX_CSTRING("silentRecreate"),
	HX_CSTRING("stage"),
	HX_CSTRING("version"),
	HX_CSTRING("__current"),
	HX_CSTRING("__isInit"),
	HX_CSTRING("__mainFrame"),
	HX_CSTRING("__moduleNames"),
	HX_CSTRING("__stage"),
	HX_CSTRING("as"),
	HX_CSTRING("attach"),
	HX_CSTRING("close"),
	HX_CSTRING("create"),
	HX_CSTRING("createManagedStage"),
	HX_CSTRING("findHaxeLib"),
	HX_CSTRING("load"),
	HX_CSTRING("loaderTrace"),
	HX_CSTRING("sysName"),
	HX_CSTRING("tryLoad"),
	HX_CSTRING("exit"),
	HX_CSTRING("forceClose"),
	HX_CSTRING("getTimer"),
	HX_CSTRING("getURL"),
	HX_CSTRING("pause"),
	HX_CSTRING("postUICallback"),
	HX_CSTRING("resume"),
	HX_CSTRING("setIcon"),
	HX_CSTRING("setPackage"),
	HX_CSTRING("__setCurrentStage"),
	HX_CSTRING("trace"),
	HX_CSTRING("get_current"),
	HX_CSTRING("get_stage"),
	HX_CSTRING("nme_set_package"),
	HX_CSTRING("nme_get_frame_stage"),
	HX_CSTRING("nme_get_url"),
	HX_CSTRING("nme_pause_animation"),
	HX_CSTRING("nme_resume_animation"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Lib_obj::FULLSCREEN,"FULLSCREEN");
	HX_MARK_MEMBER_NAME(Lib_obj::BORDERLESS,"BORDERLESS");
	HX_MARK_MEMBER_NAME(Lib_obj::RESIZABLE,"RESIZABLE");
	HX_MARK_MEMBER_NAME(Lib_obj::HARDWARE,"HARDWARE");
	HX_MARK_MEMBER_NAME(Lib_obj::VSYNC,"VSYNC");
	HX_MARK_MEMBER_NAME(Lib_obj::HW_AA,"HW_AA");
	HX_MARK_MEMBER_NAME(Lib_obj::HW_AA_HIRES,"HW_AA_HIRES");
	HX_MARK_MEMBER_NAME(Lib_obj::ALLOW_SHADERS,"ALLOW_SHADERS");
	HX_MARK_MEMBER_NAME(Lib_obj::REQUIRE_SHADERS,"REQUIRE_SHADERS");
	HX_MARK_MEMBER_NAME(Lib_obj::DEPTH_BUFFER,"DEPTH_BUFFER");
	HX_MARK_MEMBER_NAME(Lib_obj::STENCIL_BUFFER,"STENCIL_BUFFER");
	HX_MARK_MEMBER_NAME(Lib_obj::company,"company");
	HX_MARK_MEMBER_NAME(Lib_obj::current,"current");
	HX_MARK_MEMBER_NAME(Lib_obj::file,"file");
	HX_MARK_MEMBER_NAME(Lib_obj::initHeight,"initHeight");
	HX_MARK_MEMBER_NAME(Lib_obj::initWidth,"initWidth");
	HX_MARK_MEMBER_NAME(Lib_obj::packageName,"packageName");
	HX_MARK_MEMBER_NAME(Lib_obj::silentRecreate,"silentRecreate");
	HX_MARK_MEMBER_NAME(Lib_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(Lib_obj::version,"version");
	HX_MARK_MEMBER_NAME(Lib_obj::__current,"__current");
	HX_MARK_MEMBER_NAME(Lib_obj::__isInit,"__isInit");
	HX_MARK_MEMBER_NAME(Lib_obj::__mainFrame,"__mainFrame");
	HX_MARK_MEMBER_NAME(Lib_obj::__moduleNames,"__moduleNames");
	HX_MARK_MEMBER_NAME(Lib_obj::__stage,"__stage");
	HX_MARK_MEMBER_NAME(Lib_obj::nme_set_package,"nme_set_package");
	HX_MARK_MEMBER_NAME(Lib_obj::nme_get_frame_stage,"nme_get_frame_stage");
	HX_MARK_MEMBER_NAME(Lib_obj::nme_get_url,"nme_get_url");
	HX_MARK_MEMBER_NAME(Lib_obj::nme_pause_animation,"nme_pause_animation");
	HX_MARK_MEMBER_NAME(Lib_obj::nme_resume_animation,"nme_resume_animation");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Lib_obj::FULLSCREEN,"FULLSCREEN");
	HX_VISIT_MEMBER_NAME(Lib_obj::BORDERLESS,"BORDERLESS");
	HX_VISIT_MEMBER_NAME(Lib_obj::RESIZABLE,"RESIZABLE");
	HX_VISIT_MEMBER_NAME(Lib_obj::HARDWARE,"HARDWARE");
	HX_VISIT_MEMBER_NAME(Lib_obj::VSYNC,"VSYNC");
	HX_VISIT_MEMBER_NAME(Lib_obj::HW_AA,"HW_AA");
	HX_VISIT_MEMBER_NAME(Lib_obj::HW_AA_HIRES,"HW_AA_HIRES");
	HX_VISIT_MEMBER_NAME(Lib_obj::ALLOW_SHADERS,"ALLOW_SHADERS");
	HX_VISIT_MEMBER_NAME(Lib_obj::REQUIRE_SHADERS,"REQUIRE_SHADERS");
	HX_VISIT_MEMBER_NAME(Lib_obj::DEPTH_BUFFER,"DEPTH_BUFFER");
	HX_VISIT_MEMBER_NAME(Lib_obj::STENCIL_BUFFER,"STENCIL_BUFFER");
	HX_VISIT_MEMBER_NAME(Lib_obj::company,"company");
	HX_VISIT_MEMBER_NAME(Lib_obj::current,"current");
	HX_VISIT_MEMBER_NAME(Lib_obj::file,"file");
	HX_VISIT_MEMBER_NAME(Lib_obj::initHeight,"initHeight");
	HX_VISIT_MEMBER_NAME(Lib_obj::initWidth,"initWidth");
	HX_VISIT_MEMBER_NAME(Lib_obj::packageName,"packageName");
	HX_VISIT_MEMBER_NAME(Lib_obj::silentRecreate,"silentRecreate");
	HX_VISIT_MEMBER_NAME(Lib_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(Lib_obj::version,"version");
	HX_VISIT_MEMBER_NAME(Lib_obj::__current,"__current");
	HX_VISIT_MEMBER_NAME(Lib_obj::__isInit,"__isInit");
	HX_VISIT_MEMBER_NAME(Lib_obj::__mainFrame,"__mainFrame");
	HX_VISIT_MEMBER_NAME(Lib_obj::__moduleNames,"__moduleNames");
	HX_VISIT_MEMBER_NAME(Lib_obj::__stage,"__stage");
	HX_VISIT_MEMBER_NAME(Lib_obj::nme_set_package,"nme_set_package");
	HX_VISIT_MEMBER_NAME(Lib_obj::nme_get_frame_stage,"nme_get_frame_stage");
	HX_VISIT_MEMBER_NAME(Lib_obj::nme_get_url,"nme_get_url");
	HX_VISIT_MEMBER_NAME(Lib_obj::nme_pause_animation,"nme_pause_animation");
	HX_VISIT_MEMBER_NAME(Lib_obj::nme_resume_animation,"nme_resume_animation");
};

Class Lib_obj::__mClass;

void Lib_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.Lib"), hx::TCanCast< Lib_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Lib_obj::__boot()
{
	FULLSCREEN= (int)1;
	BORDERLESS= (int)2;
	RESIZABLE= (int)4;
	HARDWARE= (int)8;
	VSYNC= (int)16;
	HW_AA= (int)32;
	HW_AA_HIRES= (int)96;
	ALLOW_SHADERS= (int)128;
	REQUIRE_SHADERS= (int)256;
	DEPTH_BUFFER= (int)512;
	STENCIL_BUFFER= (int)1024;
	silentRecreate= false;
	__current= null();
	__isInit= false;
	__mainFrame= null();
	__moduleNames= null();
	__stage= null();
	nme_set_package= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_set_package"),(int)4);
	nme_get_frame_stage= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_get_frame_stage"),(int)1);
	nme_get_url= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_get_url"),(int)1);
	nme_pause_animation= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_pause_animation"),(int)0);
	nme_resume_animation= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_resume_animation"),(int)0);
}

} // end namespace flash
