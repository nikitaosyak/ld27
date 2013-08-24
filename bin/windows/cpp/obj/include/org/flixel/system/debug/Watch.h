#ifndef INCLUDED_org_flixel_system_debug_Watch
#define INCLUDED_org_flixel_system_debug_Watch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/system/FlxWindow.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(org,flixel,system,FlxWindow)
HX_DECLARE_CLASS4(org,flixel,system,debug,Watch)
HX_DECLARE_CLASS4(org,flixel,system,debug,WatchEntry)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Watch_obj : public ::org::flixel::system::FlxWindow_obj{
	public:
		typedef ::org::flixel::system::FlxWindow_obj super;
		typedef Watch_obj OBJ_;
		Watch_obj();
		Void __construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor);

	public:
		static hx::ObjectPtr< Watch_obj > __new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds,hx::Null< int >  __o_BGColor,hx::Null< int >  __o_TopColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Watch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Watch"); }

		virtual Void updateSize( );

		virtual Void submit( );
		Dynamic submit_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		virtual Void removeEntry( ::org::flixel::system::debug::WatchEntry Entry,int Index);
		Dynamic removeEntry_dyn();

		virtual Void remove( Dynamic AnyObject,::String VariableName,::String QuickWatchName);
		Dynamic remove_dyn();

		virtual Void updateQuickWatch( ::String Name,Dynamic NewValue);
		Dynamic updateQuickWatch_dyn();

		virtual Void add( Dynamic AnyObject,::String VariableName,::String DisplayName);
		Dynamic add_dyn();

		virtual Void destroy( );

		::haxe::ds::StringMap _quickWatchList;
		Array< ::Dynamic > _watching;
		::flash::display::Sprite _values;
		::flash::display::Sprite _names;
		bool editing;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_Watch */ 
