#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
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
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPath
#include <org/flixel/FlxPath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTilemap
#include <org/flixel/FlxTilemap.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxTile
#include <org/flixel/system/FlxTile.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxTilemapBuffer
#include <org/flixel/system/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_DrawStackItem
#include <org/flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_frames_FlxFrame
#include <org/flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_frames_FlxSpriteFrames
#include <org/flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxArray
#include <org/flixel/util/FlxArray.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRect
#include <org/flixel/util/FlxRect.h>
#endif
namespace org{
namespace flixel{

Void FlxTilemap_obj::__construct()
{
HX_STACK_PUSH("FlxTilemap::new","org/flixel/FlxTilemap.hx",23);
{
	HX_STACK_LINE(145)
	this->tileScaleHack = 1.01;
	HX_STACK_LINE(140)
	this->_repeatY = (int)0;
	HX_STACK_LINE(139)
	this->_repeatX = (int)0;
	HX_STACK_LINE(152)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(153)
	this->_auto = (int)0;
	HX_STACK_LINE(154)
	this->widthInTiles = (int)0;
	HX_STACK_LINE(155)
	this->heightInTiles = (int)0;
	HX_STACK_LINE(156)
	this->totalTiles = (int)0;
	HX_STACK_LINE(157)
	this->_buffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(158)
	this->_flashPoint = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(159)
	this->_flashRect = null();
	HX_STACK_LINE(160)
	this->_data = null();
	HX_STACK_LINE(161)
	this->_tileWidth = (int)0;
	HX_STACK_LINE(162)
	this->_tileHeight = (int)0;
	HX_STACK_LINE(169)
	this->_rectIDs = null();
	HX_STACK_LINE(171)
	this->_tiles = null();
	HX_STACK_LINE(172)
	this->_tileObjects = null();
	HX_STACK_LINE(173)
	this->immovable = true;
	HX_STACK_LINE(174)
	this->moves = false;
	HX_STACK_LINE(175)
	this->cameras = null();
	HX_STACK_LINE(182)
	this->_lastVisualDebug = ::org::flixel::FlxG_obj::visualDebug;
	HX_STACK_LINE(184)
	this->_startingIndex = (int)0;
	HX_STACK_LINE(187)
	this->_helperPoint = ::flash::geom::Point_obj::__new(null(),null());
}
;
	return null();
}

FlxTilemap_obj::~FlxTilemap_obj() { }

Dynamic FlxTilemap_obj::__CreateEmpty() { return  new FlxTilemap_obj; }
hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__new()
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

Dynamic FlxTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

bool FlxTilemap_obj::set_forceComplexRender( bool value){
	HX_STACK_PUSH("FlxTilemap::set_forceComplexRender","org/flixel/FlxTilemap.hx",2135);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(2136)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(2137)
	int l;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(2139)
	if (((this->_buffers != null()))){
		HX_STACK_LINE(2141)
		i = (int)0;
		HX_STACK_LINE(2142)
		l = this->_buffers->length;
		HX_STACK_LINE(2143)
		{
			HX_STACK_LINE(2143)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2143)
			while(((_g < l))){
				HX_STACK_LINE(2143)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(2145)
				this->_buffers->__get(i1).StaticCast< ::org::flixel::system::FlxTilemapBuffer >()->forceComplexRender = value;
			}
		}
	}
	HX_STACK_LINE(2149)
	return this->super::set_forceComplexRender(value);
}


Void FlxTilemap_obj::updateBuffers( ){
{
		HX_STACK_PUSH("FlxTilemap::updateBuffers","org/flixel/FlxTilemap.hx",2117);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2118)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(2119)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(2121)
		if (((this->_buffers != null()))){
			HX_STACK_LINE(2123)
			i = (int)0;
			HX_STACK_LINE(2124)
			l = this->_buffers->length;
			HX_STACK_LINE(2125)
			{
				HX_STACK_LINE(2125)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2125)
				while(((_g < l))){
					HX_STACK_LINE(2125)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(2127)
					this->_buffers->__get(i1).StaticCast< ::org::flixel::system::FlxTilemapBuffer >()->destroy();
				}
			}
			HX_STACK_LINE(2129)
			this->_buffers = null();
		}
		HX_STACK_LINE(2131)
		this->_buffers = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateBuffers,(void))

::org::flixel::FlxSprite FlxTilemap_obj::tileToFlxSprite( int X,int Y,hx::Null< int >  __o_NewTile){
int NewTile = __o_NewTile.Default(0);
	HX_STACK_PUSH("FlxTilemap::tileToFlxSprite","org/flixel/FlxTilemap.hx",2074);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(NewTile,"NewTile");
{
		HX_STACK_LINE(2075)
		int rowIndex = (X + (Y * this->widthInTiles));		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(2077)
		::flash::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(2081)
		::org::flixel::system::FlxTile tile = this->_tileObjects->__get(this->_data->__get(rowIndex)).StaticCast< ::org::flixel::system::FlxTile >();		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(2082)
		if (((bool((tile == null())) || bool(!(tile->visible))))){
		}
		else{
			HX_STACK_LINE(2088)
			int rx = (((this->_data->__get(rowIndex) - this->_startingIndex)) * (((this->_tileWidth + this->_repeatX) + (int)1)));		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(2089)
			int ry = (int)0;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(2090)
			if (((::Std_obj::_int(rx) >= this->_tiles->get_width()))){
				HX_STACK_LINE(2092)
				ry = (::Std_obj::_int((Float(rx) / Float(this->_tiles->get_width()))) * (((this->_tileHeight + this->_repeatY) + (int)1)));
				HX_STACK_LINE(2093)
				hx::ModEq(rx,this->_tiles->get_width());
			}
			HX_STACK_LINE(2095)
			rect = ::flash::geom::Rectangle_obj::__new(rx,ry,this->_tileWidth,this->_tileHeight);
		}
		HX_STACK_LINE(2099)
		::flash::geom::Point pt = ::flash::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(2100)
		::org::flixel::FlxSprite tileSprite = ::org::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tileSprite,"tileSprite");
		HX_STACK_LINE(2101)
		tileSprite->makeGraphic(this->_tileWidth,this->_tileHeight,(int)0,true,null());
		HX_STACK_LINE(2102)
		tileSprite->x = ((X * this->_tileWidth) + this->x);
		HX_STACK_LINE(2103)
		tileSprite->y = ((Y * this->_tileHeight) + this->y);
		HX_STACK_LINE(2104)
		if (((rect != null()))){
			HX_STACK_LINE(2104)
			tileSprite->get_pixels()->copyPixels(this->_tiles,rect,pt,null(),null(),null());
		}
		HX_STACK_LINE(2105)
		tileSprite->dirty = true;
		HX_STACK_LINE(2106)
		tileSprite->updateFrameData();
		HX_STACK_LINE(2108)
		if (((NewTile >= (int)0))){
			HX_STACK_LINE(2108)
			this->setTile(X,Y,NewTile,null());
		}
		HX_STACK_LINE(2110)
		return tileSprite;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,tileToFlxSprite,return )

Void FlxTilemap_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxTilemap::updateFrameData","org/flixel/FlxTilemap.hx",2048);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2048)
		if (((bool((bool((this->_node != null())) && bool((this->_tileWidth >= (int)1)))) && bool((this->_tileHeight >= (int)1))))){
			HX_STACK_LINE(2052)
			this->_framesData = this->_node->getSpriteSheetFrames(this->_tileWidth,this->_tileHeight,::flash::geom::Point_obj::__new((int)0,(int)0),(int)0,(int)0,(int)0,(int)0,(this->_repeatX + (int)1),(this->_repeatY + (int)1));
			HX_STACK_LINE(2054)
			this->_rectIDs = Array_obj< int >::__new();
			HX_STACK_LINE(2055)
			::org::flixel::util::FlxArray_obj::setLength(this->_rectIDs,this->totalTiles);
			HX_STACK_LINE(2056)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2057)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(2058)
				this->updateTile((i)++);
			}
		}
	}
return null();
}


Void FlxTilemap_obj::updateTile( int Index){
{
		HX_STACK_PUSH("FlxTilemap::updateTile","org/flixel/FlxTilemap.hx",2018);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Index,"Index");
		HX_STACK_LINE(2019)
		::org::flixel::system::FlxTile tile = this->_tileObjects->__get(this->_data->__get(Index)).StaticCast< ::org::flixel::system::FlxTile >();		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(2020)
		if (((bool((tile == null())) || bool(!(tile->visible))))){
			HX_STACK_LINE(2025)
			this->_rectIDs[Index] = (int)-1;
			HX_STACK_LINE(2027)
			return null();
		}
		HX_STACK_LINE(2039)
		this->_rectIDs[Index] = this->_framesData->frames->__get((this->_data->__get(Index) - this->_startingIndex)).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >()->tileID;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,updateTile,(void))

Void FlxTilemap_obj::autoTile( int Index){
{
		HX_STACK_PUSH("FlxTilemap::autoTile","org/flixel/FlxTilemap.hx",1984);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Index,"Index");
		HX_STACK_LINE(1985)
		if (((this->_data->__get(Index) == (int)0))){
			HX_STACK_LINE(1986)
			return null();
		}
		HX_STACK_LINE(1990)
		this->_data[Index] = (int)0;
		HX_STACK_LINE(1991)
		if (((bool(((Index - this->widthInTiles) < (int)0)) || bool((this->_data->__get((Index - this->widthInTiles)) > (int)0))))){
			HX_STACK_LINE(1992)
			hx::AddEq(this->_data[Index],(int)1);
		}
		HX_STACK_LINE(1993)
		if (((bool((hx::Mod(Index,this->widthInTiles) >= (this->widthInTiles - (int)1))) || bool((this->_data->__get((Index + (int)1)) > (int)0))))){
			HX_STACK_LINE(1994)
			hx::AddEq(this->_data[Index],(int)2);
		}
		HX_STACK_LINE(1995)
		if (((bool((::Std_obj::_int((Index + this->widthInTiles)) >= this->totalTiles)) || bool((this->_data->__get((Index + this->widthInTiles)) > (int)0))))){
			HX_STACK_LINE(1996)
			hx::AddEq(this->_data[Index],(int)4);
		}
		HX_STACK_LINE(1997)
		if (((bool((hx::Mod(Index,this->widthInTiles) <= (int)0)) || bool((this->_data->__get((Index - (int)1)) > (int)0))))){
			HX_STACK_LINE(1998)
			hx::AddEq(this->_data[Index],(int)8);
		}
		HX_STACK_LINE(1999)
		if (((bool((this->_auto == (int)2)) && bool((this->_data->__get(Index) == (int)15))))){
			HX_STACK_LINE(2001)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) > (int)0)) && bool((::Std_obj::_int((Index + this->widthInTiles)) < this->totalTiles)))) && bool((this->_data->__get(((Index + this->widthInTiles) - (int)1)) <= (int)0))))){
				HX_STACK_LINE(2002)
				this->_data[Index] = (int)1;
			}
			HX_STACK_LINE(2003)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) > (int)0)) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) - (int)1)) <= (int)0))))){
				HX_STACK_LINE(2004)
				this->_data[Index] = (int)2;
			}
			HX_STACK_LINE(2005)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1))) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) + (int)1)) <= (int)0))))){
				HX_STACK_LINE(2006)
				this->_data[Index] = (int)4;
			}
			HX_STACK_LINE(2007)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1))) && bool((::Std_obj::_int((Index + this->widthInTiles)) < this->totalTiles)))) && bool((this->_data->__get(((Index + this->widthInTiles) + (int)1)) <= (int)0))))){
				HX_STACK_LINE(2008)
				this->_data[Index] = (int)8;
			}
		}
		HX_STACK_LINE(2010)
		hx::AddEq(this->_data[Index],(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,autoTile,(void))

::org::flixel::util::FlxPoint FlxTilemap_obj::rayHit( ::org::flixel::util::FlxPoint Start,::org::flixel::util::FlxPoint End,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_PUSH("FlxTilemap::rayHit","org/flixel/FlxTilemap.hx",1717);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
	HX_STACK_ARG(Resolution,"Resolution");
{
		HX_STACK_LINE(1718)
		::org::flixel::util::FlxPoint Result = null();		HX_STACK_VAR(Result,"Result");
		HX_STACK_LINE(1719)
		Float step = this->_tileWidth;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(1720)
		if (((this->_tileHeight < this->_tileWidth))){
			HX_STACK_LINE(1721)
			step = this->_tileHeight;
		}
		HX_STACK_LINE(1724)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(1725)
		Float deltaX = (End->x - Start->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1726)
		Float deltaY = (End->y - Start->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1727)
		Float distance = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(1728)
		int steps = ::Math_obj::ceil((Float(distance) / Float(step)));		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(1729)
		Float stepX = (Float(deltaX) / Float(steps));		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(1730)
		Float stepY = (Float(deltaY) / Float(steps));		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(1731)
		Float curX = ((Start->x - stepX) - this->x);		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(1732)
		Float curY = ((Start->y - stepY) - this->y);		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(1733)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(1734)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(1735)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1736)
		while(((i < steps))){
			HX_STACK_LINE(1738)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(1739)
			hx::AddEq(curY,stepY);
			HX_STACK_LINE(1741)
			if (((bool((bool((bool((curX < (int)0)) || bool((curX > this->width)))) || bool((curY < (int)0)))) || bool((curY > this->height))))){
				HX_STACK_LINE(1743)
				(i)++;
				HX_STACK_LINE(1744)
				continue;
			}
			HX_STACK_LINE(1747)
			tileX = ::Math_obj::floor((Float(curX) / Float(this->_tileWidth)));
			HX_STACK_LINE(1748)
			tileY = ::Math_obj::floor((Float(curY) / Float(this->_tileHeight)));
			HX_STACK_LINE(1749)
			if (((this->_tileObjects->__get(this->_data->__get(((tileY * this->widthInTiles) + tileX))).StaticCast< ::org::flixel::system::FlxTile >()->allowCollisions != (int)0))){
				HX_STACK_LINE(1752)
				hx::MultEq(tileX,this->_tileWidth);
				HX_STACK_LINE(1753)
				hx::MultEq(tileY,this->_tileHeight);
				HX_STACK_LINE(1754)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(1755)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(1756)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(1757)
				Float lx = (curX - stepX);		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(1758)
				Float ly = (curY - stepY);		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(1761)
				q = tileX;
				HX_STACK_LINE(1762)
				if (((deltaX < (int)0))){
					HX_STACK_LINE(1763)
					hx::AddEq(q,this->_tileWidth);
				}
				HX_STACK_LINE(1766)
				rx = q;
				HX_STACK_LINE(1767)
				ry = (ly + (stepY * ((Float(((q - lx))) / Float(stepX)))));
				HX_STACK_LINE(1768)
				if (((bool((ry > tileY)) && bool((ry < (tileY + this->_tileHeight)))))){
					HX_STACK_LINE(1770)
					if (((Result == null()))){
						HX_STACK_LINE(1771)
						Result = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(1774)
					Result->x = rx;
					HX_STACK_LINE(1775)
					Result->y = ry;
					HX_STACK_LINE(1776)
					return Result;
				}
				HX_STACK_LINE(1780)
				q = tileY;
				HX_STACK_LINE(1781)
				if (((deltaY < (int)0))){
					HX_STACK_LINE(1782)
					hx::AddEq(q,this->_tileHeight);
				}
				HX_STACK_LINE(1785)
				rx = (lx + (stepX * ((Float(((q - ly))) / Float(stepY)))));
				HX_STACK_LINE(1786)
				ry = q;
				HX_STACK_LINE(1787)
				if (((bool((rx > tileX)) && bool((rx < (tileX + this->_tileWidth)))))){
					HX_STACK_LINE(1789)
					if (((Result == null()))){
						HX_STACK_LINE(1790)
						Result = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(1793)
					Result->x = rx;
					HX_STACK_LINE(1794)
					Result->y = ry;
					HX_STACK_LINE(1795)
					return Result;
				}
				HX_STACK_LINE(1797)
				return null();
			}
			HX_STACK_LINE(1799)
			(i)++;
		}
		HX_STACK_LINE(1801)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,rayHit,return )

bool FlxTilemap_obj::ray( ::org::flixel::util::FlxPoint Start,::org::flixel::util::FlxPoint End,::org::flixel::util::FlxPoint Result,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_PUSH("FlxTilemap::ray","org/flixel/FlxTilemap.hx",1618);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
	HX_STACK_ARG(Result,"Result");
	HX_STACK_ARG(Resolution,"Resolution");
{
		HX_STACK_LINE(1619)
		Float step = this->_tileWidth;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(1620)
		if (((this->_tileHeight < this->_tileWidth))){
			HX_STACK_LINE(1621)
			step = this->_tileHeight;
		}
		HX_STACK_LINE(1624)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(1625)
		Float deltaX = (End->x - Start->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1626)
		Float deltaY = (End->y - Start->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1627)
		Float distance = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(1628)
		int steps = ::Math_obj::ceil((Float(distance) / Float(step)));		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(1629)
		Float stepX = (Float(deltaX) / Float(steps));		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(1630)
		Float stepY = (Float(deltaY) / Float(steps));		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(1631)
		Float curX = ((Start->x - stepX) - this->x);		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(1632)
		Float curY = ((Start->y - stepY) - this->y);		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(1633)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(1634)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(1635)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1636)
		while(((i < steps))){
			HX_STACK_LINE(1638)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(1639)
			hx::AddEq(curY,stepY);
			HX_STACK_LINE(1641)
			if (((bool((bool((bool((curX < (int)0)) || bool((curX > this->width)))) || bool((curY < (int)0)))) || bool((curY > this->height))))){
				HX_STACK_LINE(1643)
				(i)++;
				HX_STACK_LINE(1644)
				continue;
			}
			HX_STACK_LINE(1647)
			tileX = ::Math_obj::floor((Float(curX) / Float(this->_tileWidth)));
			HX_STACK_LINE(1648)
			tileY = ::Math_obj::floor((Float(curY) / Float(this->_tileHeight)));
			HX_STACK_LINE(1649)
			if (((this->_tileObjects->__get(this->_data->__get(((tileY * this->widthInTiles) + tileX))).StaticCast< ::org::flixel::system::FlxTile >()->allowCollisions != (int)0))){
				HX_STACK_LINE(1652)
				hx::MultEq(tileX,this->_tileWidth);
				HX_STACK_LINE(1653)
				hx::MultEq(tileY,this->_tileHeight);
				HX_STACK_LINE(1654)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(1655)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(1656)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(1657)
				Float lx = (curX - stepX);		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(1658)
				Float ly = (curY - stepY);		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(1661)
				q = tileX;
				HX_STACK_LINE(1662)
				if (((deltaX < (int)0))){
					HX_STACK_LINE(1663)
					hx::AddEq(q,this->_tileWidth);
				}
				HX_STACK_LINE(1666)
				rx = q;
				HX_STACK_LINE(1667)
				ry = (ly + (stepY * ((Float(((q - lx))) / Float(stepX)))));
				HX_STACK_LINE(1668)
				if (((bool((ry > tileY)) && bool((ry < (tileY + this->_tileHeight)))))){
					HX_STACK_LINE(1670)
					if (((Result != null()))){
						HX_STACK_LINE(1672)
						Result->x = rx;
						HX_STACK_LINE(1673)
						Result->y = ry;
					}
					HX_STACK_LINE(1675)
					return false;
				}
				HX_STACK_LINE(1679)
				q = tileY;
				HX_STACK_LINE(1680)
				if (((deltaY < (int)0))){
					HX_STACK_LINE(1681)
					hx::AddEq(q,this->_tileHeight);
				}
				HX_STACK_LINE(1684)
				rx = (lx + (stepX * ((Float(((q - ly))) / Float(stepY)))));
				HX_STACK_LINE(1685)
				ry = q;
				HX_STACK_LINE(1686)
				if (((bool((rx > tileX)) && bool((rx < (tileX + this->_tileWidth)))))){
					HX_STACK_LINE(1688)
					if (((Result != null()))){
						HX_STACK_LINE(1690)
						Result->x = rx;
						HX_STACK_LINE(1691)
						Result->y = ry;
					}
					HX_STACK_LINE(1693)
					return false;
				}
				HX_STACK_LINE(1695)
				return true;
			}
			HX_STACK_LINE(1697)
			(i)++;
		}
		HX_STACK_LINE(1699)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,ray,return )

::org::flixel::util::FlxRect FlxTilemap_obj::getBounds( ::org::flixel::util::FlxRect Bounds){
	HX_STACK_PUSH("FlxTilemap::getBounds","org/flixel/FlxTilemap.hx",1600);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Bounds,"Bounds");
	HX_STACK_LINE(1601)
	if (((Bounds == null()))){
		HX_STACK_LINE(1602)
		Bounds = ::org::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
	}
	struct _Function_1_1{
		inline static ::org::flixel::util::FlxRect Block( ::org::flixel::util::FlxRect &Bounds,::org::flixel::FlxTilemap_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/FlxTilemap.hx",1605);
			{
				HX_STACK_LINE(1605)
				Bounds->x = __this->x;
				HX_STACK_LINE(1605)
				Bounds->y = __this->y;
				HX_STACK_LINE(1605)
				Bounds->width = __this->width;
				HX_STACK_LINE(1605)
				Bounds->height = __this->height;
				HX_STACK_LINE(1605)
				return Bounds;
			}
			return null();
		}
	};
	HX_STACK_LINE(1605)
	return _Function_1_1::Block(Bounds,this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getBounds,return )

Void FlxTilemap_obj::follow( ::org::flixel::FlxCamera Camera,hx::Null< int >  __o_Border,hx::Null< bool >  __o_UpdateWorld){
int Border = __o_Border.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(true);
	HX_STACK_PUSH("FlxTilemap::follow","org/flixel/FlxTilemap.hx",1586);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(Border,"Border");
	HX_STACK_ARG(UpdateWorld,"UpdateWorld");
{
		HX_STACK_LINE(1587)
		if (((Camera == null()))){
			HX_STACK_LINE(1588)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1591)
		Camera->setBounds((this->x + (Border * this->_tileWidth)),(this->y + (Border * this->_tileHeight)),(this->width - ((Border * this->_tileWidth) * (int)2)),(this->height - ((Border * this->_tileHeight) * (int)2)),UpdateWorld);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,follow,(void))

Void FlxTilemap_obj::setTileProperties( int Tile,hx::Null< int >  __o_AllowCollisions,Dynamic Callback,::Class CallbackFilter,hx::Null< int >  __o_Range){
int AllowCollisions = __o_AllowCollisions.Default(4369);
int Range = __o_Range.Default(1);
	HX_STACK_PUSH("FlxTilemap::setTileProperties","org/flixel/FlxTilemap.hx",1562);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Tile,"Tile");
	HX_STACK_ARG(AllowCollisions,"AllowCollisions");
	HX_STACK_ARG(Callback,"Callback");
	HX_STACK_ARG(CallbackFilter,"CallbackFilter");
	HX_STACK_ARG(Range,"Range");
{
		HX_STACK_LINE(1563)
		if (((Range <= (int)0))){
			HX_STACK_LINE(1564)
			Range = (int)1;
		}
		HX_STACK_LINE(1567)
		::org::flixel::system::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1568)
		int i = Tile;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1569)
		int l = (Tile + Range);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1570)
		while(((i < l))){
			HX_STACK_LINE(1572)
			tile = this->_tileObjects->__get((i)++).StaticCast< ::org::flixel::system::FlxTile >();
			HX_STACK_LINE(1573)
			tile->allowCollisions = AllowCollisions;
			HX_STACK_LINE(1574)
			tile->callbackFunction = Callback;
			HX_STACK_LINE(1575)
			tile->filter = CallbackFilter;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,setTileProperties,(void))

bool FlxTilemap_obj::setTileByIndex( int Index,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_PUSH("FlxTilemap::setTileByIndex","org/flixel/FlxTilemap.hx",1505);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_ARG(Tile,"Tile");
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics");
{
		HX_STACK_LINE(1506)
		if (((Index >= this->_data->length))){
			HX_STACK_LINE(1507)
			return false;
		}
		HX_STACK_LINE(1511)
		bool ok = true;		HX_STACK_VAR(ok,"ok");
		HX_STACK_LINE(1512)
		this->_data[Index] = Tile;
		HX_STACK_LINE(1514)
		if ((!(UpdateGraphics))){
			HX_STACK_LINE(1515)
			return ok;
		}
		HX_STACK_LINE(1519)
		this->setDirty(null());
		HX_STACK_LINE(1521)
		if (((this->_auto == (int)0))){
			HX_STACK_LINE(1523)
			this->updateTile(Index);
			HX_STACK_LINE(1524)
			return ok;
		}
		HX_STACK_LINE(1528)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1529)
		int row = (::Std_obj::_int((Float(Index) / Float(this->widthInTiles))) - (int)1);		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1530)
		int rowLength = (row + (int)3);		HX_STACK_VAR(rowLength,"rowLength");
		HX_STACK_LINE(1531)
		int column = (hx::Mod(Index,this->widthInTiles) - (int)1);		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1532)
		int columnHeight = (column + (int)3);		HX_STACK_VAR(columnHeight,"columnHeight");
		HX_STACK_LINE(1533)
		while(((row < rowLength))){
			HX_STACK_LINE(1535)
			column = (columnHeight - (int)3);
			HX_STACK_LINE(1536)
			while(((column < columnHeight))){
				HX_STACK_LINE(1538)
				if (((bool((bool((bool((row >= (int)0)) && bool((row < this->heightInTiles)))) && bool((column >= (int)0)))) && bool((column < this->widthInTiles))))){
					HX_STACK_LINE(1540)
					i = ((row * this->widthInTiles) + column);
					HX_STACK_LINE(1541)
					this->autoTile(i);
					HX_STACK_LINE(1542)
					this->updateTile(i);
				}
				HX_STACK_LINE(1544)
				(column)++;
			}
			HX_STACK_LINE(1546)
			(row)++;
		}
		HX_STACK_LINE(1549)
		return ok;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,setTileByIndex,return )

bool FlxTilemap_obj::setTile( int X,int Y,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_PUSH("FlxTilemap::setTile","org/flixel/FlxTilemap.hx",1489);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Tile,"Tile");
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics");
{
		HX_STACK_LINE(1490)
		if (((bool((X >= this->widthInTiles)) || bool((Y >= this->heightInTiles))))){
			HX_STACK_LINE(1491)
			return false;
		}
		HX_STACK_LINE(1494)
		return this->setTileByIndex(((Y * this->widthInTiles) + X),Tile,UpdateGraphics);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,setTile,return )

Array< ::Dynamic > FlxTilemap_obj::getTileCoords( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_PUSH("FlxTilemap::getTileCoords","org/flixel/FlxTilemap.hx",1452);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_ARG(Midpoint,"Midpoint");
{
		HX_STACK_LINE(1453)
		Array< ::Dynamic > array = null();		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(1455)
		::org::flixel::util::FlxPoint point;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1456)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1457)
		int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1458)
		while(((i < l))){
			HX_STACK_LINE(1460)
			if (((this->_data->__get(i) == Index))){
				HX_STACK_LINE(1462)
				point = ::org::flixel::util::FlxPoint_obj::__new((this->x + (::Std_obj::_int(hx::Mod(i,this->widthInTiles)) * this->_tileWidth)),(this->y + (::Std_obj::_int((Float(i) / Float(this->widthInTiles))) * this->_tileHeight)));
				HX_STACK_LINE(1463)
				if ((Midpoint)){
					HX_STACK_LINE(1465)
					hx::AddEq(point->x,(this->_tileWidth * 0.5));
					HX_STACK_LINE(1466)
					hx::AddEq(point->y,(this->_tileHeight * 0.5));
				}
				HX_STACK_LINE(1468)
				if (((array == null()))){
					HX_STACK_LINE(1469)
					array = Array_obj< ::Dynamic >::__new();
				}
				HX_STACK_LINE(1472)
				array->push(point);
			}
			HX_STACK_LINE(1474)
			(i)++;
		}
		HX_STACK_LINE(1477)
		return array;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTileCoords,return )

Array< int > FlxTilemap_obj::getTileInstances( int Index){
	HX_STACK_PUSH("FlxTilemap::getTileInstances","org/flixel/FlxTilemap.hx",1425);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_LINE(1426)
	Array< int > array = null();		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(1427)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1428)
	int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1429)
	while(((i < l))){
		HX_STACK_LINE(1431)
		if (((this->_data->__get(i) == Index))){
			HX_STACK_LINE(1433)
			if (((array == null()))){
				HX_STACK_LINE(1434)
				array = Array_obj< int >::__new();
			}
			HX_STACK_LINE(1437)
			array->push(i);
		}
		HX_STACK_LINE(1439)
		(i)++;
	}
	HX_STACK_LINE(1442)
	return array;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileInstances,return )

int FlxTilemap_obj::getTileByIndex( int Index){
	HX_STACK_PUSH("FlxTilemap::getTileByIndex","org/flixel/FlxTilemap.hx",1415);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_LINE(1415)
	return this->_data->__get(Index);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileByIndex,return )

int FlxTilemap_obj::getTile( int X,int Y){
	HX_STACK_PUSH("FlxTilemap::getTile","org/flixel/FlxTilemap.hx",1402);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_LINE(1402)
	return this->_data->__get(((Y * this->widthInTiles) + X));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTile,return )

bool FlxTilemap_obj::overlapsPoint( ::org::flixel::util::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlapsPoint","org/flixel/FlxTilemap.hx",1379);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1380)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(1381)
			return (this->_tileObjects->__get(this->_data->__get(::Math_obj::floor(((::Math_obj::floor((Float(((point->y - this->y))) / Float(this->_tileHeight))) * this->widthInTiles) + (Float(((point->x - this->x))) / Float(this->_tileWidth)))))).StaticCast< ::org::flixel::system::FlxTile >()->allowCollisions > (int)0);
		}
		HX_STACK_LINE(1385)
		if (((Camera == null()))){
			HX_STACK_LINE(1386)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1389)
		point->x = (point->x - Camera->scroll->x);
		HX_STACK_LINE(1390)
		point->y = (point->y - Camera->scroll->y);
		HX_STACK_LINE(1391)
		{
			HX_STACK_LINE(1391)
			::org::flixel::util::FlxPoint point1 = this->_point;		HX_STACK_VAR(point1,"point1");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(1391)
			if (((point1 == null()))){
				HX_STACK_LINE(1391)
				point1 = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(1391)
			if (((Camera1 == null()))){
				HX_STACK_LINE(1391)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(1391)
			point1->x = (this->x - (Camera1->scroll->x * this->scrollFactor->x));
			HX_STACK_LINE(1391)
			point1->y = (this->y - (Camera1->scroll->y * this->scrollFactor->y));
			HX_STACK_LINE(1391)
			point1;
		}
		HX_STACK_LINE(1392)
		return (this->_tileObjects->__get(this->_data->__get(::Std_obj::_int(((::Std_obj::_int((Float(((point->y - this->_point->y))) / Float(this->_tileHeight))) * this->widthInTiles) + (Float(((point->x - this->_point->x))) / Float(this->_tileWidth)))))).StaticCast< ::org::flixel::system::FlxTile >()->allowCollisions > (int)0);
	}
}


bool FlxTilemap_obj::overlapsWithCallback( ::org::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::org::flixel::util::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlapsWithCallback","org/flixel/FlxTilemap.hx",1270);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Callback,"Callback");
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams");
	HX_STACK_ARG(Position,"Position");
{
		HX_STACK_LINE(1271)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(1273)
		Float X = this->x;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(1274)
		Float Y = this->y;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(1275)
		if (((Position != null()))){
			HX_STACK_LINE(1277)
			X = Position->x;
			HX_STACK_LINE(1278)
			Y = Position->y;
		}
		HX_STACK_LINE(1282)
		int selectionX = ::Math_obj::floor((Float(((Object->x - X))) / Float(this->_tileWidth)));		HX_STACK_VAR(selectionX,"selectionX");
		HX_STACK_LINE(1283)
		int selectionY = ::Math_obj::floor((Float(((Object->y - Y))) / Float(this->_tileHeight)));		HX_STACK_VAR(selectionY,"selectionY");
		HX_STACK_LINE(1284)
		int selectionWidth = ((selectionX + ::Math_obj::ceil((Float(Object->width) / Float(this->_tileWidth)))) + (int)1);		HX_STACK_VAR(selectionWidth,"selectionWidth");
		HX_STACK_LINE(1285)
		int selectionHeight = ((selectionY + ::Math_obj::ceil((Float(Object->height) / Float(this->_tileHeight)))) + (int)1);		HX_STACK_VAR(selectionHeight,"selectionHeight");
		HX_STACK_LINE(1288)
		if (((selectionX < (int)0))){
			HX_STACK_LINE(1289)
			selectionX = (int)0;
		}
		HX_STACK_LINE(1292)
		if (((selectionY < (int)0))){
			HX_STACK_LINE(1293)
			selectionY = (int)0;
		}
		HX_STACK_LINE(1296)
		if (((selectionWidth > this->widthInTiles))){
			HX_STACK_LINE(1297)
			selectionWidth = this->widthInTiles;
		}
		HX_STACK_LINE(1300)
		if (((selectionHeight > this->heightInTiles))){
			HX_STACK_LINE(1301)
			selectionHeight = this->heightInTiles;
		}
		HX_STACK_LINE(1306)
		int rowStart = (selectionY * this->widthInTiles);		HX_STACK_VAR(rowStart,"rowStart");
		HX_STACK_LINE(1307)
		int row = selectionY;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1308)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1309)
		::org::flixel::system::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1310)
		bool overlapFound;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(1311)
		Float deltaX = (X - this->last->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1312)
		Float deltaY = (Y - this->last->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1313)
		while(((row < selectionHeight))){
			HX_STACK_LINE(1315)
			column = selectionX;
			HX_STACK_LINE(1316)
			while(((column < selectionWidth))){
				HX_STACK_LINE(1318)
				overlapFound = false;
				HX_STACK_LINE(1319)
				int dataIndex = this->_data->__get((rowStart + column));		HX_STACK_VAR(dataIndex,"dataIndex");
				HX_STACK_LINE(1320)
				if (((dataIndex < (int)0))){
					HX_STACK_LINE(1322)
					(column)++;
					HX_STACK_LINE(1323)
					continue;
				}
				HX_STACK_LINE(1326)
				tile = this->_tileObjects->__get(dataIndex).StaticCast< ::org::flixel::system::FlxTile >();
				HX_STACK_LINE(1327)
				if (((tile->allowCollisions != (int)0))){
					HX_STACK_LINE(1329)
					tile->x = (X + (column * this->_tileWidth));
					HX_STACK_LINE(1330)
					tile->y = (Y + (row * this->_tileHeight));
					HX_STACK_LINE(1331)
					tile->last->x = (tile->x - deltaX);
					HX_STACK_LINE(1332)
					tile->last->y = (tile->y - deltaY);
					HX_STACK_LINE(1333)
					if (((Callback != null()))){
						HX_STACK_LINE(1334)
						if ((FlipCallbackParams)){
							HX_STACK_LINE(1336)
							overlapFound = Callback(Object,tile).Cast< bool >();
						}
						else{
							HX_STACK_LINE(1340)
							overlapFound = Callback(tile,Object).Cast< bool >();
						}
					}
					else{
						HX_STACK_LINE(1345)
						overlapFound = (bool((bool((bool(((Object->x + Object->width) > tile->x)) && bool((Object->x < (tile->x + tile->width))))) && bool(((Object->y + Object->height) > tile->y)))) && bool((Object->y < (tile->y + tile->height))));
					}
					HX_STACK_LINE(1348)
					if ((overlapFound)){
						HX_STACK_LINE(1350)
						if (((bool((tile->callbackFunction != null())) && bool(((bool((tile->filter == null())) || bool(::Std_obj::is(Object,tile->filter)))))))){
							HX_STACK_LINE(1352)
							tile->mapIndex = (rowStart + column);
							HX_STACK_LINE(1353)
							tile->callbackFunction(tile,Object);
						}
						HX_STACK_LINE(1355)
						results = true;
					}
				}
				else{
					HX_STACK_LINE(1358)
					if (((bool((tile->callbackFunction != null())) && bool(((bool((tile->filter == null())) || bool(::Std_obj::is(Object,tile->filter)))))))){
						HX_STACK_LINE(1360)
						tile->mapIndex = (rowStart + column);
						HX_STACK_LINE(1361)
						tile->callbackFunction(tile,Object);
					}
				}
				HX_STACK_LINE(1363)
				(column)++;
			}
			HX_STACK_LINE(1365)
			hx::AddEq(rowStart,this->widthInTiles);
			HX_STACK_LINE(1366)
			(row)++;
		}
		HX_STACK_LINE(1368)
		return results;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,overlapsWithCallback,return )

bool FlxTilemap_obj::overlapsAt( Float X,Float Y,::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlapsAt","org/flixel/FlxTilemap.hx",1217);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1218)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxTypedGroup >()))){
			HX_STACK_LINE(1220)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(1221)
			::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(1222)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1223)
			::org::flixel::FlxTypedGroup grp = ObjectOrGroup;		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(1224)
			Array< ::Dynamic > members = grp->members;		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(1225)
			while(((i < grp->length))){
				HX_STACK_LINE(1227)
				basic = members->__get((i)++).StaticCast< ::org::flixel::FlxBasic >();
				HX_STACK_LINE(1228)
				if (((bool((basic != null())) && bool(basic->exists)))){
					HX_STACK_LINE(1229)
					if ((::Std_obj::is(basic,hx::ClassOf< ::org::flixel::FlxObject >()))){
						HX_STACK_LINE(1232)
						this->_point->x = X;
						HX_STACK_LINE(1233)
						this->_point->y = Y;
						HX_STACK_LINE(1234)
						if ((this->overlapsWithCallback(hx::TCast< org::flixel::FlxObject >::cast(basic),null(),false,this->_point))){
							HX_STACK_LINE(1235)
							results = true;
						}
					}
					else{
						HX_STACK_LINE(1240)
						if ((this->overlapsAt(X,Y,basic,InScreenSpace,Camera))){
							HX_STACK_LINE(1242)
							results = true;
						}
					}
				}
			}
			HX_STACK_LINE(1248)
			return results;
		}
		else{
			HX_STACK_LINE(1250)
			if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxObject >()))){
				HX_STACK_LINE(1252)
				this->_point->x = X;
				HX_STACK_LINE(1253)
				this->_point->y = Y;
				HX_STACK_LINE(1254)
				return this->overlapsWithCallback(hx::TCast< org::flixel::FlxObject >::cast(ObjectOrGroup),null(),false,this->_point);
			}
		}
		HX_STACK_LINE(1256)
		return false;
	}
}


bool FlxTilemap_obj::overlaps( ::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlaps","org/flixel/FlxTilemap.hx",1166);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1167)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxTypedGroup >()))){
			HX_STACK_LINE(1169)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(1170)
			::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(1171)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1172)
			::org::flixel::FlxTypedGroup grp = ObjectOrGroup;		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(1173)
			Array< ::Dynamic > members = grp->members;		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(1175)
			while(((i < grp->length))){
				HX_STACK_LINE(1177)
				basic = members->__get((i)++).StaticCast< ::org::flixel::FlxBasic >();
				HX_STACK_LINE(1178)
				if (((bool((basic != null())) && bool(basic->exists)))){
					HX_STACK_LINE(1179)
					if ((::Std_obj::is(basic,hx::ClassOf< ::org::flixel::FlxObject >()))){
						HX_STACK_LINE(1181)
						if ((this->overlapsWithCallback(hx::TCast< org::flixel::FlxObject >::cast(basic),null(),null(),null()))){
							HX_STACK_LINE(1183)
							results = true;
						}
					}
					else{
						HX_STACK_LINE(1188)
						if ((this->overlaps(basic,InScreenSpace,Camera))){
							HX_STACK_LINE(1190)
							results = true;
						}
					}
				}
			}
			HX_STACK_LINE(1196)
			return results;
		}
		else{
			HX_STACK_LINE(1198)
			if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxObject >()))){
				HX_STACK_LINE(1199)
				return this->overlapsWithCallback(hx::TCast< org::flixel::FlxObject >::cast(ObjectOrGroup),null(),null(),null());
			}
		}
		HX_STACK_LINE(1202)
		return false;
	}
}


Void FlxTilemap_obj::walkPath( Array< int > Data,int Start,Array< ::Dynamic > Points){
{
		HX_STACK_PUSH("FlxTilemap::walkPath","org/flixel/FlxTilemap.hx",1075);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Data,"Data");
		HX_STACK_ARG(Start,"Start");
		HX_STACK_ARG(Points,"Points");
		HX_STACK_LINE(1076)
		Points->push(::org::flixel::util::FlxPoint_obj::__new(((this->x + (::Math_obj::floor(hx::Mod(Start,this->widthInTiles)) * this->_tileWidth)) + (this->_tileWidth * 0.5)),((this->y + (::Math_obj::floor((Float(Start) / Float(this->widthInTiles))) * this->_tileHeight)) + (this->_tileHeight * 0.5))));
		HX_STACK_LINE(1077)
		if (((Data->__get(Start) == (int)0))){
			HX_STACK_LINE(1078)
			return null();
		}
		HX_STACK_LINE(1082)
		bool left = (hx::Mod(Start,this->widthInTiles) > (int)0);		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(1083)
		bool right = (hx::Mod(Start,this->widthInTiles) < (this->widthInTiles - (int)1));		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(1084)
		bool up = ((Float(Start) / Float(this->widthInTiles)) > (int)0);		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(1085)
		bool down = ((Float(Start) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(1087)
		int current = Data->__get(Start);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1088)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1089)
		if ((up)){
			HX_STACK_LINE(1091)
			i = (Start - this->widthInTiles);
			HX_STACK_LINE(1092)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1093)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1097)
		if ((right)){
			HX_STACK_LINE(1099)
			i = (Start + (int)1);
			HX_STACK_LINE(1100)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1101)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1105)
		if ((down)){
			HX_STACK_LINE(1107)
			i = (Start + this->widthInTiles);
			HX_STACK_LINE(1108)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1109)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1113)
		if ((left)){
			HX_STACK_LINE(1115)
			i = (Start - (int)1);
			HX_STACK_LINE(1116)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1117)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1121)
		if (((bool(up) && bool(right)))){
			HX_STACK_LINE(1123)
			i = ((Start - this->widthInTiles) + (int)1);
			HX_STACK_LINE(1124)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1125)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1129)
		if (((bool(right) && bool(down)))){
			HX_STACK_LINE(1131)
			i = ((Start + this->widthInTiles) + (int)1);
			HX_STACK_LINE(1132)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1133)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1137)
		if (((bool(left) && bool(down)))){
			HX_STACK_LINE(1139)
			i = ((Start + this->widthInTiles) - (int)1);
			HX_STACK_LINE(1140)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1141)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1145)
		if (((bool(up) && bool(left)))){
			HX_STACK_LINE(1147)
			i = ((Start - this->widthInTiles) - (int)1);
			HX_STACK_LINE(1148)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1149)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1153)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,walkPath,(void))

Array< int > FlxTilemap_obj::computePathDistance( int StartIndex,int EndIndex,bool WideDiagonal){
	HX_STACK_PUSH("FlxTilemap::computePathDistance","org/flixel/FlxTilemap.hx",911);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartIndex,"StartIndex");
	HX_STACK_ARG(EndIndex,"EndIndex");
	HX_STACK_ARG(WideDiagonal,"WideDiagonal");
	HX_STACK_LINE(914)
	int mapSize = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(mapSize,"mapSize");
	HX_STACK_LINE(915)
	Array< int > distances = Array_obj< int >::__new();		HX_STACK_VAR(distances,"distances");
	HX_STACK_LINE(916)
	::org::flixel::util::FlxArray_obj::setLength(distances,mapSize);
	HX_STACK_LINE(917)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(918)
	while(((i < mapSize))){
		HX_STACK_LINE(920)
		if (((this->_tileObjects->__get(this->_data->__get(i)).StaticCast< ::org::flixel::system::FlxTile >()->allowCollisions != (int)0))){
			HX_STACK_LINE(921)
			distances[i] = (int)-2;
		}
		else{
			HX_STACK_LINE(925)
			distances[i] = (int)-1;
		}
		HX_STACK_LINE(928)
		(i)++;
	}
	HX_STACK_LINE(930)
	distances[StartIndex] = (int)0;
	HX_STACK_LINE(931)
	int distance = (int)1;		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(932)
	Array< int > neighbors = Array_obj< int >::__new().Add(StartIndex);		HX_STACK_VAR(neighbors,"neighbors");
	HX_STACK_LINE(933)
	Array< int > current;		HX_STACK_VAR(current,"current");
	HX_STACK_LINE(934)
	int currentIndex;		HX_STACK_VAR(currentIndex,"currentIndex");
	HX_STACK_LINE(935)
	bool left;		HX_STACK_VAR(left,"left");
	HX_STACK_LINE(936)
	bool right;		HX_STACK_VAR(right,"right");
	HX_STACK_LINE(937)
	bool up;		HX_STACK_VAR(up,"up");
	HX_STACK_LINE(938)
	bool down;		HX_STACK_VAR(down,"down");
	HX_STACK_LINE(939)
	int currentLength;		HX_STACK_VAR(currentLength,"currentLength");
	HX_STACK_LINE(940)
	bool foundEnd = false;		HX_STACK_VAR(foundEnd,"foundEnd");
	HX_STACK_LINE(941)
	while(((neighbors->length > (int)0))){
		HX_STACK_LINE(943)
		current = neighbors;
		HX_STACK_LINE(944)
		neighbors = Array_obj< int >::__new();
		HX_STACK_LINE(946)
		i = (int)0;
		HX_STACK_LINE(947)
		currentLength = current->length;
		HX_STACK_LINE(948)
		while(((i < currentLength))){
			HX_STACK_LINE(950)
			currentIndex = current->__get((i)++);
			HX_STACK_LINE(951)
			if (((currentIndex == ::Std_obj::_int(EndIndex)))){
				HX_STACK_LINE(953)
				foundEnd = true;
				HX_STACK_LINE(955)
				neighbors = Array_obj< int >::__new();
				HX_STACK_LINE(956)
				break;
			}
			HX_STACK_LINE(960)
			left = (hx::Mod(currentIndex,this->widthInTiles) > (int)0);
			HX_STACK_LINE(961)
			right = (hx::Mod(currentIndex,this->widthInTiles) < (this->widthInTiles - (int)1));
			HX_STACK_LINE(962)
			up = ((Float(currentIndex) / Float(this->widthInTiles)) > (int)0);
			HX_STACK_LINE(963)
			down = ((Float(currentIndex) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));
			HX_STACK_LINE(965)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(966)
			if ((up)){
				HX_STACK_LINE(968)
				index = (currentIndex - this->widthInTiles);
				HX_STACK_LINE(969)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(971)
					distances[index] = distance;
					HX_STACK_LINE(972)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(975)
			if ((right)){
				HX_STACK_LINE(977)
				index = (currentIndex + (int)1);
				HX_STACK_LINE(978)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(980)
					distances[index] = distance;
					HX_STACK_LINE(981)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(984)
			if ((down)){
				HX_STACK_LINE(986)
				index = (currentIndex + this->widthInTiles);
				HX_STACK_LINE(987)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(989)
					distances[index] = distance;
					HX_STACK_LINE(990)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(993)
			if ((left)){
				HX_STACK_LINE(995)
				index = (currentIndex - (int)1);
				HX_STACK_LINE(996)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(998)
					distances[index] = distance;
					HX_STACK_LINE(999)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(1002)
			if (((bool(up) && bool(right)))){
				HX_STACK_LINE(1004)
				index = ((currentIndex - this->widthInTiles) + (int)1);
				HX_STACK_LINE(1005)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
					HX_STACK_LINE(1007)
					distances[index] = distance;
					HX_STACK_LINE(1008)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(1010)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(1012)
						distances[index] = distance;
						HX_STACK_LINE(1013)
						neighbors->push(index);
					}
				}
			}
			HX_STACK_LINE(1016)
			if (((bool(right) && bool(down)))){
				HX_STACK_LINE(1018)
				index = ((currentIndex + this->widthInTiles) + (int)1);
				HX_STACK_LINE(1019)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
					HX_STACK_LINE(1021)
					distances[index] = distance;
					HX_STACK_LINE(1022)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(1024)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(1026)
						distances[index] = distance;
						HX_STACK_LINE(1027)
						neighbors->push(index);
					}
				}
			}
			HX_STACK_LINE(1030)
			if (((bool(left) && bool(down)))){
				HX_STACK_LINE(1032)
				index = ((currentIndex + this->widthInTiles) - (int)1);
				HX_STACK_LINE(1033)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
					HX_STACK_LINE(1035)
					distances[index] = distance;
					HX_STACK_LINE(1036)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(1038)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(1040)
						distances[index] = distance;
						HX_STACK_LINE(1041)
						neighbors->push(index);
					}
				}
			}
			HX_STACK_LINE(1044)
			if (((bool(up) && bool(left)))){
				HX_STACK_LINE(1046)
				index = ((currentIndex - this->widthInTiles) - (int)1);
				HX_STACK_LINE(1047)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
					HX_STACK_LINE(1049)
					distances[index] = distance;
					HX_STACK_LINE(1050)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(1052)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(1054)
						distances[index] = distance;
						HX_STACK_LINE(1055)
						neighbors->push(index);
					}
				}
			}
		}
		HX_STACK_LINE(1059)
		(distance)++;
	}
	HX_STACK_LINE(1061)
	if ((!(foundEnd))){
		HX_STACK_LINE(1062)
		distances = null();
	}
	HX_STACK_LINE(1065)
	return distances;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,computePathDistance,return )

Void FlxTilemap_obj::raySimplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_PUSH("FlxTilemap::raySimplifyPath","org/flixel/FlxTilemap.hx",874);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Points,"Points");
		HX_STACK_LINE(875)
		::org::flixel::util::FlxPoint source = Points->__get((int)0).StaticCast< ::org::flixel::util::FlxPoint >();		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(876)
		int lastIndex = (int)-1;		HX_STACK_VAR(lastIndex,"lastIndex");
		HX_STACK_LINE(877)
		::org::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(878)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(879)
		int l = Points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(880)
		while(((i < l))){
			HX_STACK_LINE(882)
			node = Points->__get((i)++).StaticCast< ::org::flixel::util::FlxPoint >();
			HX_STACK_LINE(883)
			if (((node == null()))){
				HX_STACK_LINE(884)
				continue;
			}
			HX_STACK_LINE(887)
			if ((this->ray(source,node,this->_point,null()))){
				HX_STACK_LINE(888)
				if (((lastIndex >= (int)0))){
					HX_STACK_LINE(890)
					Points[lastIndex] = null();
				}
			}
			else{
				HX_STACK_LINE(895)
				source = Points->__get(lastIndex).StaticCast< ::org::flixel::util::FlxPoint >();
			}
			HX_STACK_LINE(898)
			lastIndex = (i - (int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,raySimplifyPath,(void))

Void FlxTilemap_obj::simplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_PUSH("FlxTilemap::simplifyPath","org/flixel/FlxTilemap.hx",845);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Points,"Points");
		HX_STACK_LINE(846)
		Float deltaPrevious;		HX_STACK_VAR(deltaPrevious,"deltaPrevious");
		HX_STACK_LINE(847)
		Float deltaNext;		HX_STACK_VAR(deltaNext,"deltaNext");
		HX_STACK_LINE(848)
		::org::flixel::util::FlxPoint last = Points->__get((int)0).StaticCast< ::org::flixel::util::FlxPoint >();		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(849)
		::org::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(850)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(851)
		int l = (Points->length - (int)1);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(852)
		while(((i < l))){
			HX_STACK_LINE(854)
			node = Points->__get(i).StaticCast< ::org::flixel::util::FlxPoint >();
			HX_STACK_LINE(855)
			deltaPrevious = (Float(((node->x - last->x))) / Float(((node->y - last->y))));
			HX_STACK_LINE(856)
			deltaNext = (Float(((node->x - Points->__get((i + (int)1)).StaticCast< ::org::flixel::util::FlxPoint >()->x))) / Float(((node->y - Points->__get((i + (int)1)).StaticCast< ::org::flixel::util::FlxPoint >()->y))));
			HX_STACK_LINE(857)
			if (((bool((bool((last->x == Points->__get((i + (int)1)).StaticCast< ::org::flixel::util::FlxPoint >()->x)) || bool((last->y == Points->__get((i + (int)1)).StaticCast< ::org::flixel::util::FlxPoint >()->y)))) || bool((deltaPrevious == deltaNext))))){
				HX_STACK_LINE(858)
				Points[i] = null();
			}
			else{
				HX_STACK_LINE(862)
				last = node;
			}
			HX_STACK_LINE(865)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,simplifyPath,(void))

::org::flixel::FlxPath FlxTilemap_obj::findPath( ::org::flixel::util::FlxPoint Start,::org::flixel::util::FlxPoint End,hx::Null< bool >  __o_Simplify,hx::Null< bool >  __o_RaySimplify,hx::Null< bool >  __o_WideDiagonal){
bool Simplify = __o_Simplify.Default(true);
bool RaySimplify = __o_RaySimplify.Default(false);
bool WideDiagonal = __o_WideDiagonal.Default(true);
	HX_STACK_PUSH("FlxTilemap::findPath","org/flixel/FlxTilemap.hx",784);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
	HX_STACK_ARG(Simplify,"Simplify");
	HX_STACK_ARG(RaySimplify,"RaySimplify");
	HX_STACK_ARG(WideDiagonal,"WideDiagonal");
{
		HX_STACK_LINE(786)
		int startIndex = ((::Std_obj::_int((Float(((Start->y - this->y))) / Float(this->_tileHeight))) * this->widthInTiles) + ::Std_obj::_int((Float(((Start->x - this->x))) / Float(this->_tileWidth))));		HX_STACK_VAR(startIndex,"startIndex");
		HX_STACK_LINE(787)
		int endIndex = ((::Std_obj::_int((Float(((End->y - this->y))) / Float(this->_tileHeight))) * this->widthInTiles) + ::Std_obj::_int((Float(((End->x - this->x))) / Float(this->_tileWidth))));		HX_STACK_VAR(endIndex,"endIndex");
		HX_STACK_LINE(790)
		if (((bool((this->_tileObjects->__get(this->_data->__get(startIndex)).StaticCast< ::org::flixel::system::FlxTile >()->allowCollisions > (int)0)) || bool((this->_tileObjects->__get(this->_data->__get(endIndex)).StaticCast< ::org::flixel::system::FlxTile >()->allowCollisions > (int)0))))){
			HX_STACK_LINE(792)
			return null();
		}
		HX_STACK_LINE(797)
		Array< int > distances = this->computePathDistance(startIndex,endIndex,WideDiagonal);		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(798)
		if (((distances == null()))){
			HX_STACK_LINE(799)
			return null();
		}
		HX_STACK_LINE(804)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(805)
		this->walkPath(distances,endIndex,points);
		HX_STACK_LINE(808)
		::org::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(809)
		node = points->__get((points->length - (int)1)).StaticCast< ::org::flixel::util::FlxPoint >();
		HX_STACK_LINE(810)
		node->x = Start->x;
		HX_STACK_LINE(811)
		node->y = Start->y;
		HX_STACK_LINE(812)
		node = points->__get((int)0).StaticCast< ::org::flixel::util::FlxPoint >();
		HX_STACK_LINE(813)
		node->x = End->x;
		HX_STACK_LINE(814)
		node->y = End->y;
		HX_STACK_LINE(817)
		if ((Simplify)){
			HX_STACK_LINE(818)
			this->simplifyPath(points);
		}
		HX_STACK_LINE(821)
		if ((RaySimplify)){
			HX_STACK_LINE(822)
			this->raySimplifyPath(points);
		}
		HX_STACK_LINE(827)
		::org::flixel::FlxPath path = ::org::flixel::FlxPath_obj::__new(null());		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(828)
		int i = (points->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(829)
		while(((i >= (int)0))){
			HX_STACK_LINE(831)
			node = points->__get((i)--).StaticCast< ::org::flixel::util::FlxPoint >();
			HX_STACK_LINE(832)
			if (((node != null()))){
				HX_STACK_LINE(833)
				path->addPoint(node,true);
			}
		}
		HX_STACK_LINE(837)
		return path;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,findPath,return )

Void FlxTilemap_obj::setDirty( hx::Null< bool >  __o_Dirty){
bool Dirty = __o_Dirty.Default(true);
	HX_STACK_PUSH("FlxTilemap::setDirty","org/flixel/FlxTilemap.hx",764);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Dirty,"Dirty");
{
		HX_STACK_LINE(765)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(766)
		int l = this->_buffers->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(767)
		while(((i < l))){
			HX_STACK_LINE(768)
			this->_buffers->__get((i)++).StaticCast< ::org::flixel::system::FlxTilemapBuffer >()->dirty = Dirty;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setDirty,(void))

Array< int > FlxTilemap_obj::getData( hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(false);
	HX_STACK_PUSH("FlxTilemap::getData","org/flixel/FlxTilemap.hx",740);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Simple,"Simple");
{
		HX_STACK_LINE(741)
		if ((!(Simple))){
			HX_STACK_LINE(742)
			return this->_data;
		}
		HX_STACK_LINE(746)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(747)
		int l = this->_data->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(748)
		Array< int > data = Array_obj< int >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(749)
		::org::flixel::util::FlxArray_obj::setLength(data,l);
		HX_STACK_LINE(750)
		while(((i < l))){
			HX_STACK_LINE(752)
			data[i] = (  (((this->_tileObjects->__get(this->_data->__get(i)).StaticCast< ::org::flixel::system::FlxTile >()->allowCollisions > (int)0))) ? int((int)1) : int((int)0) );
			HX_STACK_LINE(753)
			(i)++;
		}
		HX_STACK_LINE(755)
		return data;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getData,return )

Void FlxTilemap_obj::draw( ){
{
		HX_STACK_PUSH("FlxTilemap::draw","org/flixel/FlxTilemap.hx",680);
		HX_STACK_THIS(this);
		HX_STACK_LINE(681)
		if (((this->_flickerTimer != (int)0))){
			HX_STACK_LINE(683)
			this->_flicker = !(this->_flicker);
			HX_STACK_LINE(684)
			if ((this->_flicker)){
				HX_STACK_LINE(685)
				return null();
			}
		}
		HX_STACK_LINE(690)
		if (((this->cameras == null()))){
			HX_STACK_LINE(691)
			this->cameras = ::org::flixel::FlxG_obj::cameras;
		}
		HX_STACK_LINE(694)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(695)
		::org::flixel::system::FlxTilemapBuffer buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(696)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(697)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(698)
		while(((i < l))){
			HX_STACK_LINE(700)
			camera = this->cameras->__get(i).StaticCast< ::org::flixel::FlxCamera >();
			HX_STACK_LINE(701)
			if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
				HX_STACK_LINE(702)
				continue;
			}
			HX_STACK_LINE(705)
			if (((this->_buffers->__get(i).StaticCast< ::org::flixel::system::FlxTilemapBuffer >() == null()))){
				HX_STACK_LINE(707)
				this->_buffers[i] = ::org::flixel::system::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera);
				HX_STACK_LINE(708)
				this->_buffers->__get(i).StaticCast< ::org::flixel::system::FlxTilemapBuffer >()->forceComplexRender = this->forceComplexRender;
			}
			HX_STACK_LINE(710)
			buffer = this->_buffers->__get((i)++).StaticCast< ::org::flixel::system::FlxTilemapBuffer >();
			HX_STACK_LINE(727)
			this->drawTilemap(buffer,camera);
			HX_STACK_LINE(730)
			(::org::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
		}
	}
return null();
}


Void FlxTilemap_obj::drawDebugOnCamera( ::org::flixel::FlxCamera Camera){
{
		HX_STACK_PUSH("FlxTilemap::drawDebugOnCamera","org/flixel/FlxTilemap.hx",569);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Camera,"Camera");
		HX_STACK_LINE(570)
		::org::flixel::system::FlxTilemapBuffer buffer = null();		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(571)
		int l = ::org::flixel::FlxG_obj::cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(572)
		{
			HX_STACK_LINE(572)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(572)
			while(((_g < l))){
				HX_STACK_LINE(572)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(574)
				if (((::org::flixel::FlxG_obj::cameras->__get(i).StaticCast< ::org::flixel::FlxCamera >() == Camera))){
					HX_STACK_LINE(576)
					buffer = this->_buffers->__get(i).StaticCast< ::org::flixel::system::FlxTilemapBuffer >();
					HX_STACK_LINE(577)
					break;
				}
			}
		}
		HX_STACK_LINE(581)
		if (((buffer == null()))){
			HX_STACK_LINE(581)
			return null();
		}
		HX_STACK_LINE(584)
		this->_helperPoint->x = ((Float(::Math_obj::floor((((this->x - (::Math_obj::floor(Camera->scroll->x) * this->scrollFactor->x))) * (int)5))) / Float((int)5)) + 0.1);
		HX_STACK_LINE(585)
		this->_helperPoint->y = ((Float(::Math_obj::floor((((this->y - (::Math_obj::floor(Camera->scroll->y) * this->scrollFactor->y))) * (int)5))) / Float((int)5)) + 0.1);
		HX_STACK_LINE(590)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(591)
		int debugColor;		HX_STACK_VAR(debugColor,"debugColor");
		HX_STACK_LINE(592)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(593)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(596)
		this->_point->x = ((Camera->scroll->x * this->scrollFactor->x) - this->x);
		HX_STACK_LINE(597)
		this->_point->y = ((Camera->scroll->y * this->scrollFactor->y) - this->y);
		HX_STACK_LINE(598)
		int screenXInTiles = ::Math_obj::floor((Float(this->_point->x) / Float(this->_tileWidth)));		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(599)
		int screenYInTiles = ::Math_obj::floor((Float(this->_point->y) / Float(this->_tileHeight)));		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(600)
		int screenRows = buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(601)
		int screenColumns = buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(604)
		if (((screenXInTiles < (int)0))){
			HX_STACK_LINE(605)
			screenXInTiles = (int)0;
		}
		HX_STACK_LINE(608)
		if (((screenXInTiles > (this->widthInTiles - screenColumns)))){
			HX_STACK_LINE(609)
			screenXInTiles = (this->widthInTiles - screenColumns);
		}
		HX_STACK_LINE(612)
		if (((screenYInTiles < (int)0))){
			HX_STACK_LINE(613)
			screenYInTiles = (int)0;
		}
		HX_STACK_LINE(616)
		if (((screenYInTiles > (this->heightInTiles - screenRows)))){
			HX_STACK_LINE(617)
			screenYInTiles = (this->heightInTiles - screenRows);
		}
		HX_STACK_LINE(621)
		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(622)
		this->_flashPoint->y = (int)0;
		HX_STACK_LINE(623)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(624)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(625)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(626)
		::org::flixel::system::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(627)
		::flash::display::BitmapData debugTile;		HX_STACK_VAR(debugTile,"debugTile");
		HX_STACK_LINE(629)
		while(((row < screenRows))){
			HX_STACK_LINE(631)
			columnIndex = rowIndex;
			HX_STACK_LINE(632)
			column = (int)0;
			HX_STACK_LINE(633)
			this->_flashPoint->x = (int)0;
			HX_STACK_LINE(634)
			while(((column < screenColumns))){
				HX_STACK_LINE(636)
				tileID = this->_rectIDs->__get(columnIndex);
				HX_STACK_LINE(637)
				if (((tileID != (int)-1))){
					HX_STACK_LINE(639)
					drawX = (this->_helperPoint->x + (hx::Mod(columnIndex,this->widthInTiles) * this->_tileWidth));
					HX_STACK_LINE(640)
					drawY = (this->_helperPoint->y + (::Math_obj::floor((Float(columnIndex) / Float(this->widthInTiles))) * this->_tileHeight));
					HX_STACK_LINE(642)
					tile = this->_tileObjects->__get(this->_data->__get(columnIndex)).StaticCast< ::org::flixel::system::FlxTile >();
					HX_STACK_LINE(643)
					if (((tile != null()))){
						HX_STACK_LINE(645)
						if (((tile->allowCollisions <= (int)0))){
							HX_STACK_LINE(646)
							debugColor = (int)-16776961;
						}
						else{
							HX_STACK_LINE(649)
							if (((tile->allowCollisions != (int)4369))){
								HX_STACK_LINE(650)
								debugColor = (int)-16181;
							}
							else{
								HX_STACK_LINE(654)
								debugColor = (int)-16744448;
							}
						}
						HX_STACK_LINE(659)
						::flash::display::Graphics gfx = Camera->_debugLayer->get_graphics();		HX_STACK_VAR(gfx,"gfx");
						HX_STACK_LINE(660)
						gfx->lineStyle((int)1,debugColor,0.5,null(),null(),null(),null(),null());
						HX_STACK_LINE(661)
						gfx->drawRect(drawX,drawY,this->_tileWidth,this->_tileHeight);
					}
				}
				HX_STACK_LINE(664)
				hx::AddEq(this->_flashPoint->x,this->_tileWidth);
				HX_STACK_LINE(665)
				(column)++;
				HX_STACK_LINE(666)
				(columnIndex)++;
			}
			HX_STACK_LINE(668)
			hx::AddEq(rowIndex,this->widthInTiles);
			HX_STACK_LINE(669)
			hx::AddEq(this->_flashPoint->y,this->_tileHeight);
			HX_STACK_LINE(670)
			(row)++;
		}
	}
return null();
}


Void FlxTilemap_obj::drawTilemap( ::org::flixel::system::FlxTilemapBuffer Buffer,::org::flixel::FlxCamera Camera){
{
		HX_STACK_PUSH("FlxTilemap::drawTilemap","org/flixel/FlxTilemap.hx",432);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Buffer,"Buffer");
		HX_STACK_ARG(Camera,"Camera");
		HX_STACK_LINE(436)
		this->_helperPoint->x = (this->x - (Camera->scroll->x * this->scrollFactor->x));
		HX_STACK_LINE(437)
		this->_helperPoint->y = (this->y - (Camera->scroll->y * this->scrollFactor->y));
		HX_STACK_LINE(439)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(440)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(441)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		struct _Function_1_1{
			inline static ::org::flixel::system::layer::DrawStackItem Block( ::org::flixel::FlxTilemap_obj *__this,::org::flixel::FlxCamera &Camera){
				HX_STACK_PUSH("*::closure","org/flixel/FlxTilemap.hx",445);
				{
					HX_STACK_LINE(445)
					::org::flixel::system::layer::Atlas ObjAtlas = __this->_atlas;		HX_STACK_VAR(ObjAtlas,"ObjAtlas");
					HX_STACK_LINE(445)
					::org::flixel::system::layer::DrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
					HX_STACK_LINE(445)
					if (((Camera->_currentStackItem->initialized == false))){
						HX_STACK_LINE(445)
						Camera->_headOfDrawStack = Camera->_currentStackItem;
						HX_STACK_LINE(445)
						Camera->_currentStackItem->atlas = ObjAtlas;
						HX_STACK_LINE(445)
						Camera->_currentStackItem->colored = false;
						HX_STACK_LINE(445)
						Camera->_currentStackItem->blending = (int)0;
						HX_STACK_LINE(445)
						itemToReturn = Camera->_currentStackItem;
					}
					else{
						HX_STACK_LINE(445)
						if (((bool((bool((Camera->_currentStackItem->atlas == ObjAtlas)) && bool((Camera->_currentStackItem->colored == false)))) && bool((Camera->_currentStackItem->blending == (int)0))))){
							HX_STACK_LINE(445)
							itemToReturn = Camera->_currentStackItem;
						}
					}
					HX_STACK_LINE(445)
					if (((itemToReturn == null()))){
						HX_STACK_LINE(445)
						::org::flixel::system::layer::DrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
						HX_STACK_LINE(445)
						if (((::org::flixel::FlxCamera_obj::_storageHead != null()))){
							HX_STACK_LINE(445)
							newItem = ::org::flixel::FlxCamera_obj::_storageHead;
							HX_STACK_LINE(445)
							::org::flixel::system::layer::DrawStackItem newHead = ::org::flixel::FlxCamera_obj::_storageHead->next;		HX_STACK_VAR(newHead,"newHead");
							HX_STACK_LINE(445)
							newItem->next = null();
							HX_STACK_LINE(445)
							::org::flixel::FlxCamera_obj::_storageHead = newHead;
						}
						else{
							HX_STACK_LINE(445)
							newItem = ::org::flixel::system::layer::DrawStackItem_obj::__new();
						}
						HX_STACK_LINE(445)
						newItem->atlas = ObjAtlas;
						HX_STACK_LINE(445)
						newItem->colored = false;
						HX_STACK_LINE(445)
						newItem->blending = (int)0;
						HX_STACK_LINE(445)
						Camera->_currentStackItem->next = newItem;
						HX_STACK_LINE(445)
						Camera->_currentStackItem = newItem;
						HX_STACK_LINE(445)
						itemToReturn = Camera->_currentStackItem;
					}
					HX_STACK_LINE(445)
					itemToReturn->initialized = true;
					HX_STACK_LINE(445)
					return itemToReturn;
				}
				return null();
			}
		};
		HX_STACK_LINE(445)
		::org::flixel::system::layer::DrawStackItem drawItem = _Function_1_1::Block(this,Camera);		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(449)
		Array< Float > currDrawData = drawItem->drawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(450)
		int currIndex = drawItem->position;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(454)
		this->_point->x = ((Camera->scroll->x * this->scrollFactor->x) - this->x);
		HX_STACK_LINE(455)
		this->_point->y = ((Camera->scroll->y * this->scrollFactor->y) - this->y);
		HX_STACK_LINE(456)
		int screenXInTiles = ::Math_obj::floor((Float(this->_point->x) / Float(this->_tileWidth)));		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(457)
		int screenYInTiles = ::Math_obj::floor((Float(this->_point->y) / Float(this->_tileHeight)));		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(458)
		int screenRows = Buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(459)
		int screenColumns = Buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(462)
		if (((screenXInTiles < (int)0))){
			HX_STACK_LINE(463)
			screenXInTiles = (int)0;
		}
		HX_STACK_LINE(466)
		if (((screenXInTiles > (this->widthInTiles - screenColumns)))){
			HX_STACK_LINE(467)
			screenXInTiles = (this->widthInTiles - screenColumns);
		}
		HX_STACK_LINE(470)
		if (((screenYInTiles < (int)0))){
			HX_STACK_LINE(471)
			screenYInTiles = (int)0;
		}
		HX_STACK_LINE(474)
		if (((screenYInTiles > (this->heightInTiles - screenRows)))){
			HX_STACK_LINE(475)
			screenYInTiles = (this->heightInTiles - screenRows);
		}
		HX_STACK_LINE(479)
		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(480)
		this->_flashPoint->y = (int)0;
		HX_STACK_LINE(481)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(482)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(483)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(484)
		::org::flixel::system::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(486)
		::flash::display::BitmapData debugTile;		HX_STACK_VAR(debugTile,"debugTile");
		HX_STACK_LINE(488)
		while(((row < screenRows))){
			HX_STACK_LINE(490)
			columnIndex = rowIndex;
			HX_STACK_LINE(491)
			column = (int)0;
			HX_STACK_LINE(492)
			this->_flashPoint->x = (int)0;
			HX_STACK_LINE(493)
			while(((column < screenColumns))){
				HX_STACK_LINE(524)
				tileID = this->_rectIDs->__get(columnIndex);
				HX_STACK_LINE(525)
				if (((tileID != (int)-1))){
					HX_STACK_LINE(527)
					drawX = (this->_helperPoint->x + (hx::Mod(columnIndex,this->widthInTiles) * this->_tileWidth));
					HX_STACK_LINE(528)
					drawY = (this->_helperPoint->y + (::Math_obj::floor((Float(columnIndex) / Float(this->widthInTiles))) * this->_tileHeight));
					HX_STACK_LINE(530)
					currDrawData[(currIndex)++] = drawX;
					HX_STACK_LINE(531)
					currDrawData[(currIndex)++] = drawY;
					HX_STACK_LINE(536)
					currDrawData[(currIndex)++] = tileID;
					HX_STACK_LINE(538)
					currDrawData[(currIndex)++] = this->tileScaleHack;
					HX_STACK_LINE(539)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(540)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(541)
					currDrawData[(currIndex)++] = this->tileScaleHack;
					HX_STACK_LINE(543)
					currDrawData[(currIndex)++] = 1.0;
				}
				HX_STACK_LINE(547)
				hx::AddEq(this->_flashPoint->x,this->_tileWidth);
				HX_STACK_LINE(548)
				(column)++;
				HX_STACK_LINE(549)
				(columnIndex)++;
			}
			HX_STACK_LINE(551)
			hx::AddEq(rowIndex,this->widthInTiles);
			HX_STACK_LINE(552)
			hx::AddEq(this->_flashPoint->y,this->_tileHeight);
			HX_STACK_LINE(553)
			(row)++;
		}
		HX_STACK_LINE(557)
		drawItem->position = currIndex;
		HX_STACK_LINE(560)
		Buffer->x = (screenXInTiles * this->_tileWidth);
		HX_STACK_LINE(561)
		Buffer->y = (screenYInTiles * this->_tileHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,drawTilemap,(void))

Void FlxTilemap_obj::update( ){
{
		HX_STACK_PUSH("FlxTilemap::update","org/flixel/FlxTilemap.hx",415);
		HX_STACK_THIS(this);
		HX_STACK_LINE(416)
		if (((this->_lastVisualDebug != ::org::flixel::FlxG_obj::visualDebug))){
			HX_STACK_LINE(418)
			this->_lastVisualDebug = ::org::flixel::FlxG_obj::visualDebug;
			HX_STACK_LINE(419)
			this->setDirty(null());
		}
		HX_STACK_LINE(422)
		this->super::update();
	}
return null();
}


::org::flixel::FlxTilemap FlxTilemap_obj::loadMap( Dynamic MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,hx::Null< int >  __o_AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex,hx::Null< int >  __o_RepeatX,hx::Null< int >  __o_RepeatY){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int AutoTile = __o_AutoTile.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
int RepeatX = __o_RepeatX.Default(1);
int RepeatY = __o_RepeatY.Default(1);
	HX_STACK_PUSH("FlxTilemap::loadMap","org/flixel/FlxTilemap.hx",255);
	HX_STACK_THIS(this);
	HX_STACK_ARG(MapData,"MapData");
	HX_STACK_ARG(TileGraphic,"TileGraphic");
	HX_STACK_ARG(TileWidth,"TileWidth");
	HX_STACK_ARG(TileHeight,"TileHeight");
	HX_STACK_ARG(AutoTile,"AutoTile");
	HX_STACK_ARG(StartingIndex,"StartingIndex");
	HX_STACK_ARG(DrawIndex,"DrawIndex");
	HX_STACK_ARG(CollideIndex,"CollideIndex");
	HX_STACK_ARG(RepeatX,"RepeatX");
	HX_STACK_ARG(RepeatY,"RepeatY");
{
		HX_STACK_LINE(256)
		this->_auto = AutoTile;
		HX_STACK_LINE(257)
		this->_startingIndex = (  (((StartingIndex <= (int)0))) ? int((int)0) : int(StartingIndex) );
		HX_STACK_LINE(260)
		if ((::Std_obj::is(MapData,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(263)
			this->_data = Array_obj< int >::__new();
			HX_STACK_LINE(264)
			Array< ::String > columns;		HX_STACK_VAR(columns,"columns");
			HX_STACK_LINE(265)
			Array< ::String > rows = MapData->__Field(HX_CSTRING("split"),true)(HX_CSTRING("\n"));		HX_STACK_VAR(rows,"rows");
			HX_STACK_LINE(266)
			this->heightInTiles = rows->length;
			HX_STACK_LINE(267)
			this->widthInTiles = (int)0;
			HX_STACK_LINE(268)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(269)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(270)
			while(((row < this->heightInTiles))){
				HX_STACK_LINE(272)
				columns = rows->__get((row)++).split(HX_CSTRING(","));
				HX_STACK_LINE(273)
				if (((columns->length <= (int)1))){
					HX_STACK_LINE(275)
					this->heightInTiles = (this->heightInTiles - (int)1);
					HX_STACK_LINE(276)
					continue;
				}
				HX_STACK_LINE(278)
				if (((this->widthInTiles == (int)0))){
					HX_STACK_LINE(279)
					this->widthInTiles = columns->length;
				}
				HX_STACK_LINE(282)
				column = (int)0;
				HX_STACK_LINE(283)
				while(((column < this->widthInTiles))){
					HX_STACK_LINE(284)
					this->_data->push(::Std_obj::parseInt(columns->__get((column)++)));
				}
			}
		}
		else{
			HX_STACK_LINE(291)
			if ((::Std_obj::is(MapData,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(292)
				this->_data = MapData;
			}
			else{
				HX_STACK_LINE(296)
				hx::Throw (((HX_CSTRING("Unexpected MapData format '") + ::Std_obj::string(::Type_obj::_typeof(MapData))) + HX_CSTRING("' passed into loadMap. Map data must be CSV string or Array<Int>.")));
			}
		}
		HX_STACK_LINE(301)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(302)
		this->totalTiles = this->_data->length;
		HX_STACK_LINE(303)
		if (((this->_auto > (int)0))){
			HX_STACK_LINE(305)
			this->_startingIndex = (int)1;
			HX_STACK_LINE(306)
			DrawIndex = (int)1;
			HX_STACK_LINE(307)
			CollideIndex = (int)1;
			HX_STACK_LINE(308)
			i = (int)0;
			HX_STACK_LINE(309)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(310)
				this->autoTile((i)++);
			}
		}
		HX_STACK_LINE(316)
		this->_tiles = ::org::flixel::FlxG_obj::addBitmap(TileGraphic,null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(317)
		this->_tileWidth = TileWidth;
		HX_STACK_LINE(318)
		if (((this->_tileWidth <= (int)0))){
			HX_STACK_LINE(319)
			this->_tileWidth = this->_tiles->get_height();
		}
		HX_STACK_LINE(322)
		this->_tileHeight = TileHeight;
		HX_STACK_LINE(323)
		if (((this->_tileHeight <= (int)0))){
			HX_STACK_LINE(324)
			this->_tileHeight = this->_tileWidth;
		}
		HX_STACK_LINE(328)
		this->_repeatX = (  (((RepeatX >= (int)0))) ? int(RepeatX) : int((int)0) );
		HX_STACK_LINE(329)
		this->_repeatY = (  (((RepeatY >= (int)0))) ? int(RepeatY) : int((int)0) );
		HX_STACK_LINE(332)
		this->_tiles = ::org::flixel::FlxG_obj::addTilemapBitmap(TileGraphic,false,false,null(),this->_tileWidth,this->_tileHeight,this->_repeatX,this->_repeatY);
		HX_STACK_LINE(333)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(337)
		this->_tileObjects = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(342)
		int length = ::Std_obj::_int((Float(((Float(this->_tiles->get_width()) / Float(((this->_tileWidth + ((this->_repeatX + (int)1)))))) * this->_tiles->get_height())) / Float(((this->_tileHeight + ((this->_repeatY + (int)1)))))));		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(344)
		hx::AddEq(length,this->_startingIndex);
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(346)
			while(((_g < length))){
				HX_STACK_LINE(346)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(348)
				this->_tileObjects[i1] = ::org::flixel::system::FlxTile_obj::__new(hx::ObjectPtr<OBJ_>(this),i1,this->_tileWidth,this->_tileHeight,(i1 >= DrawIndex),(  (((i1 >= CollideIndex))) ? int(this->allowCollisions) : int((int)0) ));
			}
		}
		HX_STACK_LINE(351)
		this->updateAtlasInfo(null());
		HX_STACK_LINE(363)
		this->set_width((this->widthInTiles * this->_tileWidth));
		HX_STACK_LINE(364)
		this->set_height((this->heightInTiles * this->_tileHeight));
		HX_STACK_LINE(378)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC10(FlxTilemap_obj,loadMap,return )

Void FlxTilemap_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTilemap::destroy","org/flixel/FlxTilemap.hx",195);
		HX_STACK_THIS(this);
		HX_STACK_LINE(196)
		this->_flashPoint = null();
		HX_STACK_LINE(197)
		this->_flashRect = null();
		HX_STACK_LINE(198)
		this->_tiles = null();
		HX_STACK_LINE(199)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(200)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(202)
		if (((this->_tileObjects != null()))){
			HX_STACK_LINE(204)
			l = this->_tileObjects->length;
			HX_STACK_LINE(205)
			{
				HX_STACK_LINE(205)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(205)
				while(((_g < l))){
					HX_STACK_LINE(205)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(207)
					this->_tileObjects->__get(i1).StaticCast< ::org::flixel::system::FlxTile >()->destroy();
				}
			}
			HX_STACK_LINE(209)
			this->_tileObjects = null();
		}
		HX_STACK_LINE(212)
		if (((this->_buffers != null()))){
			HX_STACK_LINE(214)
			i = (int)0;
			HX_STACK_LINE(215)
			l = this->_buffers->length;
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(216)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(216)
				while(((_g < l))){
					HX_STACK_LINE(216)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(218)
					this->_buffers->__get(i1).StaticCast< ::org::flixel::system::FlxTilemapBuffer >()->destroy();
				}
			}
			HX_STACK_LINE(220)
			this->_buffers = null();
		}
		HX_STACK_LINE(223)
		this->_data = null();
		HX_STACK_LINE(233)
		this->_helperPoint = null();
		HX_STACK_LINE(234)
		this->_rectIDs = null();
		HX_STACK_LINE(237)
		this->super::destroy();
	}
return null();
}


::String FlxTilemap_obj::imgAuto;

::String FlxTilemap_obj::imgAutoAlt;

::String FlxTilemap_obj::arrayToCSV( Array< int > Data,int Width,hx::Null< bool >  __o_Invert){
bool Invert = __o_Invert.Default(false);
	HX_STACK_PUSH("FlxTilemap::arrayToCSV","org/flixel/FlxTilemap.hx",1812);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Invert,"Invert");
{
		HX_STACK_LINE(1813)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1814)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1815)
		::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(1816)
		int Height = ::Std_obj::_int((Float(Data->length) / Float(Width)));		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(1817)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(1818)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(1819)
		while(((row < Height))){
			HX_STACK_LINE(1821)
			column = (int)0;
			HX_STACK_LINE(1822)
			while(((column < Width))){
				HX_STACK_LINE(1824)
				index = Data->__get(offset);
				HX_STACK_LINE(1825)
				if ((Invert)){
					HX_STACK_LINE(1826)
					if (((index == (int)0))){
						HX_STACK_LINE(1828)
						index = (int)1;
					}
					else{
						HX_STACK_LINE(1831)
						if (((index == (int)1))){
							HX_STACK_LINE(1832)
							index = (int)0;
						}
					}
				}
				HX_STACK_LINE(1837)
				if (((column == (int)0))){
					HX_STACK_LINE(1838)
					if (((row == (int)0))){
						HX_STACK_LINE(1840)
						hx::AddEq(csv,index);
					}
					else{
						HX_STACK_LINE(1844)
						hx::AddEq(csv,(HX_CSTRING("\n") + index));
					}
				}
				else{
					HX_STACK_LINE(1849)
					hx::AddEq(csv,(HX_CSTRING(", ") + index));
				}
				HX_STACK_LINE(1852)
				(column)++;
				HX_STACK_LINE(1853)
				(offset)++;
			}
			HX_STACK_LINE(1855)
			(row)++;
		}
		HX_STACK_LINE(1857)
		return csv;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,arrayToCSV,return )

::String FlxTilemap_obj::bitmapToCSV( ::flash::display::BitmapData bitmapData,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale,Array< int > ColorMap){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_PUSH("FlxTilemap::bitmapToCSV","org/flixel/FlxTilemap.hx",1872);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_ARG(Invert,"Invert");
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_ARG(ColorMap,"ColorMap");
{
		HX_STACK_LINE(1873)
		if (((Scale < (int)1))){
			HX_STACK_LINE(1873)
			Scale = (int)1;
		}
		HX_STACK_LINE(1876)
		if (((Scale > (int)1))){
			HX_STACK_LINE(1878)
			::flash::display::BitmapData bd = bitmapData;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(1879)
			bitmapData = ::flash::display::BitmapData_obj::__new((bitmapData->get_width() * Scale),(bitmapData->get_height() * Scale),null(),null(),null());
			HX_STACK_LINE(1899)
			::flash::geom::Matrix mtx = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(mtx,"mtx");
			HX_STACK_LINE(1900)
			mtx->scale(Scale,Scale);
			HX_STACK_LINE(1901)
			bitmapData->draw(bd,mtx,null(),null(),null(),null());
		}
		HX_STACK_LINE(1906)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1907)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1908)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(1909)
		::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(1910)
		int bitmapWidth = bitmapData->get_width();		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
		HX_STACK_LINE(1911)
		int bitmapHeight = bitmapData->get_height();		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
		HX_STACK_LINE(1912)
		while(((row < bitmapHeight))){
			HX_STACK_LINE(1914)
			column = (int)0;
			HX_STACK_LINE(1915)
			while(((column < bitmapWidth))){
				HX_STACK_LINE(1918)
				pixel = bitmapData->getPixel(column,row);
				HX_STACK_LINE(1919)
				if (((ColorMap != null()))){
					struct _Function_4_1{
						inline static int Block( Array< int > &ColorMap,int &pixel){
							HX_STACK_PUSH("*::closure","org/flixel/FlxTilemap.hx",1921);
							{
								HX_STACK_LINE(1921)
								int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
								HX_STACK_LINE(1921)
								int len = ColorMap->length;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(1921)
								int index = (int)-1;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(1921)
								{
									HX_STACK_LINE(1921)
									int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1921)
									while(((_g < len))){
										HX_STACK_LINE(1921)
										int i = (_g)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1921)
										if (((ColorMap->__get(i) == pixel))){
											HX_STACK_LINE(1921)
											index = i;
											HX_STACK_LINE(1921)
											break;
										}
									}
								}
								HX_STACK_LINE(1921)
								return index;
							}
							return null();
						}
					};
					HX_STACK_LINE(1920)
					pixel = _Function_4_1::Block(ColorMap,pixel);
				}
				else{
					HX_STACK_LINE(1923)
					if (((bool((bool(Invert) && bool((pixel > (int)0)))) || bool((bool(!(Invert)) && bool((pixel == (int)0))))))){
						HX_STACK_LINE(1924)
						pixel = (int)1;
					}
					else{
						HX_STACK_LINE(1928)
						pixel = (int)0;
					}
				}
				HX_STACK_LINE(1933)
				if (((column == (int)0))){
					HX_STACK_LINE(1934)
					if (((row == (int)0))){
						HX_STACK_LINE(1936)
						hx::AddEq(csv,pixel);
					}
					else{
						HX_STACK_LINE(1940)
						hx::AddEq(csv,(HX_CSTRING("\n") + pixel));
					}
				}
				else{
					HX_STACK_LINE(1945)
					hx::AddEq(csv,(HX_CSTRING(", ") + pixel));
				}
				HX_STACK_LINE(1948)
				(column)++;
			}
			HX_STACK_LINE(1950)
			(row)++;
		}
		HX_STACK_LINE(1952)
		return csv;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,bitmapToCSV,return )

::String FlxTilemap_obj::imageToCSV( Dynamic ImageFile,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_PUSH("FlxTilemap::imageToCSV","org/flixel/FlxTilemap.hx",1966);
	HX_STACK_ARG(ImageFile,"ImageFile");
	HX_STACK_ARG(Invert,"Invert");
	HX_STACK_ARG(Scale,"Scale");
{
		HX_STACK_LINE(1967)
		::flash::display::BitmapData tempBitmapData;		HX_STACK_VAR(tempBitmapData,"tempBitmapData");
		HX_STACK_LINE(1968)
		if ((::Std_obj::is(ImageFile,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(1969)
			tempBitmapData = ::org::flixel::FlxAssets_obj::getBitmapData(ImageFile);
		}
		else{
			HX_STACK_LINE(1973)
			tempBitmapData = ::Type_obj::createInstance(ImageFile,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		HX_STACK_LINE(1976)
		return ::org::flixel::FlxTilemap_obj::bitmapToCSV(tempBitmapData,Invert,Scale,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,imageToCSV,return )


FlxTilemap_obj::FlxTilemap_obj()
{
}

void FlxTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemap);
	HX_MARK_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_MARK_MEMBER_NAME(_repeatY,"_repeatY");
	HX_MARK_MEMBER_NAME(_repeatX,"_repeatX");
	HX_MARK_MEMBER_NAME(_rectIDs,"_rectIDs");
	HX_MARK_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_MARK_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_MARK_MEMBER_NAME(_lastVisualDebug,"_lastVisualDebug");
	HX_MARK_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_MARK_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_MARK_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_tiles,"_tiles");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(totalTiles,"totalTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(_auto,"auto");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_VISIT_MEMBER_NAME(_repeatY,"_repeatY");
	HX_VISIT_MEMBER_NAME(_repeatX,"_repeatX");
	HX_VISIT_MEMBER_NAME(_rectIDs,"_rectIDs");
	HX_VISIT_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_VISIT_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_VISIT_MEMBER_NAME(_lastVisualDebug,"_lastVisualDebug");
	HX_VISIT_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_VISIT_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_VISIT_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_tiles,"_tiles");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(totalTiles,"totalTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(_auto,"auto");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTilemap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"auto") ) { return _auto; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rayHit") ) { return rayHit_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_tiles") ) { return _tiles; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"imgAuto") ) { return imgAuto; }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMap") ) { return loadMap_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoTile") ) { return autoTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"walkPath") ) { return walkPath_dyn(); }
		if (HX_FIELD_EQ(inName,"findPath") ) { return findPath_dyn(); }
		if (HX_FIELD_EQ(inName,"setDirty") ) { return setDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"_repeatY") ) { return _repeatY; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { return _repeatX; }
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { return _rectIDs; }
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imgAutoAlt") ) { return imgAutoAlt; }
		if (HX_FIELD_EQ(inName,"arrayToCSV") ) { return arrayToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"imageToCSV") ) { return imageToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return _tileWidth; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"totalTiles") ) { return totalTiles; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bitmapToCSV") ) { return bitmapToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return drawTilemap_dyn(); }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { return _tileHeight; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simplifyPath") ) { return simplifyPath_dyn(); }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { return _helperPoint; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { return _tileObjects; }
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return widthInTiles; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateBuffers") ) { return updateBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoords") ) { return getTileCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { return tileScaleHack; }
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return heightInTiles; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setTileByIndex") ) { return setTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileByIndex") ) { return getTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { return _startingIndex; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tileToFlxSprite") ) { return tileToFlxSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"raySimplifyPath") ) { return raySimplifyPath_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getTileInstances") ) { return getTileInstances_dyn(); }
		if (HX_FIELD_EQ(inName,"_lastVisualDebug") ) { return _lastVisualDebug; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setTileProperties") ) { return setTileProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"drawDebugOnCamera") ) { return drawDebugOnCamera_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"computePathDistance") ) { return computePathDistance_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_forceComplexRender") ) { return set_forceComplexRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { _auto=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_tiles") ) { _tiles=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"imgAuto") ) { imgAuto=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_repeatY") ) { _repeatY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { _repeatX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { _rectIDs=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imgAutoAlt") ) { imgAutoAlt=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalTiles") ) { totalTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { _tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { _helperPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { _tileObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { tileScaleHack=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { _startingIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_lastVisualDebug") ) { _lastVisualDebug=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tileScaleHack"));
	outFields->push(HX_CSTRING("_repeatY"));
	outFields->push(HX_CSTRING("_repeatX"));
	outFields->push(HX_CSTRING("_rectIDs"));
	outFields->push(HX_CSTRING("_helperPoint"));
	outFields->push(HX_CSTRING("_startingIndex"));
	outFields->push(HX_CSTRING("_lastVisualDebug"));
	outFields->push(HX_CSTRING("_tileObjects"));
	outFields->push(HX_CSTRING("_tileHeight"));
	outFields->push(HX_CSTRING("_tileWidth"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_buffers"));
	outFields->push(HX_CSTRING("_tiles"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("totalTiles"));
	outFields->push(HX_CSTRING("heightInTiles"));
	outFields->push(HX_CSTRING("widthInTiles"));
	outFields->push(HX_CSTRING("auto"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("imgAuto"),
	HX_CSTRING("imgAutoAlt"),
	HX_CSTRING("arrayToCSV"),
	HX_CSTRING("bitmapToCSV"),
	HX_CSTRING("imageToCSV"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_forceComplexRender"),
	HX_CSTRING("updateBuffers"),
	HX_CSTRING("tileToFlxSprite"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("updateTile"),
	HX_CSTRING("autoTile"),
	HX_CSTRING("rayHit"),
	HX_CSTRING("ray"),
	HX_CSTRING("getBounds"),
	HX_CSTRING("follow"),
	HX_CSTRING("setTileProperties"),
	HX_CSTRING("setTileByIndex"),
	HX_CSTRING("setTile"),
	HX_CSTRING("getTileCoords"),
	HX_CSTRING("getTileInstances"),
	HX_CSTRING("getTileByIndex"),
	HX_CSTRING("getTile"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("overlapsWithCallback"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("walkPath"),
	HX_CSTRING("computePathDistance"),
	HX_CSTRING("raySimplifyPath"),
	HX_CSTRING("simplifyPath"),
	HX_CSTRING("findPath"),
	HX_CSTRING("setDirty"),
	HX_CSTRING("getData"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawDebugOnCamera"),
	HX_CSTRING("drawTilemap"),
	HX_CSTRING("update"),
	HX_CSTRING("loadMap"),
	HX_CSTRING("destroy"),
	HX_CSTRING("tileScaleHack"),
	HX_CSTRING("_repeatY"),
	HX_CSTRING("_repeatX"),
	HX_CSTRING("_rectIDs"),
	HX_CSTRING("_helperPoint"),
	HX_CSTRING("_startingIndex"),
	HX_CSTRING("_lastVisualDebug"),
	HX_CSTRING("_tileObjects"),
	HX_CSTRING("_tileHeight"),
	HX_CSTRING("_tileWidth"),
	HX_CSTRING("_data"),
	HX_CSTRING("_buffers"),
	HX_CSTRING("_tiles"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("totalTiles"),
	HX_CSTRING("heightInTiles"),
	HX_CSTRING("widthInTiles"),
	HX_CSTRING("auto"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::imgAuto,"imgAuto");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::imgAutoAlt,"imgAutoAlt");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::imgAuto,"imgAuto");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::imgAutoAlt,"imgAutoAlt");
};

Class FlxTilemap_obj::__mClass;

void FlxTilemap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxTilemap"), hx::TCanCast< FlxTilemap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTilemap_obj::__boot()
{
	imgAuto= ::org::flixel::FlxAssets_obj::imgAuto;
	imgAutoAlt= ::org::flixel::FlxAssets_obj::imgAutoAlt;
}

} // end namespace org
} // end namespace flixel
