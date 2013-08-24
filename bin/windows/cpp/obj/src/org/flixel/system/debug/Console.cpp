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
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_errors_ArgumentError
#include <flash/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_FocusEvent
#include <flash/events/FocusEvent.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFieldType
#include <flash/text/TextFieldType.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_ui_Keyboard
#include <flash/ui/Keyboard.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
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
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSave
#include <org/flixel/FlxSave.h>
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
namespace org{
namespace flixel{
namespace system{
namespace debug{

Void Console_obj::__construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor)
{
HX_STACK_PUSH("Console::new","org/flixel/system/debug/Console.hx",25);
bool Resizable = __o_Resizable.Default(true);
int BGColor = __o_BGColor.Default(-1442840576);
int TopColor = __o_TopColor.Default(2130706432);
{
	HX_STACK_LINE(62)
	this->defaultText = HX_CSTRING("(Click here / press [Tab] to enter command. Type 'help' for help.)");
	HX_STACK_LINE(60)
	this->historyMax = (int)25;
	HX_STACK_LINE(59)
	this->historyIndex = (int)0;
	HX_STACK_LINE(57)
	this->autoPause = true;
	HX_STACK_LINE(76)
	super::__construct(Title,Width,Height,Resizable,Bounds,BGColor,TopColor);
	HX_STACK_LINE(78)
	this->cmdFunctions = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(79)
	this->cmdObjects = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(81)
	this->registeredObjects = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(82)
	this->registeredFunctions = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(84)
	this->objectStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(86)
	this->cmdHistory = Array_obj< ::String >::__new();
	HX_STACK_LINE(89)
	if (((::org::flixel::FlxG_obj::_game->_prefsSave->data->__Field(HX_CSTRING("history"),true) != null()))){
		HX_STACK_LINE(90)
		this->cmdHistory = ::org::flixel::FlxG_obj::_game->_prefsSave->data->__Field(HX_CSTRING("history"),true);
		HX_STACK_LINE(91)
		this->historyIndex = this->cmdHistory->length;
	}
	else{
		HX_STACK_LINE(94)
		this->cmdHistory = Array_obj< ::String >::__new();
		HX_STACK_LINE(95)
		::org::flixel::FlxG_obj::_game->_prefsSave->data->__FieldRef(HX_CSTRING("history")) = this->cmdHistory;
	}
	HX_STACK_LINE(99)
	this->_input = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(100)
	this->_input->set_type(::flash::text::TextFieldType_obj::INPUT);
	HX_STACK_LINE(101)
	this->_input->set_defaultTextFormat(::flash::text::TextFormat_obj::__new(::openfl::Assets_obj::getFont(::org::flixel::FlxAssets_obj::debuggerFont)->fontName,(int)14,(int)16777215,false,false,false,null(),null(),null(),null(),null(),null(),null()));
	HX_STACK_LINE(102)
	this->_input->set_text(this->defaultText);
	HX_STACK_LINE(103)
	this->_input->set_width((this->_width - (int)4));
	HX_STACK_LINE(104)
	this->_input->set_height((this->_height - (int)15));
	HX_STACK_LINE(105)
	this->_input->set_x((int)2);
	HX_STACK_LINE(106)
	this->_input->set_y((int)15);
	HX_STACK_LINE(107)
	this->addChild(this->_input);
	HX_STACK_LINE(109)
	this->_input->addEventListener(::flash::events::FocusEvent_obj::FOCUS_IN,this->onFocus_dyn(),null(),null(),null());
	HX_STACK_LINE(110)
	this->_input->addEventListener(::flash::events::FocusEvent_obj::FOCUS_OUT,this->onFocusLost_dyn(),null(),null(),null());
	HX_STACK_LINE(111)
	this->_input->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyPress_dyn(),null(),null(),null());
	HX_STACK_LINE(115)
	::org::flixel::system::debug::ConsoleCommands commands = ::org::flixel::system::debug::ConsoleCommands_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(commands,"commands");
}
;
	return null();
}

Console_obj::~Console_obj() { }

Dynamic Console_obj::__CreateEmpty() { return  new Console_obj; }
hx::ObjectPtr< Console_obj > Console_obj::__new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor)
{  hx::ObjectPtr< Console_obj > result = new Console_obj();
	result->__construct(Title,Width,Height,__o_Resizable,Bounds,__o_BGColor,__o_TopColor);
	return result;}

Dynamic Console_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Console_obj > result = new Console_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void Console_obj::updateSize( ){
{
		HX_STACK_PUSH("Console::updateSize","org/flixel/system/debug/Console.hx",375);
		HX_STACK_THIS(this);
		HX_STACK_LINE(376)
		this->_input->set_width((this->_width - (int)4));
		HX_STACK_LINE(377)
		this->_input->set_height((this->_height - (int)15));
		HX_STACK_LINE(379)
		this->super::updateSize();
	}
return null();
}


Void Console_obj::destroy( ){
{
		HX_STACK_PUSH("Console::destroy","org/flixel/system/debug/Console.hx",351);
		HX_STACK_THIS(this);
		HX_STACK_LINE(352)
		this->_input->removeEventListener(::flash::events::FocusEvent_obj::FOCUS_IN,this->onFocus_dyn(),null());
		HX_STACK_LINE(353)
		this->_input->removeEventListener(::flash::events::FocusEvent_obj::FOCUS_OUT,this->onFocusLost_dyn(),null());
		HX_STACK_LINE(354)
		this->_input->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyPress_dyn(),null());
		HX_STACK_LINE(356)
		if (((this->_input != null()))){
			HX_STACK_LINE(357)
			this->removeChild(this->_input);
		}
		HX_STACK_LINE(358)
		this->_input = null();
		HX_STACK_LINE(360)
		this->cmdFunctions = null();
		HX_STACK_LINE(361)
		this->cmdObjects = null();
		HX_STACK_LINE(363)
		this->registeredObjects = null();
		HX_STACK_LINE(364)
		this->registeredFunctions = null();
		HX_STACK_LINE(366)
		this->objectStack = null();
		HX_STACK_LINE(368)
		this->super::destroy();
	}
return null();
}


Void Console_obj::registerFunction( ::String FunctionAlias,Dynamic Function){
{
		HX_STACK_PUSH("Console::registerFunction","org/flixel/system/debug/Console.hx",343);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FunctionAlias,"FunctionAlias");
		HX_STACK_ARG(Function,"Function");
		HX_STACK_LINE(344)
		Dynamic value = Function;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(344)
		this->registeredFunctions->set(FunctionAlias,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,registerFunction,(void))

Void Console_obj::registerObject( ::String ObjectAlias,Dynamic AnyObject){
{
		HX_STACK_PUSH("Console::registerObject","org/flixel/system/debug/Console.hx",333);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ObjectAlias,"ObjectAlias");
		HX_STACK_ARG(AnyObject,"AnyObject");
		HX_STACK_LINE(334)
		Dynamic value = AnyObject;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(334)
		this->registeredObjects->set(ObjectAlias,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,registerObject,(void))

Void Console_obj::addCommand( ::String Command,Dynamic AnyObject,Dynamic Function,::String __o_Alt){
::String Alt = __o_Alt.Default(HX_CSTRING(""));
	HX_STACK_PUSH("Console::addCommand","org/flixel/system/debug/Console.hx",317);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Command,"Command");
	HX_STACK_ARG(AnyObject,"AnyObject");
	HX_STACK_ARG(Function,"Function");
	HX_STACK_ARG(Alt,"Alt");
{
		HX_STACK_LINE(318)
		{
			HX_STACK_LINE(318)
			Dynamic value = Function;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(318)
			this->cmdFunctions->set(Command,value);
		}
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(319)
			Dynamic value = AnyObject;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(319)
			this->cmdObjects->set(Command,value);
		}
		HX_STACK_LINE(321)
		if (((Alt != HX_CSTRING("")))){
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				Dynamic value = Function;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(322)
				this->cmdFunctions->set(Alt,value);
			}
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				Dynamic value = AnyObject;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(323)
				this->cmdObjects->set(Alt,value);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Console_obj,addCommand,(void))

::String Console_obj::getNextCommand( ){
	HX_STACK_PUSH("Console::getNextCommand","org/flixel/system/debug/Console.hx",299);
	HX_STACK_THIS(this);
	HX_STACK_LINE(300)
	if (((this->historyIndex < this->cmdHistory->length))){
		HX_STACK_LINE(301)
		(this->historyIndex)++;
	}
	HX_STACK_LINE(303)
	if (((this->cmdHistory->__get(this->historyIndex) != null()))){
		HX_STACK_LINE(304)
		return this->cmdHistory->__get(this->historyIndex);
	}
	else{
		HX_STACK_LINE(306)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(303)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,getNextCommand,return )

::String Console_obj::getPreviousCommand( ){
	HX_STACK_PUSH("Console::getPreviousCommand","org/flixel/system/debug/Console.hx",291);
	HX_STACK_THIS(this);
	HX_STACK_LINE(292)
	if (((this->historyIndex > (int)0))){
		HX_STACK_LINE(293)
		(this->historyIndex)--;
	}
	HX_STACK_LINE(295)
	return this->cmdHistory->__get(this->historyIndex);
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,getPreviousCommand,return )

::String Console_obj::filterDigits( ::String str){
	HX_STACK_PUSH("Console::filterDigits","org/flixel/system/debug/Console.hx",281);
	HX_STACK_THIS(this);
	HX_STACK_ARG(str,"str");
	HX_STACK_LINE(282)
	::StringBuf out = ::StringBuf_obj::__new();		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(283)
	{
		HX_STACK_LINE(283)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = str.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(283)
		while(((_g1 < _g))){
			HX_STACK_LINE(283)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(284)
			Dynamic c = str.charCodeAt(i);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(285)
			if (((bool((c >= (int)48)) && bool((c <= (int)57))))){
				HX_STACK_LINE(285)
				int c1 = c;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(285)
				out->b->push(::String::fromCharCode(c1));
			}
		}
	}
	HX_STACK_LINE(287)
	return out->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,filterDigits,return )

Void Console_obj::overrideDefaultSelection( ::flash::events::Event e){
{
		HX_STACK_PUSH("Console::overrideDefaultSelection","org/flixel/system/debug/Console.hx",275);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(276)
		this->_input->setSelection(this->_input->get_text().length,this->_input->get_text().length);
		HX_STACK_LINE(277)
		this->removeEventListener(::flash::events::Event_obj::RENDER,this->overrideDefaultSelection_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,overrideDefaultSelection,(void))

bool Console_obj::callFunction( Dynamic obj,Dynamic func,Dynamic args){
	HX_STACK_PUSH("Console::callFunction","org/flixel/system/debug/Console.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_ARG(func,"func");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(237)
	try{
		HX_STACK_LINE(240)
		::Reflect_obj::callMethod(obj,func,args);
		HX_STACK_LINE(241)
		return true;
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::flash::errors::ArgumentError >() ){
			HX_STACK_BEGIN_CATCH
			::flash::errors::ArgumentError e = __e;{
				HX_STACK_LINE(245)
				if (((e->errorID == (int)1063))){
					HX_STACK_LINE(250)
					int expected = ::Std_obj::parseInt(this->filterDigits(e->message).charAt((int)4));		HX_STACK_VAR(expected,"expected");
					HX_STACK_LINE(253)
					if (((expected < args->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(256)
						Dynamic shortenedArgs = args->__Field(HX_CSTRING("slice"),true)((int)0,expected);		HX_STACK_VAR(shortenedArgs,"shortenedArgs");
						HX_STACK_LINE(258)
						::Reflect_obj::callMethod(obj,func,shortenedArgs);
					}
					else{
						HX_STACK_LINE(263)
						::org::flixel::FlxG_obj::error(((((HX_CSTRING("Console: Invalid number or parameters: ") + expected) + HX_CSTRING(" expected, ")) + args->__Field(HX_CSTRING("length"),true)) + HX_CSTRING(" passed")));
						HX_STACK_LINE(264)
						return false;
					}
					HX_STACK_LINE(267)
					return true;
				}
				HX_STACK_LINE(270)
				return false;
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(237)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(Console_obj,callFunction,return )

Void Console_obj::processCommand( ){
{
		HX_STACK_PUSH("Console::processCommand","org/flixel/system/debug/Console.hx",187);
		HX_STACK_THIS(this);
		HX_STACK_LINE(188)
		Dynamic args = ::StringTools_obj::rtrim(this->_input->get_text()).split(HX_CSTRING(" "));		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(189)
		::String command = args->__Field(HX_CSTRING("shift"),true)();		HX_STACK_VAR(command,"command");
		HX_STACK_LINE(191)
		Dynamic obj = this->cmdObjects->get(command);		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(192)
		Dynamic func = this->cmdFunctions->get(command);		HX_STACK_VAR(func,"func");
		HX_STACK_LINE(195)
		if (((func != null()))){
			HX_STACK_LINE(198)
			if (((this->getPreviousCommand() != this->_input->get_text()))){
				HX_STACK_LINE(201)
				this->cmdHistory->push(this->_input->get_text());
				HX_STACK_LINE(202)
				::org::flixel::FlxG_obj::_game->_prefsSave->flush(null(),null());
				HX_STACK_LINE(205)
				if (((this->cmdHistory->length > this->historyMax))){
					HX_STACK_LINE(206)
					this->cmdHistory->shift();
				}
			}
			HX_STACK_LINE(209)
			this->historyIndex = this->cmdHistory->length;
			HX_STACK_LINE(211)
			if ((::Reflect_obj::isFunction(func))){
				HX_STACK_LINE(214)
				if (((command == HX_CSTRING("log")))){
					HX_STACK_LINE(215)
					args = Dynamic( Array_obj<Dynamic>::__new().Add(args->__Field(HX_CSTRING("join"),true)(HX_CSTRING(" "))));
				}
				else{
					HX_STACK_LINE(218)
					if (((command == HX_CSTRING("call")))){
						HX_STACK_LINE(219)
						hx::IndexRef((args).mPtr,(int)1) = args->__Field(HX_CSTRING("slice"),true)((int)1,args->__Field(HX_CSTRING("length"),true));
					}
					else{
						HX_STACK_LINE(222)
						if (((bool((command == HX_CSTRING("create"))) || bool((command == HX_CSTRING("cr")))))){
							HX_STACK_LINE(223)
							hx::IndexRef((args).mPtr,(int)2) = args->__Field(HX_CSTRING("slice"),true)((int)2,args->__Field(HX_CSTRING("length"),true));
						}
					}
				}
				HX_STACK_LINE(225)
				this->callFunction(obj,func,args);
			}
			HX_STACK_LINE(228)
			this->_input->set_text(HX_CSTRING(""));
		}
		else{
			HX_STACK_LINE(231)
			::org::flixel::FlxG_obj::error(((HX_CSTRING("Console: Invalid command: '") + command) + HX_CSTRING("'")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,processCommand,(void))

Void Console_obj::onKeyPress( ::flash::events::KeyboardEvent e){
{
		HX_STACK_PUSH("Console::onKeyPress","org/flixel/system/debug/Console.hx",151);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(153)
		if (((bool((e->keyCode == ::flash::ui::Keyboard_obj::SPACE)) && bool((this->_input->get_text() == HX_CSTRING(" ")))))){
			HX_STACK_LINE(154)
			this->_input->set_text(HX_CSTRING(""));
		}
		HX_STACK_LINE(157)
		if (((bool((e->keyCode == ::flash::ui::Keyboard_obj::ENTER)) && bool((this->_input->get_text() != HX_CSTRING("")))))){
			HX_STACK_LINE(158)
			this->processCommand();
		}
		else{
			HX_STACK_LINE(161)
			if (((e->keyCode == ::flash::ui::Keyboard_obj::ESCAPE))){
				HX_STACK_LINE(162)
				::org::flixel::FlxG_obj::get_stage()->set_focus(null());
			}
			else{
				HX_STACK_LINE(165)
				if (((e->keyCode == ::flash::ui::Keyboard_obj::DELETE))){
					HX_STACK_LINE(166)
					this->_input->set_text(HX_CSTRING(""));
				}
				else{
					HX_STACK_LINE(169)
					if (((e->keyCode == ::flash::ui::Keyboard_obj::UP))){
						HX_STACK_LINE(170)
						if (((this->cmdHistory->length == (int)0))){
							HX_STACK_LINE(170)
							return null();
						}
						HX_STACK_LINE(172)
						this->_input->set_text(this->getPreviousCommand());
						HX_STACK_LINE(175)
						this->addEventListener(::flash::events::Event_obj::RENDER,this->overrideDefaultSelection_dyn(),false,(int)0,true);
						HX_STACK_LINE(176)
						::org::flixel::FlxG_obj::get_stage()->invalidate();
					}
					else{
						HX_STACK_LINE(179)
						if (((e->keyCode == ::flash::ui::Keyboard_obj::DOWN))){
							HX_STACK_LINE(180)
							if (((this->cmdHistory->length == (int)0))){
								HX_STACK_LINE(180)
								return null();
							}
							HX_STACK_LINE(182)
							this->_input->set_text(this->getNextCommand());
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onKeyPress,(void))

Void Console_obj::onFocusLost( ::flash::events::FocusEvent e){
{
		HX_STACK_PUSH("Console::onFocusLost","org/flixel/system/debug/Console.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(143)
		::org::flixel::FlxG_obj::_game->tempDisableSoundHotKeys = false;
		HX_STACK_LINE(145)
		if (((this->_input->get_text() == HX_CSTRING("")))){
			HX_STACK_LINE(146)
			this->_input->set_text(this->defaultText);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocusLost,(void))

Void Console_obj::onFocus( ::flash::events::FocusEvent e){
{
		HX_STACK_PUSH("Console::onFocus","org/flixel/system/debug/Console.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(128)
		::org::flixel::FlxG_obj::_game->tempDisableSoundHotKeys = true;
		HX_STACK_LINE(130)
		if (((this->_input->get_text() == this->defaultText))){
			HX_STACK_LINE(131)
			this->_input->set_text(HX_CSTRING(""));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocus,(void))


Console_obj::Console_obj()
{
}

void Console_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Console);
	HX_MARK_MEMBER_NAME(defaultText,"defaultText");
	HX_MARK_MEMBER_NAME(historyMax,"historyMax");
	HX_MARK_MEMBER_NAME(historyIndex,"historyIndex");
	HX_MARK_MEMBER_NAME(autoPause,"autoPause");
	HX_MARK_MEMBER_NAME(cmdHistory,"cmdHistory");
	HX_MARK_MEMBER_NAME(objectStack,"objectStack");
	HX_MARK_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_MARK_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_MARK_MEMBER_NAME(cmdObjects,"cmdObjects");
	HX_MARK_MEMBER_NAME(cmdFunctions,"cmdFunctions");
	HX_MARK_MEMBER_NAME(_input,"_input");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Console_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaultText,"defaultText");
	HX_VISIT_MEMBER_NAME(historyMax,"historyMax");
	HX_VISIT_MEMBER_NAME(historyIndex,"historyIndex");
	HX_VISIT_MEMBER_NAME(autoPause,"autoPause");
	HX_VISIT_MEMBER_NAME(cmdHistory,"cmdHistory");
	HX_VISIT_MEMBER_NAME(objectStack,"objectStack");
	HX_VISIT_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_VISIT_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_VISIT_MEMBER_NAME(cmdObjects,"cmdObjects");
	HX_VISIT_MEMBER_NAME(cmdFunctions,"cmdFunctions");
	HX_VISIT_MEMBER_NAME(_input,"_input");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Console_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_input") ) { return _input; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { return autoPause; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		if (HX_FIELD_EQ(inName,"addCommand") ) { return addCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyPress") ) { return onKeyPress_dyn(); }
		if (HX_FIELD_EQ(inName,"historyMax") ) { return historyMax; }
		if (HX_FIELD_EQ(inName,"cmdHistory") ) { return cmdHistory; }
		if (HX_FIELD_EQ(inName,"cmdObjects") ) { return cmdObjects; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"defaultText") ) { return defaultText; }
		if (HX_FIELD_EQ(inName,"objectStack") ) { return objectStack; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"filterDigits") ) { return filterDigits_dyn(); }
		if (HX_FIELD_EQ(inName,"callFunction") ) { return callFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"historyIndex") ) { return historyIndex; }
		if (HX_FIELD_EQ(inName,"cmdFunctions") ) { return cmdFunctions; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerObject") ) { return registerObject_dyn(); }
		if (HX_FIELD_EQ(inName,"getNextCommand") ) { return getNextCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"processCommand") ) { return processCommand_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerFunction") ) { return registerFunction_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { return registeredObjects; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPreviousCommand") ) { return getPreviousCommand_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { return registeredFunctions; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"overrideDefaultSelection") ) { return overrideDefaultSelection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Console_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_input") ) { _input=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { autoPause=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"historyMax") ) { historyMax=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cmdHistory") ) { cmdHistory=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cmdObjects") ) { cmdObjects=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultText") ) { defaultText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objectStack") ) { objectStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"historyIndex") ) { historyIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cmdFunctions") ) { cmdFunctions=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { registeredObjects=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { registeredFunctions=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Console_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("defaultText"));
	outFields->push(HX_CSTRING("historyMax"));
	outFields->push(HX_CSTRING("historyIndex"));
	outFields->push(HX_CSTRING("autoPause"));
	outFields->push(HX_CSTRING("cmdHistory"));
	outFields->push(HX_CSTRING("objectStack"));
	outFields->push(HX_CSTRING("registeredFunctions"));
	outFields->push(HX_CSTRING("registeredObjects"));
	outFields->push(HX_CSTRING("cmdObjects"));
	outFields->push(HX_CSTRING("cmdFunctions"));
	outFields->push(HX_CSTRING("_input"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateSize"),
	HX_CSTRING("destroy"),
	HX_CSTRING("registerFunction"),
	HX_CSTRING("registerObject"),
	HX_CSTRING("addCommand"),
	HX_CSTRING("getNextCommand"),
	HX_CSTRING("getPreviousCommand"),
	HX_CSTRING("filterDigits"),
	HX_CSTRING("overrideDefaultSelection"),
	HX_CSTRING("callFunction"),
	HX_CSTRING("processCommand"),
	HX_CSTRING("onKeyPress"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("defaultText"),
	HX_CSTRING("historyMax"),
	HX_CSTRING("historyIndex"),
	HX_CSTRING("autoPause"),
	HX_CSTRING("cmdHistory"),
	HX_CSTRING("objectStack"),
	HX_CSTRING("registeredFunctions"),
	HX_CSTRING("registeredObjects"),
	HX_CSTRING("cmdObjects"),
	HX_CSTRING("cmdFunctions"),
	HX_CSTRING("_input"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::__mClass,"__mClass");
};

Class Console_obj::__mClass;

void Console_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.debug.Console"), hx::TCanCast< Console_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Console_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug
