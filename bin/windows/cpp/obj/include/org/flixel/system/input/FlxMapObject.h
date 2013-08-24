#ifndef INCLUDED_org_flixel_system_input_FlxMapObject
#define INCLUDED_org_flixel_system_input_FlxMapObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flixel,system,input,FlxMapObject)
namespace org{
namespace flixel{
namespace system{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxMapObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxMapObject_obj OBJ_;
		FlxMapObject_obj();
		Void __construct(::String name,int current,int last);

	public:
		static hx::ObjectPtr< FlxMapObject_obj > __new(::String name,int current,int last);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxMapObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxMapObject"); }

		int last;
		int current;
		::String name;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_FlxMapObject */ 
