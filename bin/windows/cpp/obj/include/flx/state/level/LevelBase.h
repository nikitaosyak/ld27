#ifndef INCLUDED_flx_state_level_LevelBase
#define INCLUDED_flx_state_level_LevelBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxState.h>
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS2(flx,core,Player)
HX_DECLARE_CLASS2(flx,core,PlayerController)
HX_DECLARE_CLASS2(flx,core,SortingGroup)
HX_DECLARE_CLASS3(flx,state,level,LevelBase)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS2(org,flixel,FlxState)
HX_DECLARE_CLASS2(org,flixel,FlxText)
HX_DECLARE_CLASS2(org,flixel,FlxTypedGroup)
HX_DECLARE_CLASS1(tmx,TiledLevel)
namespace flx{
namespace state{
namespace level{


class HXCPP_CLASS_ATTRIBUTES  LevelBase_obj : public ::org::flixel::FlxState_obj{
	public:
		typedef ::org::flixel::FlxState_obj super;
		typedef LevelBase_obj OBJ_;
		LevelBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LevelBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LevelBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LevelBase"); }

		virtual Void destroy( );

		virtual Dynamic remove( Dynamic _tmp_object,hx::Null< bool >  Splice);

		virtual Dynamic add( Dynamic _tmp_object);

		virtual Void onCollide( ::org::flixel::FlxObject some,::org::flixel::FlxObject some2);
		Dynamic onCollide_dyn();

		virtual Void update( );

		virtual Void create( );

		::flx::core::SortingGroup layoutObjects;
		::org::flixel::FlxText helpText;
		::org::flixel::FlxGroup hazards;
		::org::flixel::FlxGroup objects;
		::org::flixel::FlxGroup hud;
		::org::flixel::FlxTypedGroup spawnPlaces;
		::org::flixel::FlxTypedGroup enemies;
		::org::flixel::FlxTypedGroup layout;
		::flx::core::Player player;
		::tmx::TiledLevel level;
		::flx::core::PlayerController controller;
		static Float asRadian;
};

} // end namespace flx
} // end namespace state
} // end namespace level

#endif /* INCLUDED_flx_state_level_LevelBase */ 
