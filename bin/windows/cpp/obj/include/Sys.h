#ifndef INCLUDED_Sys
#define INCLUDED_Sys

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Sys)


class HXCPP_CLASS_ATTRIBUTES  Sys_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sys_obj OBJ_;
		Sys_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Sys_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Sys_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sys"); }

		static Void print( Dynamic v);
		static Dynamic print_dyn();

		static Void println( Dynamic v);
		static Dynamic println_dyn();

		static ::String getCwd( );
		static Dynamic getCwd_dyn();

		static Void setCwd( ::String s);
		static Dynamic setCwd_dyn();

		static ::String executablePath( );
		static Dynamic executablePath_dyn();

		static Dynamic get_cwd;
		static Dynamic &get_cwd_dyn() { return get_cwd;}
		static Dynamic set_cwd;
		static Dynamic &set_cwd_dyn() { return set_cwd;}
		static Dynamic sys_exe_path;
		static Dynamic &sys_exe_path_dyn() { return sys_exe_path;}
};


#endif /* INCLUDED_Sys */ 
