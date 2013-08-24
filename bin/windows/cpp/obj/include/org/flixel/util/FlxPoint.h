#ifndef INCLUDED_org_flixel_util_FlxPoint
#define INCLUDED_org_flixel_util_FlxPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace org{
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxPoint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPoint_obj OBJ_;
		FlxPoint_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);

	public:
		static hx::ObjectPtr< FlxPoint_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxPoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxPoint"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::flash::geom::Point copyToFlash( ::flash::geom::Point FlashPoint);
		Dynamic copyToFlash_dyn();

		virtual ::org::flixel::util::FlxPoint copyFromFlash( ::flash::geom::Point FlashPoint);
		Dynamic copyFromFlash_dyn();

		virtual ::org::flixel::util::FlxPoint copyTo( ::org::flixel::util::FlxPoint point);
		Dynamic copyTo_dyn();

		virtual ::org::flixel::util::FlxPoint copyFrom( ::org::flixel::util::FlxPoint point);
		Dynamic copyFrom_dyn();

		virtual ::org::flixel::util::FlxPoint make( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic make_dyn();

		Float y;
		Float x;
};

} // end namespace org
} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_org_flixel_util_FlxPoint */ 
