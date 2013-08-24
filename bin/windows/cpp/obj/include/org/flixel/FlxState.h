#ifndef INCLUDED_org_flixel_FlxState
#define INCLUDED_org_flixel_FlxState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxGroup.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxState)
HX_DECLARE_CLASS2(org,flixel,FlxSubState)
HX_DECLARE_CLASS2(org,flixel,FlxTypedGroup)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxState_obj : public ::org::flixel::FlxGroup_obj{
	public:
		typedef ::org::flixel::FlxGroup_obj super;
		typedef FlxState_obj OBJ_;
		FlxState_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxState"); }

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void removeAtlas( ::org::flixel::system::layer::Atlas atlas,hx::Null< bool >  destroy);
		Dynamic removeAtlas_dyn();

		virtual ::org::flixel::system::layer::Atlas createAtlas( ::String atlasName,int atlasWidth,int atlasHeight);
		Dynamic createAtlas_dyn();

		virtual ::org::flixel::system::layer::Atlas getAtlasFor( ::String KeyInBitmapCache);
		Dynamic getAtlasFor_dyn();

		virtual Void destroy( );

		virtual Void subStateCloseHandler( hx::Null< bool >  destroy);
		Dynamic subStateCloseHandler_dyn();

		virtual Void setSubState( ::org::flixel::FlxSubState requestedState,Dynamic closeCallback,hx::Null< bool >  destroyPrevious);
		Dynamic setSubState_dyn();

		virtual Void closeSubState( hx::Null< bool >  destroy);
		Dynamic closeSubState_dyn();

		virtual Void tryUpdate( );
		Dynamic tryUpdate_dyn();

		virtual Void drawDebug( );

		virtual Void draw( );

		virtual Void create( );
		Dynamic create_dyn();

		virtual Void updateMouseVisibility( );
		Dynamic updateMouseVisibility_dyn();

		virtual bool set_useMouse( bool value);
		Dynamic set_useMouse_dyn();

		virtual bool get_useMouse( );
		Dynamic get_useMouse_dyn();

		bool _useMouse;
		virtual int set_bgColor( int value);
		Dynamic set_bgColor_dyn();

		virtual int get_bgColor( );
		Dynamic get_bgColor_dyn();

		int _bgColor;
		virtual ::org::flixel::FlxSubState get_subState( );
		Dynamic get_subState_dyn();

		::org::flixel::FlxSubState subState;
		::org::flixel::FlxSubState _subState;
		bool persistantDraw;
		bool persistantUpdate;
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxState */ 
