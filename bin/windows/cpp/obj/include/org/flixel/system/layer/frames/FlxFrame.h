#ifndef INCLUDED_org_flixel_system_layer_frames_FlxFrame
#define INCLUDED_org_flixel_system_layer_frames_FlxFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS4(org,flixel,system,layer,TileSheetData)
HX_DECLARE_CLASS5(org,flixel,system,layer,frames,FlxFrame)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace org{
namespace flixel{
namespace system{
namespace layer{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES  FlxFrame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxFrame_obj OBJ_;
		FlxFrame_obj();
		Void __construct(::org::flixel::system::layer::TileSheetData tileSheet);

	public:
		static hx::ObjectPtr< FlxFrame_obj > __new(::org::flixel::system::layer::TileSheetData tileSheet);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxFrame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxFrame"); }

		virtual Void destroyBitmapDatas( );
		Dynamic destroyBitmapDatas_dyn();

		virtual ::flash::display::BitmapData getReversedBitmap( );
		Dynamic getReversedBitmap_dyn();

		virtual ::flash::display::BitmapData getBitmap( );
		Dynamic getBitmap_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		::org::flixel::util::FlxPoint center;
		::org::flixel::system::layer::TileSheetData _tileSheet;
		::flash::display::BitmapData _reversedBitmapData;
		::flash::display::BitmapData _bitmapData;
		Float additionalAngle;
		int tileID;
		::org::flixel::util::FlxPoint offset;
		::org::flixel::util::FlxPoint sourceSize;
		bool trimmed;
		bool rotated;
		::flash::geom::Rectangle frame;
		::String name;
		static ::flash::geom::Point POINT;
		static ::flash::geom::Matrix MATRIX;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames

#endif /* INCLUDED_org_flixel_system_layer_frames_FlxFrame */ 
