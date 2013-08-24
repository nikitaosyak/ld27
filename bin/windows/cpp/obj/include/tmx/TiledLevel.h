#ifndef INCLUDED_tmx_TiledLevel
#define INCLUDED_tmx_TiledLevel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/editors/tiled/TiledMap.h>
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObject)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObjectGroup)
HX_DECLARE_CLASS3(flx,state,level,LevelBase)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxState)
HX_DECLARE_CLASS2(org,flixel,FlxTilemap)
HX_DECLARE_CLASS2(org,flixel,FlxTypedGroup)
HX_DECLARE_CLASS1(tmx,TiledLevel)
namespace tmx{


class HXCPP_CLASS_ATTRIBUTES  TiledLevel_obj : public ::flixel::addons::editors::tiled::TiledMap_obj{
	public:
		typedef ::flixel::addons::editors::tiled::TiledMap_obj super;
		typedef TiledLevel_obj OBJ_;
		TiledLevel_obj();
		Void __construct(Dynamic tiledLevel);

	public:
		static hx::ObjectPtr< TiledLevel_obj > __new(Dynamic tiledLevel);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TiledLevel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledLevel"); }

		virtual bool collideWithLevel( ::org::flixel::FlxObject obj,Dynamic notifyCallback,Dynamic processCallback);
		Dynamic collideWithLevel_dyn();

		virtual Void loadObject( ::flixel::addons::editors::tiled::TiledObject o,::flixel::addons::editors::tiled::TiledObjectGroup g,::flx::state::level::LevelBase state);
		Dynamic loadObject_dyn();

		virtual Void loadObjects( ::flx::state::level::LevelBase state);
		Dynamic loadObjects_dyn();

		Array< ::Dynamic > collidableTileLayers;
		::org::flixel::FlxGroup backgroundTiles;
		::org::flixel::FlxGroup foregroundTiles;
};

} // end namespace tmx

#endif /* INCLUDED_tmx_TiledLevel */ 
