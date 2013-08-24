#ifndef INCLUDED_org_flixel_system_input_FlxJoyButton
#define INCLUDED_org_flixel_system_input_FlxJoyButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flixel,system,input,FlxJoyButton)
namespace org{
namespace flixel{
namespace system{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxJoyButton_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxJoyButton_obj OBJ_;
		FlxJoyButton_obj();
		Void __construct(int id,hx::Null< int >  __o_current,hx::Null< int >  __o_last);

	public:
		static hx::ObjectPtr< FlxJoyButton_obj > __new(int id,hx::Null< int >  __o_current,hx::Null< int >  __o_last);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxJoyButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxJoyButton"); }

		virtual Void reset( );
		Dynamic reset_dyn();

		int last;
		int current;
		int id;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_FlxJoyButton */ 
