#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
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
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IOErrorEvent
#include <flash/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_flash_events_SampleDataEvent
#include <flash/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_flash_events_TextEvent
#include <flash/events/TextEvent.h>
#endif
#ifndef INCLUDED_flash_media_ID3Info
#include <flash/media/ID3Info.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_media_SoundChannel
#include <flash/media/SoundChannel.h>
#endif
#ifndef INCLUDED_flash_media_SoundLoaderContext
#include <flash/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_flash_media_SoundTransform
#include <flash/media/SoundTransform.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
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

Void Sound_obj::__construct(::flash::net::URLRequest stream,::flash::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic)
{
HX_STACK_PUSH("Sound::new","flash/media/Sound.hx",31);
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
{
	HX_STACK_LINE(33)
	super::__construct(null());
	HX_STACK_LINE(35)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(36)
	this->bytesTotal = (int)0;
	HX_STACK_LINE(37)
	this->__loading = false;
	HX_STACK_LINE(38)
	this->__dynamicSound = false;
	HX_STACK_LINE(40)
	if (((stream != null()))){
		HX_STACK_LINE(40)
		this->load(stream,context,forcePlayAsMusic);
	}
}
;
	return null();
}

Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::flash::net::URLRequest stream,::flash::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic)
{  hx::ObjectPtr< Sound_obj > result = new Sound_obj();
	result->__construct(stream,context,__o_forcePlayAsMusic);
	return result;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > result = new Sound_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Float Sound_obj::get_length( ){
	HX_STACK_PUSH("Sound::get_length","flash/media/Sound.hx",278);
	HX_STACK_THIS(this);
	HX_STACK_LINE(280)
	if (((bool((this->__handle == null())) || bool(this->__loading)))){
		HX_STACK_LINE(280)
		return (int)0;
	}
	HX_STACK_LINE(286)
	return ::flash::media::Sound_obj::nme_sound_get_length(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_length,return )

bool Sound_obj::get_isBuffering( ){
	HX_STACK_PUSH("Sound::get_isBuffering","flash/media/Sound.hx",270);
	HX_STACK_THIS(this);
	HX_STACK_LINE(272)
	this->__checkLoading();
	HX_STACK_LINE(273)
	return (bool(this->__loading) && bool((this->__handle == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_isBuffering,return )

::flash::media::ID3Info Sound_obj::get_id3( ){
	HX_STACK_PUSH("Sound::get_id3","flash/media/Sound.hx",253);
	HX_STACK_THIS(this);
	HX_STACK_LINE(255)
	this->__checkLoading();
	HX_STACK_LINE(257)
	if (((bool((this->__handle == null())) || bool(this->__loading)))){
		HX_STACK_LINE(257)
		return null();
	}
	HX_STACK_LINE(263)
	::flash::media::ID3Info id3 = ::flash::media::ID3Info_obj::__new();		HX_STACK_VAR(id3,"id3");
	HX_STACK_LINE(264)
	::flash::media::Sound_obj::nme_sound_get_id3(this->__handle,id3);
	HX_STACK_LINE(265)
	return id3;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_id3,return )

Void Sound_obj::__onError( ::String msg){
{
		HX_STACK_PUSH("Sound::__onError","flash/media/Sound.hx",237);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
		HX_STACK_LINE(239)
		this->dispatchEvent(::flash::events::IOErrorEvent_obj::__new(::flash::events::IOErrorEvent_obj::IO_ERROR,true,false,msg,null()));
		HX_STACK_LINE(240)
		this->__handle = null();
		HX_STACK_LINE(241)
		this->__loading = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,__onError,(void))

Void Sound_obj::__checkLoading( ){
{
		HX_STACK_PUSH("Sound::__checkLoading","flash/media/Sound.hx",210);
		HX_STACK_THIS(this);
		HX_STACK_LINE(210)
		if (((bool((bool(!(this->__dynamicSound)) && bool(this->__loading))) && bool((this->__handle != null()))))){
			HX_STACK_LINE(214)
			Dynamic status = ::flash::media::Sound_obj::nme_sound_get_status(this->__handle);		HX_STACK_VAR(status,"status");
			HX_STACK_LINE(216)
			if (((status == null()))){
				HX_STACK_LINE(216)
				hx::Throw (HX_CSTRING("Could not get sound status"));
			}
			HX_STACK_LINE(222)
			this->bytesLoaded = status->__Field(HX_CSTRING("bytesLoaded"),true);
			HX_STACK_LINE(223)
			this->bytesTotal = status->__Field(HX_CSTRING("bytesTotal"),true);
			HX_STACK_LINE(224)
			this->__loading = (this->bytesLoaded < this->bytesTotal);
			HX_STACK_LINE(226)
			if (((status->__Field(HX_CSTRING("error"),true) != null()))){
				HX_STACK_LINE(226)
				hx::Throw (status->__Field(HX_CSTRING("error"),true));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,__checkLoading,(void))

::flash::media::SoundChannel Sound_obj::play( hx::Null< Float >  __o_startTime,hx::Null< int >  __o_loops,::flash::media::SoundTransform soundTransform){
Float startTime = __o_startTime.Default(0);
int loops = __o_loops.Default(0);
	HX_STACK_PUSH("Sound::play","flash/media/Sound.hx",170);
	HX_STACK_THIS(this);
	HX_STACK_ARG(startTime,"startTime");
	HX_STACK_ARG(loops,"loops");
	HX_STACK_ARG(soundTransform,"soundTransform");
{
		HX_STACK_LINE(172)
		this->__checkLoading();
		HX_STACK_LINE(174)
		if ((this->__dynamicSound)){
			HX_STACK_LINE(176)
			::flash::events::SampleDataEvent request = ::flash::events::SampleDataEvent_obj::__new(::flash::events::SampleDataEvent_obj::SAMPLE_DATA,null(),null());		HX_STACK_VAR(request,"request");
			HX_STACK_LINE(177)
			this->dispatchEvent(request);
			HX_STACK_LINE(179)
			if (((request->data->length > (int)0))){
				HX_STACK_LINE(179)
				this->__handle = ::flash::media::Sound_obj::nme_sound_channel_create_dynamic(request->data,soundTransform);
			}
			HX_STACK_LINE(185)
			if (((this->__handle == null()))){
				HX_STACK_LINE(185)
				return null();
			}
			HX_STACK_LINE(191)
			::flash::media::SoundChannel result = ::flash::media::SoundChannel_obj::createDynamic(this->__handle,soundTransform,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(192)
			this->__handle = null();
			HX_STACK_LINE(193)
			return result;
		}
		else{
			HX_STACK_LINE(197)
			if (((bool((this->__handle == null())) || bool(this->__loading)))){
				HX_STACK_LINE(197)
				return null();
			}
			HX_STACK_LINE(203)
			return ::flash::media::SoundChannel_obj::__new(this->__handle,startTime,loops,soundTransform);
		}
		HX_STACK_LINE(174)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,play,return )

Void Sound_obj::loadPCMFromByteArray( ::flash::utils::ByteArray bytes,int samples,::String __o_format,hx::Null< bool >  __o_stereo,hx::Null< Float >  __o_sampleRate){
::String format = __o_format.Default(HX_CSTRING("float"));
bool stereo = __o_stereo.Default(true);
Float sampleRate = __o_sampleRate.Default(44100.0);
	HX_STACK_PUSH("Sound::loadPCMFromByteArray","flash/media/Sound.hx",122);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bytes,"bytes");
	HX_STACK_ARG(samples,"samples");
	HX_STACK_ARG(format,"format");
	HX_STACK_ARG(stereo,"stereo");
	HX_STACK_ARG(sampleRate,"sampleRate");
{
		HX_STACK_LINE(124)
		::flash::utils::ByteArray wav = ::flash::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(wav,"wav");
		HX_STACK_LINE(125)
		wav->set_endian(HX_CSTRING("littleEndian"));
		struct _Function_1_1{
			inline static int Block( ::String &format){
				HX_STACK_PUSH("*::closure","flash/media/Sound.hx",127);
				{
					HX_STACK_LINE(127)
					::String _switch_1 = (format);
					if (  ( _switch_1==HX_CSTRING("float"))){
						HX_STACK_LINE(129)
						return (int)3;
					}
					else if (  ( _switch_1==HX_CSTRING("short"))){
						HX_STACK_LINE(130)
						return (int)1;
					}
					else  {
						HX_STACK_LINE(131)
						return hx::Throw (::flash::errors::Error_obj::__new((HX_CSTRING("Unsupported format ") + format),null()));
					}
;
;
				}
				return null();
			}
		};
		HX_STACK_LINE(127)
		int audioFormat = _Function_1_1::Block(format);		HX_STACK_VAR(audioFormat,"audioFormat");
		HX_STACK_LINE(135)
		int numChannels = (  ((stereo)) ? int((int)2) : int((int)1) );		HX_STACK_VAR(numChannels,"numChannels");
		HX_STACK_LINE(136)
		int sampleRate1 = ::Std_obj::_int(sampleRate);		HX_STACK_VAR(sampleRate1,"sampleRate1");
		struct _Function_1_2{
			inline static int Block( ::String &format){
				HX_STACK_PUSH("*::closure","flash/media/Sound.hx",137);
				{
					HX_STACK_LINE(137)
					::String _switch_2 = (format);
					if (  ( _switch_2==HX_CSTRING("float"))){
						HX_STACK_LINE(139)
						return (int)32;
					}
					else if (  ( _switch_2==HX_CSTRING("short"))){
						HX_STACK_LINE(140)
						return (int)16;
					}
					else  {
						HX_STACK_LINE(141)
						return hx::Throw (::flash::errors::Error_obj::__new((HX_CSTRING("Unsupported format ") + format),null()));
					}
;
;
				}
				return null();
			}
		};
		HX_STACK_LINE(137)
		int bitsPerSample = _Function_1_2::Block(format);		HX_STACK_VAR(bitsPerSample,"bitsPerSample");
		HX_STACK_LINE(145)
		int byteRate = ::Std_obj::_int((Float(((sampleRate1 * numChannels) * bitsPerSample)) / Float((int)8)));		HX_STACK_VAR(byteRate,"byteRate");
		HX_STACK_LINE(146)
		int blockAlign = ::Std_obj::_int((Float((numChannels * bitsPerSample)) / Float((int)8)));		HX_STACK_VAR(blockAlign,"blockAlign");
		HX_STACK_LINE(147)
		int numSamples = ::Std_obj::_int((Float(bytes->length) / Float(blockAlign)));		HX_STACK_VAR(numSamples,"numSamples");
		HX_STACK_LINE(149)
		wav->writeUTFBytes(HX_CSTRING("RIFF"));
		HX_STACK_LINE(150)
		wav->writeInt(((int)36 + bytes->length));
		HX_STACK_LINE(151)
		wav->writeUTFBytes(HX_CSTRING("WAVE"));
		HX_STACK_LINE(152)
		wav->writeUTFBytes(HX_CSTRING("fmt "));
		HX_STACK_LINE(153)
		wav->writeInt((int)16);
		HX_STACK_LINE(154)
		wav->writeShort(audioFormat);
		HX_STACK_LINE(155)
		wav->writeShort(numChannels);
		HX_STACK_LINE(156)
		wav->writeInt(sampleRate1);
		HX_STACK_LINE(157)
		wav->writeInt(byteRate);
		HX_STACK_LINE(158)
		wav->writeShort(blockAlign);
		HX_STACK_LINE(159)
		wav->writeShort(bitsPerSample);
		HX_STACK_LINE(160)
		wav->writeUTFBytes(HX_CSTRING("data"));
		HX_STACK_LINE(161)
		wav->writeInt(bytes->length);
		HX_STACK_LINE(162)
		wav->writeBytes(bytes,(int)0,bytes->length);
		HX_STACK_LINE(164)
		wav->position = (int)0;
		HX_STACK_LINE(165)
		this->loadCompressedDataFromByteArray(wav,wav->length,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Sound_obj,loadPCMFromByteArray,(void))

Void Sound_obj::loadCompressedDataFromByteArray( ::flash::utils::ByteArray bytes,int length,hx::Null< bool >  __o_forcePlayAsMusic){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
	HX_STACK_PUSH("Sound::loadCompressedDataFromByteArray","flash/media/Sound.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bytes,"bytes");
	HX_STACK_ARG(length,"length");
	HX_STACK_ARG(forcePlayAsMusic,"forcePlayAsMusic");
{
		HX_STACK_LINE(108)
		this->bytesLoaded = length;
		HX_STACK_LINE(109)
		this->bytesTotal = length;
		HX_STACK_LINE(111)
		this->__handle = ::flash::media::Sound_obj::nme_sound_from_data(bytes,length,forcePlayAsMusic);
		HX_STACK_LINE(113)
		if (((this->__handle == null()))){
			HX_STACK_LINE(113)
			hx::Throw ((HX_CSTRING("Could not load buffer with length: ") + length));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,loadCompressedDataFromByteArray,(void))

Void Sound_obj::load( ::flash::net::URLRequest stream,::flash::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
	HX_STACK_PUSH("Sound::load","flash/media/Sound.hx",83);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stream,"stream");
	HX_STACK_ARG(context,"context");
	HX_STACK_ARG(forcePlayAsMusic,"forcePlayAsMusic");
{
		HX_STACK_LINE(85)
		this->bytesLoaded = (int)0;
		HX_STACK_LINE(86)
		this->bytesTotal = (int)0;
		HX_STACK_LINE(88)
		this->__handle = ::flash::media::Sound_obj::nme_sound_from_file(stream->url,forcePlayAsMusic);
		HX_STACK_LINE(90)
		if (((this->__handle == null()))){
			HX_STACK_LINE(90)
			hx::Throw ((HX_CSTRING("Could not load:") + stream->url));
		}
		else{
			HX_STACK_LINE(96)
			this->url = stream->url;
			HX_STACK_LINE(97)
			this->__loading = false;
			HX_STACK_LINE(98)
			this->__checkLoading();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,load,(void))

Void Sound_obj::close( ){
{
		HX_STACK_PUSH("Sound::close","flash/media/Sound.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_LINE(71)
		if (((this->__handle != null()))){
			HX_STACK_LINE(71)
			::flash::media::Sound_obj::nme_sound_close(this->__handle);
		}
		HX_STACK_LINE(77)
		this->__handle = (int)0;
		HX_STACK_LINE(78)
		this->__loading = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,close,(void))

Void Sound_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_PUSH("Sound::addEventListener","flash/media/Sound.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(listener,"listener");
	HX_STACK_ARG(useCapture,"useCapture");
	HX_STACK_ARG(priority,"priority");
	HX_STACK_ARG(useWeakReference,"useWeakReference");
{
		HX_STACK_LINE(51)
		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
		HX_STACK_LINE(53)
		if (((type == ::flash::events::SampleDataEvent_obj::SAMPLE_DATA))){
			HX_STACK_LINE(55)
			if (((this->__handle != null()))){
				HX_STACK_LINE(55)
				hx::Throw (HX_CSTRING("Can't use dynamic sound once file loaded"));
			}
			HX_STACK_LINE(61)
			this->__dynamicSound = true;
			HX_STACK_LINE(62)
			this->__loading = false;
		}
	}
return null();
}


Dynamic Sound_obj::nme_sound_from_file;

Dynamic Sound_obj::nme_sound_from_data;

Dynamic Sound_obj::nme_sound_get_id3;

Dynamic Sound_obj::nme_sound_get_length;

Dynamic Sound_obj::nme_sound_close;

Dynamic Sound_obj::nme_sound_get_status;

Dynamic Sound_obj::nme_sound_channel_create_dynamic;


Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(__dynamicSound,"__dynamicSound");
	HX_MARK_MEMBER_NAME(__loading,"__loading");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(isBuffering,"isBuffering");
	HX_MARK_MEMBER_NAME(id3,"id3");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__dynamicSound,"__dynamicSound");
	HX_VISIT_MEMBER_NAME(__loading,"__loading");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(isBuffering,"isBuffering");
	HX_VISIT_MEMBER_NAME(id3,"id3");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Sound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		if (HX_FIELD_EQ(inName,"id3") ) { return inCallProp ? get_id3() : id3; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp ? get_length() : length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_id3") ) { return get_id3_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__onError") ) { return __onError_dyn(); }
		if (HX_FIELD_EQ(inName,"__loading") ) { return __loading; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isBuffering") ) { return inCallProp ? get_isBuffering() : isBuffering; }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__checkLoading") ) { return __checkLoading_dyn(); }
		if (HX_FIELD_EQ(inName,"__dynamicSound") ) { return __dynamicSound; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_sound_close") ) { return nme_sound_close; }
		if (HX_FIELD_EQ(inName,"get_isBuffering") ) { return get_isBuffering_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_sound_get_id3") ) { return nme_sound_get_id3; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_sound_from_file") ) { return nme_sound_from_file; }
		if (HX_FIELD_EQ(inName,"nme_sound_from_data") ) { return nme_sound_from_data; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_sound_get_length") ) { return nme_sound_get_length; }
		if (HX_FIELD_EQ(inName,"nme_sound_get_status") ) { return nme_sound_get_status; }
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return loadPCMFromByteArray_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return loadCompressedDataFromByteArray_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create_dynamic") ) { return nme_sound_channel_create_dynamic; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id3") ) { id3=inValue.Cast< ::flash::media::ID3Info >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__loading") ) { __loading=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isBuffering") ) { isBuffering=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__dynamicSound") ) { __dynamicSound=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_sound_close") ) { nme_sound_close=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_sound_get_id3") ) { nme_sound_get_id3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_sound_from_file") ) { nme_sound_from_file=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_sound_from_data") ) { nme_sound_from_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_sound_get_length") ) { nme_sound_get_length=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_sound_get_status") ) { nme_sound_get_status=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create_dynamic") ) { nme_sound_channel_create_dynamic=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__dynamicSound"));
	outFields->push(HX_CSTRING("__loading"));
	outFields->push(HX_CSTRING("__handle"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("isBuffering"));
	outFields->push(HX_CSTRING("id3"));
	outFields->push(HX_CSTRING("bytesTotal"));
	outFields->push(HX_CSTRING("bytesLoaded"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_sound_from_file"),
	HX_CSTRING("nme_sound_from_data"),
	HX_CSTRING("nme_sound_get_id3"),
	HX_CSTRING("nme_sound_get_length"),
	HX_CSTRING("nme_sound_close"),
	HX_CSTRING("nme_sound_get_status"),
	HX_CSTRING("nme_sound_channel_create_dynamic"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_length"),
	HX_CSTRING("get_isBuffering"),
	HX_CSTRING("get_id3"),
	HX_CSTRING("__onError"),
	HX_CSTRING("__checkLoading"),
	HX_CSTRING("play"),
	HX_CSTRING("loadPCMFromByteArray"),
	HX_CSTRING("loadCompressedDataFromByteArray"),
	HX_CSTRING("load"),
	HX_CSTRING("close"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("__dynamicSound"),
	HX_CSTRING("__loading"),
	HX_CSTRING("__handle"),
	HX_CSTRING("url"),
	HX_CSTRING("length"),
	HX_CSTRING("isBuffering"),
	HX_CSTRING("id3"),
	HX_CSTRING("bytesTotal"),
	HX_CSTRING("bytesLoaded"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_from_file,"nme_sound_from_file");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_from_data,"nme_sound_from_data");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_get_id3,"nme_sound_get_id3");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_get_length,"nme_sound_get_length");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_close,"nme_sound_close");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_get_status,"nme_sound_get_status");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_channel_create_dynamic,"nme_sound_channel_create_dynamic");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_from_file,"nme_sound_from_file");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_from_data,"nme_sound_from_data");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_get_id3,"nme_sound_get_id3");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_get_length,"nme_sound_get_length");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_close,"nme_sound_close");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_get_status,"nme_sound_get_status");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_channel_create_dynamic,"nme_sound_channel_create_dynamic");
};

Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.media.Sound"), hx::TCanCast< Sound_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Sound_obj::__boot()
{
	nme_sound_from_file= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_from_file"),(int)2);
	nme_sound_from_data= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_from_data"),(int)3);
	nme_sound_get_id3= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_get_id3"),(int)2);
	nme_sound_get_length= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_get_length"),(int)1);
	nme_sound_close= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_close"),(int)1);
	nme_sound_get_status= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_get_status"),(int)1);
	nme_sound_channel_create_dynamic= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_sound_channel_create_dynamic"),(int)2);
}

} // end namespace flash
} // end namespace media
