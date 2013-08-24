#ifndef INCLUDED_org_flixel_FlxTypedGroup
#define INCLUDED_org_flixel_FlxTypedGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxBasic.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxTypedGroup)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxTypedGroup_obj : public ::org::flixel::FlxBasic_obj{
	public:
		typedef ::org::flixel::FlxBasic_obj super;
		typedef FlxTypedGroup_obj OBJ_;
		FlxTypedGroup_obj();
		Void __construct(hx::Null< int >  __o_MaxSize);

	public:
		static hx::ObjectPtr< FlxTypedGroup_obj > __new(hx::Null< int >  __o_MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTypedGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTypedGroup"); }

		virtual int sortHandler( Dynamic Obj1,Dynamic Obj2);
		Dynamic sortHandler_dyn();

		virtual Void revive( );

		virtual Void kill( );

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Dynamic getRandom( hx::Null< int >  StartIndex,hx::Null< int >  Length);
		Dynamic getRandom_dyn();

		virtual int countDead( );
		Dynamic countDead_dyn();

		virtual int countLiving( );
		Dynamic countLiving_dyn();

		virtual Dynamic getFirstDead( );
		Dynamic getFirstDead_dyn();

		virtual Dynamic getFirstAlive( );
		Dynamic getFirstAlive_dyn();

		virtual Dynamic getFirstExtant( );
		Dynamic getFirstExtant_dyn();

		virtual int getFirstNull( );
		Dynamic getFirstNull_dyn();

		virtual Dynamic getFirstAvailable( ::Class ObjectClass);
		Dynamic getFirstAvailable_dyn();

		virtual Void callAll( ::String FunctionName,hx::Null< bool >  Recurse);
		Dynamic callAll_dyn();

		virtual Void setAll( ::String VariableName,Dynamic Value,hx::Null< bool >  Recurse);
		Dynamic setAll_dyn();

		virtual Void sort( ::String Index,hx::Null< int >  Order);
		Dynamic sort_dyn();

		virtual Dynamic replace( Dynamic OldObject,Dynamic NewObject);
		Dynamic replace_dyn();

		virtual Dynamic remove( Dynamic Object,hx::Null< bool >  Splice);
		Dynamic remove_dyn();

		virtual Dynamic recycle( ::Class ObjectClass,Dynamic ContructorArgs);
		Dynamic recycle_dyn();

		virtual ::org::flixel::system::layer::Atlas set_atlas( ::org::flixel::system::layer::Atlas value);

		virtual Void setGroupAtlas( Dynamic Object);
		Dynamic setGroupAtlas_dyn();

		virtual Dynamic add( Dynamic Object);
		Dynamic add_dyn();

		virtual int set_maxSize( int Size);
		Dynamic set_maxSize_dyn();

		virtual Void drawDebug( );

		virtual Void draw( );

		virtual Void update( );

		virtual Void destroy( );

		bool autoReviveMembers;
		int _sortOrder;
		::String _sortIndex;
		int _marker;
		int length;
		Dynamic members;
		int maxSize;
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxTypedGroup */ 
