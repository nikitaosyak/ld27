#ifndef INCLUDED_haxe_io_Path
#define INCLUDED_haxe_io_Path

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Path)
namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  Path_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Path_obj OBJ_;
		Path_obj();
		Void __construct(::String path);

	public:
		static hx::ObjectPtr< Path_obj > __new(::String path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Path_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Path"); }

		bool backslash;
		::String ext;
		::String file;
		::String dir;
		static ::String directory( ::String path);
		static Dynamic directory_dyn();

		static ::String addTrailingSlash( ::String path);
		static Dynamic addTrailingSlash_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_Path */ 
