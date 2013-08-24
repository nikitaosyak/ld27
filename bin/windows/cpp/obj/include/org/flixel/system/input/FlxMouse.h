#ifndef INCLUDED_org_flixel_system_input_FlxMouse
#define INCLUDED_org_flixel_system_input_FlxMouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/util/FlxPoint.h>
#include <org/flixel/system/input/IFlxInput.h>
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxMouse)
HX_DECLARE_CLASS4(org,flixel,system,input,IFlxInput)
HX_DECLARE_CLASS4(org,flixel,system,replay,MouseRecord)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace org{
namespace flixel{
namespace system{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxMouse_obj : public ::org::flixel::util::FlxPoint_obj{
	public:
		typedef ::org::flixel::util::FlxPoint_obj super;
		typedef FlxMouse_obj OBJ_;
		FlxMouse_obj();
		Void __construct(::flash::display::Sprite CursorContainer);

	public:
		static hx::ObjectPtr< FlxMouse_obj > __new(::flash::display::Sprite CursorContainer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxMouse_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::flixel::system::input::IFlxInput_obj *()
			{ return new ::org::flixel::system::input::IFlxInput_delegate_< FlxMouse_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxMouse"); }

		virtual bool set_useSystemCursor( bool value);
		Dynamic set_useSystemCursor_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void playback( ::org::flixel::system::replay::MouseRecord Record);
		Dynamic playback_dyn();

		virtual ::org::flixel::system::replay::MouseRecord record( );
		Dynamic record_dyn();

		virtual bool justReleased( );
		Dynamic justReleased_dyn();

		virtual bool justPressed( );
		Dynamic justPressed_dyn();

		virtual bool pressed( );
		Dynamic pressed_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual ::org::flixel::util::FlxPoint getScreenPosition( ::org::flixel::FlxCamera Camera,::org::flixel::util::FlxPoint point);
		Dynamic getScreenPosition_dyn();

		virtual ::org::flixel::util::FlxPoint getWorldPosition( ::org::flixel::FlxCamera Camera,::org::flixel::util::FlxPoint point);
		Dynamic getWorldPosition_dyn();

		virtual Void updateCursor( );
		Dynamic updateCursor_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

		virtual Void load( Dynamic Graphic,hx::Null< Float >  Scale,hx::Null< int >  XOffset,hx::Null< int >  YOffset);
		Dynamic load_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void show( Dynamic Graphic,hx::Null< Float >  Scale,hx::Null< int >  XOffset,hx::Null< int >  YOffset);
		Dynamic show_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void onMouseWheel( ::flash::events::MouseEvent FlashEvent);
		Dynamic onMouseWheel_dyn();

		virtual Void onMouseUp( ::flash::events::MouseEvent FlashEvent);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseDown( ::flash::events::MouseEvent FlashEvent);
		Dynamic onMouseDown_dyn();

		bool useSystemCursor;
		::org::flixel::util::FlxPoint _globalScreenPosition;
		::org::flixel::util::FlxPoint _point;
		int _lastWheel;
		int _lastY;
		int _lastX;
		::flash::display::BitmapData _cursorBitmapData;
		::flash::display::Bitmap _cursor;
		bool _updateCursorContainer;
		::flash::display::Sprite cursorContainer;
		int _last;
		int _current;
		bool visible;
		int screenY;
		int screenX;
		int wheel;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_FlxMouse */ 
