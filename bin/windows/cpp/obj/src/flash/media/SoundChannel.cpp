#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_events_SampleDataEvent
#include <flash/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_flash_media_SoundChannel
#include <flash/media/SoundChannel.h>
#endif
#ifndef INCLUDED_flash_media_SoundTransform
#include <flash/media/SoundTransform.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace flash{
namespace media{

Void SoundChannel_obj::__construct(Dynamic handle,Float startTime,int loops,::flash::media::SoundTransform soundTransform)
{
HX_STACK_PUSH("SoundChannel::new","flash/media/SoundChannel.hx",26);
{
	HX_STACK_LINE(28)
	super::__construct(null());
	HX_STACK_LINE(30)
	if (((soundTransform != null()))){
		HX_STACK_LINE(30)
		this->__transform = soundTransform->clone();
	}
	HX_STACK_LINE(36)
	if (((handle != null()))){
		HX_STACK_LINE(36)
		this->__handle = ::flash::media::SoundChannel_obj::nme_sound_channel_create(handle,startTime,loops,this->__transform);
	}
	HX_STACK_LINE(42)
	if (((this->__handle != null()))){
		HX_STACK_LINE(42)
		::flash::media::SoundChannel_obj::__incompleteList->push(hx::ObjectPtr<OBJ_>(this));
	}
}
;
	return null();
}

SoundChannel_obj::~SoundChannel_obj() { }

Dynamic SoundChannel_obj::__CreateEmpty() { return  new SoundChannel_obj; }
hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__new(Dynamic handle,Float startTime,int loops,::flash::media::SoundTransform soundTransform)
{  hx::ObjectPtr< SoundChannel_obj > result = new SoundChannel_obj();
	result->__construct(handle,startTime,loops,soundTransform);
	return result;}

Dynamic SoundChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundChannel_obj > result = new SoundChannel_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::flash::media::SoundTransform SoundChannel_obj::set_soundTransform( ::flash::media::SoundTransform value){
	HX_STACK_PUSH("SoundChannel::set_soundTransform","flash/media/SoundChannel.hx",171);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(173)
	this->__transform = value->clone();
	HX_STACK_LINE(174)
	::flash::media::SoundChannel_obj::nme_sound_channel_set_transform(this->__handle,this->__transform);
	HX_STACK_LINE(176)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_soundTransform,return )

::flash::media::SoundTransform SoundChannel_obj::get_soundTransform( ){
	HX_STACK_PUSH("SoundChannel::get_soundTransform","flash/media/SoundChannel.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_LINE(160)
	if (((this->__transform == null()))){
		HX_STACK_LINE(160)
		this->__transform = ::flash::media::SoundTransform_obj::__new(null(),null());
	}
	HX_STACK_LINE(166)
	return this->__transform->clone();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_soundTransform,return )

Float SoundChannel_obj::set_position( Float value){
	HX_STACK_PUSH("SoundChannel::set_position","flash/media/SoundChannel.hx",155);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(155)
	return ::flash::media::SoundChannel_obj::nme_sound_channel_set_position(this->__handle,this->get_position());
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_position,return )

Float SoundChannel_obj::get_position( ){
	HX_STACK_PUSH("SoundChannel::get_position","flash/media/SoundChannel.hx",154);
	HX_STACK_THIS(this);
	HX_STACK_LINE(154)
	return ::flash::media::SoundChannel_obj::nme_sound_channel_get_position(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_position,return )

Float SoundChannel_obj::get_rightPeak( ){
	HX_STACK_PUSH("SoundChannel::get_rightPeak","flash/media/SoundChannel.hx",153);
	HX_STACK_THIS(this);
	HX_STACK_LINE(153)
	return ::flash::media::SoundChannel_obj::nme_sound_channel_get_right(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_rightPeak,return )

Float SoundChannel_obj::get_leftPeak( ){
	HX_STACK_PUSH("SoundChannel::get_leftPeak","flash/media/SoundChannel.hx",152);
	HX_STACK_THIS(this);
	HX_STACK_LINE(152)
	return ::flash::media::SoundChannel_obj::nme_sound_channel_get_left(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_leftPeak,return )

bool SoundChannel_obj::__checkComplete( ){
	HX_STACK_PUSH("SoundChannel::__checkComplete","flash/media/SoundChannel.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_LINE(76)
	if (((this->__handle != null()))){
		HX_STACK_LINE(78)
		if (((bool((this->__dataProvider != null())) && bool(::flash::media::SoundChannel_obj::nme_sound_channel_needs_data(this->__handle))))){
			HX_STACK_LINE(80)
			::flash::events::SampleDataEvent request = ::flash::events::SampleDataEvent_obj::__new(::flash::events::SampleDataEvent_obj::SAMPLE_DATA,null(),null());		HX_STACK_VAR(request,"request");
			HX_STACK_LINE(81)
			request->position = ::flash::media::SoundChannel_obj::nme_sound_channel_get_data_position(this->__handle);
			HX_STACK_LINE(82)
			this->__dataProvider->dispatchEvent(request);
			HX_STACK_LINE(84)
			if (((request->data->length > (int)0))){
				HX_STACK_LINE(84)
				::flash::media::SoundChannel_obj::nme_sound_channel_add_data(this->__handle,request->data);
			}
		}
		HX_STACK_LINE(92)
		if ((::flash::media::SoundChannel_obj::nme_sound_channel_is_complete(this->__handle))){
			HX_STACK_LINE(94)
			this->__handle = null();
			HX_STACK_LINE(96)
			if (((this->__dataProvider != null()))){
				HX_STACK_LINE(96)
				(::flash::media::SoundChannel_obj::__dynamicSoundCount)--;
			}
			HX_STACK_LINE(102)
			::flash::events::Event complete = ::flash::events::Event_obj::__new(::flash::events::Event_obj::SOUND_COMPLETE,null(),null());		HX_STACK_VAR(complete,"complete");
			HX_STACK_LINE(103)
			this->dispatchEvent(complete);
			HX_STACK_LINE(104)
			return true;
		}
	}
	HX_STACK_LINE(110)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__checkComplete,return )

Void SoundChannel_obj::stop( ){
{
		HX_STACK_PUSH("SoundChannel::stop","flash/media/SoundChannel.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_LINE(68)
		::flash::media::SoundChannel_obj::nme_sound_channel_stop(this->__handle);
		HX_STACK_LINE(69)
		this->__handle = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,stop,(void))

int SoundChannel_obj::__dynamicSoundCount;

Array< ::Dynamic > SoundChannel_obj::__incompleteList;

::flash::media::SoundChannel SoundChannel_obj::createDynamic( Dynamic handle,::flash::media::SoundTransform soundTransform,::flash::events::EventDispatcher dataProvider){
	HX_STACK_PUSH("SoundChannel::createDynamic","flash/media/SoundChannel.hx",51);
	HX_STACK_ARG(handle,"handle");
	HX_STACK_ARG(soundTransform,"soundTransform");
	HX_STACK_ARG(dataProvider,"dataProvider");
	HX_STACK_LINE(53)
	::flash::media::SoundChannel result = ::flash::media::SoundChannel_obj::__new(null(),(int)0,(int)0,soundTransform);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(55)
	result->__dataProvider = dataProvider;
	HX_STACK_LINE(56)
	result->__handle = handle;
	HX_STACK_LINE(57)
	::flash::media::SoundChannel_obj::__incompleteList->push(result);
	HX_STACK_LINE(59)
	(::flash::media::SoundChannel_obj::__dynamicSoundCount)++;
	HX_STACK_LINE(61)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SoundChannel_obj,createDynamic,return )

bool SoundChannel_obj::__completePending( ){
	HX_STACK_PUSH("SoundChannel::__completePending","flash/media/SoundChannel.hx",115);
	HX_STACK_LINE(115)
	return (::flash::media::SoundChannel_obj::__incompleteList->length > (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__completePending,return )

Void SoundChannel_obj::__pollComplete( ){
{
		HX_STACK_PUSH("SoundChannel::__pollComplete","flash/media/SoundChannel.hx",122);
		HX_STACK_LINE(122)
		if (((::flash::media::SoundChannel_obj::__incompleteList->length > (int)0))){
			HX_STACK_LINE(126)
			Array< ::Dynamic > incomplete = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(incomplete,"incomplete");
			HX_STACK_LINE(128)
			{
				HX_STACK_LINE(128)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = ::flash::media::SoundChannel_obj::__incompleteList;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(128)
				while(((_g < _g1->length))){
					HX_STACK_LINE(128)
					::flash::media::SoundChannel channel = _g1->__get(_g).StaticCast< ::flash::media::SoundChannel >();		HX_STACK_VAR(channel,"channel");
					HX_STACK_LINE(128)
					++(_g);
					HX_STACK_LINE(130)
					if ((!(channel->__checkComplete()))){
						HX_STACK_LINE(130)
						incomplete->push(channel);
					}
				}
			}
			HX_STACK_LINE(138)
			::flash::media::SoundChannel_obj::__incompleteList = incomplete;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__pollComplete,(void))

Dynamic SoundChannel_obj::nme_sound_channel_is_complete;

Dynamic SoundChannel_obj::nme_sound_channel_get_left;

Dynamic SoundChannel_obj::nme_sound_channel_get_right;

Dynamic SoundChannel_obj::nme_sound_channel_get_position;

Dynamic SoundChannel_obj::nme_sound_channel_set_position;

Dynamic SoundChannel_obj::nme_sound_channel_get_data_position;

Dynamic SoundChannel_obj::nme_sound_channel_stop;

Dynamic SoundChannel_obj::nme_sound_channel_create;

Dynamic SoundChannel_obj::nme_sound_channel_set_transform;

Dynamic SoundChannel_obj::nme_sound_channel_needs_data;

Dynamic SoundChannel_obj::nme_sound_channel_add_data;


SoundChannel_obj::SoundChannel_obj()
{
}

void SoundChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundChannel);
	HX_MARK_MEMBER_NAME(__dataProvider,"__dataProvider");
	HX_MARK_MEMBER_NAME(__transform,"__transform");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(rightPeak,"rightPeak");
	HX_MARK_MEMBER_NAME(leftPeak,"leftPeak");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__dataProvider,"__dataProvider");
	HX_VISIT_MEMBER_NAME(__transform,"__transform");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(rightPeak,"rightPeak");
	HX_VISIT_MEMBER_NAME(leftPeak,"leftPeak");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SoundChannel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		if (HX_FIELD_EQ(inName,"leftPeak") ) { return inCallProp ? get_leftPeak() : leftPeak; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { return inCallProp ? get_rightPeak() : rightPeak; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_leftPeak") ) { return get_leftPeak_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createDynamic") ) { return createDynamic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rightPeak") ) { return get_rightPeak_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__pollComplete") ) { return __pollComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"__dataProvider") ) { return __dataProvider; }
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return get_soundTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__checkComplete") ) { return __checkComplete_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__incompleteList") ) { return __incompleteList; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__completePending") ) { return __completePending_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return set_soundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return get_soundTransform_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__dynamicSoundCount") ) { return __dynamicSoundCount; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_stop") ) { return nme_sound_channel_stop; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create") ) { return nme_sound_channel_create; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_left") ) { return nme_sound_channel_get_left; }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_add_data") ) { return nme_sound_channel_add_data; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_right") ) { return nme_sound_channel_get_right; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_needs_data") ) { return nme_sound_channel_needs_data; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_is_complete") ) { return nme_sound_channel_is_complete; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_position") ) { return nme_sound_channel_get_position; }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_set_position") ) { return nme_sound_channel_set_position; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_set_transform") ) { return nme_sound_channel_set_transform; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_data_position") ) { return nme_sound_channel_get_data_position; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"leftPeak") ) { leftPeak=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { rightPeak=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__transform") ) { __transform=inValue.Cast< ::flash::media::SoundTransform >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__dataProvider") ) { __dataProvider=inValue.Cast< ::flash::events::EventDispatcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return set_soundTransform(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__incompleteList") ) { __incompleteList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__dynamicSoundCount") ) { __dynamicSoundCount=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_stop") ) { nme_sound_channel_stop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create") ) { nme_sound_channel_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_left") ) { nme_sound_channel_get_left=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_add_data") ) { nme_sound_channel_add_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_right") ) { nme_sound_channel_get_right=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_needs_data") ) { nme_sound_channel_needs_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_is_complete") ) { nme_sound_channel_is_complete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_position") ) { nme_sound_channel_get_position=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_set_position") ) { nme_sound_channel_set_position=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_set_transform") ) { nme_sound_channel_set_transform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_data_position") ) { nme_sound_channel_get_data_position=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__dataProvider"));
	outFields->push(HX_CSTRING("__transform"));
	outFields->push(HX_CSTRING("__handle"));
	outFields->push(HX_CSTRING("soundTransform"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("rightPeak"));
	outFields->push(HX_CSTRING("leftPeak"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__dynamicSoundCount"),
	HX_CSTRING("__incompleteList"),
	HX_CSTRING("createDynamic"),
	HX_CSTRING("__completePending"),
	HX_CSTRING("__pollComplete"),
	HX_CSTRING("nme_sound_channel_is_complete"),
	HX_CSTRING("nme_sound_channel_get_left"),
	HX_CSTRING("nme_sound_channel_get_right"),
	HX_CSTRING("nme_sound_channel_get_position"),
	HX_CSTRING("nme_sound_channel_set_position"),
	HX_CSTRING("nme_sound_channel_get_data_position"),
	HX_CSTRING("nme_sound_channel_stop"),
	HX_CSTRING("nme_sound_channel_create"),
	HX_CSTRING("nme_sound_channel_set_transform"),
	HX_CSTRING("nme_sound_channel_needs_data"),
	HX_CSTRING("nme_sound_channel_add_data"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_soundTransform"),
	HX_CSTRING("get_soundTransform"),
	HX_CSTRING("set_position"),
	HX_CSTRING("get_position"),
	HX_CSTRING("get_rightPeak"),
	HX_CSTRING("get_leftPeak"),
	HX_CSTRING("__checkComplete"),
	HX_CSTRING("stop"),
	HX_CSTRING("__dataProvider"),
	HX_CSTRING("__transform"),
	HX_CSTRING("__handle"),
	HX_CSTRING("rightPeak"),
	HX_CSTRING("leftPeak"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__dynamicSoundCount,"__dynamicSoundCount");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__incompleteList,"__incompleteList");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_is_complete,"nme_sound_channel_is_complete");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_left,"nme_sound_channel_get_left");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_right,"nme_sound_channel_get_right");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_position,"nme_sound_channel_get_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_set_position,"nme_sound_channel_set_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_data_position,"nme_sound_channel_get_data_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_stop,"nme_sound_channel_stop");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_create,"nme_sound_channel_create");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_set_transform,"nme_sound_channel_set_transform");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_needs_data,"nme_sound_channel_needs_data");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_add_data,"nme_sound_channel_add_data");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__dynamicSoundCount,"__dynamicSoundCount");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__incompleteList,"__incompleteList");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_is_complete,"nme_sound_channel_is_complete");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_left,"nme_sound_channel_get_left");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_right,"nme_sound_channel_get_right");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_position,"nme_sound_channel_get_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_set_position,"nme_sound_channel_set_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_data_position,"nme_sound_channel_get_data_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_stop,"nme_sound_channel_stop");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_create,"nme_sound_channel_create");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_set_transform,"nme_sound_channel_set_transform");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_needs_data,"nme_sound_channel_needs_data");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_add_data,"nme_sound_channel_add_data");
};

Class SoundChannel_obj::__mClass;

void SoundChannel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.media.SoundChannel"), hx::TCanCast< SoundChannel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SoundChannel_obj::__boot()
{
	__dynamicSoundCount= (int)0;
	__incompleteList= Array_obj< ::Dynamic >::__new();
	nme_sound_channel_is_complete= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_channel_is_complete"),(int)1);
	nme_sound_channel_get_left= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_channel_get_left"),(int)1);
	nme_sound_channel_get_right= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_channel_get_right"),(int)1);
	nme_sound_channel_get_position= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_channel_get_position"),(int)1);
	nme_sound_channel_set_position= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_channel_set_position"),(int)2);
	nme_sound_channel_get_data_position= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_channel_get_data_position"),(int)1);
	nme_sound_channel_stop= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_channel_stop"),(int)1);
	nme_sound_channel_create= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_channel_create"),(int)4);
	nme_sound_channel_set_transform= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_channel_set_transform"),(int)2);
	nme_sound_channel_needs_data= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_channel_needs_data"),(int)1);
	nme_sound_channel_add_data= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_channel_add_data"),(int)2);
}

} // end namespace flash
} // end namespace media
