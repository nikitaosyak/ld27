#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxDebugger
#include <org/flixel/system/FlxDebugger.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Watch
#include <org/flixel/system/debug/Watch.h>
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

Void Watch_obj::__construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor)
{
HX_STACK_PUSH("Watch::new","org/flixel/system/debug/Watch.hx",43);
bool Resizable = __o_Resizable.Default(true);
int BGColor = __o_BGColor.Default(2139062143);
int TopColor = __o_TopColor.Default(2130706432);
{
	HX_STACK_LINE(44)
	super::__construct(Title,Width,Height,Resizable,Bounds,BGColor,TopColor);
	HX_STACK_LINE(46)
	this->_names = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(47)
	this->_names->set_x((int)2);
	HX_STACK_LINE(48)
	this->_names->set_y((int)15);
	HX_STACK_LINE(49)
	this->addChild(this->_names);
	HX_STACK_LINE(51)
	this->_values = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(52)
	this->_values->set_x((int)2);
	HX_STACK_LINE(53)
	this->_values->set_y((int)15);
	HX_STACK_LINE(54)
	this->addChild(this->_values);
	HX_STACK_LINE(56)
	this->_watching = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(57)
	this->_quickWatchList = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(59)
	this->editing = false;
	HX_STACK_LINE(61)
	this->removeAll();
}
;
	return null();
}

Watch_obj::~Watch_obj() { }

Dynamic Watch_obj::__CreateEmpty() { return  new Watch_obj; }
hx::ObjectPtr< Watch_obj > Watch_obj::__new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor)
{  hx::ObjectPtr< Watch_obj > result = new Watch_obj();
	result->__construct(Title,Width,Height,__o_Resizable,Bounds,__o_BGColor,__o_TopColor);
	return result;}

Dynamic Watch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Watch_obj > result = new Watch_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void Watch_obj::updateSize( ){
{
		HX_STACK_PUSH("Watch::updateSize","org/flixel/system/debug/Watch.hx",292);
		HX_STACK_THIS(this);
		HX_STACK_LINE(293)
		if (((::Std_obj::_int(this->_height) < ((this->_watching->length * (int)15) + (int)17)))){
			HX_STACK_LINE(294)
			this->_height = ((this->_watching->length * (int)15) + (int)17);
		}
		HX_STACK_LINE(298)
		this->super::updateSize();
		HX_STACK_LINE(300)
		this->_values->set_x(((Float(this->_width) / Float((int)2)) + (int)2));
		HX_STACK_LINE(302)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(303)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(304)
		while(((i < l))){
			HX_STACK_LINE(305)
			this->_watching->__get((i)++).StaticCast< ::org::flixel::system::debug::WatchEntry >()->updateWidth((Float(this->_width) / Float((int)2)),((Float(this->_width) / Float((int)2)) - (int)10));
		}
	}
return null();
}


Void Watch_obj::submit( ){
{
		HX_STACK_PUSH("Watch::submit","org/flixel/system/debug/Watch.hx",272);
		HX_STACK_THIS(this);
		HX_STACK_LINE(273)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(274)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(275)
		::org::flixel::system::debug::WatchEntry watchEntry;		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(276)
		while(((i < l))){
			HX_STACK_LINE(278)
			watchEntry = this->_watching->__get((i)++).StaticCast< ::org::flixel::system::debug::WatchEntry >();
			HX_STACK_LINE(279)
			if ((watchEntry->editing)){
				HX_STACK_LINE(280)
				watchEntry->submit();
			}
		}
		HX_STACK_LINE(284)
		this->editing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,submit,(void))

Void Watch_obj::update( ){
{
		HX_STACK_PUSH("Watch::update","org/flixel/system/debug/Watch.hx",255);
		HX_STACK_THIS(this);
		HX_STACK_LINE(256)
		this->editing = false;
		HX_STACK_LINE(257)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(258)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(259)
		while(((i < l))){
			HX_STACK_LINE(260)
			if ((!(this->_watching->__get((i)++).StaticCast< ::org::flixel::system::debug::WatchEntry >()->updateValue()))){
				HX_STACK_LINE(262)
				this->editing = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,update,(void))

Void Watch_obj::removeAll( ){
{
		HX_STACK_PUSH("Watch::removeAll","org/flixel/system/debug/Watch.hx",235);
		HX_STACK_THIS(this);
		HX_STACK_LINE(236)
		::org::flixel::system::debug::WatchEntry watchEntry;		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(237)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(238)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(239)
		while(((i < l))){
			HX_STACK_LINE(241)
			watchEntry = this->_watching->pop().StaticCast< ::org::flixel::system::debug::WatchEntry >();
			HX_STACK_LINE(242)
			this->_names->removeChild(watchEntry->nameDisplay);
			HX_STACK_LINE(243)
			this->_values->removeChild(watchEntry->valueDisplay);
			HX_STACK_LINE(244)
			watchEntry->destroy();
			HX_STACK_LINE(245)
			(i)++;
		}
		HX_STACK_LINE(248)
		this->_watching = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,removeAll,(void))

Void Watch_obj::removeEntry( ::org::flixel::system::debug::WatchEntry Entry,int Index){
{
		HX_STACK_PUSH("Watch::removeEntry","org/flixel/system/debug/Watch.hx",212);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Entry,"Entry");
		HX_STACK_ARG(Index,"Index");
		HX_STACK_LINE(214)
		this->_watching[Index] = this->_watching->__get((this->_watching->length - (int)1)).StaticCast< ::org::flixel::system::debug::WatchEntry >();
		HX_STACK_LINE(215)
		this->_watching->pop().StaticCast< ::org::flixel::system::debug::WatchEntry >();
		HX_STACK_LINE(217)
		this->_names->removeChild(Entry->nameDisplay);
		HX_STACK_LINE(218)
		this->_values->removeChild(Entry->valueDisplay);
		HX_STACK_LINE(219)
		Entry->destroy();
		HX_STACK_LINE(222)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(223)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(224)
		while(((i < l))){
			HX_STACK_LINE(226)
			this->_watching->__get(i).StaticCast< ::org::flixel::system::debug::WatchEntry >()->setY((i * (int)15));
			HX_STACK_LINE(227)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,removeEntry,(void))

Void Watch_obj::remove( Dynamic AnyObject,::String VariableName,::String QuickWatchName){
{
		HX_STACK_PUSH("Watch::remove","org/flixel/system/debug/Watch.hx",176);
		HX_STACK_THIS(this);
		HX_STACK_ARG(AnyObject,"AnyObject");
		HX_STACK_ARG(VariableName,"VariableName");
		HX_STACK_ARG(QuickWatchName,"QuickWatchName");
		HX_STACK_LINE(178)
		if (((bool((bool((AnyObject == null())) && bool((VariableName == null())))) && bool((QuickWatchName != null()))))){
			HX_STACK_LINE(180)
			::org::flixel::system::debug::WatchEntry quickWatch = this->_quickWatchList->get(QuickWatchName);		HX_STACK_VAR(quickWatch,"quickWatch");
			HX_STACK_LINE(182)
			if (((quickWatch != null()))){
				struct _Function_3_1{
					inline static int Block( ::org::flixel::system::debug::Watch_obj *__this,::org::flixel::system::debug::WatchEntry &quickWatch){
						HX_STACK_PUSH("*::closure","org/flixel/system/debug/Watch.hx",183);
						{
							HX_STACK_LINE(183)
							Dynamic array = __this->_watching;		HX_STACK_VAR(array,"array");
							int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
							HX_STACK_LINE(183)
							int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(183)
							int index = (int)-1;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(183)
							{
								HX_STACK_LINE(183)
								int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(183)
								while(((_g < len))){
									HX_STACK_LINE(183)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(183)
									if (((array->__GetItem(i) == quickWatch))){
										HX_STACK_LINE(183)
										index = i;
										HX_STACK_LINE(183)
										break;
									}
								}
							}
							HX_STACK_LINE(183)
							return index;
						}
						return null();
					}
				};
				HX_STACK_LINE(183)
				this->removeEntry(quickWatch,_Function_3_1::Block(this,quickWatch));
			}
			HX_STACK_LINE(184)
			this->_quickWatchList->remove(QuickWatchName);
			HX_STACK_LINE(187)
			return null();
		}
		HX_STACK_LINE(191)
		::org::flixel::system::debug::WatchEntry watchEntry;		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(193)
		int i = (this->_watching->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(194)
		while(((i >= (int)0))){
			HX_STACK_LINE(196)
			watchEntry = this->_watching->__get(i).StaticCast< ::org::flixel::system::debug::WatchEntry >();
			HX_STACK_LINE(198)
			if (((bool((watchEntry->object == AnyObject)) && bool(((bool((VariableName == null())) || bool((watchEntry->field == VariableName)))))))){
				HX_STACK_LINE(199)
				this->removeEntry(watchEntry,i);
			}
			HX_STACK_LINE(203)
			(i)--;
		}
		HX_STACK_LINE(205)
		watchEntry = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Watch_obj,remove,(void))

Void Watch_obj::updateQuickWatch( ::String Name,Dynamic NewValue){
{
		HX_STACK_PUSH("Watch::updateQuickWatch","org/flixel/system/debug/Watch.hx",140);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Name,"Name");
		HX_STACK_ARG(NewValue,"NewValue");
		HX_STACK_LINE(140)
		if (((this->_quickWatchList->get(Name) == null()))){
			HX_STACK_LINE(144)
			::org::flixel::system::debug::WatchEntry quickWatch = ::org::flixel::system::debug::WatchEntry_obj::__new((this->_watching->length * (int)15),(Float(this->_width) / Float((int)2)),((Float(this->_width) / Float((int)2)) - (int)10),null(),null(),Name);		HX_STACK_VAR(quickWatch,"quickWatch");
			HX_STACK_LINE(145)
			this->_names->addChild(quickWatch->nameDisplay);
			HX_STACK_LINE(146)
			this->_values->addChild(quickWatch->valueDisplay);
			HX_STACK_LINE(147)
			this->_watching->push(quickWatch);
			HX_STACK_LINE(148)
			this->_quickWatchList->set(Name,quickWatch);
		}
		else{
			HX_STACK_LINE(153)
			::org::flixel::system::debug::WatchEntry quickWatch = this->_quickWatchList->get(Name);		HX_STACK_VAR(quickWatch,"quickWatch");
			HX_STACK_LINE(155)
			if (((quickWatch != null()))){
				HX_STACK_LINE(157)
				::String text = ::Std_obj::string(NewValue);		HX_STACK_VAR(text,"text");
				HX_STACK_LINE(159)
				if ((::Std_obj::is(NewValue,hx::ClassOf< ::haxe::ds::StringMap >()))){
					struct _Function_4_1{
						inline static ::String Block( Dynamic &NewValue){
							HX_STACK_PUSH("*::closure","org/flixel/system/debug/Watch.hx",160);
							{
								HX_STACK_LINE(160)
								::haxe::ds::StringMap AnyMap = NewValue;		HX_STACK_VAR(AnyMap,"AnyMap");
								HX_STACK_LINE(160)
								::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
								HX_STACK_LINE(160)
								for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(AnyMap->keys());  __it->hasNext(); ){
									::String key = __it->next();
									{
										HX_STACK_LINE(160)
										hx::AddEq(string,::Std_obj::string(key));
										HX_STACK_LINE(160)
										hx::AddEq(string,HX_CSTRING(", "));
									}
;
								}
								HX_STACK_LINE(160)
								return string.substring((int)0,(string.length - (int)2));
							}
							return null();
						}
					};
					HX_STACK_LINE(160)
					text = _Function_4_1::Block(NewValue);
				}
				else{
					HX_STACK_LINE(161)
					if ((::Std_obj::is(NewValue,hx::ClassOf< ::org::flixel::util::FlxPoint >()))){
						struct _Function_5_1{
							inline static ::String Block( Dynamic &NewValue){
								HX_STACK_PUSH("*::closure","org/flixel/system/debug/Watch.hx",162);
								{
									HX_STACK_LINE(162)
									::org::flixel::util::FlxPoint Point = NewValue;		HX_STACK_VAR(Point,"Point");
									int Precision = ::org::flixel::system::FlxDebugger_obj::pointPrecision;		HX_STACK_VAR(Precision,"Precision");
									HX_STACK_LINE(162)
									::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
									HX_STACK_LINE(162)
									if (((Point != null()))){
										struct _Function_7_1{
											inline static Float Block( ::org::flixel::util::FlxPoint &Point,int &Precision){
												HX_STACK_PUSH("*::closure","org/flixel/system/debug/Watch.hx",162);
												{
													HX_STACK_LINE(162)
													Float num = (Point->x * ::Math_obj::pow((int)10,Precision));		HX_STACK_VAR(num,"num");
													HX_STACK_LINE(162)
													return (Float(::Math_obj::round(num)) / Float(::Math_obj::pow((int)10,Precision)));
												}
												return null();
											}
										};
										HX_STACK_LINE(162)
										Float xValue = _Function_7_1::Block(Point,Precision);		HX_STACK_VAR(xValue,"xValue");
										struct _Function_7_2{
											inline static Float Block( ::org::flixel::util::FlxPoint &Point,int &Precision){
												HX_STACK_PUSH("*::closure","org/flixel/system/debug/Watch.hx",162);
												{
													HX_STACK_LINE(162)
													Float num = (Point->y * ::Math_obj::pow((int)10,Precision));		HX_STACK_VAR(num,"num");
													HX_STACK_LINE(162)
													return (Float(::Math_obj::round(num)) / Float(::Math_obj::pow((int)10,Precision)));
												}
												return null();
											}
										};
										HX_STACK_LINE(162)
										Float yValue = _Function_7_2::Block(Point,Precision);		HX_STACK_VAR(yValue,"yValue");
										HX_STACK_LINE(162)
										string = (((HX_CSTRING("x: ") + xValue) + HX_CSTRING(" | y: ")) + yValue);
									}
									HX_STACK_LINE(162)
									return string;
								}
								return null();
							}
						};
						HX_STACK_LINE(162)
						text = _Function_5_1::Block(NewValue);
					}
				}
				HX_STACK_LINE(164)
				quickWatch->valueDisplay->set_text(text);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,updateQuickWatch,(void))

Void Watch_obj::add( Dynamic AnyObject,::String VariableName,::String DisplayName){
{
		HX_STACK_PUSH("Watch::add","org/flixel/system/debug/Watch.hx",103);
		HX_STACK_THIS(this);
		HX_STACK_ARG(AnyObject,"AnyObject");
		HX_STACK_ARG(VariableName,"VariableName");
		HX_STACK_ARG(DisplayName,"DisplayName");
		HX_STACK_LINE(105)
		::org::flixel::system::debug::WatchEntry watchEntry;		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(106)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(107)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(108)
		while(((i < l))){
			HX_STACK_LINE(110)
			watchEntry = this->_watching->__get((i)++).StaticCast< ::org::flixel::system::debug::WatchEntry >();
			HX_STACK_LINE(111)
			if (((bool((watchEntry->object == AnyObject)) && bool((watchEntry->field == VariableName))))){
				HX_STACK_LINE(112)
				return null();
			}
		}
		HX_STACK_LINE(118)
		watchEntry = ::org::flixel::system::debug::WatchEntry_obj::__new((this->_watching->length * (int)15),(Float(this->_width) / Float((int)2)),((Float(this->_width) / Float((int)2)) - (int)10),AnyObject,VariableName,DisplayName);
		HX_STACK_LINE(120)
		if (((watchEntry->field == null()))){
			HX_STACK_LINE(122)
			watchEntry->destroy();
			HX_STACK_LINE(123)
			watchEntry = null();
			HX_STACK_LINE(124)
			return null();
		}
		HX_STACK_LINE(127)
		this->_names->addChild(watchEntry->nameDisplay);
		HX_STACK_LINE(128)
		this->_values->addChild(watchEntry->valueDisplay);
		HX_STACK_LINE(129)
		this->_watching->push(watchEntry);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Watch_obj,add,(void))

Void Watch_obj::destroy( ){
{
		HX_STACK_PUSH("Watch::destroy","org/flixel/system/debug/Watch.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_LINE(69)
		if (((this->_names != null()))){
			HX_STACK_LINE(70)
			this->removeChild(this->_names);
		}
		HX_STACK_LINE(73)
		this->_names = null();
		HX_STACK_LINE(74)
		if (((this->_values != null()))){
			HX_STACK_LINE(75)
			this->removeChild(this->_values);
		}
		HX_STACK_LINE(78)
		this->_values = null();
		HX_STACK_LINE(79)
		if (((this->_watching != null()))){
			HX_STACK_LINE(81)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(82)
			int l = this->_watching->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(83)
			while(((i < l))){
				HX_STACK_LINE(84)
				this->_watching->__get((i)++).StaticCast< ::org::flixel::system::debug::WatchEntry >()->destroy();
			}
			HX_STACK_LINE(87)
			this->_watching = null();
		}
		HX_STACK_LINE(89)
		this->_quickWatchList = null();
		HX_STACK_LINE(91)
		this->super::destroy();
	}
return null();
}



Watch_obj::Watch_obj()
{
}

void Watch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Watch);
	HX_MARK_MEMBER_NAME(_quickWatchList,"_quickWatchList");
	HX_MARK_MEMBER_NAME(_watching,"_watching");
	HX_MARK_MEMBER_NAME(_values,"_values");
	HX_MARK_MEMBER_NAME(_names,"_names");
	HX_MARK_MEMBER_NAME(editing,"editing");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Watch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_quickWatchList,"_quickWatchList");
	HX_VISIT_MEMBER_NAME(_watching,"_watching");
	HX_VISIT_MEMBER_NAME(_values,"_values");
	HX_VISIT_MEMBER_NAME(_names,"_names");
	HX_VISIT_MEMBER_NAME(editing,"editing");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Watch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_names") ) { return _names; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_values") ) { return _values; }
		if (HX_FIELD_EQ(inName,"editing") ) { return editing; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"_watching") ) { return _watching; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeEntry") ) { return removeEntry_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_quickWatchList") ) { return _quickWatchList; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateQuickWatch") ) { return updateQuickWatch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Watch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_names") ) { _names=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_values") ) { _values=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"editing") ) { editing=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_watching") ) { _watching=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_quickWatchList") ) { _quickWatchList=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Watch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_quickWatchList"));
	outFields->push(HX_CSTRING("_watching"));
	outFields->push(HX_CSTRING("_values"));
	outFields->push(HX_CSTRING("_names"));
	outFields->push(HX_CSTRING("editing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateSize"),
	HX_CSTRING("submit"),
	HX_CSTRING("update"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("removeEntry"),
	HX_CSTRING("remove"),
	HX_CSTRING("updateQuickWatch"),
	HX_CSTRING("add"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_quickWatchList"),
	HX_CSTRING("_watching"),
	HX_CSTRING("_values"),
	HX_CSTRING("_names"),
	HX_CSTRING("editing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
};

Class Watch_obj::__mClass;

void Watch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.debug.Watch"), hx::TCanCast< Watch_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Watch_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug
