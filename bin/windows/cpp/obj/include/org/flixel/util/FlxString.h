#ifndef INCLUDED_org_flixel_util_FlxString
#define INCLUDED_org_flixel_util_FlxString

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
HX_DECLARE_CLASS3(org,flixel,util,FlxString)
namespace org{
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxString_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxString_obj OBJ_;
		FlxString_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxString_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxString_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxString"); }

		static ::String formatTicks( int StartTicks,int EndTicks);
		static Dynamic formatTicks_dyn();

		static ::String formatTime( Float Seconds,hx::Null< bool >  ShowMS);
		static Dynamic formatTime_dyn();

		static ::String formatArray( Dynamic AnyArray);
		static Dynamic formatArray_dyn();

		static ::String formatFlxPoint( ::org::flixel::util::FlxPoint Point,int Precision);
		static Dynamic formatFlxPoint_dyn();

		static ::String formatStringMap( ::haxe::ds::StringMap AnyMap);
		static Dynamic formatStringMap_dyn();

		static ::String formatMoney( Float Amount,hx::Null< bool >  ShowDecimal,hx::Null< bool >  EnglishStyle);
		static Dynamic formatMoney_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_org_flixel_util_FlxString */ 
