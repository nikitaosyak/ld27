#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#define INCLUDED_flixel_addons_editors_tiled_TiledObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObject)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObjectGroup)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledObject_obj OBJ_;
		TiledObject_obj();
		Void __construct(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledObjectGroup Parent);

	public:
		static hx::ObjectPtr< TiledObject_obj > __new(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledObjectGroup Parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TiledObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledObject"); }

		virtual Void getPoints( ::haxe::xml::Fast Node);
		Dynamic getPoints_dyn();

		Array< ::Dynamic > points;
		int objectType;
		::flixel::addons::editors::tiled::TiledPropertySet shared;
		::flixel::addons::editors::tiled::TiledPropertySet custom;
		int gid;
		Float angle;
		int height;
		int width;
		int y;
		int x;
		::String type;
		::String name;
		::haxe::xml::Fast xmlData;
		::flixel::addons::editors::tiled::TiledObjectGroup group;
};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledObject */ 
