#ifndef INCLUDED_org_flixel_system_debug_VCR
#define INCLUDED_org_flixel_system_debug_VCR

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
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS4(org,flixel,system,debug,VCR)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  VCR_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef VCR_obj OBJ_;
		VCR_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< VCR_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~VCR_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("VCR"); }

		virtual Void updateGUI( );
		Dynamic updateGUI_dyn();

		virtual Void unpress( );
		Dynamic unpress_dyn();

		virtual bool checkOver( );
		Dynamic checkOver_dyn();

		virtual Void onMouseUp( ::flash::events::MouseEvent E);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseDown( ::flash::events::MouseEvent E);
		Dynamic onMouseDown_dyn();

		virtual Void onMouseMove( ::flash::events::MouseEvent E);
		Dynamic onMouseMove_dyn();

		virtual Void init( ::flash::events::Event E);
		Dynamic init_dyn();

		virtual Void onStep( );
		Dynamic onStep_dyn();

		virtual Void onPlay( );
		Dynamic onPlay_dyn();

		virtual Void onPause( );
		Dynamic onPause_dyn();

		virtual Void onRestart( hx::Null< bool >  StandardMode);
		Dynamic onRestart_dyn();

		virtual Void onStop( );
		Dynamic onStop_dyn();

		virtual Void onSaveError( ::flash::events::Event E);
		Dynamic onSaveError_dyn();

		virtual Void onSaveCancel( ::flash::events::Event E);
		Dynamic onSaveCancel_dyn();

		virtual Void onSaveComplete( ::flash::events::Event E);
		Dynamic onSaveComplete_dyn();

		virtual Void stopRecording( );
		Dynamic stopRecording_dyn();

		virtual Void onRecord( hx::Null< bool >  StandardMode);
		Dynamic onRecord_dyn();

		virtual Void onOpenError( ::flash::events::Event E);
		Dynamic onOpenError_dyn();

		virtual Void onOpenCancel( ::flash::events::Event E);
		Dynamic onOpenCancel_dyn();

		virtual Void onOpenComplete( ::flash::events::Event E);
		Dynamic onOpenComplete_dyn();

		virtual Void onOpenSelect( ::flash::events::Event E);
		Dynamic onOpenSelect_dyn();

		virtual Void onOpen( );
		Dynamic onOpen_dyn();

		virtual Void updateRuntime( int Time);
		Dynamic updateRuntime_dyn();

		virtual Void playing( );
		Dynamic playing_dyn();

		virtual Void stopped( );
		Dynamic stopped_dyn();

		virtual Void recording( );
		Dynamic recording_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		int _runtime;
		::flash::text::TextField _runtimeDisplay;
		bool _pressingStep;
		bool _pressingPause;
		bool _pressingRestart;
		bool _pressingRecord;
		bool _pressingOpen;
		bool _overStep;
		bool _overPause;
		bool _overRestart;
		bool _overRecord;
		bool _overOpen;
		::flash::display::Bitmap _step;
		::flash::display::Bitmap _play;
		::flash::display::Bitmap _pause;
		::flash::display::Bitmap _restart;
		::flash::display::Bitmap _flixel;
		::flash::display::Bitmap _stop;
		::flash::display::Bitmap _recordOn;
		::flash::display::Bitmap _recordOff;
		::flash::display::Bitmap _open;
		bool stepRequested;
		bool paused;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_VCR */ 
