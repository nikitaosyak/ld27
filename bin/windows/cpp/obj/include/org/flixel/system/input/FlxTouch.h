#ifndef INCLUDED_org_flixel_system_input_FlxTouch
#define INCLUDED_org_flixel_system_input_FlxTouch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/util/FlxPoint.h>
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS4(org,flixel,system,input,FlxTouch)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace org{
namespace flixel{
namespace system{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxTouch_obj : public ::org::flixel::util::FlxPoint_obj{
	public:
		typedef ::org::flixel::util::FlxPoint_obj super;
		typedef FlxTouch_obj OBJ_;
		FlxTouch_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID);

	public:
		static hx::ObjectPtr< FlxTouch_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTouch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTouch"); }

		virtual bool isActive( );
		Dynamic isActive_dyn();

		virtual bool justReleased( );
		Dynamic justReleased_dyn();

		virtual bool justPressed( );
		Dynamic justPressed_dyn();

		virtual bool pressed( );
		Dynamic pressed_dyn();

		virtual Void deactivate( );
		Dynamic deactivate_dyn();

		virtual Void reset( Float X,Float Y,int PointID);
		Dynamic reset_dyn();

		virtual bool overlaps( ::org::flixel::FlxBasic ObjectOrGroup,::org::flixel::FlxCamera Camera);
		Dynamic overlaps_dyn();

		virtual ::org::flixel::util::FlxPoint getScreenPosition( ::org::flixel::FlxCamera Camera,::org::flixel::util::FlxPoint point);
		Dynamic getScreenPosition_dyn();

		virtual ::org::flixel::util::FlxPoint getWorldPosition( ::org::flixel::FlxCamera Camera,::org::flixel::util::FlxPoint point);
		Dynamic getWorldPosition_dyn();

		virtual Void updateCursor( );
		Dynamic updateCursor_dyn();

		virtual Void updateTouchPosition( Float X,Float Y);
		Dynamic updateTouchPosition_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual int get_touchPointID( );
		Dynamic get_touchPointID_dyn();

		int touchPointID;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		::flash::geom::Point _flashPoint;
		::org::flixel::util::FlxPoint _globalScreenPosition;
		::org::flixel::util::FlxPoint _point;
		int _last;
		int _current;
		int screenY;
		int screenX;
		int _touchPointID;
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input

#endif /* INCLUDED_org_flixel_system_input_FlxTouch */ 
