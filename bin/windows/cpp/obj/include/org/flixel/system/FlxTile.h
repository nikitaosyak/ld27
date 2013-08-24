#ifndef INCLUDED_org_flixel_system_FlxTile
#define INCLUDED_org_flixel_system_FlxTile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxObject.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxTilemap)
HX_DECLARE_CLASS3(org,flixel,system,FlxTile)
namespace org{
namespace flixel{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  FlxTile_obj : public ::org::flixel::FlxObject_obj{
	public:
		typedef ::org::flixel::FlxObject_obj super;
		typedef FlxTile_obj OBJ_;
		FlxTile_obj();
		Void __construct(::org::flixel::FlxTilemap Tilemap,int Index,Float Width,Float Height,bool Visible,int AllowCollisions);

	public:
		static hx::ObjectPtr< FlxTile_obj > __new(::org::flixel::FlxTilemap Tilemap,int Index,Float Width,Float Height,bool Visible,int AllowCollisions);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTile_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTile"); }

		virtual Void destroy( );

		int mapIndex;
		int index;
		::org::flixel::FlxTilemap tilemap;
		::Class filter;
		Dynamic callbackFunction;
		Dynamic &callbackFunction_dyn() { return callbackFunction;}
};

} // end namespace org
} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_org_flixel_system_FlxTile */ 
