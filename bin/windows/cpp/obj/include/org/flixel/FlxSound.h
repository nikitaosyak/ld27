#ifndef INCLUDED_org_flixel_FlxSound
#define INCLUDED_org_flixel_FlxSound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxBasic.h>
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,media,Sound)
HX_DECLARE_CLASS2(flash,media,SoundChannel)
HX_DECLARE_CLASS2(flash,media,SoundTransform)
HX_DECLARE_CLASS2(org,flixel,FadeTween)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSound)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxSound_obj : public ::org::flixel::FlxBasic_obj{
	public:
		typedef ::org::flixel::FlxBasic_obj super;
		typedef FlxSound_obj OBJ_;
		FlxSound_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxSound_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxSound_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxSound"); }

		virtual Void gotID3( ::flash::events::Event event);
		Dynamic gotID3_dyn();

		virtual Void cleanup( bool destroySound,hx::Null< bool >  resetPosition,hx::Null< bool >  resetFading);
		Dynamic cleanup_dyn();

		virtual Void stopped( ::flash::events::Event event);
		Dynamic stopped_dyn();

		virtual Void startSound( Float Position);
		Dynamic startSound_dyn();

		virtual Void updateTransform( );
		Dynamic updateTransform_dyn();

		virtual Float getActualVolume( );
		Dynamic getActualVolume_dyn();

		virtual Float set_volume( Float Volume);
		Dynamic set_volume_dyn();

		virtual Float get_volume( );
		Dynamic get_volume_dyn();

		virtual bool get_playing( );
		Dynamic get_playing_dyn();

		bool playing;
		virtual Void fadeIn( Float Seconds);
		Dynamic fadeIn_dyn();

		virtual Void fadeOut( Float Seconds,hx::Null< bool >  PauseInstead);
		Dynamic fadeOut_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void play( hx::Null< bool >  ForceRestart);
		Dynamic play_dyn();

		virtual ::org::flixel::FlxSound proximity( Float X,Float Y,::org::flixel::FlxObject TargetObject,Float Radius,hx::Null< bool >  Pan);
		Dynamic proximity_dyn();

		virtual ::org::flixel::FlxSound loadStream( ::String SoundURL,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy,Dynamic OnComplete);
		Dynamic loadStream_dyn();

		virtual ::org::flixel::FlxSound loadEmbedded( Dynamic EmbeddedSound,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy,Dynamic OnComplete);
		Dynamic loadEmbedded_dyn();

		virtual Void kill( );

		virtual Void update( );

		virtual Void destroy( );

		virtual Void reset( );
		Dynamic reset_dyn();

		Dynamic _onFadeComplete;
		Dynamic &_onFadeComplete_dyn() { return _onFadeComplete;}
		::org::flixel::FadeTween _fade;
		bool _pan;
		Float _radius;
		::org::flixel::FlxObject _target;
		bool _looped;
		Float _volumeAdjust;
		Float _volume;
		Float _position;
		bool _paused;
		::flash::media::SoundTransform _transform;
		::flash::media::SoundChannel _channel;
		::flash::media::Sound _sound;
		Dynamic onComplete;
		Dynamic &onComplete_dyn() { return onComplete;}
		bool autoDestroy;
		Float amplitudeRight;
		Float amplitudeLeft;
		Float amplitude;
		::String artist;
		::String name;
		bool survive;
		Float y;
		Float x;
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxSound */ 
