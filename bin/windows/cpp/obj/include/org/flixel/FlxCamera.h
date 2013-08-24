#ifndef INCLUDED_org_flixel_FlxCamera
#define INCLUDED_org_flixel_FlxCamera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxBasic.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
HX_DECLARE_CLASS4(org,flixel,system,layer,DrawStackItem)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
HX_DECLARE_CLASS3(org,flixel,util,FlxRect)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxCamera_obj : public ::org::flixel::FlxBasic_obj{
	public:
		typedef ::org::flixel::FlxBasic_obj super;
		typedef FlxCamera_obj OBJ_;
		FlxCamera_obj();
		Void __construct(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom);

	public:
		static hx::ObjectPtr< FlxCamera_obj > __new(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxCamera_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxCamera"); }

		virtual int set_height( int val);
		Dynamic set_height_dyn();

		virtual int set_width( int val);
		Dynamic set_width_dyn();

		virtual Void drawFX( );
		Dynamic drawFX_dyn();

		virtual Void fill( int Color,hx::Null< bool >  BlendAlpha,hx::Null< Float >  FxAlpha,::flash::display::Graphics graphics);
		Dynamic fill_dyn();

		virtual ::flash::display::Sprite getContainerSprite( );
		Dynamic getContainerSprite_dyn();

		virtual Void setScale( Float X,Float Y);
		Dynamic setScale_dyn();

		virtual ::org::flixel::util::FlxPoint getScale( );
		Dynamic getScale_dyn();

		virtual bool set_antialiasing( bool Antialiasing);
		Dynamic set_antialiasing_dyn();

		bool antialiasing;
		virtual int set_color( int Color);
		Dynamic set_color_dyn();

		int color;
		virtual Float set_angle( Float Angle);
		Dynamic set_angle_dyn();

		Float angle;
		virtual Float set_alpha( Float Alpha);
		Dynamic set_alpha_dyn();

		Float alpha;
		virtual Float set_zoom( Float Zoom);
		Dynamic set_zoom_dyn();

		Float zoom;
		virtual ::org::flixel::FlxCamera copyFrom( ::org::flixel::FlxCamera Camera);
		Dynamic copyFrom_dyn();

		virtual Void stopFX( );
		Dynamic stopFX_dyn();

		virtual Void shake( hx::Null< Float >  Intensity,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force,hx::Null< int >  Direction);
		Dynamic shake_dyn();

		virtual Void fade( hx::Null< int >  Color,hx::Null< Float >  Duration,hx::Null< bool >  FadeIn,Dynamic OnComplete,hx::Null< bool >  Force);
		Dynamic fade_dyn();

		virtual Void flash( hx::Null< int >  Color,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force);
		Dynamic flash_dyn();

		virtual Void setBounds( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Width,hx::Null< Float >  Height,hx::Null< bool >  UpdateWorld);
		Dynamic setBounds_dyn();

		virtual Void focusOn( ::org::flixel::util::FlxPoint point);
		Dynamic focusOn_dyn();

		virtual Void followAdjust( hx::Null< Float >  LeadX,hx::Null< Float >  LeadY);
		Dynamic followAdjust_dyn();

		virtual Void follow( ::org::flixel::FlxObject Target,hx::Null< int >  Style,::org::flixel::util::FlxPoint Offset,hx::Null< Float >  Lerp);
		Dynamic follow_dyn();

		virtual Void update( );

		virtual Void destroy( );

		bool _fxFadeIn;
		virtual Void render( );
		Dynamic render_dyn();

		virtual Void clearDrawStack( );
		Dynamic clearDrawStack_dyn();

		virtual ::org::flixel::system::layer::DrawStackItem getDrawStackItem( ::org::flixel::system::layer::Atlas ObjAtlas,bool ObjColored,int ObjBlending);
		Dynamic getDrawStackItem_dyn();

		::org::flixel::system::layer::DrawStackItem _headOfDrawStack;
		::org::flixel::system::layer::DrawStackItem _currentStackItem;
		::flash::display::Sprite _debugLayer;
		::flash::display::Sprite _canvas;
		int _fxShakeDirection;
		::org::flixel::util::FlxPoint _fxShakeOffset;
		Dynamic _fxShakeComplete;
		Dynamic &_fxShakeComplete_dyn() { return _fxShakeComplete;}
		Float _fxShakeDuration;
		Float _fxShakeIntensity;
		Float _fxFadeAlpha;
		Dynamic _fxFadeComplete;
		Dynamic &_fxFadeComplete_dyn() { return _fxFadeComplete;}
		Float _fxFadeDuration;
		::org::flixel::util::FlxPoint _scrollTarget;
		::org::flixel::util::FlxPoint _lastTargetPosition;
		int _fxFadeColor;
		Float _fxFlashAlpha;
		Dynamic _fxFlashComplete;
		Dynamic &_fxFlashComplete_dyn() { return _fxFlashComplete;}
		Float _fxFlashDuration;
		int _fxFlashColor;
		::flash::geom::Point _flashPoint;
		::flash::geom::Rectangle _flashRect;
		Float _flashOffsetY;
		Float _flashOffsetX;
		::flash::display::Sprite _flashSprite;
		::org::flixel::util::FlxPoint _point;
		int bgColor;
		::org::flixel::util::FlxPoint scroll;
		::org::flixel::util::FlxRect bounds;
		::org::flixel::util::FlxRect deadzone;
		Float followLerp;
		::flash::geom::Point followLead;
		::org::flixel::FlxObject target;
		int style;
		int height;
		int width;
		Float y;
		Float x;
		static Float defaultZoom;
		static ::org::flixel::system::layer::DrawStackItem _storageHead;
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxCamera */ 
