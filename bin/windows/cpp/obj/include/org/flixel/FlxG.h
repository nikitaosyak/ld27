#ifndef INCLUDED_org_flixel_FlxG
#define INCLUDED_org_flixel_FlxG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,display,Stage)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxG)
HX_DECLARE_CLASS2(org,flixel,FlxGame)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxSound)
HX_DECLARE_CLASS2(org,flixel,FlxState)
HX_DECLARE_CLASS2(org,flixel,FlxTypedGroup)
HX_DECLARE_CLASS3(org,flixel,system,FlxWindow)
HX_DECLARE_CLASS4(org,flixel,system,debug,Console)
HX_DECLARE_CLASS4(org,flixel,system,debug,LogStyle)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxInputStates)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxJoystickManager)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxKeyboard)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxMouse)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxTouchManager)
HX_DECLARE_CLASS4(org,flixel,system,input,IFlxInput)
HX_DECLARE_CLASS3(org,flixel,tweens,FlxTween)
HX_DECLARE_CLASS4(org,flixel,tweens,misc,MultiVarTween)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
HX_DECLARE_CLASS3(org,flixel,util,FlxRect)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxG_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxG_obj OBJ_;
		FlxG_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxG_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxG_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxG"); }

		static bool supportsTouchEvents;
		static ::org::flixel::FlxBasic tweener;
		static ::org::flixel::FlxGame _game;
		static bool paused;
		static bool autoPause;
		static bool debug;
		static Float elapsed;
		static Float timeScale;
		static int width;
		static int height;
		static ::org::flixel::util::FlxRect worldBounds;
		static int worldDivisions;
		static bool visualDebug;
		static ::org::flixel::system::debug::Console console;
		static bool mobile;
		static ::org::flixel::FlxSound music;
		static ::org::flixel::FlxTypedGroup sounds;
		static bool mute;
		static Array< ::Dynamic > cameras;
		static ::org::flixel::FlxCamera camera;
		static bool useBufferLocking;
		static ::flash::geom::Rectangle _cameraRect;
		static Array< ::Dynamic > plugins;
		static Dynamic volumeHandler;
		static Dynamic &volumeHandler_dyn() { return volumeHandler;}
		static ::flash::display::Sprite flashGfxSprite;
		static ::flash::display::Graphics flashGfx;
		static ::haxe::ds::StringMap _cache;
		static ::String _lastBitmapDataKey;
		static ::org::flixel::system::input::FlxMouse mouse;
		static ::org::flixel::system::input::FlxKeyboard keys;
		static Array< int > keyDebugger;
		static Array< int > keyVolumeUp;
		static Array< int > keyVolumeDown;
		static Array< int > keyMute;
		static ::org::flixel::system::input::FlxTouchManager touchManager;
		static ::org::flixel::system::input::FlxJoystickManager joystickManager;
		static ::String getLibraryName( );
		static Dynamic getLibraryName_dyn();

		static Void toggleDebugger( );
		static Dynamic toggleDebugger_dyn();

		static Void showDebugger( );
		static Dynamic showDebugger_dyn();

		static Void hideDebugger( );
		static Dynamic hideDebugger_dyn();

		static Dynamic log;
		static Void _log( Dynamic Data);
		static Dynamic _log_dyn();

		static Dynamic warn;
		static Void _warn( Dynamic Data);
		static Dynamic _warn_dyn();

		static Dynamic error;
		static Void _error( Dynamic Data);
		static Dynamic _error_dyn();

		static Dynamic notice;
		static Void _notice( Dynamic Data);
		static Dynamic _notice_dyn();

		static Void advancedLog( Dynamic Data,::org::flixel::system::debug::LogStyle Style);
		static Dynamic advancedLog_dyn();

		static Void clearLog( );
		static Dynamic clearLog_dyn();

		static Void watch( Dynamic AnyObject,::String VariableName,::String DisplayName);
		static Dynamic watch_dyn();

		static Void unwatch( Dynamic AnyObject,::String VariableName);
		static Dynamic unwatch_dyn();

		static Void quickWatch( ::String Name,Dynamic NewValue);
		static Dynamic quickWatch_dyn();

		static Void removeQuickWatch( ::String Name);
		static Dynamic removeQuickWatch_dyn();

		static int get_framerate( );
		static Dynamic get_framerate_dyn();

		static int set_framerate( int Framerate);
		static Dynamic set_framerate_dyn();

		static int get_flashFramerate( );
		static Dynamic get_flashFramerate_dyn();

		static int set_flashFramerate( int Framerate);
		static Dynamic set_flashFramerate_dyn();

		static Void loadReplay( ::String Data,::org::flixel::FlxState State,Array< ::String > CancelKeys,hx::Null< Float >  Timeout,Dynamic Callback);
		static Dynamic loadReplay_dyn();

		static Void reloadReplay( hx::Null< bool >  StandardMode);
		static Dynamic reloadReplay_dyn();

		static Void stopReplay( );
		static Dynamic stopReplay_dyn();

		static Void recordReplay( hx::Null< bool >  StandardMode);
		static Dynamic recordReplay_dyn();

		static ::String stopRecording( );
		static Dynamic stopRecording_dyn();

		static Void resetState( );
		static Dynamic resetState_dyn();

		static Void resetGame( );
		static Dynamic resetGame_dyn();

		static Void resetInput( );
		static Dynamic resetInput_dyn();

		static Void playMusic( Dynamic Music,hx::Null< Float >  Volume);
		static Dynamic playMusic_dyn();

		static ::org::flixel::FlxSound loadSound( Dynamic EmbeddedSound,hx::Null< Float >  Volume,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy,hx::Null< bool >  AutoPlay,::String URL,Dynamic OnComplete);
		static Dynamic loadSound_dyn();

		static ::org::flixel::FlxSound play( Dynamic EmbeddedSound,hx::Null< Float >  Volume,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy,Dynamic OnComplete);
		static Dynamic play_dyn();

		static ::org::flixel::FlxSound stream( ::String URL,hx::Null< Float >  Volume,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy,Dynamic OnComplete);
		static Dynamic stream_dyn();

		static Float volume;
		static Float set_volume( Float Volume);
		static Dynamic set_volume_dyn();

		static Void destroySounds( hx::Null< bool >  ForceDestroy);
		static Dynamic destroySounds_dyn();

		static Void updateSounds( );
		static Dynamic updateSounds_dyn();

		static Void pauseSounds( );
		static Dynamic pauseSounds_dyn();

		static Void resumeSounds( );
		static Dynamic resumeSounds_dyn();

		static bool checkBitmapCache( ::String Key);
		static Dynamic checkBitmapCache_dyn();

		static ::flash::display::BitmapData createBitmap( int Width,int Height,int Color,hx::Null< bool >  Unique,::String Key);
		static Dynamic createBitmap_dyn();

		static ::flash::display::BitmapData addBitmap( Dynamic Graphic,hx::Null< bool >  Reverse,hx::Null< bool >  Unique,::String Key,hx::Null< int >  FrameWidth,hx::Null< int >  FrameHeight,hx::Null< int >  SpacingX,hx::Null< int >  SpacingY);
		static Dynamic addBitmap_dyn();

		static ::flash::display::BitmapData addTilemapBitmap( Dynamic Graphic,hx::Null< bool >  Reverse,hx::Null< bool >  Unique,::String Key,hx::Null< int >  FrameWidth,hx::Null< int >  FrameHeight,hx::Null< int >  RepeatX,hx::Null< int >  RepeatY);
		static Dynamic addTilemapBitmap_dyn();

		static ::String getCacheKeyFor( ::flash::display::BitmapData bmd);
		static Dynamic getCacheKeyFor_dyn();

		static ::String getUniqueBitmapKey( ::String baseKey);
		static Dynamic getUniqueBitmapKey_dyn();

		static bool fromAssetsCache( ::flash::display::BitmapData bmd);
		static Dynamic fromAssetsCache_dyn();

		static Void removeBitmap( ::String Graphic);
		static Dynamic removeBitmap_dyn();

		static Void clearBitmapCache( );
		static Dynamic clearBitmapCache_dyn();

		static Void clearAssetsCache( );
		static Dynamic clearAssetsCache_dyn();

		static ::flash::display::Stage stage;
		static ::flash::display::Stage get_stage( );
		static Dynamic get_stage_dyn();

		static ::org::flixel::FlxState state;
		static ::org::flixel::FlxState get_state( );
		static Dynamic get_state_dyn();

		static Void switchState( ::org::flixel::FlxState State);
		static Dynamic switchState_dyn();

		static Void setDebuggerLayout( int Layout);
		static Dynamic setDebuggerLayout_dyn();

		static Void resetDebuggerLayout( );
		static Dynamic resetDebuggerLayout_dyn();

		static ::org::flixel::FlxCamera addCamera( ::org::flixel::FlxCamera NewCamera);
		static Dynamic addCamera_dyn();

		static Void removeCamera( ::org::flixel::FlxCamera Camera,hx::Null< bool >  Destroy);
		static Dynamic removeCamera_dyn();

		static Void resetCameras( ::org::flixel::FlxCamera NewCamera);
		static Dynamic resetCameras_dyn();

		static Void flash( hx::Null< int >  Color,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force);
		static Dynamic flash_dyn();

		static Void fade( hx::Null< int >  Color,hx::Null< Float >  Duration,hx::Null< bool >  FadeIn,Dynamic OnComplete,hx::Null< bool >  Force);
		static Dynamic fade_dyn();

		static Void shake( hx::Null< Float >  Intensity,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force,hx::Null< int >  Direction);
		static Dynamic shake_dyn();

		static int get_bgColor( );
		static Dynamic get_bgColor_dyn();

		static int set_bgColor( int Color);
		static Dynamic set_bgColor_dyn();

		static bool overlap( ::org::flixel::FlxBasic ObjectOrGroup1,::org::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback);
		static Dynamic overlap_dyn();

		static bool collide( ::org::flixel::FlxBasic ObjectOrGroup1,::org::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback);
		static Dynamic collide_dyn();

		static ::org::flixel::FlxBasic addPlugin( ::org::flixel::FlxBasic Plugin);
		static Dynamic addPlugin_dyn();

		static ::org::flixel::FlxBasic getPlugin( ::Class ClassType);
		static Dynamic getPlugin_dyn();

		static ::org::flixel::FlxBasic removePlugin( ::org::flixel::FlxBasic Plugin);
		static Dynamic removePlugin_dyn();

		static bool removePluginType( ::Class ClassType);
		static Dynamic removePluginType_dyn();

		static Void init( ::org::flixel::FlxGame Game,int Width,int Height,Float Zoom);
		static Dynamic init_dyn();

		static Void reset( );
		static Dynamic reset_dyn();

		static Void lockCameras( );
		static Dynamic lockCameras_dyn();

		static Void renderCameras( );
		static Dynamic renderCameras_dyn();

		static Void unlockCameras( );
		static Dynamic unlockCameras_dyn();

		static Void updateCameras( );
		static Dynamic updateCameras_dyn();

		static Void updatePlugins( );
		static Dynamic updatePlugins_dyn();

		static Void drawPlugins( );
		static Dynamic drawPlugins_dyn();

		static Void drawDebugPlugins( );
		static Dynamic drawDebugPlugins_dyn();

		static ::org::flixel::tweens::misc::MultiVarTween tween( Dynamic object,Dynamic values,Float duration,Dynamic options);
		static Dynamic tween_dyn();

		static Float random( );
		static Dynamic random_dyn();

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxG */ 
