#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#define INCLUDED_flixel_addons_editors_tiled_TiledMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObjectGroup)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTileSet)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledMap_obj OBJ_;
		TiledMap_obj();
		Void __construct(Dynamic Data);

	public:
		static hx::ObjectPtr< TiledMap_obj > __new(Dynamic Data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TiledMap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledMap"); }

		virtual ::flixel::addons::editors::tiled::TiledTileSet getGidOwner( int Gid);
		Dynamic getGidOwner_dyn();

		virtual ::flixel::addons::editors::tiled::TiledObjectGroup getObjectGroup( ::String Name);
		Dynamic getObjectGroup_dyn();

		virtual ::flixel::addons::editors::tiled::TiledLayer getLayer( ::String Name);
		Dynamic getLayer_dyn();

		virtual ::flixel::addons::editors::tiled::TiledTileSet getTileSet( ::String Name);
		Dynamic getTileSet_dyn();

		Array< ::Dynamic > objectGroups;
		Array< ::Dynamic > layers;
		::haxe::ds::StringMap tilesets;
		::haxe::ds::StringMap noLoadHash;
		::flixel::addons::editors::tiled::TiledPropertySet properties;
		int fullHeight;
		int fullWidth;
		int tileHeight;
		int tileWidth;
		int height;
		int width;
		::String orientation;
		::String version;
};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledMap */ 
