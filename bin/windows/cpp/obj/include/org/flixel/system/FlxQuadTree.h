#ifndef INCLUDED_org_flixel_system_FlxQuadTree
#define INCLUDED_org_flixel_system_FlxQuadTree

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/util/FlxRect.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS3(org,flixel,system,FlxList)
HX_DECLARE_CLASS3(org,flixel,system,FlxQuadTree)
HX_DECLARE_CLASS3(org,flixel,util,FlxRect)
namespace org{
namespace flixel{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  FlxQuadTree_obj : public ::org::flixel::util::FlxRect_obj{
	public:
		typedef ::org::flixel::util::FlxRect_obj super;
		typedef FlxQuadTree_obj OBJ_;
		FlxQuadTree_obj();
		Void __construct(Float X,Float Y,Float Width,Float Height,::org::flixel::system::FlxQuadTree Parent);

	public:
		static hx::ObjectPtr< FlxQuadTree_obj > __new(Float X,Float Y,Float Width,Float Height,::org::flixel::system::FlxQuadTree Parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxQuadTree_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxQuadTree"); }

		virtual bool overlapNode( );
		Dynamic overlapNode_dyn();

		virtual bool execute( );
		Dynamic execute_dyn();

		virtual Void addToList( );
		Dynamic addToList_dyn();

		virtual Void addObject( );
		Dynamic addObject_dyn();

		virtual Void add( ::org::flixel::FlxBasic ObjectOrGroup,int list);
		Dynamic add_dyn();

		virtual Void load( ::org::flixel::FlxBasic ObjectOrGroup1,::org::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback);
		Dynamic load_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( Float X,Float Y,Float Width,Float Height,::org::flixel::system::FlxQuadTree Parent);
		Dynamic reset_dyn();

		::org::flixel::system::FlxQuadTree next;
		Float _midpointY;
		Float _midpointX;
		Float _halfHeight;
		Float _halfWidth;
		Float _bottomEdge;
		Float _topEdge;
		Float _rightEdge;
		Float _leftEdge;
		::org::flixel::system::FlxQuadTree _southWestTree;
		::org::flixel::system::FlxQuadTree _southEastTree;
		::org::flixel::system::FlxQuadTree _northEastTree;
		::org::flixel::system::FlxQuadTree _northWestTree;
		::org::flixel::system::FlxList _tailB;
		::org::flixel::system::FlxList _headB;
		::org::flixel::system::FlxList _tailA;
		::org::flixel::system::FlxList _headA;
		bool _canSubdivide;
		bool exists;
		static int divisions;
		static int _min;
		static ::org::flixel::FlxObject _object;
		static Float _objectLeftEdge;
		static Float _objectTopEdge;
		static Float _objectRightEdge;
		static Float _objectBottomEdge;
		static int _list;
		static bool _useBothLists;
		static Dynamic _processingCallback;
		static Dynamic &_processingCallback_dyn() { return _processingCallback;}
		static Dynamic _notifyCallback;
		static Dynamic &_notifyCallback_dyn() { return _notifyCallback;}
		static ::org::flixel::system::FlxList _iterator;
		static Float _objectHullX;
		static Float _objectHullY;
		static Float _objectHullWidth;
		static Float _objectHullHeight;
		static Float _checkObjectHullX;
		static Float _checkObjectHullY;
		static Float _checkObjectHullWidth;
		static Float _checkObjectHullHeight;
		static int _NUM_CACHED_QUAD_TREES;
		static ::org::flixel::system::FlxQuadTree _cachedTreesHead;
		static ::org::flixel::system::FlxQuadTree recycle( Float X,Float Y,Float Width,Float Height,::org::flixel::system::FlxQuadTree Parent);
		static Dynamic recycle_dyn();

		static Void clearCache( );
		static Dynamic clearCache_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_org_flixel_system_FlxQuadTree */ 
