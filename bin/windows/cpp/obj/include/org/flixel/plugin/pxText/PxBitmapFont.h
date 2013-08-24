#ifndef INCLUDED_org_flixel_plugin_pxText_PxBitmapFont
#define INCLUDED_org_flixel_plugin_pxText_PxBitmapFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(org,flixel,plugin,pxText,HelperSymbol)
HX_DECLARE_CLASS4(org,flixel,plugin,pxText,PxBitmapFont)
HX_DECLARE_CLASS4(org,flixel,system,layer,Node)
namespace org{
namespace flixel{
namespace plugin{
namespace pxText{


class HXCPP_CLASS_ATTRIBUTES  PxBitmapFont_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PxBitmapFont_obj OBJ_;
		PxBitmapFont_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PxBitmapFont_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PxBitmapFont_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PxBitmapFont"); }

		virtual int get_numLetters( );
		Dynamic get_numLetters_dyn();

		virtual ::String get_bitmapDataKey( );
		Dynamic get_bitmapDataKey_dyn();

		::String bitmapDataKey;
		virtual ::flash::display::BitmapData get_pixels( );
		Dynamic get_pixels_dyn();

		::flash::display::BitmapData pixels;
		virtual int bgTileID( ::String AtlasName);
		Dynamic bgTileID_dyn();

		int numLetters;
		virtual int getFontHeight( );
		Dynamic getFontHeight_dyn();

		virtual int getTextWidth( ::String pText,hx::Null< int >  pLetterSpacing,hx::Null< Float >  pFontScale);
		Dynamic getTextWidth_dyn();

		virtual Void render( ::String atlasName,Array< Float > drawData,::String pText,int pColor,int pSecondColor,Float pAlpha,Float pOffsetX,Float pOffsetY,int pLetterSpacing,Float pScale,hx::Null< bool >  pUseColor);
		Dynamic render_dyn();

		virtual Void setGlyph( ::org::flixel::system::layer::Node node,int pCharID,::flash::geom::Rectangle pRect,hx::Null< int >  pOffsetX,hx::Null< int >  pOffsetY,hx::Null< int >  pAdvanceX);
		Dynamic setGlyph_dyn();

		virtual Void dispose( hx::Null< bool >  total);
		Dynamic dispose_dyn();

		virtual ::flash::display::BitmapData prepareAngelCodeBitmapData( ::flash::display::BitmapData pBitmapData,::Xml pXMLData,Array< ::Dynamic > pSymbols);
		Dynamic prepareAngelCodeBitmapData_dyn();

		virtual ::flash::display::BitmapData preparePixelizerBitmapData( ::flash::display::BitmapData pBitmapData,Array< ::Dynamic > pRects);
		Dynamic preparePixelizerBitmapData_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void updateAtlasGlyphs( ::String AtlasName);
		Dynamic updateAtlasGlyphs_dyn();

		virtual Void updateGlyphData( ::org::flixel::system::layer::Node node);
		Dynamic updateGlyphData_dyn();

		virtual ::org::flixel::plugin::pxText::PxBitmapFont loadAngelCode( ::flash::display::BitmapData pBitmapData,::Xml pXMLData);
		Dynamic loadAngelCode_dyn();

		virtual ::org::flixel::plugin::pxText::PxBitmapFont loadPixelizer( ::flash::display::BitmapData pBitmapData,::String pLetters);
		Dynamic loadPixelizer_dyn();

		::String _bitmapDataKey;
		::flash::display::BitmapData _pixels;
		Array< ::Dynamic > _symbols;
		Array< ::Dynamic > _tileRects;
		::flash::geom::Point _point;
		int _maxHeight;
		::String _glyphString;
		::haxe::ds::StringMap _bgTiles;
		::haxe::ds::StringMap _atlasGlyphs;
		int _bgTileID;
		int _num_letters;
		::haxe::ds::IntMap _glyphs;
		static ::haxe::ds::StringMap _storedFonts;
		static ::flash::geom::Point ZERO_POINT;
		static Void store( ::String pHandle,::org::flixel::plugin::pxText::PxBitmapFont pFont);
		static Dynamic store_dyn();

		static ::org::flixel::plugin::pxText::PxBitmapFont fetch( ::String pHandle);
		static Dynamic fetch_dyn();

		static Void clearStorage( );
		static Dynamic clearStorage_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace pxText

#endif /* INCLUDED_org_flixel_plugin_pxText_PxBitmapFont */ 
