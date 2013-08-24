#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxDebugger
#include <org/flixel/system/FlxDebugger.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_WatchEntry
#include <org/flixel/system/debug/WatchEntry.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace debug{

Void WatchEntry_obj::__construct(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom)
{
HX_STACK_PUSH("WatchEntry::new","org/flixel/system/debug/WatchEntry.hx",19);
{
	HX_STACK_LINE(56)
	this->quickWatch = false;
	HX_STACK_LINE(71)
	this->editing = false;
	HX_STACK_LINE(73)
	if (((bool((bool((Obj == null())) && bool((Field == null())))) && bool((Custom != null()))))){
		HX_STACK_LINE(74)
		this->quickWatch = true;
	}
	HX_STACK_LINE(76)
	this->custom = Custom;
	HX_STACK_LINE(79)
	if ((!(this->quickWatch))){
		HX_STACK_LINE(81)
		this->object = Obj;
		HX_STACK_LINE(82)
		this->field = Field;
		HX_STACK_LINE(84)
		Array< ::String > tempArr = this->field.split(HX_CSTRING("."));		HX_STACK_VAR(tempArr,"tempArr");
		HX_STACK_LINE(85)
		int l = tempArr->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(86)
		Dynamic tempObj = this->object;		HX_STACK_VAR(tempObj,"tempObj");
		HX_STACK_LINE(87)
		::String tempVarName = HX_CSTRING("");		HX_STACK_VAR(tempVarName,"tempVarName");
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			while(((_g < l))){
				HX_STACK_LINE(88)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(90)
				tempVarName = tempArr->__get(i);
				HX_STACK_LINE(92)
				try{
					HX_STACK_LINE(93)
					if (((tempObj == null()))){
						HX_STACK_LINE(94)
						Dynamic();
					}
					else{
						HX_STACK_LINE(94)
						tempObj->__Field(tempVarName,true);
					}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(98)
							::org::flixel::FlxG_obj::error(((((HX_CSTRING("Watch: ") + ::Std_obj::string(tempObj)) + HX_CSTRING(" does not have a field '")) + tempVarName) + HX_CSTRING("'")));
							HX_STACK_LINE(99)
							tempVarName = null();
							HX_STACK_LINE(100)
							break;
						}
					}
				}
				HX_STACK_LINE(103)
				if (((i < (l - (int)1)))){
					HX_STACK_LINE(104)
					tempObj = (  (((tempObj == null()))) ? Dynamic(null()) : Dynamic(tempObj->__Field(tempVarName,true)) );
				}
			}
		}
		HX_STACK_LINE(109)
		this->object = tempObj;
		HX_STACK_LINE(110)
		this->field = tempVarName;
	}
	HX_STACK_LINE(113)
	::String fontName = ::openfl::Assets_obj::getFont(::org::flixel::FlxAssets_obj::debuggerFont)->fontName;		HX_STACK_VAR(fontName,"fontName");
	HX_STACK_LINE(115)
	int color = (int)16777215;		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(116)
	if ((this->quickWatch)){
		HX_STACK_LINE(117)
		color = (int)32768;
	}
	HX_STACK_LINE(119)
	this->_whiteText = ::flash::text::TextFormat_obj::__new(fontName,(int)12,color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(120)
	this->_blackText = ::flash::text::TextFormat_obj::__new(fontName,(int)12,(int)0,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(122)
	this->nameDisplay = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(123)
	this->nameDisplay->set_y(Y);
	HX_STACK_LINE(124)
	this->nameDisplay->set_multiline(false);
	HX_STACK_LINE(125)
	this->nameDisplay->set_selectable(true);
	HX_STACK_LINE(126)
	this->nameDisplay->set_defaultTextFormat(this->_whiteText);
	HX_STACK_LINE(128)
	this->valueDisplay = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(129)
	this->valueDisplay->set_y(Y);
	HX_STACK_LINE(130)
	this->valueDisplay->set_height((int)20);
	HX_STACK_LINE(131)
	this->valueDisplay->set_multiline(false);
	HX_STACK_LINE(132)
	this->valueDisplay->set_selectable(true);
	HX_STACK_LINE(133)
	this->valueDisplay->doubleClickEnabled = true;
	HX_STACK_LINE(135)
	if ((!(this->quickWatch))){
		HX_STACK_LINE(137)
		this->valueDisplay->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
		HX_STACK_LINE(138)
		this->valueDisplay->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(140)
	this->valueDisplay->set_background(false);
	HX_STACK_LINE(141)
	this->valueDisplay->set_backgroundColor((int)16777215);
	HX_STACK_LINE(142)
	this->valueDisplay->set_defaultTextFormat(this->_whiteText);
	HX_STACK_LINE(144)
	this->updateWidth(NameWidth,ValueWidth);
}
;
	return null();
}

WatchEntry_obj::~WatchEntry_obj() { }

Dynamic WatchEntry_obj::__CreateEmpty() { return  new WatchEntry_obj; }
hx::ObjectPtr< WatchEntry_obj > WatchEntry_obj::__new(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom)
{  hx::ObjectPtr< WatchEntry_obj > result = new WatchEntry_obj();
	result->__construct(Y,NameWidth,ValueWidth,Obj,Field,Custom);
	return result;}

Dynamic WatchEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WatchEntry_obj > result = new WatchEntry_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void WatchEntry_obj::doneEditing( ){
{
		HX_STACK_PUSH("WatchEntry::doneEditing","org/flixel/system/debug/WatchEntry.hx",287);
		HX_STACK_THIS(this);
		HX_STACK_LINE(288)
		this->valueDisplay->set_type(::flash::text::TextFieldType_obj::DYNAMIC);
		HX_STACK_LINE(289)
		this->valueDisplay->setTextFormat(this->_whiteText,null(),null());
		HX_STACK_LINE(290)
		this->valueDisplay->set_defaultTextFormat(this->_whiteText);
		HX_STACK_LINE(291)
		this->valueDisplay->set_background(false);
		HX_STACK_LINE(292)
		this->editing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,doneEditing,(void))

Void WatchEntry_obj::submit( ){
{
		HX_STACK_PUSH("WatchEntry::submit","org/flixel/system/debug/WatchEntry.hx",259);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::org::flixel::system::debug::WatchEntry_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/debug/WatchEntry.hx",260);
				{
					HX_STACK_LINE(260)
					Dynamic o = __this->object;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(260)
					return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(__this->field,true)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(260)
		Dynamic property = _Function_1_1::Block(this);		HX_STACK_VAR(property,"property");
		HX_STACK_LINE(263)
		if ((::Std_obj::is(property,hx::ClassOf< ::org::flixel::util::FlxPoint >()))){
			HX_STACK_LINE(264)
			::String xString = this->valueDisplay->get_text().split(HX_CSTRING(" |"))->__get((int)0);		HX_STACK_VAR(xString,"xString");
			HX_STACK_LINE(265)
			xString = xString.substring((int)3,xString.length);
			HX_STACK_LINE(266)
			Float xValue = ::Std_obj::parseFloat(xString);		HX_STACK_VAR(xValue,"xValue");
			HX_STACK_LINE(268)
			::String yString = this->valueDisplay->get_text().split(HX_CSTRING("| "))->__get((int)1);		HX_STACK_VAR(yString,"yString");
			HX_STACK_LINE(269)
			yString = yString.substring((int)3,yString.length);
			HX_STACK_LINE(270)
			Float yValue = ::Std_obj::parseFloat(yString);		HX_STACK_VAR(yValue,"yValue");
			HX_STACK_LINE(272)
			if ((!(::Math_obj::isNaN(xValue)))){
				HX_STACK_LINE(273)
				if (((property != null()))){
					HX_STACK_LINE(273)
					property->__SetField(HX_CSTRING("x"),xValue,false);
				}
			}
			HX_STACK_LINE(274)
			if ((!(::Math_obj::isNaN(yValue)))){
				HX_STACK_LINE(275)
				if (((property != null()))){
					HX_STACK_LINE(275)
					property->__SetField(HX_CSTRING("y"),yValue,false);
				}
			}
		}
		else{
			HX_STACK_LINE(278)
			Dynamic o = this->object;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(278)
			if (((o != null()))){
				HX_STACK_LINE(278)
				o->__SetField(this->field,this->valueDisplay->get_text(),true);
			}
		}
		HX_STACK_LINE(280)
		this->doneEditing();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,submit,(void))

Void WatchEntry_obj::cancel( ){
{
		HX_STACK_PUSH("WatchEntry::cancel","org/flixel/system/debug/WatchEntry.hx",250);
		HX_STACK_THIS(this);
		HX_STACK_LINE(251)
		this->valueDisplay->set_text(this->oldValue->toString());
		HX_STACK_LINE(252)
		this->doneEditing();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,cancel,(void))

Void WatchEntry_obj::onKeyUp( ::flash::events::KeyboardEvent FlashEvent){
{
		HX_STACK_PUSH("WatchEntry::onKeyUp","org/flixel/system/debug/WatchEntry.hx",232);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(232)
		if (((bool((bool((FlashEvent->keyCode == (int)13)) || bool((FlashEvent->keyCode == (int)9)))) || bool((FlashEvent->keyCode == (int)27))))){
			HX_STACK_LINE(234)
			if (((FlashEvent->keyCode == (int)27))){
				HX_STACK_LINE(236)
				this->cancel();
			}
			else{
				HX_STACK_LINE(240)
				this->submit();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,onKeyUp,(void))

Void WatchEntry_obj::onMouseUp( ::flash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("WatchEntry::onMouseUp","org/flixel/system/debug/WatchEntry.hx",218);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(219)
		this->editing = true;
		struct _Function_1_1{
			inline static Dynamic Block( ::org::flixel::system::debug::WatchEntry_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/debug/WatchEntry.hx",220);
				{
					HX_STACK_LINE(220)
					Dynamic o = __this->object;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(220)
					return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(__this->field,true)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(220)
		this->oldValue = _Function_1_1::Block(this);
		HX_STACK_LINE(221)
		this->valueDisplay->set_type(::flash::text::TextFieldType_obj::INPUT);
		HX_STACK_LINE(222)
		this->valueDisplay->setTextFormat(this->_blackText,null(),null());
		HX_STACK_LINE(223)
		this->valueDisplay->set_background(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,onMouseUp,(void))

bool WatchEntry_obj::updateValue( ){
	HX_STACK_PUSH("WatchEntry::updateValue","org/flixel/system/debug/WatchEntry.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_LINE(200)
	if (((bool(this->editing) || bool(this->quickWatch)))){
		HX_STACK_LINE(201)
		return false;
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::org::flixel::system::debug::WatchEntry_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/system/debug/WatchEntry.hx",203);
			{
				HX_STACK_LINE(203)
				Dynamic o = __this->object;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(203)
				return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(__this->field,true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(203)
	Dynamic property = _Function_1_1::Block(this);		HX_STACK_VAR(property,"property");
	HX_STACK_LINE(205)
	if ((::Std_obj::is(property,hx::ClassOf< ::org::flixel::util::FlxPoint >()))){
		struct _Function_2_1{
			inline static ::String Block( Dynamic &property){
				HX_STACK_PUSH("*::closure","org/flixel/system/debug/WatchEntry.hx",206);
				{
					HX_STACK_LINE(206)
					::org::flixel::util::FlxPoint Point = property;		HX_STACK_VAR(Point,"Point");
					int Precision = ::org::flixel::system::FlxDebugger_obj::pointPrecision;		HX_STACK_VAR(Precision,"Precision");
					HX_STACK_LINE(206)
					::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
					HX_STACK_LINE(206)
					if (((Point != null()))){
						struct _Function_4_1{
							inline static Float Block( ::org::flixel::util::FlxPoint &Point,int &Precision){
								HX_STACK_PUSH("*::closure","org/flixel/system/debug/WatchEntry.hx",206);
								{
									HX_STACK_LINE(206)
									Float num = (Point->x * ::Math_obj::pow((int)10,Precision));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(206)
									return (Float(::Math_obj::round(num)) / Float(::Math_obj::pow((int)10,Precision)));
								}
								return null();
							}
						};
						HX_STACK_LINE(206)
						Float xValue = _Function_4_1::Block(Point,Precision);		HX_STACK_VAR(xValue,"xValue");
						struct _Function_4_2{
							inline static Float Block( ::org::flixel::util::FlxPoint &Point,int &Precision){
								HX_STACK_PUSH("*::closure","org/flixel/system/debug/WatchEntry.hx",206);
								{
									HX_STACK_LINE(206)
									Float num = (Point->y * ::Math_obj::pow((int)10,Precision));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(206)
									return (Float(::Math_obj::round(num)) / Float(::Math_obj::pow((int)10,Precision)));
								}
								return null();
							}
						};
						HX_STACK_LINE(206)
						Float yValue = _Function_4_2::Block(Point,Precision);		HX_STACK_VAR(yValue,"yValue");
						HX_STACK_LINE(206)
						string = (((HX_CSTRING("x: ") + xValue) + HX_CSTRING(" | y: ")) + yValue);
					}
					HX_STACK_LINE(206)
					return string;
				}
				return null();
			}
		};
		HX_STACK_LINE(206)
		this->valueDisplay->set_text(_Function_2_1::Block(property));
	}
	else{
		HX_STACK_LINE(208)
		this->valueDisplay->set_text(::Std_obj::string(property));
	}
	HX_STACK_LINE(210)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,updateValue,return )

Void WatchEntry_obj::updateWidth( Float NameWidth,Float ValueWidth){
{
		HX_STACK_PUSH("WatchEntry::updateWidth","org/flixel/system/debug/WatchEntry.hx",178);
		HX_STACK_THIS(this);
		HX_STACK_ARG(NameWidth,"NameWidth");
		HX_STACK_ARG(ValueWidth,"ValueWidth");
		HX_STACK_LINE(179)
		this->nameDisplay->set_width(NameWidth);
		HX_STACK_LINE(180)
		this->valueDisplay->set_width(ValueWidth);
		HX_STACK_LINE(181)
		if (((this->custom != null()))){
			HX_STACK_LINE(182)
			this->nameDisplay->set_text(this->custom);
		}
		else{
			HX_STACK_LINE(185)
			if (((this->field != null()))){
				HX_STACK_LINE(187)
				this->nameDisplay->set_text(HX_CSTRING(""));
				HX_STACK_LINE(188)
				if (((NameWidth > (int)120))){
					struct _Function_4_1{
						inline static ::String Block( ::org::flixel::system::debug::WatchEntry_obj *__this,Float &NameWidth){
							HX_STACK_PUSH("*::closure","org/flixel/system/debug/WatchEntry.hx",189);
							{
								HX_STACK_LINE(189)
								::String s = ::Type_obj::getClassName(::Type_obj::getClass(__this->object));		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(189)
								if (((s != null()))){
									HX_STACK_LINE(189)
									s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
									HX_STACK_LINE(189)
									if (((NameWidth < (int)240))){
										HX_STACK_LINE(189)
										s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
									}
								}
								HX_STACK_LINE(189)
								return s;
							}
							return null();
						}
					};
					HX_STACK_LINE(189)
					this->nameDisplay->appendText((_Function_4_1::Block(this,NameWidth) + HX_CSTRING(".")));
				}
				HX_STACK_LINE(191)
				this->nameDisplay->appendText(this->field);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WatchEntry_obj,updateWidth,(void))

Void WatchEntry_obj::setY( Float Y){
{
		HX_STACK_PUSH("WatchEntry::setY","org/flixel/system/debug/WatchEntry.hx",169);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(170)
		this->nameDisplay->set_y(Y);
		HX_STACK_LINE(171)
		this->valueDisplay->set_y(Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,setY,(void))

Void WatchEntry_obj::destroy( ){
{
		HX_STACK_PUSH("WatchEntry::destroy","org/flixel/system/debug/WatchEntry.hx",151);
		HX_STACK_THIS(this);
		HX_STACK_LINE(152)
		this->object = null();
		HX_STACK_LINE(153)
		this->oldValue = null();
		HX_STACK_LINE(154)
		this->nameDisplay = null();
		HX_STACK_LINE(155)
		this->field = null();
		HX_STACK_LINE(156)
		this->custom = null();
		HX_STACK_LINE(157)
		if (((this->valueDisplay != null()))){
			HX_STACK_LINE(159)
			this->valueDisplay->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
			HX_STACK_LINE(160)
			this->valueDisplay->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null());
			HX_STACK_LINE(161)
			this->valueDisplay = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,destroy,(void))


WatchEntry_obj::WatchEntry_obj()
{
}

void WatchEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WatchEntry);
	HX_MARK_MEMBER_NAME(quickWatch,"quickWatch");
	HX_MARK_MEMBER_NAME(_blackText,"_blackText");
	HX_MARK_MEMBER_NAME(_whiteText,"_whiteText");
	HX_MARK_MEMBER_NAME(oldValue,"oldValue");
	HX_MARK_MEMBER_NAME(editing,"editing");
	HX_MARK_MEMBER_NAME(valueDisplay,"valueDisplay");
	HX_MARK_MEMBER_NAME(nameDisplay,"nameDisplay");
	HX_MARK_MEMBER_NAME(custom,"custom");
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_END_CLASS();
}

void WatchEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(quickWatch,"quickWatch");
	HX_VISIT_MEMBER_NAME(_blackText,"_blackText");
	HX_VISIT_MEMBER_NAME(_whiteText,"_whiteText");
	HX_VISIT_MEMBER_NAME(oldValue,"oldValue");
	HX_VISIT_MEMBER_NAME(editing,"editing");
	HX_VISIT_MEMBER_NAME(valueDisplay,"valueDisplay");
	HX_VISIT_MEMBER_NAME(nameDisplay,"nameDisplay");
	HX_VISIT_MEMBER_NAME(custom,"custom");
	HX_VISIT_MEMBER_NAME(field,"field");
	HX_VISIT_MEMBER_NAME(object,"object");
}

Dynamic WatchEntry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return field; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"custom") ) { return custom; }
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"editing") ) { return editing; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldValue") ) { return oldValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quickWatch") ) { return quickWatch; }
		if (HX_FIELD_EQ(inName,"_blackText") ) { return _blackText; }
		if (HX_FIELD_EQ(inName,"_whiteText") ) { return _whiteText; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"doneEditing") ) { return doneEditing_dyn(); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return updateValue_dyn(); }
		if (HX_FIELD_EQ(inName,"updateWidth") ) { return updateWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"nameDisplay") ) { return nameDisplay; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"valueDisplay") ) { return valueDisplay; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WatchEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"custom") ) { custom=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"editing") ) { editing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldValue") ) { oldValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quickWatch") ) { quickWatch=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blackText") ) { _blackText=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_whiteText") ) { _whiteText=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameDisplay") ) { nameDisplay=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"valueDisplay") ) { valueDisplay=inValue.Cast< ::flash::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WatchEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("quickWatch"));
	outFields->push(HX_CSTRING("_blackText"));
	outFields->push(HX_CSTRING("_whiteText"));
	outFields->push(HX_CSTRING("oldValue"));
	outFields->push(HX_CSTRING("editing"));
	outFields->push(HX_CSTRING("valueDisplay"));
	outFields->push(HX_CSTRING("nameDisplay"));
	outFields->push(HX_CSTRING("custom"));
	outFields->push(HX_CSTRING("field"));
	outFields->push(HX_CSTRING("object"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("doneEditing"),
	HX_CSTRING("submit"),
	HX_CSTRING("cancel"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("updateValue"),
	HX_CSTRING("updateWidth"),
	HX_CSTRING("setY"),
	HX_CSTRING("destroy"),
	HX_CSTRING("quickWatch"),
	HX_CSTRING("_blackText"),
	HX_CSTRING("_whiteText"),
	HX_CSTRING("oldValue"),
	HX_CSTRING("editing"),
	HX_CSTRING("valueDisplay"),
	HX_CSTRING("nameDisplay"),
	HX_CSTRING("custom"),
	HX_CSTRING("field"),
	HX_CSTRING("object"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
};

Class WatchEntry_obj::__mClass;

void WatchEntry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.debug.WatchEntry"), hx::TCanCast< WatchEntry_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void WatchEntry_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug
