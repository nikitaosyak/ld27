#ifndef INCLUDED_flash_events_Listener
#define INCLUDED_flash_events_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,Listener)
namespace flash{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  Listener_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Listener_obj OBJ_;
		Listener_obj();
		Void __construct(Dynamic listener,bool useCapture,int priority);

	public:
		static hx::ObjectPtr< Listener_obj > __new(Dynamic listener,bool useCapture,int priority);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Listener_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Listener"); }

		virtual bool is( Dynamic listener,bool useCapture);
		Dynamic is_dyn();

		virtual Void dispatchEvent( ::flash::events::Event event);
		Dynamic dispatchEvent_dyn();

		bool useCapture;
		int priority;
		Dynamic listener;
		Dynamic &listener_dyn() { return listener;}
		int id;
		static int __id;
};

} // end namespace flash
} // end namespace events

#endif /* INCLUDED_flash_events_Listener */ 
