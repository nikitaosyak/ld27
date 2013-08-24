#ifndef INCLUDED_org_flixel_FlxObject
#define INCLUDED_org_flixel_FlxObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxBasic.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxPath)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
HX_DECLARE_CLASS3(org,flixel,util,FlxRect)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxObject_obj : public ::org::flixel::FlxBasic_obj{
	public:
		typedef ::org::flixel::FlxBasic_obj super;
		typedef FlxObject_obj OBJ_;
		FlxObject_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);

	public:
		static hx::ObjectPtr< FlxObject_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxObject"); }

		virtual bool set_forceComplexRender( bool value);
		Dynamic set_forceComplexRender_dyn();

		virtual Void move( Float x,Float y);
		Dynamic move_dyn();

		virtual Void hurt( Float Damage);
		Dynamic hurt_dyn();

		virtual bool justTouched( int Direction);
		Dynamic justTouched_dyn();

		virtual bool isTouching( int Direction);
		Dynamic isTouching_dyn();

		virtual Void reset( Float X,Float Y);
		Dynamic reset_dyn();

		virtual ::org::flixel::util::FlxPoint getMidpoint( ::org::flixel::util::FlxPoint point);
		Dynamic getMidpoint_dyn();

		virtual bool set_solid( bool Solid);
		Dynamic set_solid_dyn();

		virtual bool get_solid( );
		Dynamic get_solid_dyn();

		virtual Float set_height( Float Height);
		Dynamic set_height_dyn();

		virtual Float set_width( Float Width);
		Dynamic set_width_dyn();

		virtual bool get_flickering( );
		Dynamic get_flickering_dyn();

		bool flickering;
		virtual Void flicker( hx::Null< Float >  Duration);
		Dynamic flicker_dyn();

		virtual ::org::flixel::util::FlxPoint getScreenXY( ::org::flixel::util::FlxPoint point,::org::flixel::FlxCamera Camera);
		Dynamic getScreenXY_dyn();

		virtual bool onScreenObject( ::org::flixel::FlxCamera Camera);
		Dynamic onScreenObject_dyn();

		virtual bool onScreen( ::org::flixel::FlxCamera Camera);
		Dynamic onScreen_dyn();

		virtual bool overlapsPoint( ::org::flixel::util::FlxPoint point,hx::Null< bool >  InScreenSpace,::org::flixel::FlxCamera Camera);
		Dynamic overlapsPoint_dyn();

		virtual bool overlapsAt( Float X,Float Y,::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::org::flixel::FlxCamera Camera);
		Dynamic overlapsAt_dyn();

		virtual bool overlaps( ::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::org::flixel::FlxCamera Camera);
		Dynamic overlaps_dyn();

		virtual Void updatePathMotion( );
		Dynamic updatePathMotion_dyn();

		virtual ::org::flixel::util::FlxPoint advancePath( hx::Null< bool >  Snap);
		Dynamic advancePath_dyn();

		virtual Void setPathNode( int NodeIndex);
		Dynamic setPathNode_dyn();

		virtual Void stopFollowingPath( hx::Null< bool >  DestroyPath);
		Dynamic stopFollowingPath_dyn();

		virtual Void followPath( ::org::flixel::FlxPath Path,hx::Null< Float >  Speed,hx::Null< int >  Mode,hx::Null< bool >  AutoRotate);
		Dynamic followPath_dyn();

		virtual Void drawDebugOnCamera( ::org::flixel::FlxCamera Camera);

		virtual Void draw( );

		virtual Void updateMotion( );
		Dynamic updateMotion_dyn();

		virtual Void update( );

		virtual Void destroy( );

		virtual int set_debugBoundingBoxColor( int val);
		Dynamic set_debugBoundingBoxColor_dyn();

		bool _boundingBoxColorOverritten;
		int debugBoundingBoxColor;
		bool _pathRotate;
		int _pathInc;
		int _pathMode;
		int _pathNodeIndex;
		bool forceComplexRender;
		bool pathAutoCenter;
		Float pathAngle;
		Float pathSpeed;
		::org::flixel::FlxPath path;
		::org::flixel::util::FlxPoint last;
		int allowCollisions;
		int wasTouching;
		int touching;
		bool moves;
		::org::flixel::util::FlxPoint _point;
		Float health;
		Float _flickerTimer;
		bool _flicker;
		::org::flixel::util::FlxPoint scrollFactor;
		Float maxAngular;
		Float angularDrag;
		Float angularAcceleration;
		Float angularVelocity;
		Float angle;
		::org::flixel::util::FlxPoint maxVelocity;
		::org::flixel::util::FlxPoint drag;
		::org::flixel::util::FlxPoint acceleration;
		Float elasticity;
		Float mass;
		::org::flixel::util::FlxPoint velocity;
		bool immovable;
		Float height;
		Float width;
		Float y;
		Float x;
		static Float SEPARATE_BIAS;
		static ::org::flixel::util::FlxRect _firstSeparateFlxRect;
		static ::org::flixel::util::FlxRect _secondSeparateFlxRect;
		static ::org::flixel::util::FlxPoint _pZero;
		static bool separate( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2);
		static Dynamic separate_dyn();

		static bool separateX( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2);
		static Dynamic separateX_dyn();

		static bool separateY( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2);
		static Dynamic separateY_dyn();

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxObject */ 
