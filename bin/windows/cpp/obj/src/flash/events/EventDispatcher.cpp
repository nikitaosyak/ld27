#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_events_ErrorEvent
#include <flash/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_EventPhase
#include <flash/events/EventPhase.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IOErrorEvent
#include <flash/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_flash_events_Listener
#include <flash/events/Listener.h>
#endif
#ifndef INCLUDED_flash_events_TextEvent
#include <flash/events/TextEvent.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_utils_WeakRef
#include <openfl/utils/WeakRef.h>
#endif
namespace flash{
namespace events{

Void EventDispatcher_obj::__construct(::flash::events::IEventDispatcher target)
{
HX_STACK_PUSH("EventDispatcher::new","flash/events/EventDispatcher.hx",16);
{
	HX_STACK_LINE(18)
	this->__target = (  (((target == null()))) ? ::flash::events::IEventDispatcher(hx::ObjectPtr<OBJ_>(this)) : ::flash::events::IEventDispatcher(target) );
	HX_STACK_LINE(19)
	this->__eventMap = null();
}
;
	return null();
}

EventDispatcher_obj::~EventDispatcher_obj() { }

Dynamic EventDispatcher_obj::__CreateEmpty() { return  new EventDispatcher_obj; }
hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__new(::flash::events::IEventDispatcher target)
{  hx::ObjectPtr< EventDispatcher_obj > result = new EventDispatcher_obj();
	result->__construct(target);
	return result;}

Dynamic EventDispatcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventDispatcher_obj > result = new EventDispatcher_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *EventDispatcher_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flash::events::IEventDispatcher_obj)) return operator ::flash::events::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

Void EventDispatcher_obj::__dispatchIOErrorEvent( ){
{
		HX_STACK_PUSH("EventDispatcher::__dispatchIOErrorEvent","flash/events/EventDispatcher.hx",196);
		HX_STACK_THIS(this);
		HX_STACK_LINE(196)
		this->dispatchEvent(::flash::events::IOErrorEvent_obj::__new(::flash::events::IOErrorEvent_obj::IO_ERROR,null(),null(),null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,__dispatchIOErrorEvent,(void))

Void EventDispatcher_obj::__dispatchCompleteEvent( ){
{
		HX_STACK_PUSH("EventDispatcher::__dispatchCompleteEvent","flash/events/EventDispatcher.hx",189);
		HX_STACK_THIS(this);
		HX_STACK_LINE(189)
		this->dispatchEvent(::flash::events::Event_obj::__new(::flash::events::Event_obj::COMPLETE,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,__dispatchCompleteEvent,(void))

bool EventDispatcher_obj::willTrigger( ::String type){
	HX_STACK_PUSH("EventDispatcher::willTrigger","flash/events/EventDispatcher.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(178)
	if (((this->__eventMap == null()))){
		HX_STACK_LINE(178)
		return false;
	}
	HX_STACK_LINE(184)
	return this->__eventMap->exists(type);
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,willTrigger,return )

::String EventDispatcher_obj::toString( ){
	HX_STACK_PUSH("EventDispatcher::toString","flash/events/EventDispatcher.hx",169);
	HX_STACK_THIS(this);
	HX_STACK_LINE(169)
	return ((HX_CSTRING("[object ") + ::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this)))) + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,toString,return )

Void EventDispatcher_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
	HX_STACK_PUSH("EventDispatcher::removeEventListener","flash/events/EventDispatcher.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(listener,"listener");
	HX_STACK_ARG(capture,"capture");
{
		HX_STACK_LINE(141)
		if (((bool((this->__eventMap == null())) || bool(!(this->__eventMap->exists(type)))))){
			HX_STACK_LINE(141)
			return null();
		}
		HX_STACK_LINE(147)
		Array< ::Dynamic > list = this->__eventMap->get(type);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(148)
		::flash::events::Listener item;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(150)
			while(((_g1 < _g))){
				HX_STACK_LINE(150)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(152)
				if (((list->__get(i).StaticCast< ::openfl::utils::WeakRef >() != null()))){
					HX_STACK_LINE(154)
					item = list->__get(i).StaticCast< ::openfl::utils::WeakRef >()->get();
					HX_STACK_LINE(155)
					if (((bool((item != null())) && bool(item->is(listener,capture))))){
						HX_STACK_LINE(157)
						list[i] = null();
						HX_STACK_LINE(158)
						return null();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(EventDispatcher_obj,removeEventListener,(void))

bool EventDispatcher_obj::hasEventListener( ::String type){
	HX_STACK_PUSH("EventDispatcher::hasEventListener","flash/events/EventDispatcher.hx",114);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(116)
	if (((this->__eventMap == null()))){
		HX_STACK_LINE(116)
		return false;
	}
	HX_STACK_LINE(122)
	Array< ::Dynamic > list = this->__eventMap->get(type);		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(124)
	if (((list != null()))){
		HX_STACK_LINE(126)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		while(((_g < list->length))){
			HX_STACK_LINE(126)
			::openfl::utils::WeakRef item = list->__get(_g).StaticCast< ::openfl::utils::WeakRef >();		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(126)
			++(_g);
			HX_STACK_LINE(128)
			if (((item != null()))){
				HX_STACK_LINE(128)
				return true;
			}
		}
	}
	HX_STACK_LINE(134)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,hasEventListener,return )

bool EventDispatcher_obj::dispatchEvent( ::flash::events::Event event){
	HX_STACK_PUSH("EventDispatcher::dispatchEvent","flash/events/EventDispatcher.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_ARG(event,"event");
	HX_STACK_LINE(49)
	if (((this->__eventMap == null()))){
		HX_STACK_LINE(49)
		return false;
	}
	HX_STACK_LINE(55)
	if (((event->get_target() == null()))){
		HX_STACK_LINE(55)
		event->set_target(this->__target);
	}
	HX_STACK_LINE(61)
	if (((event->get_currentTarget() == null()))){
		HX_STACK_LINE(61)
		event->set_currentTarget(this->__target);
	}
	HX_STACK_LINE(67)
	Array< ::Dynamic > list = this->__eventMap->get(event->get_type());		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(68)
	bool capture = (event->get_eventPhase() == ::flash::events::EventPhase_obj::CAPTURING_PHASE);		HX_STACK_VAR(capture,"capture");
	HX_STACK_LINE(70)
	if (((list != null()))){
		HX_STACK_LINE(72)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(74)
		::openfl::utils::WeakRef listItem;		HX_STACK_VAR(listItem,"listItem");
		::flash::events::Listener listener;		HX_STACK_VAR(listener,"listener");
		HX_STACK_LINE(76)
		while(((index < list->length))){
			HX_STACK_LINE(78)
			listItem = list->__get(index).StaticCast< ::openfl::utils::WeakRef >();
			HX_STACK_LINE(79)
			listener = (  (((listItem != null()))) ? ::flash::events::Listener(listItem->get()) : ::flash::events::Listener(null()) );
			HX_STACK_LINE(81)
			if (((listener == null()))){
				HX_STACK_LINE(81)
				list->splice(index,(int)1);
			}
			else{
				HX_STACK_LINE(87)
				if (((listener->useCapture == capture))){
					HX_STACK_LINE(89)
					listener->dispatchEvent(event);
					HX_STACK_LINE(91)
					if ((event->__getIsCancelledNow())){
						HX_STACK_LINE(91)
						return true;
					}
				}
				HX_STACK_LINE(99)
				(index)++;
			}
		}
		HX_STACK_LINE(105)
		return true;
	}
	HX_STACK_LINE(109)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,dispatchEvent,return )

Void EventDispatcher_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_PUSH("EventDispatcher::addEventListener","flash/events/EventDispatcher.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(listener,"listener");
	HX_STACK_ARG(useCapture,"useCapture");
	HX_STACK_ARG(priority,"priority");
	HX_STACK_ARG(useWeakReference,"useWeakReference");
{
		HX_STACK_LINE(26)
		if (((this->__eventMap == null()))){
			HX_STACK_LINE(26)
			this->__eventMap = ::haxe::ds::StringMap_obj::__new();
		}
		HX_STACK_LINE(32)
		Array< ::Dynamic > list = this->__eventMap->get(type);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(34)
		if (((list == null()))){
			HX_STACK_LINE(36)
			list = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(37)
			this->__eventMap->set(type,list);
		}
		HX_STACK_LINE(41)
		list->push(::openfl::utils::WeakRef_obj::__new(::flash::events::Listener_obj::__new(listener,useCapture,priority),useWeakReference));
		HX_STACK_LINE(42)
		list->sort(::flash::events::EventDispatcher_obj::__sortEvents_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(EventDispatcher_obj,addEventListener,(void))

int EventDispatcher_obj::__sortEvents( ::openfl::utils::WeakRef a,::openfl::utils::WeakRef b){
	HX_STACK_PUSH("EventDispatcher::__sortEvents","flash/events/EventDispatcher.hx",203);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(205)
	if (((bool((a == null())) || bool((b == null()))))){
		HX_STACK_LINE(205)
		return (int)0;
	}
	HX_STACK_LINE(211)
	::flash::events::Listener al = a->get();		HX_STACK_VAR(al,"al");
	HX_STACK_LINE(212)
	::flash::events::Listener bl = b->get();		HX_STACK_VAR(bl,"bl");
	HX_STACK_LINE(214)
	if (((bool((al == null())) || bool((bl == null()))))){
		HX_STACK_LINE(214)
		return (int)0;
	}
	HX_STACK_LINE(220)
	if (((al->priority == bl->priority))){
		HX_STACK_LINE(220)
		return (  (((al->id == bl->id))) ? int((int)0) : int((  (((al->id > bl->id))) ? int((int)1) : int((int)-1) )) );
	}
	else{
		HX_STACK_LINE(224)
		return (  (((al->priority < bl->priority))) ? int((int)1) : int((int)-1) );
	}
	HX_STACK_LINE(220)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventDispatcher_obj,__sortEvents,return )


EventDispatcher_obj::EventDispatcher_obj()
{
}

void EventDispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventDispatcher);
	HX_MARK_MEMBER_NAME(__target,"__target");
	HX_MARK_MEMBER_NAME(__eventMap,"__eventMap");
	HX_MARK_END_CLASS();
}

void EventDispatcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__target,"__target");
	HX_VISIT_MEMBER_NAME(__eventMap,"__eventMap");
}

Dynamic EventDispatcher_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"__target") ) { return __target; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { return __eventMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return willTrigger_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__sortEvents") ) { return __sortEvents_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hasEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__dispatchIOErrorEvent") ) { return __dispatchIOErrorEvent_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__dispatchCompleteEvent") ) { return __dispatchCompleteEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EventDispatcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__target") ) { __target=inValue.Cast< ::flash::events::IEventDispatcher >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { __eventMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventDispatcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__target"));
	outFields->push(HX_CSTRING("__eventMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__sortEvents"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__dispatchIOErrorEvent"),
	HX_CSTRING("__dispatchCompleteEvent"),
	HX_CSTRING("willTrigger"),
	HX_CSTRING("toString"),
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("hasEventListener"),
	HX_CSTRING("dispatchEvent"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("__target"),
	HX_CSTRING("__eventMap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

Class EventDispatcher_obj::__mClass;

void EventDispatcher_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.events.EventDispatcher"), hx::TCanCast< EventDispatcher_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EventDispatcher_obj::__boot()
{
}

} // end namespace flash
} // end namespace events
