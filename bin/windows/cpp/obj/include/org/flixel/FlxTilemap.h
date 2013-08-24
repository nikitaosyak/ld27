#ifndef INCLUDED_org_flixel_FlxTilemap
#define INCLUDED_org_flixel_FlxTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxObject.h>
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxPath)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS2(org,flixel,FlxTilemap)
HX_DECLARE_CLASS3(org,flixel,system,FlxTile)
HX_DECLARE_CLASS3(org,flixel,system,FlxTilemapBuffer)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
HX_DECLARE_CLASS3(org,flixel,util,FlxRect)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxTilemap_obj : public ::org::flixel::FlxObject_obj{
	public:
		typedef ::org::flixel::FlxObject_obj super;
		typedef FlxTilemap_obj OBJ_;
		FlxTilemap_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxTilemap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTilemap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTilemap"); }

		virtual bool set_forceComplexRender( bool value);

		virtual Void updateBuffers( );
		Dynamic updateBuffers_dyn();

		virtual ::org::flixel::FlxSprite tileToFlxSprite( int X,int Y,hx::Null< int >  NewTile);
		Dynamic tileToFlxSprite_dyn();

		virtual Void updateFrameData( );

		virtual Void updateTile( int Index);
		Dynamic updateTile_dyn();

		virtual Void autoTile( int Index);
		Dynamic autoTile_dyn();

		virtual ::org::flixel::util::FlxPoint rayHit( ::org::flixel::util::FlxPoint Start,::org::flixel::util::FlxPoint End,hx::Null< Float >  Resolution);
		Dynamic rayHit_dyn();

		virtual bool ray( ::org::flixel::util::FlxPoint Start,::org::flixel::util::FlxPoint End,::org::flixel::util::FlxPoint Result,hx::Null< Float >  Resolution);
		Dynamic ray_dyn();

		virtual ::org::flixel::util::FlxRect getBounds( ::org::flixel::util::FlxRect Bounds);
		Dynamic getBounds_dyn();

		virtual Void follow( ::org::flixel::FlxCamera Camera,hx::Null< int >  Border,hx::Null< bool >  UpdateWorld);
		Dynamic follow_dyn();

		virtual Void setTileProperties( int Tile,hx::Null< int >  AllowCollisions,Dynamic Callback,::Class CallbackFilter,hx::Null< int >  Range);
		Dynamic setTileProperties_dyn();

		virtual bool setTileByIndex( int Index,int Tile,hx::Null< bool >  UpdateGraphics);
		Dynamic setTileByIndex_dyn();

		virtual bool setTile( int X,int Y,int Tile,hx::Null< bool >  UpdateGraphics);
		Dynamic setTile_dyn();

		virtual Array< ::Dynamic > getTileCoords( int Index,hx::Null< bool >  Midpoint);
		Dynamic getTileCoords_dyn();

		virtual Array< int > getTileInstances( int Index);
		Dynamic getTileInstances_dyn();

		virtual int getTileByIndex( int Index);
		Dynamic getTileByIndex_dyn();

		virtual int getTile( int X,int Y);
		Dynamic getTile_dyn();

		virtual bool overlapsPoint( ::org::flixel::util::FlxPoint point,hx::Null< bool >  InScreenSpace,::org::flixel::FlxCamera Camera);

		virtual bool overlapsWithCallback( ::org::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  FlipCallbackParams,::org::flixel::util::FlxPoint Position);
		Dynamic overlapsWithCallback_dyn();

		virtual bool overlapsAt( Float X,Float Y,::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::org::flixel::FlxCamera Camera);

		virtual bool overlaps( ::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::org::flixel::FlxCamera Camera);

		virtual Void walkPath( Array< int > Data,int Start,Array< ::Dynamic > Points);
		Dynamic walkPath_dyn();

		virtual Array< int > computePathDistance( int StartIndex,int EndIndex,bool WideDiagonal);
		Dynamic computePathDistance_dyn();

		virtual Void raySimplifyPath( Array< ::Dynamic > Points);
		Dynamic raySimplifyPath_dyn();

		virtual Void simplifyPath( Array< ::Dynamic > Points);
		Dynamic simplifyPath_dyn();

		virtual ::org::flixel::FlxPath findPath( ::org::flixel::util::FlxPoint Start,::org::flixel::util::FlxPoint End,hx::Null< bool >  Simplify,hx::Null< bool >  RaySimplify,hx::Null< bool >  WideDiagonal);
		Dynamic findPath_dyn();

		virtual Void setDirty( hx::Null< bool >  Dirty);
		Dynamic setDirty_dyn();

		virtual Array< int > getData( hx::Null< bool >  Simple);
		Dynamic getData_dyn();

		virtual Void draw( );

		virtual Void drawDebugOnCamera( ::org::flixel::FlxCamera Camera);

		virtual Void drawTilemap( ::org::flixel::system::FlxTilemapBuffer Buffer,::org::flixel::FlxCamera Camera);
		Dynamic drawTilemap_dyn();

		virtual Void update( );

		virtual ::org::flixel::FlxTilemap loadMap( Dynamic MapData,Dynamic TileGraphic,hx::Null< int >  TileWidth,hx::Null< int >  TileHeight,hx::Null< int >  AutoTile,hx::Null< int >  StartingIndex,hx::Null< int >  DrawIndex,hx::Null< int >  CollideIndex,hx::Null< int >  RepeatX,hx::Null< int >  RepeatY);
		Dynamic loadMap_dyn();

		virtual Void destroy( );

		Float tileScaleHack;
		int _repeatY;
		int _repeatX;
		Array< int > _rectIDs;
		::flash::geom::Point _helperPoint;
		int _startingIndex;
		bool _lastVisualDebug;
		Array< ::Dynamic > _tileObjects;
		int _tileHeight;
		int _tileWidth;
		Array< int > _data;
		Array< ::Dynamic > _buffers;
		::flash::display::BitmapData _tiles;
		::flash::geom::Rectangle _flashRect;
		::flash::geom::Point _flashPoint;
		int totalTiles;
		int heightInTiles;
		int widthInTiles;
		int _auto;
		static ::String imgAuto;
		static ::String imgAutoAlt;
		static ::String arrayToCSV( Array< int > Data,int Width,hx::Null< bool >  Invert);
		static Dynamic arrayToCSV_dyn();

		static ::String bitmapToCSV( ::flash::display::BitmapData bitmapData,hx::Null< bool >  Invert,hx::Null< int >  Scale,Array< int > ColorMap);
		static Dynamic bitmapToCSV_dyn();

		static ::String imageToCSV( Dynamic ImageFile,hx::Null< bool >  Invert,hx::Null< int >  Scale);
		static Dynamic imageToCSV_dyn();

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxTilemap */ 
