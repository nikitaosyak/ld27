#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#define INCLUDED_flixel_addons_editors_tiled_TiledPropertySet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledPropertySet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledPropertySet_obj OBJ_;
		TiledPropertySet_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TiledPropertySet_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TiledPropertySet_obj();

		HX_DO_RTTI;
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledPropertySet"); }

		::haxe::ds::StringMap keys;
		virtual Void extend( ::haxe::xml::Fast Source);
		Dynamic extend_dyn();

		virtual Dynamic keysIterator( );
		Dynamic keysIterator_dyn();

		virtual ::String resolve( ::String Name);
		Dynamic resolve_dyn();

		virtual bool contains( ::String Key);
		Dynamic contains_dyn();

		virtual ::String get( ::String Key);
		Dynamic get_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledPropertySet */ 
