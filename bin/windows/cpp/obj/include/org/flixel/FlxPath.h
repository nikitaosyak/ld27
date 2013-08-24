#ifndef INCLUDED_org_flixel_FlxPath
#define INCLUDED_org_flixel_FlxPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxPath)
HX_DECLARE_CLASS3(org,flixel,plugin,DebugPathDisplay)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPath_obj OBJ_;
		FlxPath_obj();
		Void __construct(Array< ::Dynamic > Nodes);

	public:
		static hx::ObjectPtr< FlxPath_obj > __new(Array< ::Dynamic > Nodes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxPath_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxPath"); }

		virtual Void drawDebug( ::org::flixel::FlxCamera Camera);
		Dynamic drawDebug_dyn();

		virtual ::org::flixel::util::FlxPoint tail( );
		Dynamic tail_dyn();

		virtual ::org::flixel::util::FlxPoint head( );
		Dynamic head_dyn();

		virtual ::org::flixel::util::FlxPoint removeAt( int Index);
		Dynamic removeAt_dyn();

		virtual ::org::flixel::util::FlxPoint remove( ::org::flixel::util::FlxPoint Node);
		Dynamic remove_dyn();

		virtual Void addPointAt( ::org::flixel::util::FlxPoint Node,int Index,hx::Null< bool >  AsReference);
		Dynamic addPointAt_dyn();

		virtual Void addPoint( ::org::flixel::util::FlxPoint Node,hx::Null< bool >  AsReference);
		Dynamic addPoint_dyn();

		virtual Void addAt( Float X,Float Y,int Index);
		Dynamic addAt_dyn();

		virtual Void add( Float X,Float Y);
		Dynamic add_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		::org::flixel::util::FlxPoint _point;
		bool ignoreDrawDebug;
		::org::flixel::util::FlxPoint debugScrollFactor;
		int debugColor;
		Array< ::Dynamic > nodes;
		static ::org::flixel::plugin::DebugPathDisplay manager;
		static ::org::flixel::plugin::DebugPathDisplay get_manager( );
		static Dynamic get_manager_dyn();

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxPath */ 
