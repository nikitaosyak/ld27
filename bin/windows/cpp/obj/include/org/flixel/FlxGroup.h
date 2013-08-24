#ifndef INCLUDED_org_flixel_FlxGroup
#define INCLUDED_org_flixel_FlxGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxTypedGroup.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxTypedGroup)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxGroup_obj : public ::org::flixel::FlxTypedGroup_obj{
	public:
		typedef ::org::flixel::FlxTypedGroup_obj super;
		typedef FlxGroup_obj OBJ_;
		FlxGroup_obj();
		Void __construct(hx::Null< int >  __o_MaxSize);

	public:
		static hx::ObjectPtr< FlxGroup_obj > __new(hx::Null< int >  __o_MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxGroup"); }

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxGroup */ 
