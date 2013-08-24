#ifndef INCLUDED_org_flixel_util_FlxMisc
#define INCLUDED_org_flixel_util_FlxMisc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(org,flixel,util,FlxMisc)
namespace org{
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxMisc_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxMisc_obj OBJ_;
		FlxMisc_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxMisc_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxMisc_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxMisc"); }

		static Void openURL( ::String URL);
		static Dynamic openURL_dyn();

		static int getTicks( );
		static Dynamic getTicks_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_org_flixel_util_FlxMisc */ 
