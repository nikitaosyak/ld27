#ifndef INCLUDED_flx_core_Enemy
#define INCLUDED_flx_core_Enemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxSprite.h>
HX_DECLARE_CLASS2(flx,core,Enemy)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
namespace flx{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Enemy_obj : public ::org::flixel::FlxSprite_obj{
	public:
		typedef ::org::flixel::FlxSprite_obj super;
		typedef Enemy_obj OBJ_;
		Enemy_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Enemy_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Enemy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Enemy"); }

};

} // end namespace flx
} // end namespace core

#endif /* INCLUDED_flx_core_Enemy */ 
