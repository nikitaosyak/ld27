#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
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
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxDebugger
#include <org/flixel/system/FlxDebugger.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Log
#include <org/flixel/system/debug/Log.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_LogStyle
#include <org/flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace debug{

Void Log_obj::__construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor)
{
HX_STACK_PUSH("Log::new","org/flixel/system/debug/Log.hx",42);
bool Resizable = __o_Resizable.Default(true);
int BGColor = __o_BGColor.Default(2139062143);
int TopColor = __o_TopColor.Default(2130706432);
{
	HX_STACK_LINE(43)
	super::__construct(Title,Width,Height,Resizable,Bounds,BGColor,TopColor);
	HX_STACK_LINE(45)
	this->_text = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(46)
	this->_text->set_x((int)2);
	HX_STACK_LINE(47)
	this->_text->set_y((int)15);
	HX_STACK_LINE(48)
	this->_text->set_multiline(true);
	HX_STACK_LINE(49)
	this->_text->set_wordWrap(true);
	HX_STACK_LINE(50)
	this->_text->set_selectable(true);
	HX_STACK_LINE(51)
	this->_text->set_defaultTextFormat(::flash::text::TextFormat_obj::__new(::openfl::Assets_obj::getFont(::org::flixel::FlxAssets_obj::debuggerFont)->fontName,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
	HX_STACK_LINE(52)
	this->addChild(this->_text);
	HX_STACK_LINE(54)
	this->_lines = Array_obj< ::String >::__new();
	HX_STACK_LINE(56)
	::org::flixel::system::debug::Log_obj::STYLE_NORMAL = ::org::flixel::system::debug::LogStyle_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(57)
	::org::flixel::system::debug::Log_obj::STYLE_WARNING = ::org::flixel::system::debug::LogStyle_obj::__new(HX_CSTRING("[WARNING] "),HX_CSTRING("FFFF00"),(int)12,true,false,false,HX_CSTRING("Beep"),null(),null());
	HX_STACK_LINE(58)
	::org::flixel::system::debug::Log_obj::STYLE_ERROR = ::org::flixel::system::debug::LogStyle_obj::__new(HX_CSTRING("[ERROR] "),HX_CSTRING("FF0000"),(int)12,true,false,false,HX_CSTRING("Beep"),true,null());
	HX_STACK_LINE(59)
	::org::flixel::system::debug::Log_obj::STYLE_NOTICE = ::org::flixel::system::debug::LogStyle_obj::__new(HX_CSTRING("[NOTICE] "),HX_CSTRING("008000"),(int)12,true,null(),null(),null(),null(),null());
	HX_STACK_LINE(60)
	::org::flixel::system::debug::Log_obj::STYLE_CONSOLE = ::org::flixel::system::debug::LogStyle_obj::__new(HX_CSTRING("&#62; "),HX_CSTRING("0000ff"),(int)12,true,null(),null(),null(),null(),null());
}
;
	return null();
}

Log_obj::~Log_obj() { }

Dynamic Log_obj::__CreateEmpty() { return  new Log_obj; }
hx::ObjectPtr< Log_obj > Log_obj::__new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor)
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct(Title,Width,Height,__o_Resizable,Bounds,__o_BGColor,__o_TopColor);
	return result;}

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void Log_obj::updateSize( ){
{
		HX_STACK_PUSH("Log::updateSize","org/flixel/system/debug/Log.hx",186);
		HX_STACK_THIS(this);
		HX_STACK_LINE(187)
		this->super::updateSize();
		HX_STACK_LINE(189)
		this->_text->set_width((this->_width - (int)10));
		HX_STACK_LINE(190)
		this->_text->set_height((this->_height - (int)15));
	}
return null();
}


Void Log_obj::clear( ){
{
		HX_STACK_PUSH("Log::clear","org/flixel/system/debug/Log.hx",174);
		HX_STACK_THIS(this);
		HX_STACK_LINE(175)
		this->_text->set_text(HX_CSTRING(""));
		HX_STACK_LINE(176)
		this->_lines->splice((int)0,this->_lines->length);
		HX_STACK_LINE(178)
		this->_text->set_scrollV((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Log_obj,clear,(void))

Void Log_obj::add( Dynamic Data,::org::flixel::system::debug::LogStyle Style){
{
		HX_STACK_PUSH("Log::add","org/flixel/system/debug/Log.hx",88);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Data,"Data");
		HX_STACK_ARG(Style,"Style");
		HX_STACK_LINE(89)
		if (((Data == null()))){
			HX_STACK_LINE(90)
			return null();
		}
		HX_STACK_LINE(92)
		Array< ::String > texts = Array_obj< ::String >::__new();		HX_STACK_VAR(texts,"texts");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = Data->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			while(((_g1 < _g))){
				HX_STACK_LINE(95)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(96)
				if ((::Std_obj::is(Data->__GetItem(i),hx::ClassOf< ::org::flixel::util::FlxPoint >()))){
					struct _Function_4_1{
						inline static ::String Block( Dynamic &Data,int &i){
							HX_STACK_PUSH("*::closure","org/flixel/system/debug/Log.hx",97);
							{
								HX_STACK_LINE(97)
								::org::flixel::util::FlxPoint Point = Data->__GetItem(i);		HX_STACK_VAR(Point,"Point");
								int Precision = ::org::flixel::system::FlxDebugger_obj::pointPrecision;		HX_STACK_VAR(Precision,"Precision");
								HX_STACK_LINE(97)
								::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
								HX_STACK_LINE(97)
								if (((Point != null()))){
									struct _Function_6_1{
										inline static Float Block( ::org::flixel::util::FlxPoint &Point,int &Precision){
											HX_STACK_PUSH("*::closure","org/flixel/system/debug/Log.hx",97);
											{
												HX_STACK_LINE(97)
												Float num = (Point->x * ::Math_obj::pow((int)10,Precision));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(97)
												return (Float(::Math_obj::round(num)) / Float(::Math_obj::pow((int)10,Precision)));
											}
											return null();
										}
									};
									HX_STACK_LINE(97)
									Float xValue = _Function_6_1::Block(Point,Precision);		HX_STACK_VAR(xValue,"xValue");
									struct _Function_6_2{
										inline static Float Block( ::org::flixel::util::FlxPoint &Point,int &Precision){
											HX_STACK_PUSH("*::closure","org/flixel/system/debug/Log.hx",97);
											{
												HX_STACK_LINE(97)
												Float num = (Point->y * ::Math_obj::pow((int)10,Precision));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(97)
												return (Float(::Math_obj::round(num)) / Float(::Math_obj::pow((int)10,Precision)));
											}
											return null();
										}
									};
									HX_STACK_LINE(97)
									Float yValue = _Function_6_2::Block(Point,Precision);		HX_STACK_VAR(yValue,"yValue");
									HX_STACK_LINE(97)
									string = (((HX_CSTRING("x: ") + xValue) + HX_CSTRING(" | y: ")) + yValue);
								}
								HX_STACK_LINE(97)
								return string;
							}
							return null();
						}
					};
					HX_STACK_LINE(97)
					texts[i] = _Function_4_1::Block(Data,i);
				}
				else{
					HX_STACK_LINE(98)
					if ((::Std_obj::is(Data->__GetItem(i),hx::ClassOf< ::haxe::ds::StringMap >()))){
						struct _Function_5_1{
							inline static ::String Block( Dynamic &Data,int &i){
								HX_STACK_PUSH("*::closure","org/flixel/system/debug/Log.hx",99);
								{
									HX_STACK_LINE(99)
									::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
									HX_STACK_LINE(99)
									for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(Data->__GetItem(i)->__Field(HX_CSTRING("keys"),true)());  __it->hasNext(); ){
										::String key = __it->next();
										{
											HX_STACK_LINE(99)
											hx::AddEq(string,::Std_obj::string(key));
											HX_STACK_LINE(99)
											hx::AddEq(string,HX_CSTRING(", "));
										}
;
									}
									HX_STACK_LINE(99)
									return string.substring((int)0,(string.length - (int)2));
								}
								return null();
							}
						};
						HX_STACK_LINE(99)
						texts[i] = _Function_5_1::Block(Data,i);
					}
					else{
						HX_STACK_LINE(101)
						texts[i] = ::Std_obj::string(Data->__GetItem(i));
					}
				}
				HX_STACK_LINE(104)
				texts[i] = ::StringTools_obj::replace(texts->__get(i),HX_CSTRING("<"),HX_CSTRING(""));
				HX_STACK_LINE(105)
				texts[i] = ::StringTools_obj::replace(texts->__get(i),HX_CSTRING(">"),HX_CSTRING(""));
			}
		}
		HX_STACK_LINE(108)
		::String text = texts->join(HX_CSTRING(" "));		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(112)
		::String prefix = ((((HX_CSTRING("<font size='") + Style->size) + HX_CSTRING("' color='#")) + Style->color) + HX_CSTRING("'>"));		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(113)
		::String suffix = HX_CSTRING("</font>");		HX_STACK_VAR(suffix,"suffix");
		HX_STACK_LINE(115)
		if ((Style->bold)){
			HX_STACK_LINE(116)
			prefix = (HX_CSTRING("<b>") + prefix);
			HX_STACK_LINE(117)
			suffix = (suffix + HX_CSTRING("</b>"));
		}
		HX_STACK_LINE(119)
		if ((Style->italic)){
			HX_STACK_LINE(120)
			prefix = (HX_CSTRING("<i>") + prefix);
			HX_STACK_LINE(121)
			suffix = (suffix + HX_CSTRING("</i>"));
		}
		HX_STACK_LINE(123)
		if ((Style->underlined)){
			HX_STACK_LINE(124)
			prefix = (HX_CSTRING("<u>") + prefix);
			HX_STACK_LINE(125)
			suffix = (suffix + HX_CSTRING("</u>"));
		}
		HX_STACK_LINE(129)
		text = (((prefix + Style->prefix) + text) + suffix);
		HX_STACK_LINE(135)
		if (((this->_lines->length <= (int)0))){
			HX_STACK_LINE(136)
			this->_text->set_text(HX_CSTRING(""));
		}
		HX_STACK_LINE(140)
		this->_lines->push(text);
		HX_STACK_LINE(142)
		if (((this->_lines->length > ::org::flixel::system::debug::Log_obj::MAX_LOG_LINES))){
			HX_STACK_LINE(144)
			this->_lines->shift();
			HX_STACK_LINE(145)
			::String newText = HX_CSTRING("");		HX_STACK_VAR(newText,"newText");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_lines->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(146)
				while(((_g1 < _g))){
					HX_STACK_LINE(146)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(148)
					hx::AddEq(newText,(this->_lines->__get(i) + HX_CSTRING("<br>")));
				}
			}
			HX_STACK_LINE(152)
			this->_text->set_htmlText(newText);
		}
		else{
			HX_STACK_LINE(161)
			::flash::text::TextField _g = this->_text;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(161)
			_g->set_htmlText((_g->get_htmlText() + ((text + HX_CSTRING("<br>")))));
		}
		HX_STACK_LINE(169)
		this->_text->set_scrollV(((this->_text->get_maxScrollV() - ::Std_obj::_int((Float(this->_text->get_height()) / Float(this->_text->get_defaultTextFormat()->size)))) + (int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Log_obj,add,(void))

Void Log_obj::destroy( ){
{
		HX_STACK_PUSH("Log::destroy","org/flixel/system/debug/Log.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_LINE(68)
		if (((this->_text != null()))){
			HX_STACK_LINE(69)
			this->removeChild(this->_text);
		}
		HX_STACK_LINE(72)
		this->_text = null();
		HX_STACK_LINE(73)
		this->_lines = null();
		HX_STACK_LINE(74)
		::org::flixel::system::debug::Log_obj::STYLE_NORMAL = null();
		HX_STACK_LINE(75)
		::org::flixel::system::debug::Log_obj::STYLE_WARNING = null();
		HX_STACK_LINE(76)
		::org::flixel::system::debug::Log_obj::STYLE_ERROR = null();
		HX_STACK_LINE(77)
		::org::flixel::system::debug::Log_obj::STYLE_NOTICE = null();
		HX_STACK_LINE(78)
		::org::flixel::system::debug::Log_obj::STYLE_CONSOLE = null();
		HX_STACK_LINE(79)
		this->super::destroy();
	}
return null();
}


int Log_obj::MAX_LOG_LINES;

::org::flixel::system::debug::LogStyle Log_obj::STYLE_NORMAL;

::org::flixel::system::debug::LogStyle Log_obj::STYLE_WARNING;

::org::flixel::system::debug::LogStyle Log_obj::STYLE_ERROR;

::org::flixel::system::debug::LogStyle Log_obj::STYLE_NOTICE;

::org::flixel::system::debug::LogStyle Log_obj::STYLE_CONSOLE;


Log_obj::Log_obj()
{
}

void Log_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Log);
	HX_MARK_MEMBER_NAME(_lines,"_lines");
	HX_MARK_MEMBER_NAME(_text,"_text");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Log_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lines,"_lines");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Log_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { return _lines; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"STYLE_ERROR") ) { return STYLE_ERROR; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"STYLE_NORMAL") ) { return STYLE_NORMAL; }
		if (HX_FIELD_EQ(inName,"STYLE_NOTICE") ) { return STYLE_NOTICE; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MAX_LOG_LINES") ) { return MAX_LOG_LINES; }
		if (HX_FIELD_EQ(inName,"STYLE_WARNING") ) { return STYLE_WARNING; }
		if (HX_FIELD_EQ(inName,"STYLE_CONSOLE") ) { return STYLE_CONSOLE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Log_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { _lines=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"STYLE_ERROR") ) { STYLE_ERROR=inValue.Cast< ::org::flixel::system::debug::LogStyle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"STYLE_NORMAL") ) { STYLE_NORMAL=inValue.Cast< ::org::flixel::system::debug::LogStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STYLE_NOTICE") ) { STYLE_NOTICE=inValue.Cast< ::org::flixel::system::debug::LogStyle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MAX_LOG_LINES") ) { MAX_LOG_LINES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STYLE_WARNING") ) { STYLE_WARNING=inValue.Cast< ::org::flixel::system::debug::LogStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STYLE_CONSOLE") ) { STYLE_CONSOLE=inValue.Cast< ::org::flixel::system::debug::LogStyle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Log_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_lines"));
	outFields->push(HX_CSTRING("_text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MAX_LOG_LINES"),
	HX_CSTRING("STYLE_NORMAL"),
	HX_CSTRING("STYLE_WARNING"),
	HX_CSTRING("STYLE_ERROR"),
	HX_CSTRING("STYLE_NOTICE"),
	HX_CSTRING("STYLE_CONSOLE"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateSize"),
	HX_CSTRING("clear"),
	HX_CSTRING("add"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_lines"),
	HX_CSTRING("_text"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_MARK_MEMBER_NAME(Log_obj::STYLE_NORMAL,"STYLE_NORMAL");
	HX_MARK_MEMBER_NAME(Log_obj::STYLE_WARNING,"STYLE_WARNING");
	HX_MARK_MEMBER_NAME(Log_obj::STYLE_ERROR,"STYLE_ERROR");
	HX_MARK_MEMBER_NAME(Log_obj::STYLE_NOTICE,"STYLE_NOTICE");
	HX_MARK_MEMBER_NAME(Log_obj::STYLE_CONSOLE,"STYLE_CONSOLE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_VISIT_MEMBER_NAME(Log_obj::STYLE_NORMAL,"STYLE_NORMAL");
	HX_VISIT_MEMBER_NAME(Log_obj::STYLE_WARNING,"STYLE_WARNING");
	HX_VISIT_MEMBER_NAME(Log_obj::STYLE_ERROR,"STYLE_ERROR");
	HX_VISIT_MEMBER_NAME(Log_obj::STYLE_NOTICE,"STYLE_NOTICE");
	HX_VISIT_MEMBER_NAME(Log_obj::STYLE_CONSOLE,"STYLE_CONSOLE");
};

Class Log_obj::__mClass;

void Log_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.debug.Log"), hx::TCanCast< Log_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Log_obj::__boot()
{
	MAX_LOG_LINES= (int)200;
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug
