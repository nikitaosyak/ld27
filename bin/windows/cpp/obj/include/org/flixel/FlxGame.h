#ifndef INCLUDED_org_flixel_FlxGame
#define INCLUDED_org_flixel_FlxGame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGame)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxSave)
HX_DECLARE_CLASS2(org,flixel,FlxState)
HX_DECLARE_CLASS2(org,flixel,FlxTypedGroup)
HX_DECLARE_CLASS3(org,flixel,system,FlxDebugger)
HX_DECLARE_CLASS3(org,flixel,system,FlxReplay)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxGame_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef FlxGame_obj OBJ_;
		FlxGame_obj();
		Void __construct(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate);

	public:
		static hx::ObjectPtr< FlxGame_obj > __new(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxGame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxGame"); }

		virtual ::org::flixel::system::FlxDebugger get_debugger( );
		Dynamic get_debugger_dyn();

		::org::flixel::system::FlxDebugger debugger;
		virtual Void createFocusScreen( );
		Dynamic createFocusScreen_dyn();

		virtual Void loadSoundPrefs( );
		Dynamic loadSoundPrefs_dyn();

		virtual Void createSoundTray( );
		Dynamic createSoundTray_dyn();

		virtual Void create( ::flash::events::Event FlashEvent);
		Dynamic create_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void updateInput( );
		Dynamic updateInput_dyn();

		virtual Void updateState( );
		Dynamic updateState_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void updateSoundTray( Float MS);
		Dynamic updateSoundTray_dyn();

		virtual Void step( );
		Dynamic step_dyn();

		virtual Void switchState( );
		Dynamic switchState_dyn();

		virtual Void requestNewState( ::org::flixel::FlxState newState);
		Dynamic requestNewState_dyn();

		virtual Void resetGame( );
		Dynamic resetGame_dyn();

		virtual Void onEnterFrame( ::flash::events::Event FlashEvent);
		Dynamic onEnterFrame_dyn();

		virtual Void onFocusLost( ::flash::events::Event FlashEvent);
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( ::flash::events::Event FlashEvent);
		Dynamic onFocus_dyn();

		virtual Void showSoundTray( hx::Null< bool >  Silent);
		Dynamic showSoundTray_dyn();

		Dynamic _replayCallback;
		Dynamic &_replayCallback_dyn() { return _replayCallback;}
		int _replayTimer;
		Array< ::String > _replayCancelKeys;
		bool _recording;
		bool _replaying;
		bool _recordingRequested;
		bool _replayRequested;
		::org::flixel::system::FlxReplay _replay;
		bool _debuggerUp;
		::org::flixel::system::FlxDebugger _debugger;
		::org::flixel::FlxSave _prefsSave;
		Array< ::Dynamic > _soundTrayBars;
		bool _updateSoundTray;
		Float _soundTrayTimer;
		::flash::display::Sprite _soundTray;
		::flash::display::Sprite _focus;
		bool _requestedReset;
		::org::flixel::FlxState _requestedState;
		int _maxAccumulation;
		int _flashFramerate;
		Float _stepSeconds;
		int _step;
		int _elapsedMS;
		bool _lostFocus;
		int _accumulator;
		int _total;
		::Class _iState;
		::flash::display::Sprite _inputContainer;
		::org::flixel::FlxState _state;
		bool tempDisableSoundHotKeys;
		::String junk;
		static int _mark;
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxGame */ 
