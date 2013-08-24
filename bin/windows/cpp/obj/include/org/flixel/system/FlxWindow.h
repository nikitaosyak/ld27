#ifndef INCLUDED_org_flixel_system_FlxWindow
#define INCLUDED_org_flixel_system_FlxWindow

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
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS3(org,flixel,system,FlxWindow)
namespace org{
namespace flixel{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  FlxWindow_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef FlxWindow_obj OBJ_;
		FlxWindow_obj();
		Void __construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor);

	public:
		static hx::ObjectPtr< FlxWindow_obj > __new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxWindow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxWindow"); }

		virtual Void updateGUI( );
		Dynamic updateGUI_dyn();

		virtual Void updateSize( );
		Dynamic updateSize_dyn();

		virtual Void bound( );
		Dynamic bound_dyn();

		virtual Void onMouseUp( ::flash::events::MouseEvent E);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseDown( ::flash::events::MouseEvent E);
		Dynamic onMouseDown_dyn();

		virtual Void onMouseMove( ::flash::events::MouseEvent E);
		Dynamic onMouseMove_dyn();

		virtual Void init( ::flash::events::Event E);
		Dynamic init_dyn();

		virtual Void reposition( Float X,Float Y);
		Dynamic reposition_dyn();

		virtual Void resize( Float Width,Float Height);
		Dynamic resize_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		bool _resizable;
		bool _resizing;
		bool _dragging;
		::flash::geom::Point _drag;
		bool _overHandle;
		bool _overHeader;
		::flash::display::Bitmap _handle;
		::flash::text::TextField _title;
		::flash::display::Bitmap _shadow;
		::flash::display::Bitmap _header;
		::flash::display::Bitmap _background;
		::flash::geom::Rectangle _bounds;
		int _height;
		int _width;
		::flash::geom::Point maxSize;
		::flash::geom::Point minSize;
};

} // end namespace org
} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_org_flixel_system_FlxWindow */ 
