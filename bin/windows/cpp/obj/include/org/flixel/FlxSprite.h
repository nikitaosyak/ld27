#ifndef INCLUDED_org_flixel_FlxSprite
#define INCLUDED_org_flixel_FlxSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxObject.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,BlendMode)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,filters,BitmapFilter)
HX_DECLARE_CLASS2(flash,geom,ColorTransform)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS4(org,flixel,plugin,texturepacker,TexturePackerData)
HX_DECLARE_CLASS3(org,flixel,system,FlxAnim)
HX_DECLARE_CLASS5(org,flixel,system,layer,frames,FlxFrame)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxSprite_obj : public ::org::flixel::FlxObject_obj{
	public:
		typedef ::org::flixel::FlxObject_obj super;
		typedef FlxSprite_obj OBJ_;
		FlxSprite_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);

	public:
		static hx::ObjectPtr< FlxSprite_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxSprite"); }

		virtual Void resetFrameBitmapDatas( );
		Dynamic resetFrameBitmapDatas_dyn();

		virtual Void nullTextureData( );
		Dynamic nullTextureData_dyn();

		virtual ::flash::display::BitmapData getFlxFrameBitmapData( );
		Dynamic getFlxFrameBitmapData_dyn();

		virtual Void updateFrameData( );

		virtual bool overlapsPoint( ::org::flixel::util::FlxPoint point,hx::Null< bool >  InScreenSpace,::org::flixel::FlxCamera Camera);

		virtual ::flash::display::BlendMode set_blend( ::flash::display::BlendMode value);
		Dynamic set_blend_dyn();

		virtual ::flash::display::BlendMode get_blend( );
		Dynamic get_blend_dyn();

		virtual bool simpleRenderSprite( );
		Dynamic simpleRenderSprite_dyn();

		virtual bool get_simpleRender( );
		Dynamic get_simpleRender_dyn();

		bool simpleRender;
		Float bakedRotation;
		virtual bool set_antialiasing( bool val);
		Dynamic set_antialiasing_dyn();

		bool antialiasing;
		virtual Void removeAllFilters( );
		Dynamic removeAllFilters_dyn();

		virtual Void removeFilter( ::flash::filters::BitmapFilter filter);
		Dynamic removeFilter_dyn();

		virtual Void setClipping( int width,int height);
		Dynamic setClipping_dyn();

		virtual Void addFilter( ::flash::filters::BitmapFilter filter,hx::Null< int >  widthInc,hx::Null< int >  heightInc);
		Dynamic addFilter_dyn();

		virtual Void calcFrame( hx::Null< bool >  AreYouSure);
		Dynamic calcFrame_dyn();

		virtual bool pixelsOverlapPoint( ::org::flixel::util::FlxPoint point,hx::Null< int >  Mask,::org::flixel::FlxCamera Camera);
		Dynamic pixelsOverlapPoint_dyn();

		virtual bool onScreenSprite( ::org::flixel::FlxCamera Camera);
		Dynamic onScreenSprite_dyn();

		virtual bool onScreen( ::org::flixel::FlxCamera Camera);

		virtual ::String set_curAnim( ::String AnimName);
		Dynamic set_curAnim_dyn();

		virtual ::String get_curAnim( );
		Dynamic get_curAnim_dyn();

		virtual int getFrameIndex( ::org::flixel::system::layer::frames::FlxFrame Frame);
		Dynamic getFrameIndex_dyn();

		virtual ::String set_frameName( ::String value);
		Dynamic set_frameName_dyn();

		virtual ::String get_frameName( );
		Dynamic get_frameName_dyn();

		virtual int set_frame( int Frame);
		Dynamic set_frame_dyn();

		virtual int get_frame( );
		Dynamic get_frame_dyn();

		virtual int set_color( int Color);
		Dynamic set_color_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual Float set_alpha( Float Alpha);
		Dynamic set_alpha_dyn();

		Float alpha;
		virtual int set_facing( int Direction);
		Dynamic set_facing_dyn();

		virtual ::flash::display::BitmapData set_pixels( ::flash::display::BitmapData Pixels);
		Dynamic set_pixels_dyn();

		virtual ::flash::display::BitmapData get_pixels( );
		Dynamic get_pixels_dyn();

		virtual Array< ::Dynamic > replaceColor( int Color,int NewColor,hx::Null< bool >  FetchPositions);
		Dynamic replaceColor_dyn();

		virtual Void centerOffsets( hx::Null< bool >  AdjustPosition);
		Dynamic centerOffsets_dyn();

		virtual Void setOriginToCorner( );
		Dynamic setOriginToCorner_dyn();

		virtual Void randomFrame( );
		Dynamic randomFrame_dyn();

		virtual ::org::flixel::system::FlxAnim getAnimation( ::String name);
		Dynamic getAnimation_dyn();

		virtual Void resumeAnimation( );
		Dynamic resumeAnimation_dyn();

		virtual Void pauseAnimation( );
		Dynamic pauseAnimation_dyn();

		virtual Void gotoAndStop( hx::Null< int >  Frame);
		Dynamic gotoAndStop_dyn();

		virtual Void gotoAndPlay( hx::Null< int >  Frame);
		Dynamic gotoAndPlay_dyn();

		virtual Void play( ::String AnimName,hx::Null< bool >  Force,hx::Null< int >  Frame);
		Dynamic play_dyn();

		virtual Void addAnimationCallback( Dynamic AnimationCallback);
		Dynamic addAnimationCallback_dyn();

		virtual Void addAnimationByPrefixFromTexture( ::String Name,::String Prefix,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addAnimationByPrefixFromTexture_dyn();

		virtual Void addAnimationByIndiciesFromTexture( ::String Name,::String Prefix,Array< int > Indicies,::String Postfix,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addAnimationByIndiciesFromTexture_dyn();

		virtual Void addAnimationByNamesFromTexture( ::String Name,Array< ::String > FrameNames,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addAnimationByNamesFromTexture_dyn();

		virtual Void addAnimation( ::String Name,Array< int > Frames,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addAnimation_dyn();

		virtual Void drawFrame( hx::Null< bool >  Force);
		Dynamic drawFrame_dyn();

		virtual Void updateAnimation( );
		Dynamic updateAnimation_dyn();

		virtual Void fill( int Color);
		Dynamic fill_dyn();

		virtual Void drawCircle( Float X,Float Y,Float Radius,int Color);
		Dynamic drawCircle_dyn();

		virtual Void drawLine( Float StartX,Float StartY,Float EndX,Float EndY,int Color,hx::Null< int >  Thickness);
		Dynamic drawLine_dyn();

		virtual Void stamp( ::org::flixel::FlxSprite Brush,hx::Null< int >  X,hx::Null< int >  Y);
		Dynamic stamp_dyn();

		virtual Void draw( );

		virtual bool isColored( );
		Dynamic isColored_dyn();

		virtual Void update( );

		virtual Void resetHelpers( );
		Dynamic resetHelpers_dyn();

		virtual Void setOriginToCenter( );
		Dynamic setOriginToCenter_dyn();

		virtual Void resetSizeFromFrame( );
		Dynamic resetSizeFromFrame_dyn();

		virtual Void resetFrameSize( );
		Dynamic resetFrameSize_dyn();

		virtual Void resetSize( );
		Dynamic resetSize_dyn();

		virtual ::org::flixel::FlxSprite loadRotatedImageFromTexture( ::org::flixel::plugin::texturepacker::TexturePackerData Data,::String Image,hx::Null< int >  Rotations,hx::Null< bool >  AntiAliasing,hx::Null< bool >  AutoBuffer);
		Dynamic loadRotatedImageFromTexture_dyn();

		virtual ::org::flixel::FlxSprite loadImageFromTexture( ::org::flixel::plugin::texturepacker::TexturePackerData Data,hx::Null< bool >  Reverse,hx::Null< bool >  Unique,::String FrameName);
		Dynamic loadImageFromTexture_dyn();

		virtual ::org::flixel::FlxSprite makeGraphic( int Width,int Height,hx::Null< int >  Color,hx::Null< bool >  Unique,::String Key);
		Dynamic makeGraphic_dyn();

		virtual ::org::flixel::FlxSprite loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  Rotations,hx::Null< int >  Frame,hx::Null< bool >  AntiAliasing,hx::Null< bool >  AutoBuffer,::String Key);
		Dynamic loadRotatedGraphic_dyn();

		virtual ::org::flixel::FlxSprite loadGraphic( Dynamic Graphic,hx::Null< bool >  Animated,hx::Null< bool >  Reverse,hx::Null< int >  Width,hx::Null< int >  Height,hx::Null< bool >  Unique,::String Key);
		Dynamic loadGraphic_dyn();

		virtual ::org::flixel::FlxSprite loadFromSprite( ::org::flixel::FlxSprite Sprite);
		Dynamic loadFromSprite_dyn();

		virtual Void destroy( );

		Float _halfHeight;
		Float _halfWidth;
		Float _blue;
		Float _green;
		Float _red;
		::org::flixel::system::layer::frames::FlxFrame _flxFrame;
		::flash::display::BitmapData _pixelsBackup;
		Array< ::Dynamic > filters;
		::flash::geom::Matrix _matrix;
		bool _useColorTransform;
		::flash::geom::ColorTransform _colorTransform;
		::flash::geom::Point _flashPointZero;
		::flash::geom::Rectangle _flashRect2;
		::flash::geom::Rectangle _flashRect;
		::flash::geom::Point _flashPoint;
		::flash::display::BitmapData _pixels;
		int _color;
		Dynamic _callback;
		Dynamic &_callback_dyn() { return _callback;}
		Float _frameTimer;
		int _curIndex;
		int _curFrame;
		::org::flixel::system::FlxAnim _curAnim;
		::haxe::ds::StringMap _animations;
		bool dirty;
		::flash::display::BitmapData framePixels;
		int frames;
		int frameHeight;
		int frameWidth;
		bool paused;
		bool finished;
		int _blendInt;
		::flash::display::BlendMode _blend;
		::org::flixel::util::FlxPoint scale;
		::org::flixel::util::FlxPoint offset;
		::org::flixel::util::FlxPoint origin;
		virtual int get_flipped( );
		Dynamic get_flipped_dyn();

		int _flipped;
		int flipped;
		int facing;
		static int prefixLength;
		static int postfixLength;
		static int frameSortFunction( ::org::flixel::system::layer::frames::FlxFrame frame1,::org::flixel::system::layer::frames::FlxFrame frame2);
		static Dynamic frameSortFunction_dyn();

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxSprite */ 
