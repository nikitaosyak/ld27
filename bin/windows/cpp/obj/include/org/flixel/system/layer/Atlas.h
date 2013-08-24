#ifndef INCLUDED_org_flixel_system_layer_Atlas
#define INCLUDED_org_flixel_system_layer_Atlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
HX_DECLARE_CLASS4(org,flixel,system,layer,Node)
HX_DECLARE_CLASS4(org,flixel,system,layer,TileSheetData)
namespace org{
namespace flixel{
namespace system{
namespace layer{


class HXCPP_CLASS_ATTRIBUTES  Atlas_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Atlas_obj OBJ_;
		Atlas_obj();
		Void __construct(::String name,int width,int height,hx::Null< int >  __o_borderX,hx::Null< int >  __o_borderY,::flash::display::BitmapData bitmapData);

	public:
		static hx::ObjectPtr< Atlas_obj > __new(::String name,int width,int height,hx::Null< int >  __o_borderX,hx::Null< int >  __o_borderY,::flash::display::BitmapData bitmapData);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Atlas_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Atlas"); }

		virtual ::org::flixel::system::layer::Node findNodeToInsert( int insertWidth,int insertHeight);
		Dynamic findNodeToInsert_dyn();

		virtual Void deleteSubtree( ::org::flixel::system::layer::Node node);
		Dynamic deleteSubtree_dyn();

		virtual ::org::flixel::system::layer::Atlas clone( ::String cloneName);
		Dynamic clone_dyn();

		virtual ::org::flixel::system::layer::Node clearAndFillWith( ::flash::display::BitmapData bmd);
		Dynamic clearAndFillWith_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void generateAtlasFromQueue( );
		Dynamic generateAtlasFromQueue_dyn();

		virtual Void addToQueue( ::flash::display::BitmapData data,::String key);
		Dynamic addToQueue_dyn();

		virtual Void createQueue( );
		Dynamic createQueue_dyn();

		virtual int bitmapSorter( ::flash::display::BitmapData bmd1,::flash::display::BitmapData bmd2);
		Dynamic bitmapSorter_dyn();

		virtual int indexOf( Array< ::Dynamic > bitmaps,::flash::display::BitmapData bmd);
		Dynamic indexOf_dyn();

		virtual bool addNodes( Array< ::Dynamic > bitmaps,Array< ::String > keys);
		Dynamic addNodes_dyn();

		virtual ::org::flixel::system::layer::Node getNodeByBitmap( ::flash::display::BitmapData bitmap);
		Dynamic getNodeByBitmap_dyn();

		virtual ::org::flixel::system::layer::Node getNodeByKey( ::String key);
		Dynamic getNodeByKey_dyn();

		virtual bool hasNodeWithName( ::String nodeName);
		Dynamic hasNodeWithName_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		int height;
		virtual int get_width( );
		Dynamic get_width_dyn();

		int width;
		virtual ::org::flixel::system::layer::Node addNode( ::flash::display::BitmapData data,::String key);
		Dynamic addNode_dyn();

		virtual Void resize( int newWidth,int newHeight);
		Dynamic resize_dyn();

		virtual Void redrawAll( );
		Dynamic redrawAll_dyn();

		virtual Void redrawNode( ::org::flixel::system::layer::Node node);
		Dynamic redrawNode_dyn();

		virtual Void rebuildAtlas( );
		Dynamic rebuildAtlas_dyn();

		virtual ::org::flixel::system::layer::TileSheetData createTileSheetData( ::flash::display::BitmapData bitmapData);
		Dynamic createTileSheetData_dyn();

		bool _fromBitmapData;
		::org::flixel::system::layer::TileSheetData _tileSheetData;
		int borderY;
		int borderX;
		::flash::display::BitmapData atlasBitmapData;
		::haxe::ds::StringMap nodes;
		::String name;
		::org::flixel::system::layer::Node root;
		Dynamic tempStorage;
		int _useCount;
		static ::haxe::ds::StringMap _atlasCache;
		static bool isExists( ::String key);
		static Dynamic isExists_dyn();

		static ::org::flixel::system::layer::Atlas getAtlas( ::String Key,::flash::display::BitmapData BmData,hx::Null< bool >  Unique,hx::Null< int >  Width,hx::Null< int >  Height);
		static Dynamic getAtlas_dyn();

		static ::org::flixel::system::layer::Atlas getAtlasByKey( ::String Key);
		static Dynamic getAtlasByKey_dyn();

		static ::String getUniqueKey( ::String Key);
		static Dynamic getUniqueKey_dyn();

		static Void removeAtlas( ::org::flixel::system::layer::Atlas atlas,hx::Null< bool >  destroy);
		static Dynamic removeAtlas_dyn();

		static Void clearAtlasCache( );
		static Dynamic clearAtlasCache_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_org_flixel_system_layer_Atlas */ 
