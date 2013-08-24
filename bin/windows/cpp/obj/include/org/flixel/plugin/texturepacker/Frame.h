#ifndef INCLUDED_org_flixel_plugin_texturepacker_Frame
#define INCLUDED_org_flixel_plugin_texturepacker_Frame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS4(org,flixel,plugin,texturepacker,Frame)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace org{
namespace flixel{
namespace plugin{
namespace texturepacker{


class HXCPP_CLASS_ATTRIBUTES  Frame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Frame_obj OBJ_;
		Frame_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Frame_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Frame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Frame"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		::org::flixel::util::FlxPoint offset;
		::org::flixel::util::FlxPoint sourceSize;
		bool trimmed;
		bool rotated;
		::flash::geom::Rectangle frame;
		::String name;
};

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace texturepacker

#endif /* INCLUDED_org_flixel_plugin_texturepacker_Frame */ 
