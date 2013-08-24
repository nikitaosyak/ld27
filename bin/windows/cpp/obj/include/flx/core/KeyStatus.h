#ifndef INCLUDED_flx_core_KeyStatus
#define INCLUDED_flx_core_KeyStatus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flx,core,KeyStatus)
namespace flx{
namespace core{


class KeyStatus_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef KeyStatus_obj OBJ_;

	public:
		KeyStatus_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("flx.core.KeyStatus"); }
		::String __ToString() const { return HX_CSTRING("KeyStatus.") + tag; }

		static ::flx::core::KeyStatus FINISH;
		static inline ::flx::core::KeyStatus FINISH_dyn() { return FINISH; }
		static ::flx::core::KeyStatus START;
		static inline ::flx::core::KeyStatus START_dyn() { return START; }
};

} // end namespace flx
} // end namespace core

#endif /* INCLUDED_flx_core_KeyStatus */ 
