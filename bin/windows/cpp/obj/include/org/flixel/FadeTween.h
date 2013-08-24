#ifndef INCLUDED_org_flixel_FadeTween
#define INCLUDED_org_flixel_FadeTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,flixel,FadeTween)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FadeTween_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FadeTween_obj OBJ_;
		FadeTween_obj();
		Void __construct(Float StartValue,Float EndValue,Float Duration,Dynamic Ease);

	public:
		static hx::ObjectPtr< FadeTween_obj > __new(Float StartValue,Float EndValue,Float Duration,Dynamic Ease);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FadeTween_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FadeTween"); }

		virtual Float get_value( );
		Dynamic get_value_dyn();

		Float value;
		virtual bool get_finished( );
		Dynamic get_finished_dyn();

		bool finished;
		virtual Float set_progress( Float value);
		Dynamic set_progress_dyn();

		virtual Float get_progress( );
		Dynamic get_progress_dyn();

		Float _progress;
		Float duration;
		Float totalChange;
		Float startValue;
		Dynamic easingFunction;
		Dynamic &easingFunction_dyn() { return easingFunction;}
		virtual Void destroy( );
		Dynamic destroy_dyn();

		static Float linear( Float t,Float b,Float c,Float d);
		static Dynamic linear_dyn();

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FadeTween */ 
