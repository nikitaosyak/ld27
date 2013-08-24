#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup
#include <flixel/addons/editors/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_flx_core_Player
#include <flx/core/Player.h>
#endif
#ifndef INCLUDED_flx_core_SortingGroup
#include <flx/core/SortingGroup.h>
#endif
#ifndef INCLUDED_flx_state_level_LevelBase
#include <flx/state/level/LevelBase.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTilemap
#include <org/flixel/FlxTilemap.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxQuadTree
#include <org/flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRect
#include <org/flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_tmx_TiledLevel
#include <tmx/TiledLevel.h>
#endif
namespace tmx{

Void TiledLevel_obj::__construct(Dynamic tiledLevel)
{
HX_STACK_PUSH("TiledLevel::new","tmx/TiledLevel.hx",26);
{
	HX_STACK_LINE(27)
	super::__construct(tiledLevel);
	HX_STACK_LINE(29)
	this->foregroundTiles = ::org::flixel::FlxGroup_obj::__new(null());
	HX_STACK_LINE(30)
	this->backgroundTiles = ::org::flixel::FlxGroup_obj::__new(null());
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->layers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		while(((_g < _g1->length))){
			HX_STACK_LINE(35)
			::flixel::addons::editors::tiled::TiledLayer tileLayer = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >();		HX_STACK_VAR(tileLayer,"tileLayer");
			HX_STACK_LINE(35)
			++(_g);
			HX_STACK_LINE(36)
			::String tileSheetName = tileLayer->properties->keys->get(HX_CSTRING("tileset"));		HX_STACK_VAR(tileSheetName,"tileSheetName");
			HX_STACK_LINE(38)
			if (((tileSheetName == null()))){
				HX_STACK_LINE(39)
				hx::Throw (((HX_CSTRING("'tileset' property not defined for the '") + tileLayer->name) + HX_CSTRING("' layer. Please add the property to the layer.")));
			}
			HX_STACK_LINE(41)
			::flixel::addons::editors::tiled::TiledTileSet tileSet = null();		HX_STACK_VAR(tileSet,"tileSet");
			struct _Function_3_1{
				inline static Dynamic Block( ::tmx::TiledLevel_obj *__this){
					HX_STACK_PUSH("*::closure","tmx/TiledLevel.hx",42);
					{
						HX_STACK_LINE(42)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->tilesets);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_4_1","tmx/TiledLevel.hx",42);
							{
								HX_STACK_LINE(42)
								return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(42)
						return  Dynamic(new _Function_4_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(42)
			for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >((_Function_3_1::Block(this))());  __it->hasNext(); ){
				::flixel::addons::editors::tiled::TiledTileSet ts = __it->next();
				if (((ts->name == tileSheetName))){
					HX_STACK_LINE(44)
					tileSet = ts;
					HX_STACK_LINE(45)
					break;
				}
;
			}
			HX_STACK_LINE(49)
			if (((tileSet == null()))){
				HX_STACK_LINE(50)
				hx::Throw (((((HX_CSTRING("Tileset '") + tileSheetName) + HX_CSTRING(" not found. Did you mispell the 'tilesheet' property in ")) + tileLayer->name) + HX_CSTRING("' layer?")));
			}
			HX_STACK_LINE(52)
			::haxe::io::Path imagePath = ::haxe::io::Path_obj::__new(tileSet->imageSource);		HX_STACK_VAR(imagePath,"imagePath");
			HX_STACK_LINE(53)
			::String processedPath = (((HX_CSTRING("assets/tiled/") + imagePath->file) + HX_CSTRING(".")) + imagePath->ext);		HX_STACK_VAR(processedPath,"processedPath");
			HX_STACK_LINE(55)
			::org::flixel::FlxTilemap tilemap = ::org::flixel::FlxTilemap_obj::__new();		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(56)
			tilemap->widthInTiles = this->width;
			HX_STACK_LINE(57)
			tilemap->heightInTiles = this->height;
			HX_STACK_LINE(58)
			tilemap->loadMap(tileLayer->get_tileArray(),processedPath,tileSet->tileWidth,tileSet->tileHeight,(int)0,(int)1,(int)1,(int)1,null(),null());
			HX_STACK_LINE(60)
			if ((tileLayer->properties->keys->exists(HX_CSTRING("nocollide")))){
				HX_STACK_LINE(60)
				this->backgroundTiles->add(tilemap);
			}
			else{
				HX_STACK_LINE(64)
				if (((this->collidableTileLayers == null()))){
					HX_STACK_LINE(65)
					this->collidableTileLayers = Array_obj< ::Dynamic >::__new();
				}
				HX_STACK_LINE(67)
				this->foregroundTiles->add(tilemap);
				HX_STACK_LINE(68)
				this->collidableTileLayers->push(tilemap);
			}
		}
	}
}
;
	return null();
}

TiledLevel_obj::~TiledLevel_obj() { }

Dynamic TiledLevel_obj::__CreateEmpty() { return  new TiledLevel_obj; }
hx::ObjectPtr< TiledLevel_obj > TiledLevel_obj::__new(Dynamic tiledLevel)
{  hx::ObjectPtr< TiledLevel_obj > result = new TiledLevel_obj();
	result->__construct(tiledLevel);
	return result;}

Dynamic TiledLevel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledLevel_obj > result = new TiledLevel_obj();
	result->__construct(inArgs[0]);
	return result;}

bool TiledLevel_obj::collideWithLevel( ::org::flixel::FlxObject obj,Dynamic notifyCallback,Dynamic processCallback){
	HX_STACK_PUSH("TiledLevel::collideWithLevel","tmx/TiledLevel.hx",140);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_ARG(notifyCallback,"notifyCallback");
	HX_STACK_ARG(processCallback,"processCallback");
	HX_STACK_LINE(141)
	if (((this->collidableTileLayers != null()))){
		HX_STACK_LINE(142)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->collidableTileLayers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(142)
		while(((_g < _g1->length))){
			HX_STACK_LINE(142)
			::org::flixel::FlxTilemap map = _g1->__get(_g).StaticCast< ::org::flixel::FlxTilemap >();		HX_STACK_VAR(map,"map");
			HX_STACK_LINE(142)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( Dynamic &notifyCallback,::org::flixel::FlxTilemap &map,::org::flixel::FlxObject &obj,Dynamic &processCallback){
					HX_STACK_PUSH("*::closure","tmx/TiledLevel.hx",145);
					{
						HX_STACK_LINE(145)
						::org::flixel::FlxBasic ObjectOrGroup1 = map;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
						::org::flixel::FlxBasic ObjectOrGroup2 = obj;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
						Dynamic NotifyCallback = notifyCallback;		HX_STACK_VAR(NotifyCallback,"NotifyCallback");
						HX_STACK_LINE(145)
						if (((ObjectOrGroup1 == null()))){
							HX_STACK_LINE(145)
							ObjectOrGroup1 = ::org::flixel::FlxG_obj::get_state();
						}
						HX_STACK_LINE(145)
						if (((ObjectOrGroup2 == ObjectOrGroup1))){
							HX_STACK_LINE(145)
							ObjectOrGroup2 = null();
						}
						HX_STACK_LINE(145)
						::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
						HX_STACK_LINE(145)
						::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
						HX_STACK_LINE(145)
						quadTree->load(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,(  (((processCallback != null()))) ? Dynamic(processCallback) : Dynamic(::org::flixel::FlxObject_obj::separate_dyn()) ));
						HX_STACK_LINE(145)
						bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(145)
						quadTree->destroy();
						HX_STACK_LINE(145)
						return result;
					}
					return null();
				}
			};
			HX_STACK_LINE(145)
			return _Function_3_1::Block(notifyCallback,map,obj,processCallback);
		}
	}
	HX_STACK_LINE(148)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(TiledLevel_obj,collideWithLevel,return )

Void TiledLevel_obj::loadObject( ::flixel::addons::editors::tiled::TiledObject o,::flixel::addons::editors::tiled::TiledObjectGroup g,::flx::state::level::LevelBase state){
{
		HX_STACK_PUSH("TiledLevel::loadObject","tmx/TiledLevel.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_ARG(o,"o");
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(state,"state");
		HX_STACK_LINE(82)
		int x = o->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(83)
		int y = o->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(86)
		if (((o->gid != (int)-1))){
			HX_STACK_LINE(87)
			hx::SubEq(y,g->map->getGidOwner(o->gid)->tileHeight);
		}
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			::String _g = o->type.toLowerCase();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("rocks"))){
				HX_STACK_LINE(91)
				::flixel::addons::editors::tiled::TiledTileSet tileset = g->map->getGidOwner(o->gid);		HX_STACK_VAR(tileset,"tileset");
				HX_STACK_LINE(92)
				::org::flixel::FlxSprite rock = ::org::flixel::FlxSprite_obj::__new(x,y,(HX_CSTRING("assets/tiled/") + tileset->imageSource));		HX_STACK_VAR(rock,"rock");
				HX_STACK_LINE(93)
				state->layoutObjects->add(rock);
			}
			else if (  ( _switch_1==HX_CSTRING("trees"))){
				HX_STACK_LINE(96)
				::flixel::addons::editors::tiled::TiledTileSet tileset = g->map->getGidOwner(o->gid);		HX_STACK_VAR(tileset,"tileset");
				HX_STACK_LINE(97)
				::org::flixel::FlxSprite rock = ::org::flixel::FlxSprite_obj::__new(x,y,(HX_CSTRING("assets/tiled/") + tileset->imageSource));		HX_STACK_VAR(rock,"rock");
				HX_STACK_LINE(98)
				state->layoutObjects->add(rock);
			}
			else if (  ( _switch_1==HX_CSTRING("player"))){
				HX_STACK_LINE(101)
				::flx::core::Player player = ::flx::core::Player_obj::__new();		HX_STACK_VAR(player,"player");
				HX_STACK_LINE(102)
				player->initialize(x,(y - (Float(player->height) / Float((int)2))));
				HX_STACK_LINE(103)
				::org::flixel::FlxG_obj::camera->follow(player,(int)0,null(),(int)2);
				HX_STACK_LINE(104)
				state->layoutObjects->add(player);
				HX_STACK_LINE(105)
				state->player = player;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TiledLevel_obj,loadObject,(void))

Void TiledLevel_obj::loadObjects( ::flx::state::level::LevelBase state){
{
		HX_STACK_PUSH("TiledLevel::loadObjects","tmx/TiledLevel.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_ARG(state,"state");
		HX_STACK_LINE(74)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->objectGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		while(((_g < _g1->length))){
			HX_STACK_LINE(74)
			::flixel::addons::editors::tiled::TiledObjectGroup group = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledObjectGroup >();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(74)
			++(_g);
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				Array< ::Dynamic > _g3 = group->objects;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(75)
				while(((_g2 < _g3->length))){
					HX_STACK_LINE(75)
					::flixel::addons::editors::tiled::TiledObject o = _g3->__get(_g2).StaticCast< ::flixel::addons::editors::tiled::TiledObject >();		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(75)
					++(_g2);
					HX_STACK_LINE(76)
					this->loadObject(o,group,state);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledLevel_obj,loadObjects,(void))


TiledLevel_obj::TiledLevel_obj()
{
}

void TiledLevel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledLevel);
	HX_MARK_MEMBER_NAME(collidableTileLayers,"collidableTileLayers");
	HX_MARK_MEMBER_NAME(backgroundTiles,"backgroundTiles");
	HX_MARK_MEMBER_NAME(foregroundTiles,"foregroundTiles");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledLevel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collidableTileLayers,"collidableTileLayers");
	HX_VISIT_MEMBER_NAME(backgroundTiles,"backgroundTiles");
	HX_VISIT_MEMBER_NAME(foregroundTiles,"foregroundTiles");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TiledLevel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"loadObject") ) { return loadObject_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadObjects") ) { return loadObjects_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundTiles") ) { return backgroundTiles; }
		if (HX_FIELD_EQ(inName,"foregroundTiles") ) { return foregroundTiles; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collideWithLevel") ) { return collideWithLevel_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"collidableTileLayers") ) { return collidableTileLayers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledLevel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundTiles") ) { backgroundTiles=inValue.Cast< ::org::flixel::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"foregroundTiles") ) { foregroundTiles=inValue.Cast< ::org::flixel::FlxGroup >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"collidableTileLayers") ) { collidableTileLayers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledLevel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("collidableTileLayers"));
	outFields->push(HX_CSTRING("backgroundTiles"));
	outFields->push(HX_CSTRING("foregroundTiles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("collideWithLevel"),
	HX_CSTRING("loadObject"),
	HX_CSTRING("loadObjects"),
	HX_CSTRING("collidableTileLayers"),
	HX_CSTRING("backgroundTiles"),
	HX_CSTRING("foregroundTiles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledLevel_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledLevel_obj::__mClass,"__mClass");
};

Class TiledLevel_obj::__mClass;

void TiledLevel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tmx.TiledLevel"), hx::TCanCast< TiledLevel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TiledLevel_obj::__boot()
{
}

} // end namespace tmx
