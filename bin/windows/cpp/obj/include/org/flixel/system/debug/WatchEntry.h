#ifndef INCLUDED_org_flixel_system_debug_WatchEntry
#define INCLUDED_org_flixel_system_debug_WatchEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS2(flash,text,TextFormat)
HX_DECLARE_CLASS4(org,flixel,system,debug,WatchEntry)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  WatchEntry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WatchEntry_obj OBJ_;
		WatchEntry_obj();
		Void __construct(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom);

	public:
		static hx::ObjectPtr< WatchEntry_obj > __new(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~WatchEntry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("WatchEntry"); }

		virtual Void doneEditing( );
		Dynamic doneEditing_dyn();

		virtual Void submit( );
		Dynamic submit_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void onKeyUp( ::flash::events::KeyboardEvent FlashEvent);
		Dynamic onKeyUp_dyn();

		virtual Void onMouseUp( ::flash::events::MouseEvent FlashEvent);
		Dynamic onMouseUp_dyn();

		virtual bool updateValue( );
		Dynamic updateValue_dyn();

		virtual Void updateWidth( Float NameWidth,Float ValueWidth);
		Dynamic updateWidth_dyn();

		virtual Void setY( Float Y);
		Dynamic setY_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		bool quickWatch;
		::flash::text::TextFormat _blackText;
		::flash::text::TextFormat _whiteText;
		Dynamic oldValue;
		bool editing;
		::flash::text::TextField valueDisplay;
		::flash::text::TextField nameDisplay;
		::String custom;
		::String field;
		Dynamic object;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_WatchEntry */ 
