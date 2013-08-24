#ifndef INCLUDED_org_flixel_system_layer_Node
#define INCLUDED_org_flixel_system_layer_Node

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS4(org,flixel,plugin,texturepacker,TexturePackerData)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
HX_DECLARE_CLASS4(org,flixel,system,layer,Node)
HX_DECLARE_CLASS5(org,flixel,system,layer,frames,FlxSpriteFrames)
namespace org{
namespace flixel{
namespace system{
namespace layer{


class HXCPP_CLASS_ATTRIBUTES  Node_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Node_obj OBJ_;
		Node_obj();
		Void __construct(::org::flixel::system::layer::Atlas atlas,::flash::geom::Rectangle rect,::flash::display::BitmapData item,::String __o_key);

	public:
		static hx::ObjectPtr< Node_obj > __new(::org::flixel::system::layer::Atlas atlas,::flash::geom::Rectangle rect,::flash::display::BitmapData item,::String __o_key);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Node_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Node"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual int addTileRect( ::flash::geom::Rectangle tileRect,::flash::geom::Point point);
		Dynamic addTileRect_dyn();

		virtual ::org::flixel::system::layer::frames::FlxSpriteFrames getTexturePackerFrames( ::org::flixel::plugin::texturepacker::TexturePackerData data);
		Dynamic getTexturePackerFrames_dyn();

		virtual ::org::flixel::system::layer::frames::FlxSpriteFrames getSpriteSheetFrames( int frameWidth,int frameHeight,::flash::geom::Point origin,hx::Null< int >  startX,hx::Null< int >  startY,hx::Null< int >  endX,hx::Null< int >  endY,hx::Null< int >  xSpacing,hx::Null< int >  ySpacing);
		Dynamic getSpriteSheetFrames_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_y( );
		Dynamic get_y_dyn();

		virtual int get_x( );
		Dynamic get_x_dyn();

		int height;
		int width;
		int y;
		int x;
		virtual bool canPlace( int width,int height);
		Dynamic canPlace_dyn();

		virtual bool get_isEmpty( );
		Dynamic get_isEmpty_dyn();

		bool isEmpty;
		::String key;
		::flash::geom::Point point;
		::flash::geom::Rectangle rect;
		::org::flixel::system::layer::Node right;
		::org::flixel::system::layer::Node left;
		::flash::display::BitmapData item;
		::org::flixel::system::layer::Atlas atlas;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_org_flixel_system_layer_Node */ 
