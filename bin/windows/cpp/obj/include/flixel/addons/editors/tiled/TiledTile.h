#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTile
#define INCLUDED_flixel_addons_editors_tiled_TiledTile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTile)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledTile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledTile_obj OBJ_;
		TiledTile_obj();
		Void __construct(int OriginalId);

	public:
		static hx::ObjectPtr< TiledTile_obj > __new(int OriginalId);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TiledTile_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledTile"); }

		virtual int resolveTilesetID( );
		Dynamic resolveTilesetID_dyn();

		virtual Void resolveFlipAndRotation( );
		Dynamic resolveFlipAndRotation_dyn();

		int rotate;
		bool isFlipVertically;
		bool isFlipHorizontally;
		int tilesetID;
		int tileID;
};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledTile */ 
