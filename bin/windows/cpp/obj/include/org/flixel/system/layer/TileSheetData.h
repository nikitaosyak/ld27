#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#define INCLUDED_org_flixel_system_layer_TileSheetData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS4(org,flixel,plugin,texturepacker,Frame)
HX_DECLARE_CLASS4(org,flixel,plugin,texturepacker,TexturePackerData)
HX_DECLARE_CLASS4(org,flixel,system,layer,TileSheetData)
HX_DECLARE_CLASS4(org,flixel,system,layer,TileSheetExt)
HX_DECLARE_CLASS5(org,flixel,system,layer,frames,FlxFrame)
HX_DECLARE_CLASS5(org,flixel,system,layer,frames,FlxSpriteFrames)
namespace org{
namespace flixel{
namespace system{
namespace layer{


class HXCPP_CLASS_ATTRIBUTES  TileSheetData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileSheetData_obj OBJ_;
		TileSheetData_obj();
		Void __construct(::org::flixel::system::layer::TileSheetExt tileSheet);

	public:
		static hx::ObjectPtr< TileSheetData_obj > __new(::org::flixel::system::layer::TileSheetExt tileSheet);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TileSheetData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileSheetData"); }

		virtual Void destroyFrameBitmapDatas( );
		Dynamic destroyFrameBitmapDatas_dyn();

		virtual ::org::flixel::system::layer::frames::FlxFrame addTexturePackerFrame( ::org::flixel::plugin::texturepacker::Frame frameData,hx::Null< int >  startX,hx::Null< int >  startY);
		Dynamic addTexturePackerFrame_dyn();

		virtual ::org::flixel::system::layer::frames::FlxSpriteFrames getTexturePackerFrames( ::org::flixel::plugin::texturepacker::TexturePackerData data,hx::Null< int >  startX,hx::Null< int >  startY);
		Dynamic getTexturePackerFrames_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual int addTileRect( ::flash::geom::Rectangle tileRect,::flash::geom::Point point);
		Dynamic addTileRect_dyn();

		virtual bool containsFrame( ::String key);
		Dynamic containsFrame_dyn();

		virtual ::org::flixel::system::layer::frames::FlxFrame addSpriteSheetFrame( ::flash::geom::Rectangle rect,::flash::geom::Point point);
		Dynamic addSpriteSheetFrame_dyn();

		virtual ::String getSpriteSheetFrameKey( ::flash::geom::Rectangle rect,::flash::geom::Point point);
		Dynamic getSpriteSheetFrameKey_dyn();

		virtual ::String getKeyForSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY);
		Dynamic getKeyForSpriteSheetFrames_dyn();

		virtual bool containsSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY);
		Dynamic containsSpriteSheetFrames_dyn();

		virtual ::org::flixel::system::layer::frames::FlxSpriteFrames getSpriteSheetFrames( int width,int height,::flash::geom::Point origin,hx::Null< int >  startX,hx::Null< int >  startY,hx::Null< int >  endX,hx::Null< int >  endY,hx::Null< int >  xSpacing,hx::Null< int >  ySpacing);
		Dynamic getSpriteSheetFrames_dyn();

		virtual ::org::flixel::system::layer::frames::FlxFrame getFrame( ::String name);
		Dynamic getFrame_dyn();

		::haxe::ds::StringMap flxFrames;
		::haxe::ds::StringMap flxSpriteFrames;
		::org::flixel::system::layer::TileSheetExt tileSheet;
		static Array< ::Dynamic > tileSheetData;
		static ::org::flixel::system::layer::TileSheetData addTileSheet( ::flash::display::BitmapData bitmapData);
		static Dynamic addTileSheet_dyn();

		static bool containsTileSheet( ::flash::display::BitmapData bitmapData);
		static Dynamic containsTileSheet_dyn();

		static ::org::flixel::system::layer::TileSheetData getTileSheet( ::flash::display::BitmapData bitmapData);
		static Dynamic getTileSheet_dyn();

		static Void removeTileSheet( ::org::flixel::system::layer::TileSheetData tileSheetObj);
		static Dynamic removeTileSheet_dyn();

		static Void clear( );
		static Dynamic clear_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_org_flixel_system_layer_TileSheetData */ 
