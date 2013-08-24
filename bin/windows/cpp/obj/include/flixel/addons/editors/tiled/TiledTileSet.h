#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#define INCLUDED_flixel_addons_editors_tiled_TiledTileSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTileSet)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledTileSet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledTileSet_obj OBJ_;
		TiledTileSet_obj();
		Void __construct(Dynamic data);

	public:
		static hx::ObjectPtr< TiledTileSet_obj > __new(Dynamic data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TiledTileSet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledTileSet"); }

		virtual ::flash::geom::Rectangle getRect( int ID);
		Dynamic getRect_dyn();

		virtual ::flixel::addons::editors::tiled::TiledPropertySet getProperties( int ID);
		Dynamic getProperties_dyn();

		virtual ::flixel::addons::editors::tiled::TiledPropertySet getPropertiesByGid( int Gid);
		Dynamic getPropertiesByGid_dyn();

		virtual int toGid( int ID);
		Dynamic toGid_dyn();

		virtual int fromGid( int Gid);
		Dynamic fromGid_dyn();

		virtual bool hasGid( int Gid);
		Dynamic hasGid_dyn();

		Array< ::Dynamic > tileProps;
		::flixel::addons::editors::tiled::TiledPropertySet properties;
		int numCols;
		int numRows;
		int numTiles;
		::String imageSource;
		int margin;
		int spacing;
		int tileHeight;
		int tileWidth;
		::String name;
		int firstGID;
};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledTileSet */ 
