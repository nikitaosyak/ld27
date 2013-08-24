#ifndef INCLUDED_openfl_display_Tilesheet
#define INCLUDED_openfl_display_Tilesheet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Tilesheet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tilesheet_obj OBJ_;
		Tilesheet_obj();
		Void __construct(::flash::display::BitmapData image);

	public:
		static hx::ObjectPtr< Tilesheet_obj > __new(::flash::display::BitmapData image);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tilesheet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tilesheet"); }

		virtual Void drawTiles( ::flash::display::Graphics graphics,Array< Float > tileData,hx::Null< bool >  smooth,hx::Null< int >  flags);
		Dynamic drawTiles_dyn();

		virtual int addTileRect( ::flash::geom::Rectangle rectangle,::flash::geom::Point centerPoint);
		Dynamic addTileRect_dyn();

		Dynamic __handle;
		::flash::display::BitmapData __bitmap;
		static Dynamic nme_tilesheet_create;
		static Dynamic &nme_tilesheet_create_dyn() { return nme_tilesheet_create;}
		static Dynamic nme_tilesheet_add_rect;
		static Dynamic &nme_tilesheet_add_rect_dyn() { return nme_tilesheet_add_rect;}
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Tilesheet */ 
