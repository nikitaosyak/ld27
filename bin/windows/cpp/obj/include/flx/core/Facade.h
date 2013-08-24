#ifndef INCLUDED_flx_core_Facade
#define INCLUDED_flx_core_Facade

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flx,core,Facade)
namespace flx{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Facade_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Facade_obj OBJ_;
		Facade_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Facade_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Facade_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Facade"); }

		virtual Void init( );
		Dynamic init_dyn();

		virtual Float getRegen( );
		Dynamic getRegen_dyn();

		virtual Float getAttackSpd( );
		Dynamic getAttackSpd_dyn();

		virtual Float getMoveSpd( );
		Dynamic getMoveSpd_dyn();

		virtual int getArmor( );
		Dynamic getArmor_dyn();

		virtual int getHealth( );
		Dynamic getHealth_dyn();

		virtual int getXp( );
		Dynamic getXp_dyn();

		Float regen;
		Float attackSpd;
		Float moveSpd;
		int armor;
		int health;
		int xp;
		static ::flx::core::Facade I;
};

} // end namespace flx
} // end namespace core

#endif /* INCLUDED_flx_core_Facade */ 
