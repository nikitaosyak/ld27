#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSave
#include <org/flixel/FlxSave.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSound
#include <org/flixel/FlxSound.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxDebugger
#include <org/flixel/system/FlxDebugger.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Console
#include <org/flixel/system/debug/Console.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_ConsoleCommands
#include <org/flixel/system/debug/ConsoleCommands.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Log
#include <org/flixel/system/debug/Log.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_LogStyle
#include <org/flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_VCR
#include <org/flixel/system/debug/VCR.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace debug{

Void ConsoleCommands_obj::__construct(::org::flixel::system::debug::Console console)
{
HX_STACK_PUSH("ConsoleCommands::new","org/flixel/system/debug/ConsoleCommands.hx",9);
{
	HX_STACK_LINE(12)
	this->watchingMouse = false;
	HX_STACK_LINE(17)
	this->_console = console;
	HX_STACK_LINE(20)
	console->addCommand(HX_CSTRING("help"),hx::ObjectPtr<OBJ_>(this),this->help_dyn(),HX_CSTRING("h"));
	HX_STACK_LINE(21)
	console->addCommand(HX_CSTRING("log"),hx::ClassOf< ::org::flixel::FlxG >(),::org::flixel::FlxG_obj::log,null());
	HX_STACK_LINE(22)
	console->addCommand(HX_CSTRING("clearLog"),hx::ClassOf< ::org::flixel::FlxG >(),::org::flixel::FlxG_obj::clearLog_dyn(),HX_CSTRING("clear"));
	HX_STACK_LINE(23)
	console->addCommand(HX_CSTRING("clearHistory"),hx::ObjectPtr<OBJ_>(this),this->clearHistory_dyn(),HX_CSTRING("ch"));
	HX_STACK_LINE(24)
	console->addCommand(HX_CSTRING("resetState"),hx::ObjectPtr<OBJ_>(this),this->resetState_dyn(),HX_CSTRING("rs"));
	HX_STACK_LINE(25)
	console->addCommand(HX_CSTRING("switchState"),hx::ObjectPtr<OBJ_>(this),this->switchState_dyn(),HX_CSTRING("ss"));
	HX_STACK_LINE(26)
	console->addCommand(HX_CSTRING("resetGame"),hx::ObjectPtr<OBJ_>(this),this->resetGame_dyn(),HX_CSTRING("rg"));
	HX_STACK_LINE(30)
	console->addCommand(HX_CSTRING("watchMouse"),hx::ObjectPtr<OBJ_>(this),this->watchMouse_dyn(),HX_CSTRING("wm"));
	HX_STACK_LINE(31)
	console->addCommand(HX_CSTRING("visualDebug"),hx::ObjectPtr<OBJ_>(this),this->visualDebug_dyn(),HX_CSTRING("vd"));
	HX_STACK_LINE(32)
	console->addCommand(HX_CSTRING("pause"),hx::ObjectPtr<OBJ_>(this),this->pause_dyn(),HX_CSTRING("p"));
	HX_STACK_LINE(33)
	console->addCommand(HX_CSTRING("play"),hx::ClassOf< ::org::flixel::FlxG >(),::org::flixel::FlxG_obj::play_dyn(),null());
	HX_STACK_LINE(34)
	console->addCommand(HX_CSTRING("playMusic"),hx::ClassOf< ::org::flixel::FlxG >(),::org::flixel::FlxG_obj::playMusic_dyn(),HX_CSTRING("pm"));
	HX_STACK_LINE(35)
	console->addCommand(HX_CSTRING("bgColor"),hx::ObjectPtr<OBJ_>(this),this->bgColor_dyn(),HX_CSTRING("bg"));
	HX_STACK_LINE(36)
	console->addCommand(HX_CSTRING("shake"),hx::ObjectPtr<OBJ_>(this),this->shake_dyn(),HX_CSTRING("sh"));
	HX_STACK_LINE(37)
	console->addCommand(HX_CSTRING("close"),hx::ObjectPtr<OBJ_>(this),this->close_dyn(),HX_CSTRING("cl"));
	HX_STACK_LINE(38)
	console->addCommand(HX_CSTRING("create"),hx::ObjectPtr<OBJ_>(this),this->create_dyn(),HX_CSTRING("cr"));
	HX_STACK_LINE(39)
	console->addCommand(HX_CSTRING("set"),hx::ObjectPtr<OBJ_>(this),this->set_dyn(),null());
	HX_STACK_LINE(40)
	console->addCommand(HX_CSTRING("call"),hx::ObjectPtr<OBJ_>(this),this->call_dyn(),null());
	HX_STACK_LINE(41)
	console->addCommand(HX_CSTRING("listObjects"),hx::ObjectPtr<OBJ_>(this),this->listObjects_dyn(),HX_CSTRING("lo"));
	HX_STACK_LINE(42)
	console->addCommand(HX_CSTRING("listFunctions"),hx::ObjectPtr<OBJ_>(this),this->listFunctions_dyn(),HX_CSTRING("lf"));
	HX_STACK_LINE(43)
	console->addCommand(HX_CSTRING("watch"),hx::ObjectPtr<OBJ_>(this),this->watch_dyn(),HX_CSTRING("w"));
	HX_STACK_LINE(44)
	console->addCommand(HX_CSTRING("unwatch"),hx::ObjectPtr<OBJ_>(this),this->unwatch_dyn(),HX_CSTRING("uw"));
	HX_STACK_LINE(47)
	console->registerObject(HX_CSTRING("FlxG"),hx::ClassOf< ::org::flixel::FlxG >());
}
;
	return null();
}

ConsoleCommands_obj::~ConsoleCommands_obj() { }

Dynamic ConsoleCommands_obj::__CreateEmpty() { return  new ConsoleCommands_obj; }
hx::ObjectPtr< ConsoleCommands_obj > ConsoleCommands_obj::__new(::org::flixel::system::debug::Console console)
{  hx::ObjectPtr< ConsoleCommands_obj > result = new ConsoleCommands_obj();
	result->__construct(console);
	return result;}

Dynamic ConsoleCommands_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleCommands_obj > result = new ConsoleCommands_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ConsoleCommands_obj::cLog( Dynamic Text){
{
		HX_STACK_PUSH("ConsoleCommands::cLog","org/flixel/system/debug/ConsoleCommands.hx",521);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Text,"Text");
		HX_STACK_LINE(521)
		::org::flixel::FlxG_obj::advancedLog(Dynamic( Array_obj<Dynamic>::__new().Add(Text)),::org::flixel::system::debug::Log_obj::STYLE_CONSOLE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,cLog,(void))

Dynamic ConsoleCommands_obj::resolveObjectAndVariable( ::String ObjectAndVariable,::String CommandName){
	HX_STACK_PUSH("ConsoleCommands::resolveObjectAndVariable","org/flixel/system/debug/ConsoleCommands.hx",478);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable");
	HX_STACK_ARG(CommandName,"CommandName");
	HX_STACK_LINE(479)
	Array< ::String > searchArr = ObjectAndVariable.split(HX_CSTRING("."));		HX_STACK_VAR(searchArr,"searchArr");
	HX_STACK_LINE(482)
	if (((searchArr->__get((int)0).length == ObjectAndVariable.length))){
		HX_STACK_LINE(483)
		::org::flixel::FlxG_obj::error((((CommandName + HX_CSTRING(": '")) + ObjectAndVariable) + HX_CSTRING("' does not refer to an object's field")));
		HX_STACK_LINE(484)
		return null();
	}
	HX_STACK_LINE(487)
	Dynamic object = this->_console->registeredObjects->get(searchArr->shift());		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(488)
	::String variableName = searchArr->join(HX_CSTRING("."));		HX_STACK_VAR(variableName,"variableName");
	HX_STACK_LINE(490)
	if ((!(::Reflect_obj::isObject(object)))){
		HX_STACK_LINE(491)
		::org::flixel::FlxG_obj::error((((CommandName + HX_CSTRING(": '")) + ::Std_obj::string(object)) + HX_CSTRING("' is not a valid Object")));
		HX_STACK_LINE(492)
		return null();
	}
	HX_STACK_LINE(496)
	int l = searchArr->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(497)
	Dynamic tempObj = object;		HX_STACK_VAR(tempObj,"tempObj");
	HX_STACK_LINE(498)
	::String tempVarName = HX_CSTRING("");		HX_STACK_VAR(tempVarName,"tempVarName");
	HX_STACK_LINE(499)
	{
		HX_STACK_LINE(499)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(499)
		while(((_g < l))){
			HX_STACK_LINE(499)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(501)
			tempVarName = searchArr->__get(i);
			HX_STACK_LINE(503)
			try{
				HX_STACK_LINE(504)
				if (((i < (l - (int)1)))){
					HX_STACK_LINE(506)
					tempObj = (  (((tempObj == null()))) ? Dynamic(null()) : Dynamic(tempObj->__Field(tempVarName,true)) );
				}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(512)
						::org::flixel::FlxG_obj::error((((((CommandName + HX_CSTRING(": ")) + ::Std_obj::string(tempObj)) + HX_CSTRING(" does not have a field '")) + tempVarName) + HX_CSTRING("'")));
						HX_STACK_LINE(513)
						return null();
					}
				}
			}
		}
	}
	HX_STACK_LINE(517)
	return Dynamic( Array_obj<Dynamic>::__new().Add(tempObj).Add(tempVarName));
}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleCommands_obj,resolveObjectAndVariable,return )

Dynamic ConsoleCommands_obj::attemptToCreateInstance( ::String ClassName,Dynamic _Type,::String CommandName,Array< ::String > Params){
	HX_STACK_PUSH("ConsoleCommands::attemptToCreateInstance","org/flixel/system/debug/ConsoleCommands.hx",457);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ClassName,"ClassName");
	HX_STACK_ARG(_Type,"_Type");
	HX_STACK_ARG(CommandName,"CommandName");
	HX_STACK_ARG(Params,"Params");
	HX_STACK_LINE(458)
	if (((Params == null()))){
		HX_STACK_LINE(459)
		Params = Array_obj< ::String >::__new();
	}
	HX_STACK_LINE(461)
	Dynamic obj = ::Type_obj::resolveClass(ClassName);		HX_STACK_VAR(obj,"obj");
	HX_STACK_LINE(462)
	if ((!(::Reflect_obj::isObject(obj)))){
		HX_STACK_LINE(463)
		::org::flixel::FlxG_obj::error((((CommandName + HX_CSTRING(": '")) + ClassName) + HX_CSTRING("' is not a valid class name. Try passing the full class path. Also make sure the class is being compiled.")));
		HX_STACK_LINE(464)
		return null();
	}
	HX_STACK_LINE(467)
	Dynamic instance = ::Type_obj::createInstance(obj,Params);		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(469)
	if ((!(::Std_obj::is(instance,_Type)))){
		HX_STACK_LINE(470)
		::org::flixel::FlxG_obj::error(((((CommandName + HX_CSTRING(": '")) + ClassName) + HX_CSTRING("' is not a ")) + ::Type_obj::getClassName(_Type)));
		HX_STACK_LINE(471)
		return null();
	}
	HX_STACK_LINE(474)
	return instance;
}


HX_DEFINE_DYNAMIC_FUNC4(ConsoleCommands_obj,attemptToCreateInstance,return )

Void ConsoleCommands_obj::unwatch( ::String ObjectAndVariable,::String VariableName){
{
		HX_STACK_PUSH("ConsoleCommands::unwatch","org/flixel/system/debug/ConsoleCommands.hx",439);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable");
		HX_STACK_ARG(VariableName,"VariableName");
		HX_STACK_LINE(440)
		Dynamic info = this->resolveObjectAndVariable(ObjectAndVariable,HX_CSTRING("watch"));		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(443)
		if (((info == null()))){
			HX_STACK_LINE(444)
			return null();
		}
		HX_STACK_LINE(446)
		Dynamic object = info->__GetItem((int)0);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(447)
		::String varName = info->__GetItem((int)1);		HX_STACK_VAR(varName,"varName");
		HX_STACK_LINE(449)
		::org::flixel::FlxG_obj::unwatch(object,varName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleCommands_obj,unwatch,(void))

Void ConsoleCommands_obj::watch( ::String ObjectAndVariable,::String DisplayName){
{
		HX_STACK_PUSH("ConsoleCommands::watch","org/flixel/system/debug/ConsoleCommands.hx",425);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable");
		HX_STACK_ARG(DisplayName,"DisplayName");
		HX_STACK_LINE(426)
		Dynamic info = this->resolveObjectAndVariable(ObjectAndVariable,HX_CSTRING("watch"));		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(429)
		if (((info == null()))){
			HX_STACK_LINE(430)
			return null();
		}
		HX_STACK_LINE(432)
		Dynamic object = info->__GetItem((int)0);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(433)
		::String varName = info->__GetItem((int)1);		HX_STACK_VAR(varName,"varName");
		HX_STACK_LINE(435)
		::org::flixel::FlxG_obj::watch(object,varName,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleCommands_obj,watch,(void))

Void ConsoleCommands_obj::listFunctions( ){
{
		HX_STACK_PUSH("ConsoleCommands::listFunctions","org/flixel/system/debug/ConsoleCommands.hx",420);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::String Block( ::org::flixel::system::debug::ConsoleCommands_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/debug/ConsoleCommands.hx",421);
				{
					HX_STACK_LINE(421)
					::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
					HX_STACK_LINE(421)
					for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(__this->_console->registeredFunctions->keys());  __it->hasNext(); ){
						::String key = __it->next();
						{
							HX_STACK_LINE(421)
							hx::AddEq(string,::Std_obj::string(key));
							HX_STACK_LINE(421)
							hx::AddEq(string,HX_CSTRING(", "));
						}
;
					}
					HX_STACK_LINE(421)
					return string.substring((int)0,(string.length - (int)2));
				}
				return null();
			}
		};
		HX_STACK_LINE(420)
		this->cLog((HX_CSTRING("Functions registered: \n") + _Function_1_1::Block(this)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listFunctions,(void))

Void ConsoleCommands_obj::listObjects( ){
{
		HX_STACK_PUSH("ConsoleCommands::listObjects","org/flixel/system/debug/ConsoleCommands.hx",415);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::String Block( ::org::flixel::system::debug::ConsoleCommands_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/debug/ConsoleCommands.hx",416);
				{
					HX_STACK_LINE(416)
					::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
					HX_STACK_LINE(416)
					for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(__this->_console->registeredObjects->keys());  __it->hasNext(); ){
						::String key = __it->next();
						{
							HX_STACK_LINE(416)
							hx::AddEq(string,::Std_obj::string(key));
							HX_STACK_LINE(416)
							hx::AddEq(string,HX_CSTRING(", "));
						}
;
					}
					HX_STACK_LINE(416)
					return string.substring((int)0,(string.length - (int)2));
				}
				return null();
			}
		};
		HX_STACK_LINE(415)
		this->cLog((HX_CSTRING("Objects registered: \n") + _Function_1_1::Block(this)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listObjects,(void))

Void ConsoleCommands_obj::call( ::String FunctionAlias,Array< ::String > Params){
{
		HX_STACK_PUSH("ConsoleCommands::call","org/flixel/system/debug/ConsoleCommands.hx",351);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FunctionAlias,"FunctionAlias");
		HX_STACK_ARG(Params,"Params");
		HX_STACK_LINE(352)
		if (((Params == null()))){
			HX_STACK_LINE(353)
			Params = Array_obj< ::String >::__new();
		}
		HX_STACK_LINE(356)
		Dynamic func = this->_console->registeredFunctions->get(FunctionAlias);		HX_STACK_VAR(func,"func");
		HX_STACK_LINE(359)
		if ((!(::Reflect_obj::isFunction(func)))){
			HX_STACK_LINE(361)
			Array< ::String > searchArr = FunctionAlias.split(HX_CSTRING("."));		HX_STACK_VAR(searchArr,"searchArr");
			HX_STACK_LINE(362)
			::String objectName = searchArr->shift();		HX_STACK_VAR(objectName,"objectName");
			HX_STACK_LINE(363)
			Dynamic object = this->_console->registeredObjects->get(objectName);		HX_STACK_VAR(object,"object");
			HX_STACK_LINE(365)
			if ((!(::Reflect_obj::isObject(object)))){
				HX_STACK_LINE(367)
				::org::flixel::FlxG_obj::error(((HX_CSTRING("call: '") + ::Std_obj::string(object)) + HX_CSTRING("' is not a valid Object to call function from")));
				HX_STACK_LINE(368)
				return null();
			}
			HX_STACK_LINE(371)
			Dynamic tempObj = object;		HX_STACK_VAR(tempObj,"tempObj");
			HX_STACK_LINE(372)
			::String tempVarName = HX_CSTRING("");		HX_STACK_VAR(tempVarName,"tempVarName");
			HX_STACK_LINE(373)
			::String funcName = HX_CSTRING("");		HX_STACK_VAR(funcName,"funcName");
			HX_STACK_LINE(374)
			int l = (searchArr->length - (int)1);		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(375)
			{
				HX_STACK_LINE(375)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(375)
				while(((_g < l))){
					HX_STACK_LINE(375)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(377)
					tempVarName = searchArr->__get(i);
					HX_STACK_LINE(379)
					try{
						HX_STACK_LINE(380)
						Dynamic prop = (  (((tempObj == null()))) ? Dynamic(null()) : Dynamic(tempObj->__Field(tempVarName,true)) );		HX_STACK_VAR(prop,"prop");
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(385)
								::org::flixel::FlxG_obj::error(((((HX_CSTRING("call: ") + ::Std_obj::string(tempObj)) + HX_CSTRING(" does not have a field '")) + tempVarName) + HX_CSTRING("' to call function from")));
								HX_STACK_LINE(386)
								return null();
							}
						}
					}
					HX_STACK_LINE(389)
					tempObj = (  (((tempObj == null()))) ? Dynamic(null()) : Dynamic(tempObj->__Field(tempVarName,true)) );
				}
			}
			HX_STACK_LINE(392)
			func = ::Reflect_obj::field(tempObj,searchArr->__get(l));
			HX_STACK_LINE(394)
			if (((func == null()))){
				HX_STACK_LINE(396)
				::org::flixel::FlxG_obj::error(((((HX_CSTRING("call: ") + ::Std_obj::string(tempObj)) + HX_CSTRING(" does not have a method '")) + searchArr->__get(l)) + HX_CSTRING("' to call")));
				HX_STACK_LINE(397)
				return null();
			}
		}
		HX_STACK_LINE(401)
		if ((::Reflect_obj::isFunction(func))){
			HX_STACK_LINE(402)
			bool success = this->_console->callFunction(null(),func,Params);		HX_STACK_VAR(success,"success");
			HX_STACK_LINE(404)
			if (((bool((Params->length == (int)0)) && bool(success)))){
				HX_STACK_LINE(405)
				this->cLog(((HX_CSTRING("call: Called '") + FunctionAlias) + HX_CSTRING("'")));
			}
			else{
				HX_STACK_LINE(406)
				if ((success)){
					HX_STACK_LINE(407)
					this->cLog((((HX_CSTRING("call: Called '") + FunctionAlias) + HX_CSTRING("' with params ")) + ::Std_obj::string(Params)));
				}
			}
		}
		else{
			HX_STACK_LINE(409)
			::org::flixel::FlxG_obj::error(((HX_CSTRING("call: '") + FunctionAlias) + HX_CSTRING("' is not a valid function")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleCommands_obj,call,(void))

Void ConsoleCommands_obj::set( ::String ObjectAndVariable,Dynamic NewVariableValue,::String WatchName){
{
		HX_STACK_PUSH("ConsoleCommands::set","org/flixel/system/debug/ConsoleCommands.hx",300);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable");
		HX_STACK_ARG(NewVariableValue,"NewVariableValue");
		HX_STACK_ARG(WatchName,"WatchName");
		HX_STACK_LINE(301)
		Dynamic info = this->resolveObjectAndVariable(ObjectAndVariable,HX_CSTRING("set"));		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(304)
		if (((info == null()))){
			HX_STACK_LINE(305)
			return null();
		}
		HX_STACK_LINE(307)
		Dynamic object = info->__GetItem((int)0);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(308)
		::String varName = info->__GetItem((int)1);		HX_STACK_VAR(varName,"varName");
		HX_STACK_LINE(309)
		Dynamic variable = null();		HX_STACK_VAR(variable,"variable");
		HX_STACK_LINE(311)
		try{
			HX_STACK_LINE(312)
			variable = (  (((object == null()))) ? Dynamic(null()) : Dynamic(object->__Field(varName,true)) );
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(316)
					return null();
				}
			}
		}
		HX_STACK_LINE(321)
		if ((::Std_obj::is(variable,hx::ClassOf< ::Bool >()))){
			HX_STACK_LINE(321)
			if (((bool((NewVariableValue == HX_CSTRING("false"))) || bool((NewVariableValue == HX_CSTRING("0")))))){
				HX_STACK_LINE(323)
				NewVariableValue = false;
			}
			else{
				HX_STACK_LINE(324)
				if (((bool((NewVariableValue == HX_CSTRING("true"))) || bool((NewVariableValue == HX_CSTRING("1")))))){
					HX_STACK_LINE(325)
					NewVariableValue = true;
				}
				else{
					HX_STACK_LINE(327)
					::org::flixel::FlxG_obj::error(((((HX_CSTRING("set: '") + ::Std_obj::string(NewVariableValue)) + HX_CSTRING("' is not a valid value for Booelan '")) + varName) + HX_CSTRING("'")));
					HX_STACK_LINE(328)
					return null();
				}
			}
		}
		else{
			HX_STACK_LINE(332)
			if (((bool(::Std_obj::is(variable,hx::ClassOf< ::Float >())) && bool(::Math_obj::isNaN(::Std_obj::parseFloat(NewVariableValue)))))){
				HX_STACK_LINE(333)
				::org::flixel::FlxG_obj::error(((((HX_CSTRING("set: '") + ::Std_obj::string(NewVariableValue)) + HX_CSTRING("' is not a valid value for number '")) + varName) + HX_CSTRING("'")));
				HX_STACK_LINE(334)
				return null();
			}
			else{
				HX_STACK_LINE(337)
				if (((bool((bool(!(::Std_obj::is(variable,hx::ClassOf< ::Float >()))) && bool(!(::Std_obj::is(variable,hx::ClassOf< ::Bool >()))))) && bool(!(::Std_obj::is(variable,hx::ClassOf< ::String >())))))){
					HX_STACK_LINE(339)
					::org::flixel::FlxG_obj::error(((((HX_CSTRING("set: '") + varName) + HX_CSTRING(":")) + ::Std_obj::string(variable)) + HX_CSTRING("' is not of a simple type (number, bool or string)")));
					HX_STACK_LINE(340)
					return null();
				}
			}
		}
		HX_STACK_LINE(343)
		if (((object != null()))){
			HX_STACK_LINE(343)
			object->__SetField(varName,NewVariableValue,true);
		}
		HX_STACK_LINE(344)
		this->cLog((((((HX_CSTRING("set: ") + ::Std_obj::string(object)) + HX_CSTRING(".")) + varName) + HX_CSTRING(" is now ")) + ::Std_obj::string(NewVariableValue)));
		HX_STACK_LINE(346)
		if (((WatchName != null()))){
			HX_STACK_LINE(347)
			::org::flixel::FlxG_obj::watch(object,varName,WatchName);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ConsoleCommands_obj,set,(void))

Void ConsoleCommands_obj::create( ::String ClassName,hx::Null< bool >  __o_MousePos,Array< ::String > Params){
bool MousePos = __o_MousePos.Default(true);
	HX_STACK_PUSH("ConsoleCommands::create","org/flixel/system/debug/ConsoleCommands.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ClassName,"ClassName");
	HX_STACK_ARG(MousePos,"MousePos");
	HX_STACK_ARG(Params,"Params");
{
		HX_STACK_LINE(272)
		if (((Params == null()))){
			HX_STACK_LINE(273)
			Params = Array_obj< ::String >::__new();
		}
		HX_STACK_LINE(275)
		Dynamic instance = this->attemptToCreateInstance(ClassName,hx::ClassOf< ::org::flixel::FlxObject >(),HX_CSTRING("create"),Params);		HX_STACK_VAR(instance,"instance");
		HX_STACK_LINE(276)
		if (((instance == null()))){
			HX_STACK_LINE(277)
			return null();
		}
		HX_STACK_LINE(279)
		::org::flixel::FlxObject obj = instance;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(281)
		if ((MousePos)){
			HX_STACK_LINE(282)
			obj->x = ::org::flixel::FlxG_obj::_game->get_mouseX();
			HX_STACK_LINE(283)
			obj->y = ::org::flixel::FlxG_obj::_game->get_mouseY();
		}
		HX_STACK_LINE(286)
		::org::flixel::FlxG_obj::get_state()->add(instance);
		HX_STACK_LINE(288)
		if (((Params->length == (int)0))){
			HX_STACK_LINE(289)
			this->cLog((((((HX_CSTRING("create: New ") + ClassName) + HX_CSTRING(" created at X = ")) + obj->x) + HX_CSTRING(" Y = ")) + obj->y));
		}
		else{
			HX_STACK_LINE(291)
			this->cLog((((((((HX_CSTRING("create: New ") + ClassName) + HX_CSTRING(" created at X = ")) + obj->x) + HX_CSTRING(" Y = ")) + obj->y) + HX_CSTRING(" with params ")) + ::Std_obj::string(Params)));
		}
		HX_STACK_LINE(293)
		this->_console->objectStack->push(instance);
		HX_STACK_LINE(294)
		this->_console->registerObject(::Std_obj::string(this->_console->objectStack->length),instance);
		HX_STACK_LINE(296)
		this->cLog((((HX_CSTRING("create: ") + ClassName) + HX_CSTRING(" registered as object '")) + this->_console->objectStack->length));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ConsoleCommands_obj,create,(void))

Void ConsoleCommands_obj::close( ){
{
		HX_STACK_PUSH("ConsoleCommands::close","org/flixel/system/debug/ConsoleCommands.hx",265);
		HX_STACK_THIS(this);
		HX_STACK_LINE(266)
		::org::flixel::FlxG_obj::_game->_debugger->set_visible(false);
		HX_STACK_LINE(267)
		::org::flixel::FlxG_obj::_game->_debugger->hasMouse = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,close,(void))

Void ConsoleCommands_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration){
Float Intensity = __o_Intensity.Default(0.05);
Float Duration = __o_Duration.Default(0.5);
	HX_STACK_PUSH("ConsoleCommands::shake","org/flixel/system/debug/ConsoleCommands.hx",250);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Intensity,"Intensity");
	HX_STACK_ARG(Duration,"Duration");
{
		HX_STACK_LINE(251)
		if ((::Math_obj::isNaN(Intensity))){
			HX_STACK_LINE(252)
			this->cLog(HX_CSTRING("shake: Intensity is not a number"));
			HX_STACK_LINE(253)
			return null();
		}
		HX_STACK_LINE(255)
		if ((::Math_obj::isNaN(Duration))){
			HX_STACK_LINE(256)
			this->cLog(HX_CSTRING("shake: Duration is not a number"));
			HX_STACK_LINE(257)
			return null();
		}
		HX_STACK_LINE(260)
		::org::flixel::FlxG_obj::shake(Intensity,Duration,null(),null(),null());
		HX_STACK_LINE(261)
		this->cLog((((HX_CSTRING("shake: Shake started, Intensity: ") + Intensity) + HX_CSTRING(" Duration: ")) + Duration));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleCommands_obj,shake,(void))

Void ConsoleCommands_obj::bgColor( Dynamic Color){
{
		HX_STACK_PUSH("ConsoleCommands::bgColor","org/flixel/system/debug/ConsoleCommands.hx",220);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Color,"Color");
		HX_STACK_LINE(221)
		::String colorString = ::Std_obj::string(Color);		HX_STACK_VAR(colorString,"colorString");
		HX_STACK_LINE(222)
		int color = ::Std_obj::parseInt(Color);		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(224)
		if (((colorString != null()))){
			HX_STACK_LINE(224)
			::String _switch_1 = (colorString);
			if (  ( _switch_1==HX_CSTRING("red"))){
				HX_STACK_LINE(226)
				color = (int)-65536;
			}
			else if (  ( _switch_1==HX_CSTRING("green"))){
				HX_STACK_LINE(228)
				color = (int)-16744448;
			}
			else if (  ( _switch_1==HX_CSTRING("blue"))){
				HX_STACK_LINE(230)
				color = (int)-16776961;
			}
			else if (  ( _switch_1==HX_CSTRING("pink"))){
				HX_STACK_LINE(232)
				color = (int)-16181;
			}
			else if (  ( _switch_1==HX_CSTRING("white"))){
				HX_STACK_LINE(234)
				color = (int)-1;
			}
			else if (  ( _switch_1==HX_CSTRING("black"))){
				HX_STACK_LINE(236)
				color = (int)-16777216;
			}
		}
		HX_STACK_LINE(241)
		if ((!(::Math_obj::isNaN(color)))){
			HX_STACK_LINE(242)
			::org::flixel::FlxG_obj::set_bgColor(color);
			HX_STACK_LINE(243)
			this->cLog(((HX_CSTRING("bgColor: Changed background color to '") + ::Std_obj::string(Color)) + HX_CSTRING("'")));
		}
		else{
			HX_STACK_LINE(246)
			this->cLog(((HX_CSTRING("bgColor: Invalid color '") + ::Std_obj::string(Color)) + HX_CSTRING("'")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,bgColor,(void))

Void ConsoleCommands_obj::pause( ){
{
		HX_STACK_PUSH("ConsoleCommands::pause","org/flixel/system/debug/ConsoleCommands.hx",208);
		HX_STACK_THIS(this);
		HX_STACK_LINE(208)
		if ((::org::flixel::FlxG_obj::_game->get_debugger()->vcr->paused)){
			HX_STACK_LINE(210)
			::org::flixel::FlxG_obj::_game->get_debugger()->vcr->onPlay();
			HX_STACK_LINE(211)
			this->cLog(HX_CSTRING("pause: Game unpaused"));
		}
		else{
			HX_STACK_LINE(214)
			::org::flixel::FlxG_obj::_game->get_debugger()->vcr->onPause();
			HX_STACK_LINE(215)
			this->cLog(HX_CSTRING("pause: Game paused"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,pause,(void))

Void ConsoleCommands_obj::visualDebug( ){
{
		HX_STACK_PUSH("ConsoleCommands::visualDebug","org/flixel/system/debug/ConsoleCommands.hx",198);
		HX_STACK_THIS(this);
		HX_STACK_LINE(199)
		::org::flixel::FlxG_obj::visualDebug = !(::org::flixel::FlxG_obj::visualDebug);
		HX_STACK_LINE(201)
		if ((::org::flixel::FlxG_obj::visualDebug)){
			HX_STACK_LINE(202)
			this->cLog(HX_CSTRING("visualDebug: Enbaled"));
		}
		else{
			HX_STACK_LINE(204)
			this->cLog(HX_CSTRING("visualDebug: Disabled"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,visualDebug,(void))

Void ConsoleCommands_obj::watchMouse( ){
{
		HX_STACK_PUSH("ConsoleCommands::watchMouse","org/flixel/system/debug/ConsoleCommands.hx",182);
		HX_STACK_THIS(this);
		HX_STACK_LINE(183)
		if ((!(this->watchingMouse))){
			HX_STACK_LINE(184)
			::org::flixel::FlxG_obj::watch(::org::flixel::FlxG_obj::_game,HX_CSTRING("mouseX"),HX_CSTRING("Mouse.x"));
			HX_STACK_LINE(185)
			::org::flixel::FlxG_obj::watch(::org::flixel::FlxG_obj::_game,HX_CSTRING("mouseY"),HX_CSTRING("Mouse.y"));
			HX_STACK_LINE(186)
			this->cLog(HX_CSTRING("watchMouse: Mouse position added to watch window"));
		}
		else{
			HX_STACK_LINE(189)
			::org::flixel::FlxG_obj::unwatch(::org::flixel::FlxG_obj::_game,HX_CSTRING("mouseX"));
			HX_STACK_LINE(190)
			::org::flixel::FlxG_obj::unwatch(::org::flixel::FlxG_obj::_game,HX_CSTRING("mouseY"));
			HX_STACK_LINE(191)
			this->cLog(HX_CSTRING("watchMouse: Mouse position removed from watch window"));
		}
		HX_STACK_LINE(194)
		this->watchingMouse = !(this->watchingMouse);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,watchMouse,(void))

Void ConsoleCommands_obj::resetGame( ){
{
		HX_STACK_PUSH("ConsoleCommands::resetGame","org/flixel/system/debug/ConsoleCommands.hx",171);
		HX_STACK_THIS(this);
		HX_STACK_LINE(172)
		::org::flixel::FlxG_obj::resetGame();
		HX_STACK_LINE(173)
		this->cLog(HX_CSTRING("resetGame: Game has been reset"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,resetGame,(void))

Void ConsoleCommands_obj::switchState( ::String ClassName){
{
		HX_STACK_PUSH("ConsoleCommands::switchState","org/flixel/system/debug/ConsoleCommands.hx",156);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ClassName,"ClassName");
		HX_STACK_LINE(157)
		Dynamic instance = this->attemptToCreateInstance(ClassName,hx::ClassOf< ::org::flixel::FlxState >(),HX_CSTRING("switchState"),null());		HX_STACK_VAR(instance,"instance");
		HX_STACK_LINE(158)
		if (((instance == null()))){
			HX_STACK_LINE(159)
			return null();
		}
		HX_STACK_LINE(161)
		::org::flixel::FlxG_obj::switchState(instance);
		HX_STACK_LINE(162)
		this->cLog(((HX_CSTRING("switchState: New '") + ClassName) + HX_CSTRING("' created")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,switchState,(void))

Void ConsoleCommands_obj::resetState( ){
{
		HX_STACK_PUSH("ConsoleCommands::resetState","org/flixel/system/debug/ConsoleCommands.hx",145);
		HX_STACK_THIS(this);
		HX_STACK_LINE(146)
		::org::flixel::FlxG_obj::resetState();
		HX_STACK_LINE(147)
		this->cLog(HX_CSTRING("resetState: State has been reset"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,resetState,(void))

Void ConsoleCommands_obj::clearHistory( ){
{
		HX_STACK_PUSH("ConsoleCommands::clearHistory","org/flixel/system/debug/ConsoleCommands.hx",138);
		HX_STACK_THIS(this);
		HX_STACK_LINE(139)
		this->_console->cmdHistory = Array_obj< ::String >::__new();
		HX_STACK_LINE(140)
		::org::flixel::FlxG_obj::_game->_prefsSave->flush(null(),null());
		HX_STACK_LINE(141)
		this->cLog(HX_CSTRING("clearHistory: Command history cleared"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,clearHistory,(void))

Void ConsoleCommands_obj::help( ::String __o_Command){
::String Command = __o_Command.Default(HX_CSTRING(""));
	HX_STACK_PUSH("ConsoleCommands::help","org/flixel/system/debug/ConsoleCommands.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Command,"Command");
{
		HX_STACK_LINE(54)
		if (((Command == HX_CSTRING("")))){
			HX_STACK_LINE(57)
			::String fs = HX_CSTRING("");		HX_STACK_VAR(fs,"fs");
			HX_STACK_LINE(62)
			this->cLog(((HX_CSTRING("System commands: \nlog, clearLog, clearHistory, help, resetState, switchState, resetGame, ") + fs) + HX_CSTRING(" watchMouse, visualDebug, pause, play, playMusic, bgColor, shake, create, set, call, close, listObjects, listFunctions, watch, unwatch")));
			HX_STACK_LINE(63)
			this->cLog(HX_CSTRING("help (Command) for more information about a specific command"));
		}
		else{
			HX_STACK_LINE(66)
			this->cLog((HX_CSTRING("help: ") + Command));
			HX_STACK_LINE(68)
			::String _switch_2 = (Command);
			if (  ( _switch_2==HX_CSTRING("log"))){
				HX_STACK_LINE(70)
				this->cLog(HX_CSTRING("log: Calls FlxG.log() with the text you enter"));
				HX_STACK_LINE(71)
				this->cLog(HX_CSTRING("log [Text]"));
			}
			else if (  ( _switch_2==HX_CSTRING("clearLog")) ||  ( _switch_2==HX_CSTRING("clear"))){
				HX_STACK_LINE(72)
				this->cLog(HX_CSTRING("clearLog: {clear} Clears the log window"));
			}
			else if (  ( _switch_2==HX_CSTRING("clearHistory")) ||  ( _switch_2==HX_CSTRING("ch"))){
				HX_STACK_LINE(74)
				this->cLog(HX_CSTRING("clearHistory: {ch} Clears the command history"));
			}
			else if (  ( _switch_2==HX_CSTRING("help")) ||  ( _switch_2==HX_CSTRING("h"))){
				HX_STACK_LINE(77)
				this->cLog(HX_CSTRING("help: {h} Lists all system commands or provides more info on a specified command"));
				HX_STACK_LINE(78)
				this->cLog(HX_CSTRING("help (Command)"));
			}
			else if (  ( _switch_2==HX_CSTRING("resetState")) ||  ( _switch_2==HX_CSTRING("rs"))){
				HX_STACK_LINE(79)
				this->cLog(HX_CSTRING("resetState: {rs} Calls FlxG.resetState()"));
			}
			else if (  ( _switch_2==HX_CSTRING("resetGame")) ||  ( _switch_2==HX_CSTRING("rg"))){
				HX_STACK_LINE(81)
				this->cLog(HX_CSTRING("resetGame: {rg} Calls FlxG.resetGame()"));
			}
			else if (  ( _switch_2==HX_CSTRING("switchState")) ||  ( _switch_2==HX_CSTRING("ss"))){
				HX_STACK_LINE(84)
				this->cLog(HX_CSTRING("switchState: {ss} Calls FlxG.switchState() with specified FlxState"));
				HX_STACK_LINE(85)
				this->cLog(HX_CSTRING("switchState [FlxState]"));
			}
			else if (  ( _switch_2==HX_CSTRING("watchMouse")) ||  ( _switch_2==HX_CSTRING("wm"))){
				HX_STACK_LINE(90)
				this->cLog(HX_CSTRING("watchMouse: {wm} Adds the x and y pos of the mosue to the watch window. Super useful for GUI-Building stuff."));
			}
			else if (  ( _switch_2==HX_CSTRING("visualDebug")) ||  ( _switch_2==HX_CSTRING("vd"))){
				HX_STACK_LINE(92)
				this->cLog(HX_CSTRING("visualDebug: {vd} Toggles visual debugging"));
			}
			else if (  ( _switch_2==HX_CSTRING("pause")) ||  ( _switch_2==HX_CSTRING("p"))){
				HX_STACK_LINE(94)
				this->cLog(HX_CSTRING("pause: {p} Pauses / unpauses the game"));
			}
			else if (  ( _switch_2==HX_CSTRING("play"))){
				HX_STACK_LINE(97)
				this->cLog(HX_CSTRING("play: Plays a sound"));
				HX_STACK_LINE(98)
				this->cLog(HX_CSTRING("play [Sound] (Volume = 1)"));
			}
			else if (  ( _switch_2==HX_CSTRING("playMusic")) ||  ( _switch_2==HX_CSTRING("pm"))){
				HX_STACK_LINE(100)
				this->cLog(HX_CSTRING("playMusic: {pm} Sets up and plays a looping background soundtrack."));
				HX_STACK_LINE(101)
				this->cLog(HX_CSTRING("playMusic [Music] (Volume = 1)"));
			}
			else if (  ( _switch_2==HX_CSTRING("bgColor")) ||  ( _switch_2==HX_CSTRING("bg"))){
				HX_STACK_LINE(103)
				this->cLog(HX_CSTRING("bgColor: {bg} Changes the background color to a specified color. You can also pass the colors 'red, green, blue, pink, white,  and black'"));
				HX_STACK_LINE(104)
				this->cLog(HX_CSTRING("bgColor [Color]"));
			}
			else if (  ( _switch_2==HX_CSTRING("shake")) ||  ( _switch_2==HX_CSTRING("sh"))){
				HX_STACK_LINE(106)
				this->cLog(HX_CSTRING("shake: {sh} Calls FlxG.shake()"));
				HX_STACK_LINE(107)
				this->cLog(HX_CSTRING("shake (Intensity = 0.05) (Duration = 0.5)"));
			}
			else if (  ( _switch_2==HX_CSTRING("close")) ||  ( _switch_2==HX_CSTRING("cl"))){
				HX_STACK_LINE(108)
				this->cLog(HX_CSTRING("close: {cl} Close the debugger overlay"));
			}
			else if (  ( _switch_2==HX_CSTRING("create")) ||  ( _switch_2==HX_CSTRING("cr"))){
				HX_STACK_LINE(111)
				this->cLog(HX_CSTRING("create: {cr} Creates a new FlxObject and registers it - by default at the mouse position."));
				HX_STACK_LINE(112)
				this->cLog(HX_CSTRING("create [FlxObject] (MousePos = true) (param0...paramX)"));
			}
			else if (  ( _switch_2==HX_CSTRING("set"))){
				HX_STACK_LINE(114)
				this->cLog(HX_CSTRING("set: Changes a var within a previosuly registered object via FlxG.console.registerObject(). Supports nesting (a field within an object within a registered object). Set a WatchName if you want to add the var to the watch window."));
				HX_STACK_LINE(115)
				this->cLog(HX_CSTRING("set [Object.VariableName] [NewValue] (WatchName)"));
			}
			else if (  ( _switch_2==HX_CSTRING("call"))){
				HX_STACK_LINE(117)
				this->cLog(HX_CSTRING("call: Calls a function previously registered via FlxG.console.registerFunction() with a set of params (or a function of a registered object"));
				HX_STACK_LINE(118)
				this->cLog(HX_CSTRING("call [(Object.)Function] [param0...paramX]"));
			}
			else if (  ( _switch_2==HX_CSTRING("listObjects")) ||  ( _switch_2==HX_CSTRING("lo"))){
				HX_STACK_LINE(119)
				this->cLog(HX_CSTRING("listObjects: {lo} Lists all the aliases of the objects registered"));
			}
			else if (  ( _switch_2==HX_CSTRING("listFunctions")) ||  ( _switch_2==HX_CSTRING("lf"))){
				HX_STACK_LINE(121)
				this->cLog(HX_CSTRING("listFunctions: {lf} Lists all the aliases of the functions registered"));
			}
			else if (  ( _switch_2==HX_CSTRING("watch")) ||  ( _switch_2==HX_CSTRING("w"))){
				HX_STACK_LINE(124)
				this->cLog(HX_CSTRING("watch: {w} Calls FlxG.watch()"));
				HX_STACK_LINE(125)
				this->cLog(HX_CSTRING("watch [Object.VariableName] (DisplayName)"));
			}
			else if (  ( _switch_2==HX_CSTRING("unwatch")) ||  ( _switch_2==HX_CSTRING("uw"))){
				HX_STACK_LINE(127)
				this->cLog(HX_CSTRING("unwatch: {uw} Calls FlxG.unwatch()"));
				HX_STACK_LINE(128)
				this->cLog(HX_CSTRING("unwatch [Object(.VariableName)]"));
			}
			else  {
				HX_STACK_LINE(129)
				this->cLog(((HX_CSTRING("help: Couldn't find command '") + Command) + HX_CSTRING("'")));
			}
;
;
			HX_STACK_LINE(133)
			this->cLog(HX_CSTRING("{shortcut} [required param] (optional param)"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,help,(void))


ConsoleCommands_obj::ConsoleCommands_obj()
{
}

void ConsoleCommands_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConsoleCommands);
	HX_MARK_MEMBER_NAME(watchingMouse,"watchingMouse");
	HX_MARK_MEMBER_NAME(_console,"_console");
	HX_MARK_END_CLASS();
}

void ConsoleCommands_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(watchingMouse,"watchingMouse");
	HX_VISIT_MEMBER_NAME(_console,"_console");
}

Dynamic ConsoleCommands_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"cLog") ) { return cLog_dyn(); }
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		if (HX_FIELD_EQ(inName,"help") ) { return help_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"watch") ) { return watch_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unwatch") ) { return unwatch_dyn(); }
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { return _console; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"watchMouse") ) { return watchMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"resetState") ) { return resetState_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listObjects") ) { return listObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"visualDebug") ) { return visualDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearHistory") ) { return clearHistory_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listFunctions") ) { return listFunctions_dyn(); }
		if (HX_FIELD_EQ(inName,"watchingMouse") ) { return watchingMouse; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"attemptToCreateInstance") ) { return attemptToCreateInstance_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"resolveObjectAndVariable") ) { return resolveObjectAndVariable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConsoleCommands_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast< ::org::flixel::system::debug::Console >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"watchingMouse") ) { watchingMouse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleCommands_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("watchingMouse"));
	outFields->push(HX_CSTRING("_console"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cLog"),
	HX_CSTRING("resolveObjectAndVariable"),
	HX_CSTRING("attemptToCreateInstance"),
	HX_CSTRING("unwatch"),
	HX_CSTRING("watch"),
	HX_CSTRING("listFunctions"),
	HX_CSTRING("listObjects"),
	HX_CSTRING("call"),
	HX_CSTRING("set"),
	HX_CSTRING("create"),
	HX_CSTRING("close"),
	HX_CSTRING("shake"),
	HX_CSTRING("bgColor"),
	HX_CSTRING("pause"),
	HX_CSTRING("visualDebug"),
	HX_CSTRING("watchMouse"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("switchState"),
	HX_CSTRING("resetState"),
	HX_CSTRING("clearHistory"),
	HX_CSTRING("help"),
	HX_CSTRING("watchingMouse"),
	HX_CSTRING("_console"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleCommands_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleCommands_obj::__mClass,"__mClass");
};

Class ConsoleCommands_obj::__mClass;

void ConsoleCommands_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.debug.ConsoleCommands"), hx::TCanCast< ConsoleCommands_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ConsoleCommands_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug
