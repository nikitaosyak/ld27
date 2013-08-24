#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxInputStates
#include <org/flixel/system/input/FlxInputStates.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxMapObject
#include <org/flixel/system/input/FlxMapObject.h>
#endif
#ifndef INCLUDED_org_flixel_system_replay_CodeValuePair
#include <org/flixel/system/replay/CodeValuePair.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxArray
#include <org/flixel/util/FlxArray.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

Void FlxInputStates_obj::__construct()
{
HX_STACK_PUSH("FlxInputStates::new","org/flixel/system/input/FlxInputStates.hx",35);
{
	HX_STACK_LINE(36)
	this->_total = (int)256;
	HX_STACK_LINE(38)
	this->_keyLookup = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(39)
	this->_keyBools = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(41)
	this->_keyMap = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(42)
	::org::flixel::util::FlxArray_obj::setLength(this->_keyMap,this->_total);
}
;
	return null();
}

FlxInputStates_obj::~FlxInputStates_obj() { }

Dynamic FlxInputStates_obj::__CreateEmpty() { return  new FlxInputStates_obj; }
hx::ObjectPtr< FlxInputStates_obj > FlxInputStates_obj::__new()
{  hx::ObjectPtr< FlxInputStates_obj > result = new FlxInputStates_obj();
	result->__construct();
	return result;}

Dynamic FlxInputStates_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxInputStates_obj > result = new FlxInputStates_obj();
	result->__construct();
	return result;}

Void FlxInputStates_obj::destroy( ){
{
		HX_STACK_PUSH("FlxInputStates::destroy","org/flixel/system/input/FlxInputStates.hx",240);
		HX_STACK_THIS(this);
		HX_STACK_LINE(241)
		this->_keyMap = null();
		HX_STACK_LINE(242)
		this->_keyBools = null();
		HX_STACK_LINE(243)
		this->_keyLookup = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputStates_obj,destroy,(void))

Void FlxInputStates_obj::addKey( ::String KeyName,int KeyCode){
{
		HX_STACK_PUSH("FlxInputStates::addKey","org/flixel/system/input/FlxInputStates.hx",231);
		HX_STACK_THIS(this);
		HX_STACK_ARG(KeyName,"KeyName");
		HX_STACK_ARG(KeyCode,"KeyCode");
		HX_STACK_LINE(232)
		this->_keyLookup->set(KeyName,KeyCode);
		HX_STACK_LINE(233)
		this->_keyMap[KeyCode] = ::org::flixel::system::input::FlxMapObject_obj::__new(KeyName,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxInputStates_obj,addKey,(void))

Array< ::Dynamic > FlxInputStates_obj::getIsDown( ){
	HX_STACK_PUSH("FlxInputStates::getIsDown","org/flixel/system/input/FlxInputStates.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_LINE(212)
	Array< ::Dynamic > keysdown = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(keysdown,"keysdown");
	HX_STACK_LINE(213)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(214)
	while(((i < this->_total))){
		HX_STACK_LINE(216)
		::org::flixel::system::input::FlxMapObject o = this->_keyMap->__get((i)++).StaticCast< ::org::flixel::system::input::FlxMapObject >();		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(217)
		if (((bool((o != null())) && bool((o->current > (int)0))))){
			HX_STACK_LINE(218)
			keysdown->push(o);
		}
	}
	HX_STACK_LINE(222)
	return keysdown;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputStates_obj,getIsDown,return )

bool FlxInputStates_obj::any( ){
	HX_STACK_PUSH("FlxInputStates::any","org/flixel/system/input/FlxInputStates.hx",193);
	HX_STACK_THIS(this);
	HX_STACK_LINE(194)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(195)
	while(((i < this->_total))){
		HX_STACK_LINE(197)
		::org::flixel::system::input::FlxMapObject o = this->_keyMap->__get((i)++).StaticCast< ::org::flixel::system::input::FlxMapObject >();		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(198)
		if (((bool((o != null())) && bool((o->current > (int)0))))){
			HX_STACK_LINE(199)
			return true;
		}
	}
	HX_STACK_LINE(203)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputStates_obj,any,return )

int FlxInputStates_obj::getKeyCode( ::String KeyName){
	HX_STACK_PUSH("FlxInputStates::getKeyCode","org/flixel/system/input/FlxInputStates.hx",184);
	HX_STACK_THIS(this);
	HX_STACK_ARG(KeyName,"KeyName");
	HX_STACK_LINE(184)
	return this->_keyLookup->get(KeyName);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputStates_obj,getKeyCode,return )

Void FlxInputStates_obj::playback( Array< ::Dynamic > Record){
{
		HX_STACK_PUSH("FlxInputStates::playback","org/flixel/system/input/FlxInputStates.hx",161);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Record,"Record");
		HX_STACK_LINE(162)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(163)
		int l = Record->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(164)
		::org::flixel::system::replay::CodeValuePair o;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(165)
		::org::flixel::system::input::FlxMapObject o2;		HX_STACK_VAR(o2,"o2");
		HX_STACK_LINE(166)
		while(((i < l))){
			HX_STACK_LINE(168)
			o = Record->__get((i)++).StaticCast< ::org::flixel::system::replay::CodeValuePair >();
			HX_STACK_LINE(169)
			o2 = this->_keyMap->__get(o->code).StaticCast< ::org::flixel::system::input::FlxMapObject >();
			HX_STACK_LINE(170)
			o2->current = o->value;
			HX_STACK_LINE(171)
			if (((o->value > (int)0))){
				HX_STACK_LINE(172)
				this->_keyBools->set(o2->name,true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputStates_obj,playback,(void))

Array< ::Dynamic > FlxInputStates_obj::record( ){
	HX_STACK_PUSH("FlxInputStates::record","org/flixel/system/input/FlxInputStates.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_LINE(136)
	Array< ::Dynamic > data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(137)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(138)
	while(((i < this->_total))){
		HX_STACK_LINE(140)
		::org::flixel::system::input::FlxMapObject o = this->_keyMap->__get((i)++).StaticCast< ::org::flixel::system::input::FlxMapObject >();		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(141)
		if (((bool((o == null())) || bool((o->current == (int)0))))){
			HX_STACK_LINE(142)
			continue;
		}
		HX_STACK_LINE(145)
		if (((data == null()))){
			HX_STACK_LINE(146)
			data = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(149)
		data->push(::org::flixel::system::replay::CodeValuePair_obj::__new((i - (int)1),o->current));
	}
	HX_STACK_LINE(151)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputStates_obj,record,return )

bool FlxInputStates_obj::justReleased( ::String Key){
	HX_STACK_PUSH("FlxInputStates::justReleased","org/flixel/system/input/FlxInputStates.hx",116);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Key,"Key");
	HX_STACK_LINE(116)
	if (((this->_keyMap->__get(this->_keyLookup->get(Key)).StaticCast< ::org::flixel::system::input::FlxMapObject >() != null()))){
		HX_STACK_LINE(118)
		return (this->_keyMap->__get(this->_keyLookup->get(Key)).StaticCast< ::org::flixel::system::input::FlxMapObject >()->current == (int)-1);
	}
	else{
		HX_STACK_LINE(123)
		::org::flixel::FlxG_obj::error(((HX_CSTRING("Invalid Key: `") + Key) + HX_CSTRING("`. Note that function and numpad keys can only be used in flash and js.")));
		HX_STACK_LINE(124)
		return false;
	}
	HX_STACK_LINE(116)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputStates_obj,justReleased,return )

bool FlxInputStates_obj::justPressed( ::String Key){
	HX_STACK_PUSH("FlxInputStates::justPressed","org/flixel/system/input/FlxInputStates.hx",98);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Key,"Key");
	HX_STACK_LINE(98)
	if (((this->_keyMap->__get(this->_keyLookup->get(Key)).StaticCast< ::org::flixel::system::input::FlxMapObject >() != null()))){
		HX_STACK_LINE(100)
		return (this->_keyMap->__get(this->_keyLookup->get(Key)).StaticCast< ::org::flixel::system::input::FlxMapObject >()->current == (int)2);
	}
	else{
		HX_STACK_LINE(105)
		::org::flixel::FlxG_obj::error(((HX_CSTRING("Invalid Key: `") + Key) + HX_CSTRING("`. Note that function and numpad keys can only be used in flash and js.")));
		HX_STACK_LINE(106)
		return false;
	}
	HX_STACK_LINE(98)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputStates_obj,justPressed,return )

bool FlxInputStates_obj::pressed( ::String Key){
	HX_STACK_PUSH("FlxInputStates::pressed","org/flixel/system/input/FlxInputStates.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Key,"Key");
	HX_STACK_LINE(83)
	if ((this->_keyBools->exists(Key))){
		HX_STACK_LINE(84)
		return this->_keyBools->get(Key);
	}
	HX_STACK_LINE(88)
	::org::flixel::FlxG_obj::error(((HX_CSTRING("Invalid Key: `") + Key) + HX_CSTRING("`. Note that function and numpad keys can only be used in flash and js.")));
	HX_STACK_LINE(89)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputStates_obj,pressed,return )

Void FlxInputStates_obj::reset( ){
{
		HX_STACK_PUSH("FlxInputStates::reset","org/flixel/system/input/FlxInputStates.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_LINE(66)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_total;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		while(((_g1 < _g))){
			HX_STACK_LINE(66)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(68)
			if (((this->_keyMap->__get(i).StaticCast< ::org::flixel::system::input::FlxMapObject >() == null()))){
				HX_STACK_LINE(68)
				continue;
			}
			HX_STACK_LINE(69)
			::org::flixel::system::input::FlxMapObject o = this->_keyMap->__get(i).StaticCast< ::org::flixel::system::input::FlxMapObject >();		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(70)
			this->_keyBools->set(o->name,false);
			HX_STACK_LINE(71)
			o->current = (int)0;
			HX_STACK_LINE(72)
			o->last = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputStates_obj,reset,(void))

Void FlxInputStates_obj::update( ){
{
		HX_STACK_PUSH("FlxInputStates::update","org/flixel/system/input/FlxInputStates.hx",49);
		HX_STACK_THIS(this);
		HX_STACK_LINE(50)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(51)
		while(((i < this->_total))){
			HX_STACK_LINE(53)
			::org::flixel::system::input::FlxMapObject o = this->_keyMap->__get((i)++).StaticCast< ::org::flixel::system::input::FlxMapObject >();		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(54)
			if (((o == null()))){
				HX_STACK_LINE(54)
				continue;
			}
			HX_STACK_LINE(55)
			if (((bool((o->last == (int)-1)) && bool((o->current == (int)-1))))){
				HX_STACK_LINE(55)
				o->current = (int)0;
			}
			else{
				HX_STACK_LINE(56)
				if (((bool((o->last == (int)2)) && bool((o->current == (int)2))))){
					HX_STACK_LINE(56)
					o->current = (int)1;
				}
			}
			HX_STACK_LINE(57)
			o->last = o->current;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputStates_obj,update,(void))


FlxInputStates_obj::FlxInputStates_obj()
{
}

void FlxInputStates_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxInputStates);
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(_keyMap,"_keyMap");
	HX_MARK_MEMBER_NAME(_keyBools,"_keyBools");
	HX_MARK_MEMBER_NAME(_keyLookup,"_keyLookup");
	HX_MARK_END_CLASS();
}

void FlxInputStates_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(_keyMap,"_keyMap");
	HX_VISIT_MEMBER_NAME(_keyBools,"_keyBools");
	HX_VISIT_MEMBER_NAME(_keyLookup,"_keyLookup");
}

Dynamic FlxInputStates_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"any") ) { return any_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addKey") ) { return addKey_dyn(); }
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyMap") ) { return _keyMap; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getIsDown") ) { return getIsDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyBools") ) { return _keyBools; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getKeyCode") ) { return getKeyCode_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyLookup") ) { return _keyLookup; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxInputStates_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_keyMap") ) { _keyMap=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_keyBools") ) { _keyBools=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_keyLookup") ) { _keyLookup=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxInputStates_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_total"));
	outFields->push(HX_CSTRING("_keyMap"));
	outFields->push(HX_CSTRING("_keyBools"));
	outFields->push(HX_CSTRING("_keyLookup"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("addKey"),
	HX_CSTRING("getIsDown"),
	HX_CSTRING("any"),
	HX_CSTRING("getKeyCode"),
	HX_CSTRING("playback"),
	HX_CSTRING("record"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("_total"),
	HX_CSTRING("_keyMap"),
	HX_CSTRING("_keyBools"),
	HX_CSTRING("_keyLookup"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxInputStates_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxInputStates_obj::__mClass,"__mClass");
};

Class FlxInputStates_obj::__mClass;

void FlxInputStates_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.FlxInputStates"), hx::TCanCast< FlxInputStates_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxInputStates_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
