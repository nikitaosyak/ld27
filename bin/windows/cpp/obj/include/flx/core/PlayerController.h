#ifndef INCLUDED_flx_core_PlayerController
#define INCLUDED_flx_core_PlayerController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
HX_DECLARE_CLASS2(flx,core,KeyStatus)
HX_DECLARE_CLASS2(flx,core,PlayerController)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
namespace flx{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  PlayerController_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PlayerController_obj OBJ_;
		PlayerController_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PlayerController_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PlayerController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayerController"); }

		virtual Void process( int keyCode,::flx::core::KeyStatus status);
		Dynamic process_dyn();

		virtual Void onUp( ::flash::events::KeyboardEvent e);
		Dynamic onUp_dyn();

		virtual Void onDown( ::flash::events::KeyboardEvent e);
		Dynamic onDown_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		int accY;
		int accX;
		::haxe::ds::IntMap pressed;
};

} // end namespace flx
} // end namespace core

#endif /* INCLUDED_flx_core_PlayerController */ 
