#ifndef INCLUDED_org_flixel_system_debug_Vis
#define INCLUDED_org_flixel_system_debug_Vis

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
HX_DECLARE_CLASS4(org,flixel,system,debug,Vis)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Vis_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef Vis_obj OBJ_;
		Vis_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Vis_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Vis_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Vis"); }

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

		virtual Void onBounds( );
		Dynamic onBounds_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		bool _pressingBounds;
		bool _overBounds;
		::flash::display::Bitmap _bounds;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_Vis */ 
