#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_TimerManager
#include <org/flixel/plugin/TimerManager.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxTimer
#include <org/flixel/util/FlxTimer.h>
#endif
namespace org{
namespace flixel{
namespace plugin{

Void TimerManager_obj::__construct()
{
HX_STACK_PUSH("TimerManager::new","org/flixel/plugin/TimerManager.hx",19);
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(22)
	this->_timers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(23)
	this->visible = false;
}
;
	return null();
}

TimerManager_obj::~TimerManager_obj() { }

Dynamic TimerManager_obj::__CreateEmpty() { return  new TimerManager_obj; }
hx::ObjectPtr< TimerManager_obj > TimerManager_obj::__new()
{  hx::ObjectPtr< TimerManager_obj > result = new TimerManager_obj();
	result->__construct();
	return result;}

Dynamic TimerManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimerManager_obj > result = new TimerManager_obj();
	result->__construct();
	return result;}

Void TimerManager_obj::clear( ){
{
		HX_STACK_PUSH("TimerManager::clear","org/flixel/plugin/TimerManager.hx",86);
		HX_STACK_THIS(this);
		HX_STACK_LINE(87)
		if (((this->_timers != null()))){
			HX_STACK_LINE(89)
			int i = (this->_timers->length - (int)1);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(90)
			::org::flixel::util::FlxTimer timer;		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(91)
			while(((i >= (int)0))){
				HX_STACK_LINE(93)
				timer = this->_timers->__get((i)--).StaticCast< ::org::flixel::util::FlxTimer >();
				HX_STACK_LINE(94)
				if (((timer != null()))){
					HX_STACK_LINE(95)
					timer->destroy();
				}
			}
		}
		HX_STACK_LINE(101)
		this->_timers = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TimerManager_obj,clear,(void))

Void TimerManager_obj::remove( ::org::flixel::util::FlxTimer Timer){
{
		HX_STACK_PUSH("TimerManager::remove","org/flixel/plugin/TimerManager.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Timer,"Timer");
		struct _Function_1_1{
			inline static int Block( ::org::flixel::plugin::TimerManager_obj *__this,::org::flixel::util::FlxTimer &Timer){
				HX_STACK_PUSH("*::closure","org/flixel/plugin/TimerManager.hx",73);
				{
					HX_STACK_LINE(73)
					Dynamic array = __this->_timers;		HX_STACK_VAR(array,"array");
					int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
					HX_STACK_LINE(73)
					int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(73)
					int index = (int)-1;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(73)
						while(((_g < len))){
							HX_STACK_LINE(73)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(73)
							if (((array->__GetItem(i) == Timer))){
								HX_STACK_LINE(73)
								index = i;
								HX_STACK_LINE(73)
								break;
							}
						}
					}
					HX_STACK_LINE(73)
					return index;
				}
				return null();
			}
		};
		HX_STACK_LINE(73)
		int index = _Function_1_1::Block(this,Timer);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(74)
		if (((index >= (int)0))){
			HX_STACK_LINE(77)
			this->_timers[index] = this->_timers->__get((this->_timers->length - (int)1)).StaticCast< ::org::flixel::util::FlxTimer >();
			HX_STACK_LINE(78)
			this->_timers->pop().StaticCast< ::org::flixel::util::FlxTimer >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TimerManager_obj,remove,(void))

Void TimerManager_obj::add( ::org::flixel::util::FlxTimer Timer){
{
		HX_STACK_PUSH("TimerManager::add","org/flixel/plugin/TimerManager.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Timer,"Timer");
		HX_STACK_LINE(61)
		this->_timers->push(Timer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TimerManager_obj,add,(void))

Void TimerManager_obj::update( ){
{
		HX_STACK_PUSH("TimerManager::update","org/flixel/plugin/TimerManager.hx",41);
		HX_STACK_THIS(this);
		HX_STACK_LINE(42)
		if ((::org::flixel::FlxG_obj::paused)){
			HX_STACK_LINE(42)
			return null();
		}
		HX_STACK_LINE(43)
		int i = (this->_timers->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(44)
		::org::flixel::util::FlxTimer timer;		HX_STACK_VAR(timer,"timer");
		HX_STACK_LINE(45)
		while(((i >= (int)0))){
			HX_STACK_LINE(47)
			timer = this->_timers->__get((i)--).StaticCast< ::org::flixel::util::FlxTimer >();
			HX_STACK_LINE(48)
			if (((bool((bool((bool((timer != null())) && bool(!(timer->paused)))) && bool(!(timer->finished)))) && bool((timer->time > (int)0))))){
				HX_STACK_LINE(49)
				timer->update();
			}
		}
	}
return null();
}


Void TimerManager_obj::destroy( ){
{
		HX_STACK_PUSH("TimerManager::destroy","org/flixel/plugin/TimerManager.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(31)
		this->clear();
		HX_STACK_LINE(32)
		this->_timers = null();
		HX_STACK_LINE(33)
		this->super::destroy();
	}
return null();
}



TimerManager_obj::TimerManager_obj()
{
}

void TimerManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimerManager);
	HX_MARK_MEMBER_NAME(_timers,"_timers");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TimerManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_timers,"_timers");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TimerManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_timers") ) { return _timers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimerManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { _timers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimerManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_timers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clear"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_timers"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimerManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimerManager_obj::__mClass,"__mClass");
};

Class TimerManager_obj::__mClass;

void TimerManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.plugin.TimerManager"), hx::TCanCast< TimerManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TimerManager_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace plugin
