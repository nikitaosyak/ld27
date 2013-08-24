#ifndef INCLUDED_org_flixel_FlxText
#define INCLUDED_org_flixel_FlxText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxSprite.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,filters,BitmapFilter)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS2(flash,text,TextFormat)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS2(org,flixel,FlxText)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxText_obj : public ::org::flixel::FlxSprite_obj{
	public:
		typedef ::org::flixel::FlxSprite_obj super;
		typedef FlxText_obj OBJ_;
		FlxText_obj();
		Void __construct(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_size,hx::Null< bool >  __o_EmbeddedFont,hx::Null< bool >  __o_IsStatic);

	public:
		static hx::ObjectPtr< FlxText_obj > __new(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_size,hx::Null< bool >  __o_EmbeddedFont,hx::Null< bool >  __o_IsStatic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxText_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxText"); }

		virtual Void updateFormat( ::flash::text::TextFormat format);
		Dynamic updateFormat_dyn();

		virtual Void draw( );

		virtual Void updateFrameData( );

		virtual Void updateAtlasInfo( hx::Null< bool >  updateAtlas);

		virtual ::org::flixel::system::layer::Atlas set_atlas( ::org::flixel::system::layer::Atlas value);

		virtual ::String convertTextAlignmentFromString( ::String strAlign);
		Dynamic convertTextAlignmentFromString_dyn();

		virtual ::flash::text::TextFormat dtfCopy( );
		Dynamic dtfCopy_dyn();

		virtual Void setClipping( int width,int height);

		virtual Void addFilter( ::flash::filters::BitmapFilter filter,hx::Null< int >  widthInc,hx::Null< int >  heightInc);

		virtual Void calcFrame( hx::Null< bool >  AreYouSure);

		virtual bool set_isStatic( bool value);
		Dynamic set_isStatic_dyn();

		virtual bool get_isStatic( );
		Dynamic get_isStatic_dyn();

		virtual bool set_useShadow( bool value);
		Dynamic set_useShadow_dyn();

		virtual bool get_useShadow( );
		Dynamic get_useShadow_dyn();

		virtual int set_shadow( int Color);
		Dynamic set_shadow_dyn();

		virtual int get_shadow( );
		Dynamic get_shadow_dyn();

		virtual ::String set_alignment( ::String Alignment);
		Dynamic set_alignment_dyn();

		virtual ::String get_alignment( );
		Dynamic get_alignment_dyn();

		virtual ::String set_font( ::String Font);
		Dynamic set_font_dyn();

		virtual ::String get_font( );
		Dynamic get_font_dyn();

		virtual int set_color( int Color);

		virtual int get_color( );

		virtual Float set_size( Float Size);
		Dynamic set_size_dyn();

		virtual Float get_size( );
		Dynamic get_size_dyn();

		virtual ::String set_text( ::String Text);
		Dynamic set_text_dyn();

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::org::flixel::FlxText setFormat( ::String Font,hx::Null< Float >  Size,hx::Null< int >  Color,::String Alignment,hx::Null< int >  ShadowColor,hx::Null< bool >  UseShadow);
		Dynamic setFormat_dyn();

		virtual Void destroy( );

		bool _isStatic;
		bool _useShadow;
		int _shadow;
		bool _regen;
		::flash::text::TextFormat _formatAdjusted;
		::flash::text::TextFormat _format;
		::flash::text::TextField _textField;
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxText */ 
