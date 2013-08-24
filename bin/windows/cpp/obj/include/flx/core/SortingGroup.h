#ifndef INCLUDED_flx_core_SortingGroup
#define INCLUDED_flx_core_SortingGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxTypedGroup.h>
HX_DECLARE_CLASS2(flx,core,SortingGroup)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxTypedGroup)
namespace flx{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  SortingGroup_obj : public ::org::flixel::FlxTypedGroup_obj{
	public:
		typedef ::org::flixel::FlxTypedGroup_obj super;
		typedef SortingGroup_obj OBJ_;
		SortingGroup_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SortingGroup_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SortingGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SortingGroup"); }

		virtual int sortHandler( Dynamic _tmp_Obj1,Dynamic _tmp_Obj2);

};

} // end namespace flx
} // end namespace core

#endif /* INCLUDED_flx_core_SortingGroup */ 
