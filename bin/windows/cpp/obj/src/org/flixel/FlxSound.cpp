#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_org_flixel_FadeTween
#include <org/flixel/FadeTween.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSound
#include <org/flixel/FlxSound.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{

Void FlxSound_obj::__construct()
{
HX_STACK_PUSH("FlxSound::new","org/flixel/FlxSound.hx",15);
{
	HX_STACK_LINE(89)
	this->_volumeAdjust = 1.0;
	HX_STACK_LINE(120)
	super::__construct();
	HX_STACK_LINE(121)
	this->reset();
}
;
	return null();
}

FlxSound_obj::~FlxSound_obj() { }

Dynamic FlxSound_obj::__CreateEmpty() { return  new FlxSound_obj; }
hx::ObjectPtr< FlxSound_obj > FlxSound_obj::__new()
{  hx::ObjectPtr< FlxSound_obj > result = new FlxSound_obj();
	result->__construct();
	return result;}

Dynamic FlxSound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSound_obj > result = new FlxSound_obj();
	result->__construct();
	return result;}

Void FlxSound_obj::gotID3( ::flash::events::Event event){
{
		HX_STACK_PUSH("FlxSound::gotID3","org/flixel/FlxSound.hx",590);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(591)
		::org::flixel::FlxG_obj::notice(HX_CSTRING("Got ID3 info."));
		HX_STACK_LINE(592)
		this->name = this->_sound->get_id3()->songName;
		HX_STACK_LINE(593)
		this->artist = this->_sound->get_id3()->artist;
		HX_STACK_LINE(594)
		this->_sound->removeEventListener(::flash::events::Event_obj::ID3,this->gotID3_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,gotID3,(void))

Void FlxSound_obj::cleanup( bool destroySound,hx::Null< bool >  __o_resetPosition,hx::Null< bool >  __o_resetFading){
bool resetPosition = __o_resetPosition.Default(true);
bool resetFading = __o_resetFading.Default(true);
	HX_STACK_PUSH("FlxSound::cleanup","org/flixel/FlxSound.hx",555);
	HX_STACK_THIS(this);
	HX_STACK_ARG(destroySound,"destroySound");
	HX_STACK_ARG(resetPosition,"resetPosition");
	HX_STACK_ARG(resetFading,"resetFading");
{
		HX_STACK_LINE(556)
		if ((destroySound)){
			HX_STACK_LINE(558)
			this->reset();
			HX_STACK_LINE(559)
			return null();
		}
		HX_STACK_LINE(562)
		if (((this->_channel != null()))){
			HX_STACK_LINE(564)
			this->_channel->removeEventListener(::flash::events::Event_obj::SOUND_COMPLETE,this->stopped_dyn(),null());
			HX_STACK_LINE(565)
			this->_channel->stop();
			HX_STACK_LINE(566)
			this->_channel = null();
		}
		HX_STACK_LINE(569)
		this->active = false;
		HX_STACK_LINE(571)
		if ((resetPosition)){
			HX_STACK_LINE(573)
			this->_position = (int)0;
			HX_STACK_LINE(574)
			this->_paused = false;
		}
		HX_STACK_LINE(577)
		if ((resetFading)){
			HX_STACK_LINE(579)
			if (((this->_fade != null()))){
				HX_STACK_LINE(579)
				this->_fade->destroy();
			}
			HX_STACK_LINE(580)
			this->_fade = null();
			HX_STACK_LINE(581)
			this->_onFadeComplete = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,cleanup,(void))

Void FlxSound_obj::stopped( ::flash::events::Event event){
{
		HX_STACK_PUSH("FlxSound::stopped","org/flixel/FlxSound.hx",530);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(531)
		if (((this->onComplete_dyn() != null()))){
			HX_STACK_LINE(532)
			this->onComplete();
		}
		HX_STACK_LINE(536)
		if ((this->_looped)){
			HX_STACK_LINE(538)
			this->cleanup(false,null(),null());
			HX_STACK_LINE(539)
			this->play(null());
		}
		else{
			HX_STACK_LINE(542)
			this->cleanup(this->autoDestroy,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,stopped,(void))

Void FlxSound_obj::startSound( Float Position){
{
		HX_STACK_PUSH("FlxSound::startSound","org/flixel/FlxSound.hx",508);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Position,"Position");
		HX_STACK_LINE(509)
		int numLoops = (  (((bool(this->_looped) && bool((Position == (int)0))))) ? int((int)9999) : int((int)0) );		HX_STACK_VAR(numLoops,"numLoops");
		HX_STACK_LINE(510)
		this->_position = Position;
		HX_STACK_LINE(511)
		this->_paused = false;
		HX_STACK_LINE(512)
		this->_channel = this->_sound->play(this->_position,numLoops,this->_transform);
		HX_STACK_LINE(513)
		if (((this->_channel != null()))){
			HX_STACK_LINE(515)
			this->_channel->addEventListener(::flash::events::Event_obj::SOUND_COMPLETE,this->stopped_dyn(),null(),null(),null());
			HX_STACK_LINE(516)
			this->active = true;
		}
		else{
			HX_STACK_LINE(520)
			this->exists = false;
			HX_STACK_LINE(521)
			this->active = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,startSound,(void))

Void FlxSound_obj::updateTransform( ){
{
		HX_STACK_PUSH("FlxSound::updateTransform","org/flixel/FlxSound.hx",496);
		HX_STACK_THIS(this);
		HX_STACK_LINE(497)
		this->_transform->volume = (((((  ((::org::flixel::FlxG_obj::mute)) ? int((int)0) : int((int)1) )) * ::org::flixel::FlxG_obj::volume) * this->_volume) * this->_volumeAdjust);
		HX_STACK_LINE(498)
		if (((this->_channel != null()))){
			HX_STACK_LINE(499)
			this->_channel->set_soundTransform(this->_transform);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,updateTransform,(void))

Float FlxSound_obj::getActualVolume( ){
	HX_STACK_PUSH("FlxSound::getActualVolume","org/flixel/FlxSound.hx",488);
	HX_STACK_THIS(this);
	HX_STACK_LINE(488)
	return (this->_volume * this->_volumeAdjust);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,getActualVolume,return )

Float FlxSound_obj::set_volume( Float Volume){
	HX_STACK_PUSH("FlxSound::set_volume","org/flixel/FlxSound.hx",469);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Volume,"Volume");
	HX_STACK_LINE(470)
	this->_volume = Volume;
	HX_STACK_LINE(471)
	if (((this->_volume < (int)0))){
		HX_STACK_LINE(472)
		this->_volume = (int)0;
	}
	else{
		HX_STACK_LINE(475)
		if (((this->_volume > (int)1))){
			HX_STACK_LINE(476)
			this->_volume = (int)1;
		}
	}
	HX_STACK_LINE(479)
	this->updateTransform();
	HX_STACK_LINE(480)
	return Volume;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_volume,return )

Float FlxSound_obj::get_volume( ){
	HX_STACK_PUSH("FlxSound::get_volume","org/flixel/FlxSound.hx",462);
	HX_STACK_THIS(this);
	HX_STACK_LINE(462)
	return this->_volume;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_volume,return )

bool FlxSound_obj::get_playing( ){
	HX_STACK_PUSH("FlxSound::get_playing","org/flixel/FlxSound.hx",452);
	HX_STACK_THIS(this);
	HX_STACK_LINE(452)
	return (this->_channel != null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_playing,return )

Void FlxSound_obj::fadeIn( Float Seconds){
{
		HX_STACK_PUSH("FlxSound::fadeIn","org/flixel/FlxSound.hx",433);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Seconds,"Seconds");
		HX_STACK_LINE(434)
		if (((bool(this->get_playing()) && bool((this->_fade == null()))))){
			HX_STACK_LINE(435)
			return null();
		}
		HX_STACK_LINE(439)
		Float fadeStartVolume = (  (((this->_fade != null()))) ? Float(this->_fade->get_value()) : Float((int)0) );		HX_STACK_VAR(fadeStartVolume,"fadeStartVolume");
		HX_STACK_LINE(440)
		this->_fade = ::org::flixel::FadeTween_obj::__new(fadeStartVolume,(int)1,Seconds,null());
		HX_STACK_LINE(441)
		this->_onFadeComplete = null();
		HX_STACK_LINE(443)
		this->play(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,fadeIn,(void))

Void FlxSound_obj::fadeOut( Float Seconds,hx::Null< bool >  __o_PauseInstead){
bool PauseInstead = __o_PauseInstead.Default(false);
	HX_STACK_PUSH("FlxSound::fadeOut","org/flixel/FlxSound.hx",416);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Seconds,"Seconds");
	HX_STACK_ARG(PauseInstead,"PauseInstead");
{
		HX_STACK_LINE(417)
		if ((!(this->get_playing()))){
			HX_STACK_LINE(418)
			return null();
		}
		HX_STACK_LINE(422)
		Float fadeStartVolume = (  (((this->_fade != null()))) ? Float(this->_fade->get_value()) : Float((int)1) );		HX_STACK_VAR(fadeStartVolume,"fadeStartVolume");
		HX_STACK_LINE(423)
		this->_fade = ::org::flixel::FadeTween_obj::__new(fadeStartVolume,(int)0,Seconds,null());
		HX_STACK_LINE(424)
		this->_onFadeComplete = (  ((PauseInstead)) ? Dynamic(this->pause_dyn()) : Dynamic(this->stop_dyn()) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSound_obj,fadeOut,(void))

Void FlxSound_obj::stop( ){
{
		HX_STACK_PUSH("FlxSound::stop","org/flixel/FlxSound.hx",406);
		HX_STACK_THIS(this);
		HX_STACK_LINE(406)
		this->cleanup(this->autoDestroy,true,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,stop,(void))

Void FlxSound_obj::pause( ){
{
		HX_STACK_PUSH("FlxSound::pause","org/flixel/FlxSound.hx",392);
		HX_STACK_THIS(this);
		HX_STACK_LINE(393)
		if ((!(this->get_playing()))){
			HX_STACK_LINE(394)
			return null();
		}
		HX_STACK_LINE(397)
		this->_position = this->_channel->get_position();
		HX_STACK_LINE(398)
		this->_paused = true;
		HX_STACK_LINE(399)
		this->cleanup(false,false,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,pause,(void))

Void FlxSound_obj::resume( ){
{
		HX_STACK_PUSH("FlxSound::resume","org/flixel/FlxSound.hx",381);
		HX_STACK_THIS(this);
		HX_STACK_LINE(381)
		if ((this->_paused)){
			HX_STACK_LINE(383)
			this->startSound(this->_position);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,resume,(void))

Void FlxSound_obj::play( hx::Null< bool >  __o_ForceRestart){
bool ForceRestart = __o_ForceRestart.Default(false);
	HX_STACK_PUSH("FlxSound::play","org/flixel/FlxSound.hx",352);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ForceRestart,"ForceRestart");
{
		HX_STACK_LINE(353)
		if ((!(this->exists))){
			HX_STACK_LINE(354)
			return null();
		}
		HX_STACK_LINE(357)
		if ((ForceRestart)){
			HX_STACK_LINE(358)
			this->cleanup(false,true,true);
		}
		else{
			HX_STACK_LINE(361)
			if ((this->get_playing())){
				HX_STACK_LINE(362)
				return null();
			}
		}
		HX_STACK_LINE(367)
		if ((this->_paused)){
			HX_STACK_LINE(368)
			this->resume();
		}
		else{
			HX_STACK_LINE(372)
			this->startSound((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,play,(void))

::org::flixel::FlxSound FlxSound_obj::proximity( Float X,Float Y,::org::flixel::FlxObject TargetObject,Float Radius,hx::Null< bool >  __o_Pan){
bool Pan = __o_Pan.Default(true);
	HX_STACK_PUSH("FlxSound::proximity","org/flixel/FlxSound.hx",338);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(TargetObject,"TargetObject");
	HX_STACK_ARG(Radius,"Radius");
	HX_STACK_ARG(Pan,"Pan");
{
		HX_STACK_LINE(339)
		this->x = X;
		HX_STACK_LINE(340)
		this->y = Y;
		HX_STACK_LINE(341)
		this->_target = TargetObject;
		HX_STACK_LINE(342)
		this->_radius = Radius;
		HX_STACK_LINE(343)
		this->_pan = Pan;
		HX_STACK_LINE(344)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSound_obj,proximity,return )

::org::flixel::FlxSound FlxSound_obj::loadStream( ::String SoundURL,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
	HX_STACK_PUSH("FlxSound::loadStream","org/flixel/FlxSound.hx",311);
	HX_STACK_THIS(this);
	HX_STACK_ARG(SoundURL,"SoundURL");
	HX_STACK_ARG(Looped,"Looped");
	HX_STACK_ARG(AutoDestroy,"AutoDestroy");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(312)
		this->cleanup(true,null(),null());
		HX_STACK_LINE(314)
		this->_sound = ::flash::media::Sound_obj::__new(null(),null(),null());
		HX_STACK_LINE(315)
		this->_sound->addEventListener(::flash::events::Event_obj::ID3,this->gotID3_dyn(),null(),null(),null());
		HX_STACK_LINE(316)
		this->_sound->load(::flash::net::URLRequest_obj::__new(SoundURL),null(),null());
		HX_STACK_LINE(317)
		this->_looped = Looped;
		HX_STACK_LINE(318)
		this->autoDestroy = AutoDestroy;
		HX_STACK_LINE(319)
		this->updateTransform();
		HX_STACK_LINE(320)
		this->exists = true;
		HX_STACK_LINE(321)
		this->onComplete = OnComplete;
		HX_STACK_LINE(322)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,loadStream,return )

::org::flixel::FlxSound FlxSound_obj::loadEmbedded( Dynamic EmbeddedSound,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
	HX_STACK_PUSH("FlxSound::loadEmbedded","org/flixel/FlxSound.hx",276);
	HX_STACK_THIS(this);
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound");
	HX_STACK_ARG(Looped,"Looped");
	HX_STACK_ARG(AutoDestroy,"AutoDestroy");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(277)
		this->cleanup(true,null(),null());
		HX_STACK_LINE(279)
		if ((::Std_obj::is(EmbeddedSound,hx::ClassOf< ::flash::media::Sound >()))){
			HX_STACK_LINE(280)
			this->_sound = EmbeddedSound;
		}
		else{
			HX_STACK_LINE(283)
			if ((::Std_obj::is(EmbeddedSound,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(284)
				this->_sound = ::Type_obj::createInstance(EmbeddedSound,Dynamic( Array_obj<Dynamic>::__new()));
			}
			else{
				HX_STACK_LINE(287)
				if ((::Std_obj::is(EmbeddedSound,hx::ClassOf< ::String >()))){
					HX_STACK_LINE(288)
					this->_sound = ::openfl::Assets_obj::getSound(EmbeddedSound);
				}
			}
		}
		HX_STACK_LINE(293)
		this->_looped = Looped;
		HX_STACK_LINE(294)
		this->autoDestroy = AutoDestroy;
		HX_STACK_LINE(295)
		this->updateTransform();
		HX_STACK_LINE(296)
		this->exists = true;
		HX_STACK_LINE(297)
		this->onComplete = OnComplete;
		HX_STACK_LINE(298)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,loadEmbedded,return )

Void FlxSound_obj::kill( ){
{
		HX_STACK_PUSH("FlxSound::kill","org/flixel/FlxSound.hx",261);
		HX_STACK_THIS(this);
		HX_STACK_LINE(262)
		this->super::kill();
		HX_STACK_LINE(263)
		this->cleanup(false,null(),null());
	}
return null();
}


Void FlxSound_obj::update( ){
{
		HX_STACK_PUSH("FlxSound::update","org/flixel/FlxSound.hx",192);
		HX_STACK_THIS(this);
		HX_STACK_LINE(193)
		if ((!(this->get_playing()))){
			HX_STACK_LINE(194)
			return null();
		}
		HX_STACK_LINE(198)
		this->_position = this->_channel->get_position();
		HX_STACK_LINE(200)
		Float radialMultiplier = 1.0;		HX_STACK_VAR(radialMultiplier,"radialMultiplier");
		HX_STACK_LINE(201)
		Float fadeMultiplier = 1.0;		HX_STACK_VAR(fadeMultiplier,"fadeMultiplier");
		HX_STACK_LINE(204)
		if (((this->_target != null()))){
			struct _Function_2_1{
				inline static Float Block( ::org::flixel::FlxSound_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxSound.hx",206);
					{
						HX_STACK_LINE(206)
						::org::flixel::util::FlxPoint Point1 = ::org::flixel::util::FlxPoint_obj::__new(__this->_target->x,__this->_target->y);		HX_STACK_VAR(Point1,"Point1");
						::org::flixel::util::FlxPoint Point2 = ::org::flixel::util::FlxPoint_obj::__new(__this->x,__this->y);		HX_STACK_VAR(Point2,"Point2");
						HX_STACK_LINE(206)
						Float dx = (Point1->x - Point2->x);		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(206)
						Float dy = (Point1->y - Point2->y);		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(206)
						return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(206)
			radialMultiplier = (Float(_Function_2_1::Block(this)) / Float(this->_radius));
			HX_STACK_LINE(207)
			if (((radialMultiplier < (int)0))){
				HX_STACK_LINE(207)
				radialMultiplier = (int)0;
			}
			HX_STACK_LINE(208)
			if (((radialMultiplier > (int)1))){
				HX_STACK_LINE(208)
				radialMultiplier = (int)1;
			}
			HX_STACK_LINE(210)
			radialMultiplier = ((int)1 - radialMultiplier);
			HX_STACK_LINE(212)
			if ((this->_pan)){
				HX_STACK_LINE(214)
				Float d = (Float(((this->x - this->_target->x))) / Float(this->_radius));		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(215)
				if (((d < (int)-1))){
					HX_STACK_LINE(216)
					d = (int)-1;
				}
				else{
					HX_STACK_LINE(219)
					if (((d > (int)1))){
						HX_STACK_LINE(220)
						d = (int)1;
					}
				}
				HX_STACK_LINE(223)
				this->_transform->pan = d;
			}
		}
		HX_STACK_LINE(228)
		if (((this->_fade != null()))){
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				::org::flixel::FadeTween _g = this->_fade;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(230)
				_g->set_progress((_g->get_progress() + ::org::flixel::FlxG_obj::elapsed));
			}
			HX_STACK_LINE(231)
			fadeMultiplier = this->_fade->get_value();
			HX_STACK_LINE(233)
			if ((this->_fade->get_finished())){
				HX_STACK_LINE(235)
				this->_fade = null();
				HX_STACK_LINE(236)
				if (((this->_onFadeComplete_dyn() != null()))){
					HX_STACK_LINE(237)
					this->_onFadeComplete();
				}
			}
		}
		HX_STACK_LINE(243)
		this->_volumeAdjust = (radialMultiplier * fadeMultiplier);
		HX_STACK_LINE(244)
		this->updateTransform();
		HX_STACK_LINE(246)
		if (((this->_transform->volume > (int)0))){
			HX_STACK_LINE(248)
			this->amplitudeLeft = (Float(this->_channel->get_leftPeak()) / Float(this->_transform->volume));
			HX_STACK_LINE(249)
			this->amplitudeRight = (Float(this->_channel->get_rightPeak()) / Float(this->_transform->volume));
			HX_STACK_LINE(250)
			this->amplitude = (((this->amplitudeLeft + this->amplitudeRight)) * 0.5);
		}
		else{
			HX_STACK_LINE(254)
			this->amplitudeLeft = (int)0;
			HX_STACK_LINE(255)
			this->amplitudeRight = (int)0;
			HX_STACK_LINE(256)
			this->amplitude = (int)0;
		}
	}
return null();
}


Void FlxSound_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSound::destroy","org/flixel/FlxSound.hx",162);
		HX_STACK_THIS(this);
		HX_STACK_LINE(163)
		this->_transform = null();
		HX_STACK_LINE(164)
		this->exists = false;
		HX_STACK_LINE(165)
		this->active = false;
		HX_STACK_LINE(166)
		this->_target = null();
		HX_STACK_LINE(167)
		this->name = null();
		HX_STACK_LINE(168)
		this->artist = null();
		HX_STACK_LINE(170)
		if (((this->_channel != null()))){
			HX_STACK_LINE(172)
			this->_channel->removeEventListener(::flash::events::Event_obj::SOUND_COMPLETE,this->stopped_dyn(),null());
			HX_STACK_LINE(173)
			this->_channel->stop();
			HX_STACK_LINE(174)
			this->_channel = null();
		}
		HX_STACK_LINE(177)
		if (((this->_sound != null()))){
			HX_STACK_LINE(179)
			this->_sound->removeEventListener(::flash::events::Event_obj::ID3,this->gotID3_dyn(),null());
			HX_STACK_LINE(180)
			this->_sound = null();
		}
		HX_STACK_LINE(183)
		this->onComplete = null();
		HX_STACK_LINE(185)
		this->super::destroy();
	}
return null();
}


Void FlxSound_obj::reset( ){
{
		HX_STACK_PUSH("FlxSound::reset","org/flixel/FlxSound.hx",128);
		HX_STACK_THIS(this);
		HX_STACK_LINE(129)
		this->destroy();
		HX_STACK_LINE(131)
		this->x = (int)0;
		HX_STACK_LINE(132)
		this->y = (int)0;
		HX_STACK_LINE(134)
		this->_position = (int)0;
		HX_STACK_LINE(135)
		this->_paused = false;
		HX_STACK_LINE(136)
		this->_volume = 1.0;
		HX_STACK_LINE(137)
		this->_volumeAdjust = 1.0;
		HX_STACK_LINE(138)
		this->_looped = false;
		HX_STACK_LINE(139)
		this->_target = null();
		HX_STACK_LINE(140)
		this->_radius = (int)0;
		HX_STACK_LINE(141)
		this->_pan = false;
		HX_STACK_LINE(142)
		if (((this->_fade != null()))){
			HX_STACK_LINE(142)
			this->_fade->destroy();
		}
		HX_STACK_LINE(143)
		this->_fade = null();
		HX_STACK_LINE(144)
		this->_onFadeComplete = null();
		HX_STACK_LINE(145)
		this->visible = false;
		HX_STACK_LINE(146)
		this->amplitude = (int)0;
		HX_STACK_LINE(147)
		this->amplitudeLeft = (int)0;
		HX_STACK_LINE(148)
		this->amplitudeRight = (int)0;
		HX_STACK_LINE(149)
		this->autoDestroy = false;
		HX_STACK_LINE(151)
		if (((this->_transform == null()))){
			HX_STACK_LINE(152)
			this->_transform = ::flash::media::SoundTransform_obj::__new(null(),null());
		}
		HX_STACK_LINE(155)
		this->_transform->pan = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,reset,(void))


FlxSound_obj::FlxSound_obj()
{
}

void FlxSound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSound);
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(_onFadeComplete,"_onFadeComplete");
	HX_MARK_MEMBER_NAME(_fade,"_fade");
	HX_MARK_MEMBER_NAME(_pan,"_pan");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_looped,"_looped");
	HX_MARK_MEMBER_NAME(_volumeAdjust,"_volumeAdjust");
	HX_MARK_MEMBER_NAME(_volume,"_volume");
	HX_MARK_MEMBER_NAME(_position,"_position");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_MEMBER_NAME(_channel,"_channel");
	HX_MARK_MEMBER_NAME(_sound,"_sound");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(autoDestroy,"autoDestroy");
	HX_MARK_MEMBER_NAME(amplitudeRight,"amplitudeRight");
	HX_MARK_MEMBER_NAME(amplitudeLeft,"amplitudeLeft");
	HX_MARK_MEMBER_NAME(amplitude,"amplitude");
	HX_MARK_MEMBER_NAME(artist,"artist");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(survive,"survive");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(_onFadeComplete,"_onFadeComplete");
	HX_VISIT_MEMBER_NAME(_fade,"_fade");
	HX_VISIT_MEMBER_NAME(_pan,"_pan");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_looped,"_looped");
	HX_VISIT_MEMBER_NAME(_volumeAdjust,"_volumeAdjust");
	HX_VISIT_MEMBER_NAME(_volume,"_volume");
	HX_VISIT_MEMBER_NAME(_position,"_position");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
	HX_VISIT_MEMBER_NAME(_channel,"_channel");
	HX_VISIT_MEMBER_NAME(_sound,"_sound");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(autoDestroy,"autoDestroy");
	HX_VISIT_MEMBER_NAME(amplitudeRight,"amplitudeRight");
	HX_VISIT_MEMBER_NAME(amplitudeLeft,"amplitudeLeft");
	HX_VISIT_MEMBER_NAME(amplitude,"amplitude");
	HX_VISIT_MEMBER_NAME(artist,"artist");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(survive,"survive");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"_pan") ) { return _pan; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"_fade") ) { return _fade; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gotID3") ) { return gotID3_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return get_volume(); }
		if (HX_FIELD_EQ(inName,"fadeIn") ) { return fadeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_sound") ) { return _sound; }
		if (HX_FIELD_EQ(inName,"artist") ) { return artist; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		if (HX_FIELD_EQ(inName,"stopped") ) { return stopped_dyn(); }
		if (HX_FIELD_EQ(inName,"playing") ) { return inCallProp ? get_playing() : playing; }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return fadeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"_looped") ) { return _looped; }
		if (HX_FIELD_EQ(inName,"_volume") ) { return _volume; }
		if (HX_FIELD_EQ(inName,"_paused") ) { return _paused; }
		if (HX_FIELD_EQ(inName,"survive") ) { return survive; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_channel") ) { return _channel; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"proximity") ) { return proximity_dyn(); }
		if (HX_FIELD_EQ(inName,"_position") ) { return _position; }
		if (HX_FIELD_EQ(inName,"amplitude") ) { return amplitude; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startSound") ) { return startSound_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"loadStream") ) { return loadStream_dyn(); }
		if (HX_FIELD_EQ(inName,"_transform") ) { return _transform; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_playing") ) { return get_playing_dyn(); }
		if (HX_FIELD_EQ(inName,"autoDestroy") ) { return autoDestroy; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadEmbedded") ) { return loadEmbedded_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_volumeAdjust") ) { return _volumeAdjust; }
		if (HX_FIELD_EQ(inName,"amplitudeLeft") ) { return amplitudeLeft; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"amplitudeRight") ) { return amplitudeRight; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateTransform") ) { return updateTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"getActualVolume") ) { return getActualVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"_onFadeComplete") ) { return _onFadeComplete; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pan") ) { _pan=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_fade") ) { _fade=inValue.Cast< ::org::flixel::FadeTween >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return set_volume(inValue); }
		if (HX_FIELD_EQ(inName,"_sound") ) { _sound=inValue.Cast< ::flash::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"artist") ) { artist=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< ::org::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_looped") ) { _looped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volume") ) { _volume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"survive") ) { survive=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_channel") ) { _channel=inValue.Cast< ::flash::media::SoundChannel >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { _position=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"amplitude") ) { amplitude=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast< ::flash::media::SoundTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoDestroy") ) { autoDestroy=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_volumeAdjust") ) { _volumeAdjust=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"amplitudeLeft") ) { amplitudeLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"amplitudeRight") ) { amplitudeRight=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onFadeComplete") ) { _onFadeComplete=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("volume"));
	outFields->push(HX_CSTRING("playing"));
	outFields->push(HX_CSTRING("_fade"));
	outFields->push(HX_CSTRING("_pan"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("_target"));
	outFields->push(HX_CSTRING("_looped"));
	outFields->push(HX_CSTRING("_volumeAdjust"));
	outFields->push(HX_CSTRING("_volume"));
	outFields->push(HX_CSTRING("_position"));
	outFields->push(HX_CSTRING("_paused"));
	outFields->push(HX_CSTRING("_transform"));
	outFields->push(HX_CSTRING("_channel"));
	outFields->push(HX_CSTRING("_sound"));
	outFields->push(HX_CSTRING("autoDestroy"));
	outFields->push(HX_CSTRING("amplitudeRight"));
	outFields->push(HX_CSTRING("amplitudeLeft"));
	outFields->push(HX_CSTRING("amplitude"));
	outFields->push(HX_CSTRING("artist"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("survive"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("gotID3"),
	HX_CSTRING("cleanup"),
	HX_CSTRING("stopped"),
	HX_CSTRING("startSound"),
	HX_CSTRING("updateTransform"),
	HX_CSTRING("getActualVolume"),
	HX_CSTRING("set_volume"),
	HX_CSTRING("get_volume"),
	HX_CSTRING("get_playing"),
	HX_CSTRING("playing"),
	HX_CSTRING("fadeIn"),
	HX_CSTRING("fadeOut"),
	HX_CSTRING("stop"),
	HX_CSTRING("pause"),
	HX_CSTRING("resume"),
	HX_CSTRING("play"),
	HX_CSTRING("proximity"),
	HX_CSTRING("loadStream"),
	HX_CSTRING("loadEmbedded"),
	HX_CSTRING("kill"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("_onFadeComplete"),
	HX_CSTRING("_fade"),
	HX_CSTRING("_pan"),
	HX_CSTRING("_radius"),
	HX_CSTRING("_target"),
	HX_CSTRING("_looped"),
	HX_CSTRING("_volumeAdjust"),
	HX_CSTRING("_volume"),
	HX_CSTRING("_position"),
	HX_CSTRING("_paused"),
	HX_CSTRING("_transform"),
	HX_CSTRING("_channel"),
	HX_CSTRING("_sound"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("autoDestroy"),
	HX_CSTRING("amplitudeRight"),
	HX_CSTRING("amplitudeLeft"),
	HX_CSTRING("amplitude"),
	HX_CSTRING("artist"),
	HX_CSTRING("name"),
	HX_CSTRING("survive"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSound_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSound_obj::__mClass,"__mClass");
};

Class FlxSound_obj::__mClass;

void FlxSound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxSound"), hx::TCanCast< FlxSound_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSound_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
