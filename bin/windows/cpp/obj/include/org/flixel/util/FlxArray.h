#ifndef INCLUDED_org_flixel_util_FlxArray
#define INCLUDED_org_flixel_util_FlxArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(org,flixel,util,FlxArray)
namespace org{
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxArray_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxArray_obj OBJ_;
		FlxArray_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxArray_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxArray_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxArray"); }

		static int indexOf( Dynamic array,Dynamic whatToFind,hx::Null< int >  fromIndex);
		static Dynamic indexOf_dyn();

		static Void setLength( Dynamic array,int newLength);
		static Dynamic setLength_dyn();

		static Dynamic shuffle( Dynamic Objects,int HowManyTimes);
		static Dynamic shuffle_dyn();

		static Dynamic getRandom( Dynamic Objects,hx::Null< int >  StartIndex,hx::Null< int >  Length);
		static Dynamic getRandom_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_org_flixel_util_FlxArray */ 
