#ifndef INCLUDED_org_flixel_system_debug_LogStyle
#define INCLUDED_org_flixel_system_debug_LogStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flixel,system,debug,LogStyle)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  LogStyle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LogStyle_obj OBJ_;
		LogStyle_obj();
		Void __construct(::String __o_Prefix,::String __o_Color,hx::Null< int >  __o_Size,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined,::String ErrorSound,hx::Null< bool >  __o_OpenConsole,Dynamic CallbackFunction);

	public:
		static hx::ObjectPtr< LogStyle_obj > __new(::String __o_Prefix,::String __o_Color,hx::Null< int >  __o_Size,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined,::String ErrorSound,hx::Null< bool >  __o_OpenConsole,Dynamic CallbackFunction);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LogStyle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LogStyle"); }

		Dynamic callbackFunction;
		bool openConsole;
		::String errorSound;
		bool underlined;
		bool italic;
		bool bold;
		int size;
		::String color;
		::String prefix;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_LogStyle */ 
