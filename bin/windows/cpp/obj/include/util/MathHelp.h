#ifndef INCLUDED_util_MathHelp
#define INCLUDED_util_MathHelp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(util,MathHelp)
namespace util{


class HXCPP_CLASS_ATTRIBUTES  MathHelp_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MathHelp_obj OBJ_;
		MathHelp_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MathHelp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MathHelp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MathHelp"); }

		static Float roundExp( Float value,hx::Null< int >  exp);
		static Dynamic roundExp_dyn();

		static Float deg2rad( Float degValue);
		static Dynamic deg2rad_dyn();

		static Float rad2deg( Float radValue);
		static Dynamic rad2deg_dyn();

		static Float angleApproxDeg( Float value);
		static Dynamic angleApproxDeg_dyn();

		static Float angleApproxRad( Float value);
		static Dynamic angleApproxRad_dyn();

		static Float atanAngleApprox( Float value);
		static Dynamic atanAngleApprox_dyn();

		static bool isInRange( Float value,Float lowerVal,Float upperVal);
		static Dynamic isInRange_dyn();

		static Float randomRange( Float lowerBound,Float upperBound);
		static Dynamic randomRange_dyn();

};

} // end namespace util

#endif /* INCLUDED_util_MathHelp */ 
