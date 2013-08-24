#ifndef INCLUDED_org_flixel_system_input_XBOX_BUTTON_IDS
#define INCLUDED_org_flixel_system_input_XBOX_BUTTON_IDS

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flixel,system,input,XBOX_BUTTON_IDS)
namespace org{
namespace flixel{
namespace system{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  XBOX_BUTTON_IDS_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef XBOX_BUTTON_IDS_obj OBJ_;
		XBOX_BUTTON_IDS_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< XBOX_BUTTON_IDS_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~XBOX_BUTTON_IDS_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("XBOX_BUTTON_IDS"); }

		static int A_BUTTON;
		static int B_BUTTON;
		static int X_BUTTON;
		static int Y_BUTTON;
		static int LB_BUTTON;
		static int RB_BUTTON;
		static int BACK_BUTTON;
		static int START_BUTTON;
		static int LEFT_ANALOGUE_BUTTON;
		static int RIGHT_ANALOGUE_BUTTON;
		static int LEFT_ANALOGUE_X;
		static int LEFT_ANALOGUE_Y;
		static int RIGHT_ANALOGUE_X;
		static int RIGHT_ANALOGUE_Y;
		static int TRIGGER;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_XBOX_BUTTON_IDS */ 
