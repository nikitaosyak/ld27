#ifndef INCLUDED_openfl_LibraryType
#define INCLUDED_openfl_LibraryType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(openfl,LibraryType)
namespace openfl{


class LibraryType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LibraryType_obj OBJ_;

	public:
		LibraryType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("openfl.LibraryType"); }
		::String __ToString() const { return HX_CSTRING("LibraryType.") + tag; }

		static ::openfl::LibraryType SWF;
		static inline ::openfl::LibraryType SWF_dyn() { return SWF; }
		static ::openfl::LibraryType XFL;
		static inline ::openfl::LibraryType XFL_dyn() { return XFL; }
};

} // end namespace openfl

#endif /* INCLUDED_openfl_LibraryType */ 
