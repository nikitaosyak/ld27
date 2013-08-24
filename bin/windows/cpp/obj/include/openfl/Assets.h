#ifndef INCLUDED_openfl_Assets
#define INCLUDED_openfl_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,MovieClip)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,media,Sound)
HX_DECLARE_CLASS2(flash,text,Font)
HX_DECLARE_CLASS2(flash,utils,ByteArray)
HX_DECLARE_CLASS2(flash,utils,IDataInput)
HX_DECLARE_CLASS2(flash,utils,IDataOutput)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(openfl,Assets)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Assets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Assets_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Assets"); }

		static ::haxe::ds::StringMap cachedBitmapData;
		static Array< ::String > id;
		static ::haxe::ds::StringMap library;
		static ::haxe::ds::StringMap path;
		static ::haxe::ds::StringMap type;
		static bool initialized;
		static Void initialize( );
		static Dynamic initialize_dyn();

		static ::flash::display::BitmapData getBitmapData( ::String id,hx::Null< bool >  useCache);
		static Dynamic getBitmapData_dyn();

		static ::flash::utils::ByteArray getBytes( ::String id);
		static Dynamic getBytes_dyn();

		static ::flash::text::Font getFont( ::String id);
		static Dynamic getFont_dyn();

		static ::flash::display::MovieClip getMovieClip( ::String id);
		static Dynamic getMovieClip_dyn();

		static ::flash::media::Sound getSound( ::String id);
		static Dynamic getSound_dyn();

		static ::String getText( ::String id);
		static Dynamic getText_dyn();

		static Array< ::String > get_id( );
		static Dynamic get_id_dyn();

		static ::haxe::ds::StringMap get_library( );
		static Dynamic get_library_dyn();

		static ::haxe::ds::StringMap get_path( );
		static Dynamic get_path_dyn();

		static ::haxe::ds::StringMap get_type( );
		static Dynamic get_type_dyn();

};

} // end namespace openfl

#endif /* INCLUDED_openfl_Assets */ 
