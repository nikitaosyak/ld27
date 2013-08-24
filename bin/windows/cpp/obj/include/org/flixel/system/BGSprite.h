#ifndef INCLUDED_org_flixel_system_BGSprite
#define INCLUDED_org_flixel_system_BGSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxSprite.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS3(org,flixel,system,BGSprite)
namespace org{
namespace flixel{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  BGSprite_obj : public ::org::flixel::FlxSprite_obj{
	public:
		typedef ::org::flixel::FlxSprite_obj super;
		typedef BGSprite_obj OBJ_;
		BGSprite_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BGSprite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BGSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BGSprite"); }

		virtual Void draw( );

};

} // end namespace org
} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_org_flixel_system_BGSprite */ 
