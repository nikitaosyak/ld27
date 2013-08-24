#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_texturepacker_TexturePackerData
#include <org/flixel/plugin/texturepacker/TexturePackerData.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxAnim
#include <org/flixel/system/FlxAnim.h>
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
#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#include <org/flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_frames_FlxFrame
#include <org/flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_frames_FlxSpriteFrames
#include <org/flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxAngle
#include <org/flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRandom
#include <org/flixel/util/FlxRandom.h>
#endif
namespace org{
namespace flixel{

Void FlxSprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_PUSH("FlxSprite::new","org/flixel/FlxSprite.hx",31);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(89)
	this->_blendInt = (int)0;
	HX_STACK_LINE(225)
	super::__construct(X,Y,null(),null());
	HX_STACK_LINE(227)
	this->_flashPoint = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(228)
	this->_flashRect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(229)
	this->_flashRect2 = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(230)
	this->_flashPointZero = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(231)
	this->offset = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(232)
	this->origin = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(233)
	this->scale = ::org::flixel::util::FlxPoint_obj::__new(1.0,1.0);
	HX_STACK_LINE(234)
	this->_color = (int)16777215;
	HX_STACK_LINE(235)
	this->set_alpha(1.0);
	HX_STACK_LINE(239)
	this->_blend = null();
	HX_STACK_LINE(241)
	this->set_antialiasing(false);
	HX_STACK_LINE(242)
	this->cameras = null();
	HX_STACK_LINE(244)
	this->finished = false;
	HX_STACK_LINE(245)
	this->paused = true;
	HX_STACK_LINE(246)
	this->set_facing((int)16);
	HX_STACK_LINE(247)
	this->_animations = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(248)
	this->_flipped = (int)0;
	HX_STACK_LINE(249)
	this->_curAnim = null();
	HX_STACK_LINE(250)
	this->_curFrame = (int)0;
	HX_STACK_LINE(251)
	this->_curIndex = (int)0;
	HX_STACK_LINE(252)
	this->_frameTimer = (int)0;
	HX_STACK_LINE(254)
	this->_matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(255)
	this->_callback = null();
	HX_STACK_LINE(258)
	this->_red = 1.0;
	HX_STACK_LINE(259)
	this->_green = 1.0;
	HX_STACK_LINE(260)
	this->_blue = 1.0;
	HX_STACK_LINE(263)
	this->_flxFrame = null();
	HX_STACK_LINE(265)
	if (((SimpleGraphic == null()))){
		HX_STACK_LINE(266)
		SimpleGraphic = ::org::flixel::FlxAssets_obj::imgDefault;
	}
	HX_STACK_LINE(269)
	this->loadGraphic(SimpleGraphic,null(),null(),null(),null(),null(),null());
}
;
	return null();
}

FlxSprite_obj::~FlxSprite_obj() { }

Dynamic FlxSprite_obj::__CreateEmpty() { return  new FlxSprite_obj; }
hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(__o_X,__o_Y,SimpleGraphic);
	return result;}

Dynamic FlxSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxSprite_obj::resetFrameBitmapDatas( ){
{
		HX_STACK_PUSH("FlxSprite::resetFrameBitmapDatas","org/flixel/FlxSprite.hx",2287);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2287)
		this->_atlas->_tileSheetData->destroyFrameBitmapDatas();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameBitmapDatas,(void))

Void FlxSprite_obj::nullTextureData( ){
{
		HX_STACK_PUSH("FlxSprite::nullTextureData","org/flixel/FlxSprite.hx",2274);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2275)
		this->_textureData = null();
		HX_STACK_LINE(2276)
		this->_flxFrame = null();
		HX_STACK_LINE(2277)
		this->_framesData = null();
		HX_STACK_LINE(2278)
		this->_node = null();
		HX_STACK_LINE(2279)
		this->_atlas = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,nullTextureData,(void))

::flash::display::BitmapData FlxSprite_obj::getFlxFrameBitmapData( ){
	HX_STACK_PUSH("FlxSprite::getFlxFrameBitmapData","org/flixel/FlxSprite.hx",2254);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2255)
	if (((this->_flxFrame != null()))){
		HX_STACK_LINE(2256)
		if (((bool((this->facing == (int)1)) && bool((this->get_flipped() > (int)0))))){
			HX_STACK_LINE(2258)
			return this->_flxFrame->getReversedBitmap();
		}
		else{
			HX_STACK_LINE(2262)
			return this->_flxFrame->getBitmap();
		}
	}
	HX_STACK_LINE(2267)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getFlxFrameBitmapData,return )

Void FlxSprite_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxSprite::updateFrameData","org/flixel/FlxSprite.hx",2195);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2195)
		if (((bool((bool((bool((this->_textureData == null())) && bool((this->_node != null())))) && bool((this->frameWidth >= (int)1)))) && bool((this->frameHeight >= (int)1))))){
			HX_STACK_LINE(2199)
			if (((this->frames > (int)1))){
				HX_STACK_LINE(2200)
				this->_framesData = this->_node->getSpriteSheetFrames(::Std_obj::_int(this->frameWidth),::Std_obj::_int(this->frameHeight),null(),(int)0,(int)0,(int)0,(int)0,(int)1,(int)1);
			}
			else{
				HX_STACK_LINE(2204)
				this->_framesData = this->_node->getSpriteSheetFrames(::Std_obj::_int(this->frameWidth),::Std_obj::_int(this->frameHeight),null(),null(),null(),null(),null(),null(),null());
			}
			HX_STACK_LINE(2207)
			this->_flxFrame = this->_framesData->frames->__get(this->_curIndex).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >();
			HX_STACK_LINE(2208)
			return null();
		}
		else{
			HX_STACK_LINE(2212)
			if (((bool((this->_textureData != null())) && bool((this->_node != null()))))){
				HX_STACK_LINE(2214)
				this->_framesData = this->_node->getTexturePackerFrames(this->_textureData);
				HX_STACK_LINE(2215)
				this->_flxFrame = this->_framesData->frames->__get((int)0).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >();
				HX_STACK_LINE(2216)
				this->resetFrameSize();
				HX_STACK_LINE(2217)
				this->resetSizeFromFrame();
			}
		}
	}
return null();
}


bool FlxSprite_obj::overlapsPoint( ::org::flixel::util::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxSprite::overlapsPoint","org/flixel/FlxSprite.hx",2169);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(2170)
		if (((bool((this->scale->x == (int)1)) && bool((this->scale->y == (int)1))))){
			HX_STACK_LINE(2171)
			return this->super::overlapsPoint(point,InScreenSpace,Camera);
		}
		HX_STACK_LINE(2175)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(2176)
			return (bool((bool((bool((point->x > (this->x - ((0.5 * this->width) * ((this->scale->x - (int)1)))))) && bool((point->x < ((this->x + this->width) + ((0.5 * this->width) * ((this->scale->x - (int)1)))))))) && bool((point->y > (this->y - ((0.5 * this->height) * ((this->scale->y - (int)1)))))))) && bool((point->y < ((this->y + this->height) + ((0.5 * this->height) * ((this->scale->y - (int)1)))))));
		}
		HX_STACK_LINE(2180)
		if (((Camera == null()))){
			HX_STACK_LINE(2181)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(2184)
		Float X = (point->x - Camera->scroll->x);		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(2185)
		Float Y = (point->y - Camera->scroll->y);		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(2186)
		{
			HX_STACK_LINE(2186)
			::org::flixel::util::FlxPoint point1 = this->_point;		HX_STACK_VAR(point1,"point1");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(2186)
			if (((point1 == null()))){
				HX_STACK_LINE(2186)
				point1 = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(2186)
			if (((Camera1 == null()))){
				HX_STACK_LINE(2186)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(2186)
			point1->x = (this->x - (Camera1->scroll->x * this->scrollFactor->x));
			HX_STACK_LINE(2186)
			point1->y = (this->y - (Camera1->scroll->y * this->scrollFactor->y));
			HX_STACK_LINE(2186)
			point1;
		}
		HX_STACK_LINE(2187)
		return (bool((bool((bool((X > (this->_point->x - ((0.5 * this->width) * ((this->scale->x - (int)1)))))) && bool((X < ((this->_point->x + this->width) + ((0.5 * this->width) * ((this->scale->x - (int)1)))))))) && bool((Y > (this->_point->y - ((0.5 * this->height) * ((this->scale->y - (int)1)))))))) && bool((Y < ((this->_point->y + this->height) + ((0.5 * this->height) * ((this->scale->y - (int)1)))))));
	}
}


::flash::display::BlendMode FlxSprite_obj::set_blend( ::flash::display::BlendMode value){
	HX_STACK_PUSH("FlxSprite::set_blend","org/flixel/FlxSprite.hx",2141);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(2142)
	if (((value != null()))){
		HX_STACK_LINE(2143)
		{
			::flash::display::BlendMode _switch_1 = (value);
			switch((_switch_1)->GetIndex()){
				case 7: {
					HX_STACK_LINE(2146)
					this->_blendInt = (int)65536;
				}
				;break;
				case 2: {
					HX_STACK_LINE(2149)
					this->_blendInt = (int)131072;
				}
				;break;
				case 3: {
					HX_STACK_LINE(2151)
					this->_blendInt = (int)262144;
				}
				;break;
				default: {
					HX_STACK_LINE(2154)
					this->_blendInt = (int)0;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(2159)
		this->_blendInt = (int)0;
	}
	HX_STACK_LINE(2163)
	this->_blend = value;
	HX_STACK_LINE(2164)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

::flash::display::BlendMode FlxSprite_obj::get_blend( ){
	HX_STACK_PUSH("FlxSprite::get_blend","org/flixel/FlxSprite.hx",2136);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2136)
	return this->_blend;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_blend,return )

bool FlxSprite_obj::simpleRenderSprite( ){
	HX_STACK_PUSH("FlxSprite::simpleRenderSprite","org/flixel/FlxSprite.hx",2118);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2123)
	bool result = (bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotation > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1)));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(2124)
	if (((this->_flxFrame != null()))){
		HX_STACK_LINE(2125)
		result = (bool(result) && bool(((bool((bool((this->angle == (int)0)) && bool((this->_flxFrame->additionalAngle == (int)0)))) || bool((this->bakedRotation > (int)0))))));
	}
	HX_STACK_LINE(2128)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,simpleRenderSprite,return )

bool FlxSprite_obj::get_simpleRender( ){
	HX_STACK_PUSH("FlxSprite::get_simpleRender","org/flixel/FlxSprite.hx",2113);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static bool Block( ::org::flixel::FlxSprite_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",2114);
			{
				HX_STACK_LINE(2114)
				bool result = (bool((bool(((bool((__this->angle == (int)0)) || bool((__this->bakedRotation > (int)0))))) && bool((__this->scale->x == (int)1)))) && bool((__this->scale->y == (int)1)));		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(2114)
				if (((__this->_flxFrame != null()))){
					HX_STACK_LINE(2114)
					result = (bool(result) && bool(((bool((bool((__this->angle == (int)0)) && bool((__this->_flxFrame->additionalAngle == (int)0)))) || bool((__this->bakedRotation > (int)0))))));
				}
				HX_STACK_LINE(2114)
				return result;
			}
			return null();
		}
	};
	HX_STACK_LINE(2113)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_simpleRender,return )

bool FlxSprite_obj::set_antialiasing( bool val){
	HX_STACK_PUSH("FlxSprite::set_antialiasing","org/flixel/FlxSprite.hx",2095);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(2096)
	this->antialiasing = val;
	HX_STACK_LINE(2097)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_antialiasing,return )

Void FlxSprite_obj::removeAllFilters( ){
{
		HX_STACK_PUSH("FlxSprite::removeAllFilters","org/flixel/FlxSprite.hx",2072);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2073)
		if (((this->filters == null()))){
			HX_STACK_LINE(2073)
			return null();
		}
		HX_STACK_LINE(2075)
		while(((this->filters->length != (int)0))){
			HX_STACK_LINE(2076)
			this->filters->pop().StaticCast< ::flash::filters::BitmapFilter >();
		}
		HX_STACK_LINE(2080)
		this->updateAtlasInfo(true);
		HX_STACK_LINE(2081)
		this->drawFrame(true);
		HX_STACK_LINE(2083)
		this->filters = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,removeAllFilters,(void))

Void FlxSprite_obj::removeFilter( ::flash::filters::BitmapFilter filter){
{
		HX_STACK_PUSH("FlxSprite::removeFilter","org/flixel/FlxSprite.hx",2051);
		HX_STACK_THIS(this);
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(2052)
		if (((bool((this->filters == null())) || bool((filter == null()))))){
			HX_STACK_LINE(2053)
			return null();
		}
		HX_STACK_LINE(2057)
		this->filters->remove(filter);
		HX_STACK_LINE(2059)
		this->drawFrame(true);
		HX_STACK_LINE(2061)
		if (((this->filters->length == (int)0))){
			HX_STACK_LINE(2062)
			this->filters = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,removeFilter,(void))

Void FlxSprite_obj::setClipping( int width,int height){
{
		HX_STACK_PUSH("FlxSprite::setClipping","org/flixel/FlxSprite.hx",2031);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(2032)
		::org::flixel::FlxSprite tempSpr = ::org::flixel::FlxSprite_obj::__new((int)0,(int)0,this->_pixels);		HX_STACK_VAR(tempSpr,"tempSpr");
		HX_STACK_LINE(2033)
		::org::flixel::util::FlxPoint diffSize = ::org::flixel::util::FlxPoint_obj::__new((width - this->frameWidth),(height - this->frameHeight));		HX_STACK_VAR(diffSize,"diffSize");
		HX_STACK_LINE(2035)
		this->makeGraphic(width,height,(int)0,true,null());
		HX_STACK_LINE(2037)
		this->stamp(tempSpr,::Std_obj::_int((Float(diffSize->x) / Float((int)2))),::Std_obj::_int((Float(diffSize->y) / Float((int)2))));
		HX_STACK_LINE(2039)
		hx::SubEq(this->x,(diffSize->x * 0.5));
		HX_STACK_LINE(2040)
		hx::SubEq(this->y,(diffSize->y * 0.5));
		HX_STACK_LINE(2042)
		tempSpr->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setClipping,(void))

Void FlxSprite_obj::addFilter( ::flash::filters::BitmapFilter filter,hx::Null< int >  __o_widthInc,hx::Null< int >  __o_heightInc){
int widthInc = __o_widthInc.Default(0);
int heightInc = __o_heightInc.Default(0);
	HX_STACK_PUSH("FlxSprite::addFilter","org/flixel/FlxSprite.hx",1996);
	HX_STACK_THIS(this);
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(widthInc,"widthInc");
	HX_STACK_ARG(heightInc,"heightInc");
{
		HX_STACK_LINE(1998)
		this->setClipping((this->frameWidth + widthInc),(this->frameHeight + heightInc));
		HX_STACK_LINE(2000)
		if (((this->filters == null()))){
			HX_STACK_LINE(2001)
			this->filters = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(2005)
		this->filters->push(filter);
		HX_STACK_LINE(2008)
		if (((this->_pixelsBackup == null()))){
			HX_STACK_LINE(2010)
			this->_pixelsBackup = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(this->_pixels->get_rect()->width),::Std_obj::_int(this->_pixels->get_rect()->height),null(),null(),null());
			HX_STACK_LINE(2011)
			this->_pixelsBackup->copyPixels(this->_pixels,this->_pixels->get_rect(),this->_flashPointZero,null(),null(),null());
		}
		HX_STACK_LINE(2014)
		this->updateAtlasInfo(true);
		HX_STACK_LINE(2018)
		this->resetFrameBitmapDatas();
		HX_STACK_LINE(2020)
		this->drawFrame(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,addFilter,(void))

Void FlxSprite_obj::calcFrame( hx::Null< bool >  __o_AreYouSure){
bool AreYouSure = __o_AreYouSure.Default(false);
	HX_STACK_PUSH("FlxSprite::calcFrame","org/flixel/FlxSprite.hx",1902);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AreYouSure,"AreYouSure");
{
		HX_STACK_LINE(1905)
		if ((AreYouSure)){
			HX_STACK_LINE(1910)
			if (((bool((bool((this->framePixels == null())) || bool((this->framePixels->get_width() != this->frameWidth)))) || bool((this->framePixels->get_height() != this->frameHeight))))){
				HX_STACK_LINE(1912)
				if (((this->framePixels != null()))){
					HX_STACK_LINE(1913)
					this->framePixels->dispose();
				}
				HX_STACK_LINE(1916)
				this->framePixels = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(this->_flxFrame->sourceSize->x),::Std_obj::_int(this->_flxFrame->sourceSize->y),null(),null(),null());
			}
			HX_STACK_LINE(1919)
			this->framePixels->copyPixels(this->getFlxFrameBitmapData(),this->_flashRect,this->_flashPointZero,null(),null(),null());
		}
		HX_STACK_LINE(1950)
		if ((AreYouSure)){
			HX_STACK_LINE(1951)
			if ((this->_useColorTransform)){
				HX_STACK_LINE(1954)
				this->framePixels->colorTransform(this->_flashRect,this->_colorTransform);
			}
		}
		HX_STACK_LINE(1961)
		if (((this->_callback_dyn() != null()))){
			HX_STACK_LINE(1962)
			this->_callback((  (((this->_curAnim != null()))) ? ::String(this->_curAnim->name) : ::String(null()) ),this->_curFrame,this->_curIndex);
		}
		HX_STACK_LINE(1966)
		this->dirty = false;
		HX_STACK_LINE(1969)
		if (((this->filters != null()))){
			HX_STACK_LINE(1977)
			this->_pixels->copyPixels(this->_pixelsBackup,this->_pixels->get_rect(),this->_flashPointZero,null(),null(),null());
			HX_STACK_LINE(1978)
			{
				HX_STACK_LINE(1978)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->filters;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1978)
				while(((_g < _g1->length))){
					HX_STACK_LINE(1978)
					::flash::filters::BitmapFilter filter = _g1->__get(_g).StaticCast< ::flash::filters::BitmapFilter >();		HX_STACK_VAR(filter,"filter");
					HX_STACK_LINE(1978)
					++(_g);
					HX_STACK_LINE(1980)
					this->_pixels->applyFilter(this->_pixels,this->_flashRect,this->_flashPointZero,filter);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::org::flixel::util::FlxPoint point,hx::Null< int >  __o_Mask,::org::flixel::FlxCamera Camera){
int Mask = __o_Mask.Default(255);
	HX_STACK_PUSH("FlxSprite::pixelsOverlapPoint","org/flixel/FlxSprite.hx",1866);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(Mask,"Mask");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1867)
		if (((Camera == null()))){
			HX_STACK_LINE(1868)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1871)
		{
			HX_STACK_LINE(1871)
			::org::flixel::util::FlxPoint point1 = this->_point;		HX_STACK_VAR(point1,"point1");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(1871)
			if (((point1 == null()))){
				HX_STACK_LINE(1871)
				point1 = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(1871)
			if (((Camera1 == null()))){
				HX_STACK_LINE(1871)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(1871)
			point1->x = (this->x - (Camera1->scroll->x * this->scrollFactor->x));
			HX_STACK_LINE(1871)
			point1->y = (this->y - (Camera1->scroll->y * this->scrollFactor->y));
			HX_STACK_LINE(1871)
			point1;
		}
		HX_STACK_LINE(1872)
		this->_point->x = (this->_point->x - this->offset->x);
		HX_STACK_LINE(1873)
		this->_point->y = (this->_point->y - this->offset->y);
		HX_STACK_LINE(1874)
		this->_flashPoint->x = ((point->x - Camera->scroll->x) - this->_point->x);
		HX_STACK_LINE(1875)
		this->_flashPoint->y = ((point->y - Camera->scroll->y) - this->_point->y);
		HX_STACK_LINE(1880)
		if (((bool((bool((bool((this->_flashPoint->x < (int)0)) || bool((this->_flashPoint->x > this->frameWidth)))) || bool((this->_flashPoint->y < (int)0)))) || bool((this->_flashPoint->y > this->frameHeight))))){
			HX_STACK_LINE(1881)
			return false;
		}
		else{
			HX_STACK_LINE(1886)
			::flash::display::BitmapData frameData = this->getFlxFrameBitmapData();		HX_STACK_VAR(frameData,"frameData");
			HX_STACK_LINE(1887)
			int pixelColor = frameData->getPixel32(::Std_obj::_int(this->_flashPoint->x),::Std_obj::_int(this->_flashPoint->y));		HX_STACK_VAR(pixelColor,"pixelColor");
			HX_STACK_LINE(1888)
			int pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
			HX_STACK_LINE(1889)
			return ((pixelAlpha * this->alpha) >= Mask);
		}
		HX_STACK_LINE(1880)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

bool FlxSprite_obj::onScreenSprite( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxSprite::onScreenSprite","org/flixel/FlxSprite.hx",1816);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(1817)
	if (((Camera == null()))){
		HX_STACK_LINE(1818)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(1821)
	{
		HX_STACK_LINE(1821)
		::org::flixel::util::FlxPoint point = this->_point;		HX_STACK_VAR(point,"point");
		::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
		HX_STACK_LINE(1821)
		if (((point == null()))){
			HX_STACK_LINE(1821)
			point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
		}
		HX_STACK_LINE(1821)
		if (((Camera1 == null()))){
			HX_STACK_LINE(1821)
			Camera1 = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1821)
		point->x = (this->x - (Camera1->scroll->x * this->scrollFactor->x));
		HX_STACK_LINE(1821)
		point->y = (this->y - (Camera1->scroll->y * this->scrollFactor->y));
		HX_STACK_LINE(1821)
		point;
	}
	HX_STACK_LINE(1822)
	this->_point->x = (this->_point->x - this->offset->x);
	HX_STACK_LINE(1823)
	this->_point->y = (this->_point->y - this->offset->y);
	HX_STACK_LINE(1825)
	bool result = false;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1826)
	bool notRotated = (this->angle == 0.0);		HX_STACK_VAR(notRotated,"notRotated");
	HX_STACK_LINE(1829)
	if (((this->_flxFrame != null()))){
		HX_STACK_LINE(1830)
		notRotated = (bool(notRotated) && bool((this->_flxFrame->additionalAngle != 0.0)));
	}
	HX_STACK_LINE(1834)
	if (((bool((bool(((bool(notRotated) || bool((this->bakedRotation > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1))))){
		HX_STACK_LINE(1835)
		result = (bool((bool((bool(((this->_point->x + this->frameWidth) > (int)0)) && bool((this->_point->x < Camera->width)))) && bool(((this->_point->y + this->frameHeight) > (int)0)))) && bool((this->_point->y < Camera->height)));
	}
	else{
		HX_STACK_LINE(1840)
		Float halfWidth = (0.5 * this->frameWidth);		HX_STACK_VAR(halfWidth,"halfWidth");
		HX_STACK_LINE(1841)
		Float halfHeight = (0.5 * this->frameHeight);		HX_STACK_VAR(halfHeight,"halfHeight");
		HX_STACK_LINE(1842)
		Float absScaleX = (  (((this->scale->x > (int)0))) ? Float(this->scale->x) : Float(-(this->scale->x)) );		HX_STACK_VAR(absScaleX,"absScaleX");
		HX_STACK_LINE(1843)
		Float absScaleY = (  (((this->scale->y > (int)0))) ? Float(this->scale->y) : Float(-(this->scale->y)) );		HX_STACK_VAR(absScaleY,"absScaleY");
		HX_STACK_LINE(1847)
		Float radius = (((  (((this->frameWidth >= this->frameHeight))) ? int(this->frameWidth) : int(this->frameHeight) )) * ((  (((absScaleX >= absScaleY))) ? Float(absScaleX) : Float(absScaleY) )));		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(1849)
		hx::AddEq(this->_point->x,(halfWidth * this->scale->x));
		HX_STACK_LINE(1850)
		hx::AddEq(this->_point->y,(halfHeight * this->scale->y));
		HX_STACK_LINE(1851)
		result = (bool((bool((bool(((this->_point->x + radius) > (int)0)) && bool(((this->_point->x - radius) < Camera->width)))) && bool(((this->_point->y + radius) > (int)0)))) && bool(((this->_point->y - radius) < Camera->height)));
	}
	HX_STACK_LINE(1854)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,onScreenSprite,return )

bool FlxSprite_obj::onScreen( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxSprite::onScreen","org/flixel/FlxSprite.hx",1811);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	struct _Function_1_1{
		inline static bool Block( ::org::flixel::FlxCamera &Camera,::org::flixel::FlxSprite_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",1812);
			{
				HX_STACK_LINE(1812)
				::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
				HX_STACK_LINE(1812)
				if (((Camera1 == null()))){
					HX_STACK_LINE(1812)
					Camera1 = ::org::flixel::FlxG_obj::camera;
				}
				HX_STACK_LINE(1812)
				{
					HX_STACK_LINE(1812)
					::org::flixel::util::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera2 = Camera1;		HX_STACK_VAR(Camera2,"Camera2");
					HX_STACK_LINE(1812)
					if (((point == null()))){
						HX_STACK_LINE(1812)
						point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(1812)
					if (((Camera2 == null()))){
						HX_STACK_LINE(1812)
						Camera2 = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(1812)
					point->x = (__this->x - (Camera2->scroll->x * __this->scrollFactor->x));
					HX_STACK_LINE(1812)
					point->y = (__this->y - (Camera2->scroll->y * __this->scrollFactor->y));
					HX_STACK_LINE(1812)
					point;
				}
				HX_STACK_LINE(1812)
				__this->_point->x = (__this->_point->x - __this->offset->x);
				HX_STACK_LINE(1812)
				__this->_point->y = (__this->_point->y - __this->offset->y);
				HX_STACK_LINE(1812)
				bool result = false;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1812)
				bool notRotated = (__this->angle == 0.0);		HX_STACK_VAR(notRotated,"notRotated");
				HX_STACK_LINE(1812)
				if (((__this->_flxFrame != null()))){
					HX_STACK_LINE(1812)
					notRotated = (bool(notRotated) && bool((__this->_flxFrame->additionalAngle != 0.0)));
				}
				HX_STACK_LINE(1812)
				if (((bool((bool(((bool(notRotated) || bool((__this->bakedRotation > (int)0))))) && bool((__this->scale->x == (int)1)))) && bool((__this->scale->y == (int)1))))){
					HX_STACK_LINE(1812)
					result = (bool((bool((bool(((__this->_point->x + __this->frameWidth) > (int)0)) && bool((__this->_point->x < Camera1->width)))) && bool(((__this->_point->y + __this->frameHeight) > (int)0)))) && bool((__this->_point->y < Camera1->height)));
				}
				else{
					HX_STACK_LINE(1812)
					Float halfWidth = (0.5 * __this->frameWidth);		HX_STACK_VAR(halfWidth,"halfWidth");
					HX_STACK_LINE(1812)
					Float halfHeight = (0.5 * __this->frameHeight);		HX_STACK_VAR(halfHeight,"halfHeight");
					HX_STACK_LINE(1812)
					Float absScaleX = (  (((__this->scale->x > (int)0))) ? Float(__this->scale->x) : Float(-(__this->scale->x)) );		HX_STACK_VAR(absScaleX,"absScaleX");
					HX_STACK_LINE(1812)
					Float absScaleY = (  (((__this->scale->y > (int)0))) ? Float(__this->scale->y) : Float(-(__this->scale->y)) );		HX_STACK_VAR(absScaleY,"absScaleY");
					HX_STACK_LINE(1812)
					Float radius = (((  (((__this->frameWidth >= __this->frameHeight))) ? int(__this->frameWidth) : int(__this->frameHeight) )) * ((  (((absScaleX >= absScaleY))) ? Float(absScaleX) : Float(absScaleY) )));		HX_STACK_VAR(radius,"radius");
					HX_STACK_LINE(1812)
					hx::AddEq(__this->_point->x,(halfWidth * __this->scale->x));
					HX_STACK_LINE(1812)
					hx::AddEq(__this->_point->y,(halfHeight * __this->scale->y));
					HX_STACK_LINE(1812)
					result = (bool((bool((bool(((__this->_point->x + radius) > (int)0)) && bool(((__this->_point->x - radius) < Camera1->width)))) && bool(((__this->_point->y + radius) > (int)0)))) && bool(((__this->_point->y - radius) < Camera1->height)));
				}
				HX_STACK_LINE(1812)
				return result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1811)
	return _Function_1_1::Block(Camera,this);
}


::String FlxSprite_obj::set_curAnim( ::String AnimName){
	HX_STACK_PUSH("FlxSprite::set_curAnim","org/flixel/FlxSprite.hx",1797);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AnimName,"AnimName");
	HX_STACK_LINE(1798)
	this->play(AnimName,null(),null());
	HX_STACK_LINE(1799)
	return AnimName;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_curAnim,return )

::String FlxSprite_obj::get_curAnim( ){
	HX_STACK_PUSH("FlxSprite::get_curAnim","org/flixel/FlxSprite.hx",1785);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1786)
	if (((bool((this->_curAnim != null())) && bool(!(this->finished))))){
		HX_STACK_LINE(1787)
		return this->_curAnim->name;
	}
	HX_STACK_LINE(1788)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_curAnim,return )

int FlxSprite_obj::getFrameIndex( ::org::flixel::system::layer::frames::FlxFrame Frame){
	HX_STACK_PUSH("FlxSprite::getFrameIndex","org/flixel/FlxSprite.hx",1777);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Frame,"Frame");
	struct _Function_1_1{
		inline static int Block( ::org::flixel::FlxSprite_obj *__this,::org::flixel::system::layer::frames::FlxFrame &Frame){
			HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",1778);
			{
				HX_STACK_LINE(1778)
				Dynamic array = __this->_framesData->frames;		HX_STACK_VAR(array,"array");
				int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
				HX_STACK_LINE(1778)
				int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(1778)
				int index = (int)-1;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(1778)
				{
					HX_STACK_LINE(1778)
					int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1778)
					while(((_g < len))){
						HX_STACK_LINE(1778)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(1778)
						if (((array->__GetItem(i) == Frame))){
							HX_STACK_LINE(1778)
							index = i;
							HX_STACK_LINE(1778)
							break;
						}
					}
				}
				HX_STACK_LINE(1778)
				return index;
			}
			return null();
		}
	};
	HX_STACK_LINE(1777)
	return _Function_1_1::Block(this,Frame);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,getFrameIndex,return )

::String FlxSprite_obj::set_frameName( ::String value){
	HX_STACK_PUSH("FlxSprite::set_frameName","org/flixel/FlxSprite.hx",1754);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1755)
	if (((bool((bool((this->_textureData != null())) && bool((this->_framesData != null())))) && bool(this->_framesData->framesHash->exists(value))))){
		HX_STACK_LINE(1757)
		this->_curAnim = null();
		HX_STACK_LINE(1758)
		if (((this->_framesData != null()))){
			HX_STACK_LINE(1760)
			this->_flxFrame = this->_framesData->framesHash->get(value);
			HX_STACK_LINE(1761)
			this->_curIndex = this->getFrameIndex(this->_flxFrame);
			HX_STACK_LINE(1762)
			this->resetFrameSize();
		}
		HX_STACK_LINE(1764)
		this->paused = true;
		HX_STACK_LINE(1765)
		this->dirty = true;
	}
	HX_STACK_LINE(1768)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frameName,return )

::String FlxSprite_obj::get_frameName( ){
	HX_STACK_PUSH("FlxSprite::get_frameName","org/flixel/FlxSprite.hx",1744);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1745)
	if (((bool((this->_flxFrame != null())) && bool((this->_textureData != null()))))){
		HX_STACK_LINE(1746)
		return this->_flxFrame->name;
	}
	HX_STACK_LINE(1750)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_frameName,return )

int FlxSprite_obj::set_frame( int Frame){
	HX_STACK_PUSH("FlxSprite::set_frame","org/flixel/FlxSprite.hx",1719);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Frame,"Frame");
	HX_STACK_LINE(1720)
	this->_curAnim = null();
	HX_STACK_LINE(1721)
	this->_curIndex = hx::Mod(Frame,this->frames);
	HX_STACK_LINE(1723)
	if (((this->_framesData != null()))){
		HX_STACK_LINE(1728)
		this->_flxFrame = this->_framesData->frames->__get(this->_curIndex).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >();
		HX_STACK_LINE(1729)
		this->resetFrameSize();
	}
	HX_STACK_LINE(1732)
	this->paused = true;
	HX_STACK_LINE(1733)
	this->dirty = true;
	HX_STACK_LINE(1734)
	return Frame;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frame,return )

int FlxSprite_obj::get_frame( ){
	HX_STACK_PUSH("FlxSprite::get_frame","org/flixel/FlxSprite.hx",1711);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1711)
	return this->_curIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_frame,return )

int FlxSprite_obj::set_color( int Color){
	HX_STACK_PUSH("FlxSprite::set_color","org/flixel/FlxSprite.hx",1660);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(1661)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(1662)
	if (((this->_color == Color))){
		HX_STACK_LINE(1663)
		return this->_color;
	}
	HX_STACK_LINE(1666)
	this->_color = Color;
	HX_STACK_LINE(1667)
	if (((bool((this->alpha != (int)1)) || bool((this->_color != (int)16777215))))){
		HX_STACK_LINE(1669)
		if (((this->_colorTransform == null()))){
			HX_STACK_LINE(1670)
			this->_colorTransform = ::flash::geom::ColorTransform_obj::__new((Float(((int(this->_color) >> int((int)16)))) / Float((int)255)),(Float(((int((int(this->_color) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this->_color) & int((int)255)))) / Float((int)255)),this->alpha,null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(1675)
			this->_colorTransform->redMultiplier = (Float(((int(this->_color) >> int((int)16)))) / Float((int)255));
			HX_STACK_LINE(1676)
			this->_colorTransform->greenMultiplier = (Float(((int((int(this->_color) >> int((int)8))) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(1677)
			this->_colorTransform->blueMultiplier = (Float(((int(this->_color) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(1678)
			this->_colorTransform->alphaMultiplier = this->alpha;
		}
		HX_STACK_LINE(1680)
		this->_useColorTransform = true;
	}
	else{
		HX_STACK_LINE(1684)
		if (((this->_colorTransform != null()))){
			HX_STACK_LINE(1686)
			this->_colorTransform->redMultiplier = (int)1;
			HX_STACK_LINE(1687)
			this->_colorTransform->greenMultiplier = (int)1;
			HX_STACK_LINE(1688)
			this->_colorTransform->blueMultiplier = (int)1;
			HX_STACK_LINE(1689)
			this->_colorTransform->alphaMultiplier = (int)1;
		}
		HX_STACK_LINE(1691)
		this->_useColorTransform = false;
	}
	HX_STACK_LINE(1694)
	this->dirty = true;
	HX_STACK_LINE(1697)
	this->_red = (Float(((int(this->_color) >> int((int)16)))) / Float((int)255));
	HX_STACK_LINE(1698)
	this->_green = (Float(((int((int(this->_color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1699)
	this->_blue = (Float(((int(this->_color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1702)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_color,return )

int FlxSprite_obj::get_color( ){
	HX_STACK_PUSH("FlxSprite::get_color","org/flixel/FlxSprite.hx",1652);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1652)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_color,return )

Float FlxSprite_obj::set_alpha( Float Alpha){
	HX_STACK_PUSH("FlxSprite::set_alpha","org/flixel/FlxSprite.hx",1599);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alpha,"Alpha");
	HX_STACK_LINE(1600)
	if (((Alpha > (int)1))){
		HX_STACK_LINE(1601)
		Alpha = (int)1;
	}
	HX_STACK_LINE(1604)
	if (((Alpha < (int)0))){
		HX_STACK_LINE(1605)
		Alpha = (int)0;
	}
	HX_STACK_LINE(1608)
	if (((Alpha == this->alpha))){
		HX_STACK_LINE(1609)
		return this->alpha;
	}
	HX_STACK_LINE(1612)
	this->alpha = Alpha;
	HX_STACK_LINE(1643)
	return this->alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_alpha,return )

int FlxSprite_obj::set_facing( int Direction){
	HX_STACK_PUSH("FlxSprite::set_facing","org/flixel/FlxSprite.hx",1581);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Direction,"Direction");
	HX_STACK_LINE(1582)
	if (((this->facing != Direction))){
		HX_STACK_LINE(1583)
		this->dirty = true;
	}
	HX_STACK_LINE(1586)
	this->facing = Direction;
	HX_STACK_LINE(1587)
	return Direction;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_facing,return )

::flash::display::BitmapData FlxSprite_obj::set_pixels( ::flash::display::BitmapData Pixels){
	HX_STACK_PUSH("FlxSprite::set_pixels","org/flixel/FlxSprite.hx",1558);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Pixels,"Pixels");
	HX_STACK_LINE(1559)
	this->_pixels = Pixels;
	HX_STACK_LINE(1560)
	this->set_width(this->frameWidth = this->_pixels->get_width());
	HX_STACK_LINE(1561)
	this->set_height(this->frameHeight = this->_pixels->get_height());
	HX_STACK_LINE(1562)
	this->resetHelpers();
	HX_STACK_LINE(1564)
	this->_bitmapDataKey = ::org::flixel::FlxG_obj::getCacheKeyFor(this->_pixels);
	HX_STACK_LINE(1565)
	if (((this->_bitmapDataKey == null()))){
		HX_STACK_LINE(1567)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::getUniqueBitmapKey(null());
		HX_STACK_LINE(1568)
		::org::flixel::FlxG_obj::addBitmap(Pixels,false,false,this->_bitmapDataKey,null(),null(),null(),null());
	}
	HX_STACK_LINE(1573)
	this->updateAtlasInfo(true);
	HX_STACK_LINE(1574)
	return this->_pixels;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_pixels,return )

::flash::display::BitmapData FlxSprite_obj::get_pixels( ){
	HX_STACK_PUSH("FlxSprite::get_pixels","org/flixel/FlxSprite.hx",1550);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1550)
	return this->_pixels;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_pixels,return )

Array< ::Dynamic > FlxSprite_obj::replaceColor( int Color,int NewColor,hx::Null< bool >  __o_FetchPositions){
bool FetchPositions = __o_FetchPositions.Default(false);
	HX_STACK_PUSH("FlxSprite::replaceColor","org/flixel/FlxSprite.hx",1508);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(NewColor,"NewColor");
	HX_STACK_ARG(FetchPositions,"FetchPositions");
{
		HX_STACK_LINE(1509)
		Array< ::Dynamic > positions = null();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(1510)
		if ((FetchPositions)){
			HX_STACK_LINE(1511)
			positions = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(1515)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1516)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1517)
		int rows = this->_pixels->get_height();		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(1518)
		int columns = this->_pixels->get_width();		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(1519)
		while(((row < rows))){
			HX_STACK_LINE(1521)
			column = (int)0;
			HX_STACK_LINE(1522)
			while(((column < columns))){
				HX_STACK_LINE(1524)
				if (((this->_pixels->getPixel32(column,row) == Color))){
					HX_STACK_LINE(1526)
					this->_pixels->setPixel32(column,row,NewColor);
					HX_STACK_LINE(1527)
					if ((FetchPositions)){
						HX_STACK_LINE(1528)
						positions->push(::org::flixel::util::FlxPoint_obj::__new(column,row));
					}
					HX_STACK_LINE(1531)
					this->dirty = true;
				}
				HX_STACK_LINE(1533)
				(column)++;
			}
			HX_STACK_LINE(1535)
			(row)++;
		}
		HX_STACK_LINE(1538)
		this->resetFrameBitmapDatas();
		HX_STACK_LINE(1539)
		this->updateAtlasInfo(true);
		HX_STACK_LINE(1540)
		return positions;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,replaceColor,return )

Void FlxSprite_obj::centerOffsets( hx::Null< bool >  __o_AdjustPosition){
bool AdjustPosition = __o_AdjustPosition.Default(false);
	HX_STACK_PUSH("FlxSprite::centerOffsets","org/flixel/FlxSprite.hx",1490);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AdjustPosition,"AdjustPosition");
{
		HX_STACK_LINE(1491)
		this->offset->x = (((this->frameWidth - this->width)) * 0.5);
		HX_STACK_LINE(1492)
		this->offset->y = (((this->frameHeight - this->height)) * 0.5);
		HX_STACK_LINE(1493)
		if ((AdjustPosition)){
			HX_STACK_LINE(1495)
			hx::AddEq(this->x,this->offset->x);
			HX_STACK_LINE(1496)
			hx::AddEq(this->y,this->offset->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

Void FlxSprite_obj::setOriginToCorner( ){
{
		HX_STACK_PUSH("FlxSprite::setOriginToCorner","org/flixel/FlxSprite.hx",1481);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1481)
		this->origin->x = this->origin->y = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,setOriginToCorner,(void))

Void FlxSprite_obj::randomFrame( ){
{
		HX_STACK_PUSH("FlxSprite::randomFrame","org/flixel/FlxSprite.hx",1460);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1461)
		this->_curAnim = null();
		struct _Function_1_1{
			inline static Float Block( ){
				HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",1462);
				{
					HX_STACK_LINE(1462)
					::org::flixel::util::FlxRandom_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::util::FlxRandom_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
					HX_STACK_LINE(1462)
					if (((::org::flixel::util::FlxRandom_obj::globalSeed <= (int)0))){
						HX_STACK_LINE(1462)
						hx::AddEq(::org::flixel::util::FlxRandom_obj::globalSeed,(int)1);
					}
					HX_STACK_LINE(1462)
					return ::org::flixel::util::FlxRandom_obj::globalSeed;
				}
				return null();
			}
		};
		HX_STACK_LINE(1462)
		this->_curIndex = ::Std_obj::_int((_Function_1_1::Block() * this->frames));
		HX_STACK_LINE(1464)
		if (((this->_framesData != null()))){
			HX_STACK_LINE(1469)
			this->_flxFrame = this->_framesData->frames->__get(this->_curIndex).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >();
			HX_STACK_LINE(1470)
			this->resetFrameSize();
		}
		HX_STACK_LINE(1473)
		this->paused = true;
		HX_STACK_LINE(1474)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,randomFrame,(void))

::org::flixel::system::FlxAnim FlxSprite_obj::getAnimation( ::String name){
	HX_STACK_PUSH("FlxSprite::getAnimation","org/flixel/FlxSprite.hx",1451);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(1451)
	return this->_animations->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,getAnimation,return )

Void FlxSprite_obj::resumeAnimation( ){
{
		HX_STACK_PUSH("FlxSprite::resumeAnimation","org/flixel/FlxSprite.hx",1442);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1442)
		if (((bool((this->_curAnim != null())) && bool(!(this->finished))))){
			HX_STACK_LINE(1444)
			this->paused = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resumeAnimation,(void))

Void FlxSprite_obj::pauseAnimation( ){
{
		HX_STACK_PUSH("FlxSprite::pauseAnimation","org/flixel/FlxSprite.hx",1434);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1434)
		this->paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,pauseAnimation,(void))

Void FlxSprite_obj::gotoAndStop( hx::Null< int >  __o_Frame){
int Frame = __o_Frame.Default(0);
	HX_STACK_PUSH("FlxSprite::gotoAndStop","org/flixel/FlxSprite.hx",1397);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Frame,"Frame");
{
		HX_STACK_LINE(1398)
		if (((bool((this->_curAnim == null())) || bool((this->_curAnim->frames->length <= Frame))))){
			HX_STACK_LINE(1399)
			return null();
		}
		HX_STACK_LINE(1403)
		this->_frameTimer = (int)0;
		HX_STACK_LINE(1404)
		if (((this->_curAnim->delay <= (int)0))){
			HX_STACK_LINE(1405)
			this->finished = true;
		}
		else{
			HX_STACK_LINE(1409)
			this->finished = false;
		}
		HX_STACK_LINE(1413)
		this->_curFrame = Frame;
		HX_STACK_LINE(1414)
		this->_curIndex = this->_curAnim->frames->__get(this->_curFrame);
		HX_STACK_LINE(1419)
		if (((this->_framesData != null()))){
			HX_STACK_LINE(1421)
			this->_flxFrame = this->_framesData->frames->__get(this->_curIndex).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >();
		}
		HX_STACK_LINE(1425)
		this->dirty = true;
		HX_STACK_LINE(1426)
		this->paused = true;
		HX_STACK_LINE(1427)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,gotoAndStop,(void))

Void FlxSprite_obj::gotoAndPlay( hx::Null< int >  __o_Frame){
int Frame = __o_Frame.Default(0);
	HX_STACK_PUSH("FlxSprite::gotoAndPlay","org/flixel/FlxSprite.hx",1383);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Frame,"Frame");
{
		HX_STACK_LINE(1384)
		if (((bool((this->_curAnim == null())) || bool((this->_curAnim->frames->length <= Frame))))){
			HX_STACK_LINE(1385)
			return null();
		}
		HX_STACK_LINE(1389)
		this->play(this->_curAnim->name,true,Frame);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,gotoAndPlay,(void))

Void FlxSprite_obj::play( ::String AnimName,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Frame){
bool Force = __o_Force.Default(false);
int Frame = __o_Frame.Default(0);
	HX_STACK_PUSH("FlxSprite::play","org/flixel/FlxSprite.hx",1319);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AnimName,"AnimName");
	HX_STACK_ARG(Force,"Force");
	HX_STACK_ARG(Frame,"Frame");
{
		HX_STACK_LINE(1320)
		if (((bool((bool((bool(!(Force)) && bool((this->_curAnim != null())))) && bool((AnimName == this->_curAnim->name)))) && bool(((bool(this->_curAnim->looped) || bool(!(this->finished)))))))){
			HX_STACK_LINE(1322)
			this->paused = false;
			HX_STACK_LINE(1323)
			return null();
		}
		HX_STACK_LINE(1325)
		this->_curFrame = (int)0;
		HX_STACK_LINE(1326)
		this->_curIndex = (int)0;
		HX_STACK_LINE(1331)
		if (((this->_framesData != null()))){
			HX_STACK_LINE(1333)
			this->_flxFrame = this->_framesData->frames->__get(this->_curIndex).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >();
		}
		HX_STACK_LINE(1337)
		this->_frameTimer = (int)0;
		HX_STACK_LINE(1338)
		if ((this->_animations->exists(AnimName))){
			HX_STACK_LINE(1340)
			this->_curAnim = this->_animations->get(AnimName);
			HX_STACK_LINE(1341)
			if (((this->_curAnim->delay <= (int)0))){
				HX_STACK_LINE(1342)
				this->finished = true;
			}
			else{
				HX_STACK_LINE(1346)
				this->finished = false;
			}
			HX_STACK_LINE(1350)
			if (((Frame < (int)0))){
				HX_STACK_LINE(1351)
				this->_curFrame = ::Std_obj::_int((::Math_obj::random() * this->_curAnim->frames->length));
			}
			else{
				HX_STACK_LINE(1354)
				if (((this->_curAnim->frames->length > Frame))){
					HX_STACK_LINE(1355)
					this->_curFrame = Frame;
				}
			}
			HX_STACK_LINE(1359)
			this->_curIndex = this->_curAnim->frames->__get(this->_curFrame);
			HX_STACK_LINE(1364)
			if (((this->_framesData != null()))){
				HX_STACK_LINE(1366)
				this->_flxFrame = this->_framesData->frames->__get(this->_curIndex).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >();
			}
			HX_STACK_LINE(1370)
			this->dirty = true;
			HX_STACK_LINE(1371)
			this->paused = false;
			HX_STACK_LINE(1372)
			return null();
		}
		HX_STACK_LINE(1375)
		::org::flixel::FlxG_obj::warn(((HX_CSTRING("No animation called \"") + AnimName) + HX_CSTRING("\"")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,play,(void))

Void FlxSprite_obj::addAnimationCallback( Dynamic AnimationCallback){
{
		HX_STACK_PUSH("FlxSprite::addAnimationCallback","org/flixel/FlxSprite.hx",1307);
		HX_STACK_THIS(this);
		HX_STACK_ARG(AnimationCallback,"AnimationCallback");
		HX_STACK_LINE(1307)
		this->_callback = AnimationCallback;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,addAnimationCallback,(void))

Void FlxSprite_obj::addAnimationByPrefixFromTexture( ::String Name,::String Prefix,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_PUSH("FlxSprite::addAnimationByPrefixFromTexture","org/flixel/FlxSprite.hx",1269);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Name,"Name");
	HX_STACK_ARG(Prefix,"Prefix");
	HX_STACK_ARG(FrameRate,"FrameRate");
	HX_STACK_ARG(Looped,"Looped");
{
		HX_STACK_LINE(1269)
		if (((bool((this->_atlas != null())) && bool((this->_textureData != null()))))){
			HX_STACK_LINE(1272)
			Array< ::Dynamic > animFrames = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(animFrames,"animFrames");
			HX_STACK_LINE(1273)
			int l = this->_framesData->frames->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(1274)
			{
				HX_STACK_LINE(1274)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1274)
				while(((_g < l))){
					HX_STACK_LINE(1274)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1276)
					if ((::StringTools_obj::startsWith(this->_framesData->frames->__get(i).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >()->name,Prefix))){
						HX_STACK_LINE(1277)
						animFrames->push(this->_framesData->frames->__get(i).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >());
					}
				}
			}
			HX_STACK_LINE(1282)
			if (((animFrames->length > (int)0))){
				HX_STACK_LINE(1284)
				::String name = animFrames->__get((int)0).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >()->name;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(1285)
				::String postFix = name.substring(name.indexOf(HX_CSTRING("."),Prefix.length),name.length);		HX_STACK_VAR(postFix,"postFix");
				HX_STACK_LINE(1286)
				::org::flixel::FlxSprite_obj::prefixLength = Prefix.length;
				HX_STACK_LINE(1287)
				::org::flixel::FlxSprite_obj::postfixLength = postFix.length;
				HX_STACK_LINE(1288)
				animFrames->sort(::org::flixel::FlxSprite_obj::frameSortFunction_dyn());
				HX_STACK_LINE(1289)
				Array< int > frameIndices = Array_obj< int >::__new();		HX_STACK_VAR(frameIndices,"frameIndices");
				HX_STACK_LINE(1291)
				l = animFrames->length;
				HX_STACK_LINE(1292)
				{
					HX_STACK_LINE(1292)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1292)
					while(((_g < l))){
						HX_STACK_LINE(1292)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(1294)
						frameIndices->push(this->getFrameIndex(animFrames->__get(i).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >()));
					}
				}
				HX_STACK_LINE(1297)
				this->_animations->set(Name,::org::flixel::system::FlxAnim_obj::__new(Name,frameIndices,FrameRate,Looped));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,addAnimationByPrefixFromTexture,(void))

Void FlxSprite_obj::addAnimationByIndiciesFromTexture( ::String Name,::String Prefix,Array< int > Indicies,::String Postfix,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_PUSH("FlxSprite::addAnimationByIndiciesFromTexture","org/flixel/FlxSprite.hx",1239);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Name,"Name");
	HX_STACK_ARG(Prefix,"Prefix");
	HX_STACK_ARG(Indicies,"Indicies");
	HX_STACK_ARG(Postfix,"Postfix");
	HX_STACK_ARG(FrameRate,"FrameRate");
	HX_STACK_ARG(Looped,"Looped");
{
		HX_STACK_LINE(1239)
		if (((bool((this->_atlas != null())) && bool((this->_textureData != null()))))){
			HX_STACK_LINE(1242)
			Array< int > frameIndices = Array_obj< int >::__new();		HX_STACK_VAR(frameIndices,"frameIndices");
			HX_STACK_LINE(1243)
			int l = Indicies->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(1244)
			{
				HX_STACK_LINE(1244)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1244)
				while(((_g < l))){
					HX_STACK_LINE(1244)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1246)
					::String name = ((Prefix + Indicies->__get(i)) + Postfix);		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(1247)
					if ((this->_framesData->framesHash->exists(name))){
						HX_STACK_LINE(1249)
						::org::flixel::system::layer::frames::FlxFrame frameToAdd = this->_framesData->framesHash->get(name);		HX_STACK_VAR(frameToAdd,"frameToAdd");
						HX_STACK_LINE(1250)
						frameIndices->push(this->getFrameIndex(frameToAdd));
					}
				}
			}
			HX_STACK_LINE(1254)
			if (((frameIndices->length > (int)0))){
				HX_STACK_LINE(1255)
				this->_animations->set(Name,::org::flixel::system::FlxAnim_obj::__new(Name,frameIndices,FrameRate,Looped));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,addAnimationByIndiciesFromTexture,(void))

Void FlxSprite_obj::addAnimationByNamesFromTexture( ::String Name,Array< ::String > FrameNames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_PUSH("FlxSprite::addAnimationByNamesFromTexture","org/flixel/FlxSprite.hx",1207);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Name,"Name");
	HX_STACK_ARG(FrameNames,"FrameNames");
	HX_STACK_ARG(FrameRate,"FrameRate");
	HX_STACK_ARG(Looped,"Looped");
{
		HX_STACK_LINE(1207)
		if (((bool((this->_atlas != null())) && bool((this->_textureData != null()))))){
			HX_STACK_LINE(1210)
			Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(1211)
			int l = FrameNames->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(1212)
			{
				HX_STACK_LINE(1212)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1212)
				while(((_g < l))){
					HX_STACK_LINE(1212)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1214)
					::String name = FrameNames->__get(i);		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(1215)
					if ((this->_framesData->framesHash->exists(name))){
						HX_STACK_LINE(1217)
						::org::flixel::system::layer::frames::FlxFrame frameToAdd = this->_framesData->framesHash->get(name);		HX_STACK_VAR(frameToAdd,"frameToAdd");
						HX_STACK_LINE(1218)
						indices->push(this->getFrameIndex(frameToAdd));
					}
				}
			}
			HX_STACK_LINE(1222)
			if (((indices->length > (int)0))){
				HX_STACK_LINE(1223)
				this->_animations->set(Name,::org::flixel::system::FlxAnim_obj::__new(Name,indices,FrameRate,Looped));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,addAnimationByNamesFromTexture,(void))

Void FlxSprite_obj::addAnimation( ::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_PUSH("FlxSprite::addAnimation","org/flixel/FlxSprite.hx",1184);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Name,"Name");
	HX_STACK_ARG(Frames,"Frames");
	HX_STACK_ARG(FrameRate,"FrameRate");
	HX_STACK_ARG(Looped,"Looped");
{
		HX_STACK_LINE(1186)
		int numFrames = (Frames->length - (int)1);		HX_STACK_VAR(numFrames,"numFrames");
		HX_STACK_LINE(1187)
		int i = numFrames;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1188)
		while(((i >= (int)0))){
			HX_STACK_LINE(1190)
			if (((Frames->__get(i) >= this->frames))){
				HX_STACK_LINE(1191)
				Frames->splice(i,(int)1);
			}
			HX_STACK_LINE(1194)
			(i)--;
		}
		HX_STACK_LINE(1196)
		this->_animations->set(Name,::org::flixel::system::FlxAnim_obj::__new(Name,Frames,FrameRate,Looped));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,addAnimation,(void))

Void FlxSprite_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxSprite::drawFrame","org/flixel/FlxSprite.hx",1165);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(1165)
		this->calcFrame(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

Void FlxSprite_obj::updateAnimation( ){
{
		HX_STACK_PUSH("FlxSprite::updateAnimation","org/flixel/FlxSprite.hx",1088);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1089)
		if (((this->bakedRotation > (int)0))){
			HX_STACK_LINE(1091)
			int oldIndex = this->_curIndex;		HX_STACK_VAR(oldIndex,"oldIndex");
			HX_STACK_LINE(1092)
			int angleHelper = ::Math_obj::floor(hx::Mod(this->angle,(int)360));		HX_STACK_VAR(angleHelper,"angleHelper");
			HX_STACK_LINE(1100)
			while(((angleHelper < (int)0))){
				HX_STACK_LINE(1101)
				hx::AddEq(angleHelper,(int)360);
			}
			HX_STACK_LINE(1106)
			this->_curIndex = ::Math_obj::floor(((Float(angleHelper) / Float(this->bakedRotation)) + 0.5));
			HX_STACK_LINE(1107)
			this->_curIndex = ::Std_obj::_int(hx::Mod(this->_curIndex,this->frames));
			HX_STACK_LINE(1110)
			if (((this->_framesData != null()))){
				HX_STACK_LINE(1111)
				this->_flxFrame = this->_framesData->frames->__get(this->_curIndex).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >();
			}
			HX_STACK_LINE(1115)
			if (((oldIndex != this->_curIndex))){
				HX_STACK_LINE(1116)
				this->dirty = true;
			}
		}
		else{
			HX_STACK_LINE(1120)
			if (((bool((bool((bool((this->_curAnim != null())) && bool((this->_curAnim->delay > (int)0)))) && bool(((bool(this->_curAnim->looped) || bool(!(this->finished))))))) && bool(!(this->paused))))){
				HX_STACK_LINE(1122)
				hx::AddEq(this->_frameTimer,::org::flixel::FlxG_obj::elapsed);
				HX_STACK_LINE(1123)
				while(((this->_frameTimer > this->_curAnim->delay))){
					HX_STACK_LINE(1125)
					this->_frameTimer = (this->_frameTimer - this->_curAnim->delay);
					HX_STACK_LINE(1126)
					if (((this->_curFrame == (this->_curAnim->frames->length - (int)1)))){
						HX_STACK_LINE(1128)
						if ((this->_curAnim->looped)){
							HX_STACK_LINE(1129)
							this->_curFrame = (int)0;
						}
						HX_STACK_LINE(1132)
						this->finished = true;
					}
					else{
						HX_STACK_LINE(1135)
						(this->_curFrame)++;
					}
					HX_STACK_LINE(1138)
					this->_curIndex = this->_curAnim->frames->__get(this->_curFrame);
					HX_STACK_LINE(1140)
					if (((this->_framesData != null()))){
						HX_STACK_LINE(1145)
						this->_flxFrame = this->_framesData->frames->__get(this->_curIndex).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >();
						HX_STACK_LINE(1146)
						this->resetFrameSize();
					}
					HX_STACK_LINE(1149)
					this->dirty = true;
				}
			}
		}
		HX_STACK_LINE(1153)
		if ((this->dirty)){
			HX_STACK_LINE(1154)
			this->calcFrame(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateAnimation,(void))

Void FlxSprite_obj::fill( int Color){
{
		HX_STACK_PUSH("FlxSprite::fill","org/flixel/FlxSprite.hx",1071);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Color,"Color");
		HX_STACK_LINE(1072)
		this->_pixels->fillRect(this->_flashRect2,Color);
		HX_STACK_LINE(1073)
		if (((this->_pixels != this->framePixels))){
			HX_STACK_LINE(1074)
			this->dirty = true;
		}
		HX_STACK_LINE(1078)
		this->resetFrameBitmapDatas();
		HX_STACK_LINE(1079)
		this->updateAtlasInfo(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,fill,(void))

Void FlxSprite_obj::drawCircle( Float X,Float Y,Float Radius,int Color){
{
		HX_STACK_PUSH("FlxSprite::drawCircle","org/flixel/FlxSprite.hx",1052);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_ARG(Radius,"Radius");
		HX_STACK_ARG(Color,"Color");
		HX_STACK_LINE(1053)
		::flash::display::Graphics gfx = ::org::flixel::FlxG_obj::flashGfx;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(1054)
		gfx->clear();
		HX_STACK_LINE(1055)
		gfx->beginFill(Color,(int)1);
		HX_STACK_LINE(1056)
		gfx->drawCircle(X,Y,Radius);
		HX_STACK_LINE(1057)
		gfx->endFill();
		HX_STACK_LINE(1059)
		this->_pixels->draw(::org::flixel::FlxG_obj::flashGfxSprite,null(),null(),null(),null(),null());
		HX_STACK_LINE(1060)
		this->dirty = true;
		HX_STACK_LINE(1062)
		this->resetFrameBitmapDatas();
		HX_STACK_LINE(1063)
		this->updateAtlasInfo(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,drawCircle,(void))

Void FlxSprite_obj::drawLine( Float StartX,Float StartY,Float EndX,Float EndY,int Color,hx::Null< int >  __o_Thickness){
int Thickness = __o_Thickness.Default(1);
	HX_STACK_PUSH("FlxSprite::drawLine","org/flixel/FlxSprite.hx",1022);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartX,"StartX");
	HX_STACK_ARG(StartY,"StartY");
	HX_STACK_ARG(EndX,"EndX");
	HX_STACK_ARG(EndY,"EndY");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Thickness,"Thickness");
{
		HX_STACK_LINE(1024)
		::flash::display::Graphics gfx = ::org::flixel::FlxG_obj::flashGfx;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(1025)
		gfx->clear();
		HX_STACK_LINE(1026)
		gfx->moveTo(StartX,StartY);
		HX_STACK_LINE(1027)
		Float alphaComponent = (Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(1028)
		if (((alphaComponent <= (int)0))){
			HX_STACK_LINE(1029)
			alphaComponent = (int)1;
		}
		HX_STACK_LINE(1032)
		gfx->lineStyle(Thickness,Color,alphaComponent,null(),null(),null(),null(),null());
		HX_STACK_LINE(1033)
		gfx->lineTo(EndX,EndY);
		HX_STACK_LINE(1036)
		this->_pixels->draw(::org::flixel::FlxG_obj::flashGfxSprite,null(),null(),null(),null(),null());
		HX_STACK_LINE(1037)
		this->dirty = true;
		HX_STACK_LINE(1039)
		this->resetFrameBitmapDatas();
		HX_STACK_LINE(1040)
		this->updateAtlasInfo(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,drawLine,(void))

Void FlxSprite_obj::stamp( ::org::flixel::FlxSprite Brush,hx::Null< int >  __o_X,hx::Null< int >  __o_Y){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
	HX_STACK_PUSH("FlxSprite::stamp","org/flixel/FlxSprite.hx",968);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Brush,"Brush");
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
{
		HX_STACK_LINE(969)
		Brush->drawFrame(null());
		HX_STACK_LINE(970)
		::flash::display::BitmapData bitmapData = Brush->framePixels;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(973)
		if (((bool((bool((bool(((bool((Brush->angle == (int)0)) || bool((Brush->bakedRotation > (int)0))))) && bool((Brush->scale->x == (int)1)))) && bool((Brush->scale->y == (int)1)))) && bool((Brush->get_blend() == null()))))){
			HX_STACK_LINE(975)
			this->_flashPoint->x = X;
			HX_STACK_LINE(976)
			this->_flashPoint->y = Y;
			HX_STACK_LINE(977)
			this->_flashRect2->width = bitmapData->get_width();
			HX_STACK_LINE(978)
			this->_flashRect2->height = bitmapData->get_height();
			HX_STACK_LINE(979)
			this->_pixels->copyPixels(bitmapData,this->_flashRect2,this->_flashPoint,null(),null(),true);
			HX_STACK_LINE(980)
			this->_flashRect2->width = this->_pixels->get_width();
			HX_STACK_LINE(981)
			this->_flashRect2->height = this->_pixels->get_height();
			HX_STACK_LINE(983)
			this->resetFrameBitmapDatas();
			HX_STACK_LINE(988)
			return null();
		}
		HX_STACK_LINE(992)
		this->_matrix->identity();
		HX_STACK_LINE(993)
		this->_matrix->translate(-(Brush->origin->x),-(Brush->origin->y));
		HX_STACK_LINE(994)
		this->_matrix->scale(Brush->scale->x,Brush->scale->y);
		HX_STACK_LINE(995)
		if (((Brush->angle != (int)0))){
			HX_STACK_LINE(996)
			this->_matrix->rotate((Brush->angle * ::org::flixel::util::FlxAngle_obj::RAD));
		}
		HX_STACK_LINE(999)
		this->_matrix->translate((X + Brush->origin->x),(Y + Brush->origin->y));
		HX_STACK_LINE(1000)
		::flash::display::BlendMode brushBlend = Brush->get_blend();		HX_STACK_VAR(brushBlend,"brushBlend");
		HX_STACK_LINE(1001)
		this->_pixels->draw(bitmapData,this->_matrix,null(),brushBlend,null(),Brush->antialiasing);
		HX_STACK_LINE(1003)
		this->resetFrameBitmapDatas();
		HX_STACK_LINE(1008)
		this->updateAtlasInfo(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,stamp,(void))

Void FlxSprite_obj::draw( ){
{
		HX_STACK_PUSH("FlxSprite::draw","org/flixel/FlxSprite.hx",771);
		HX_STACK_THIS(this);
		HX_STACK_LINE(773)
		if (((this->_atlas == null()))){
			HX_STACK_LINE(774)
			return null();
		}
		HX_STACK_LINE(779)
		if (((this->_flickerTimer != (int)0))){
			HX_STACK_LINE(781)
			this->_flicker = !(this->_flicker);
			HX_STACK_LINE(782)
			if ((this->_flicker)){
				HX_STACK_LINE(783)
				return null();
			}
		}
		HX_STACK_LINE(788)
		if ((this->dirty)){
			HX_STACK_LINE(789)
			this->calcFrame(null());
		}
		HX_STACK_LINE(793)
		if (((this->cameras == null()))){
			HX_STACK_LINE(794)
			this->cameras = ::org::flixel::FlxG_obj::cameras;
		}
		HX_STACK_LINE(797)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(798)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(799)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(802)
		::org::flixel::system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(803)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(804)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(806)
		bool isColored = (this->_color < (int)16777215);		HX_STACK_VAR(isColored,"isColored");
		HX_STACK_LINE(811)
		Float radians;		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(812)
		Float cos;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(813)
		Float sin;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(816)
		while(((i < l))){
			HX_STACK_LINE(818)
			camera = this->cameras->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
			struct _Function_2_1{
				inline static bool Block( ::org::flixel::FlxCamera &camera,::org::flixel::FlxSprite_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",820);
					{
						HX_STACK_LINE(820)
						::org::flixel::FlxCamera Camera = camera;		HX_STACK_VAR(Camera,"Camera");
						HX_STACK_LINE(820)
						if (((Camera == null()))){
							HX_STACK_LINE(820)
							Camera = ::org::flixel::FlxG_obj::camera;
						}
						HX_STACK_LINE(820)
						{
							HX_STACK_LINE(820)
							::org::flixel::util::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
							::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
							HX_STACK_LINE(820)
							if (((point == null()))){
								HX_STACK_LINE(820)
								point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
							}
							HX_STACK_LINE(820)
							if (((Camera1 == null()))){
								HX_STACK_LINE(820)
								Camera1 = ::org::flixel::FlxG_obj::camera;
							}
							HX_STACK_LINE(820)
							point->x = (__this->x - (Camera1->scroll->x * __this->scrollFactor->x));
							HX_STACK_LINE(820)
							point->y = (__this->y - (Camera1->scroll->y * __this->scrollFactor->y));
							HX_STACK_LINE(820)
							point;
						}
						HX_STACK_LINE(820)
						__this->_point->x = (__this->_point->x - __this->offset->x);
						HX_STACK_LINE(820)
						__this->_point->y = (__this->_point->y - __this->offset->y);
						HX_STACK_LINE(820)
						bool result = false;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(820)
						bool notRotated = (__this->angle == 0.0);		HX_STACK_VAR(notRotated,"notRotated");
						HX_STACK_LINE(820)
						if (((__this->_flxFrame != null()))){
							HX_STACK_LINE(820)
							notRotated = (bool(notRotated) && bool((__this->_flxFrame->additionalAngle != 0.0)));
						}
						HX_STACK_LINE(820)
						if (((bool((bool(((bool(notRotated) || bool((__this->bakedRotation > (int)0))))) && bool((__this->scale->x == (int)1)))) && bool((__this->scale->y == (int)1))))){
							HX_STACK_LINE(820)
							result = (bool((bool((bool(((__this->_point->x + __this->frameWidth) > (int)0)) && bool((__this->_point->x < Camera->width)))) && bool(((__this->_point->y + __this->frameHeight) > (int)0)))) && bool((__this->_point->y < Camera->height)));
						}
						else{
							HX_STACK_LINE(820)
							Float halfWidth = (0.5 * __this->frameWidth);		HX_STACK_VAR(halfWidth,"halfWidth");
							HX_STACK_LINE(820)
							Float halfHeight = (0.5 * __this->frameHeight);		HX_STACK_VAR(halfHeight,"halfHeight");
							HX_STACK_LINE(820)
							Float absScaleX = (  (((__this->scale->x > (int)0))) ? Float(__this->scale->x) : Float(-(__this->scale->x)) );		HX_STACK_VAR(absScaleX,"absScaleX");
							HX_STACK_LINE(820)
							Float absScaleY = (  (((__this->scale->y > (int)0))) ? Float(__this->scale->y) : Float(-(__this->scale->y)) );		HX_STACK_VAR(absScaleY,"absScaleY");
							HX_STACK_LINE(820)
							Float radius = (((  (((__this->frameWidth >= __this->frameHeight))) ? int(__this->frameWidth) : int(__this->frameHeight) )) * ((  (((absScaleX >= absScaleY))) ? Float(absScaleX) : Float(absScaleY) )));		HX_STACK_VAR(radius,"radius");
							HX_STACK_LINE(820)
							hx::AddEq(__this->_point->x,(halfWidth * __this->scale->x));
							HX_STACK_LINE(820)
							hx::AddEq(__this->_point->y,(halfHeight * __this->scale->y));
							HX_STACK_LINE(820)
							result = (bool((bool((bool(((__this->_point->x + radius) > (int)0)) && bool(((__this->_point->x - radius) < Camera->width)))) && bool(((__this->_point->y + radius) > (int)0)))) && bool(((__this->_point->y - radius) < Camera->height)));
						}
						HX_STACK_LINE(820)
						return result;
					}
					return null();
				}
			};
			HX_STACK_LINE(820)
			if (((bool((bool(!(_Function_2_1::Block(camera,this))) || bool(!(camera->visible)))) || bool(!(camera->exists))))){
				HX_STACK_LINE(821)
				continue;
			}
			struct _Function_2_2{
				inline static ::org::flixel::system::layer::DrawStackItem Block( ::org::flixel::FlxSprite_obj *__this,::org::flixel::FlxCamera &camera,bool &isColored){
					HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",827);
					{
						HX_STACK_LINE(827)
						::org::flixel::system::layer::Atlas ObjAtlas = __this->_atlas;		HX_STACK_VAR(ObjAtlas,"ObjAtlas");
						int ObjBlending = __this->_blendInt;		HX_STACK_VAR(ObjBlending,"ObjBlending");
						HX_STACK_LINE(827)
						::org::flixel::system::layer::DrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
						HX_STACK_LINE(827)
						if (((camera->_currentStackItem->initialized == false))){
							HX_STACK_LINE(827)
							camera->_headOfDrawStack = camera->_currentStackItem;
							HX_STACK_LINE(827)
							camera->_currentStackItem->atlas = ObjAtlas;
							HX_STACK_LINE(827)
							camera->_currentStackItem->colored = isColored;
							HX_STACK_LINE(827)
							camera->_currentStackItem->blending = ObjBlending;
							HX_STACK_LINE(827)
							itemToReturn = camera->_currentStackItem;
						}
						else{
							HX_STACK_LINE(827)
							if (((bool((bool((camera->_currentStackItem->atlas == ObjAtlas)) && bool((camera->_currentStackItem->colored == isColored)))) && bool((camera->_currentStackItem->blending == ObjBlending))))){
								HX_STACK_LINE(827)
								itemToReturn = camera->_currentStackItem;
							}
						}
						HX_STACK_LINE(827)
						if (((itemToReturn == null()))){
							HX_STACK_LINE(827)
							::org::flixel::system::layer::DrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
							HX_STACK_LINE(827)
							if (((::org::flixel::FlxCamera_obj::_storageHead != null()))){
								HX_STACK_LINE(827)
								newItem = ::org::flixel::FlxCamera_obj::_storageHead;
								HX_STACK_LINE(827)
								::org::flixel::system::layer::DrawStackItem newHead = ::org::flixel::FlxCamera_obj::_storageHead->next;		HX_STACK_VAR(newHead,"newHead");
								HX_STACK_LINE(827)
								newItem->next = null();
								HX_STACK_LINE(827)
								::org::flixel::FlxCamera_obj::_storageHead = newHead;
							}
							else{
								HX_STACK_LINE(827)
								newItem = ::org::flixel::system::layer::DrawStackItem_obj::__new();
							}
							HX_STACK_LINE(827)
							newItem->atlas = ObjAtlas;
							HX_STACK_LINE(827)
							newItem->colored = isColored;
							HX_STACK_LINE(827)
							newItem->blending = ObjBlending;
							HX_STACK_LINE(827)
							camera->_currentStackItem->next = newItem;
							HX_STACK_LINE(827)
							camera->_currentStackItem = newItem;
							HX_STACK_LINE(827)
							itemToReturn = camera->_currentStackItem;
						}
						HX_STACK_LINE(827)
						itemToReturn->initialized = true;
						HX_STACK_LINE(827)
						return itemToReturn;
					}
					return null();
				}
			};
			HX_STACK_LINE(827)
			drawItem = _Function_2_2::Block(this,camera,isColored);
			HX_STACK_LINE(831)
			currDrawData = drawItem->drawData;
			HX_STACK_LINE(832)
			currIndex = drawItem->position;
			HX_STACK_LINE(834)
			this->_point->x = ((this->x - (camera->scroll->x * this->scrollFactor->x)) - this->offset->x);
			HX_STACK_LINE(835)
			this->_point->y = ((this->y - (camera->scroll->y * this->scrollFactor->y)) - this->offset->y);
			HX_STACK_LINE(837)
			this->_point->x = (this->_point->x + this->origin->x);
			HX_STACK_LINE(838)
			this->_point->y = (this->_point->y + this->origin->y);
			HX_STACK_LINE(869)
			Float csx = (int)1;		HX_STACK_VAR(csx,"csx");
			HX_STACK_LINE(870)
			Float ssy = (int)0;		HX_STACK_VAR(ssy,"ssy");
			HX_STACK_LINE(871)
			Float ssx = (int)0;		HX_STACK_VAR(ssx,"ssx");
			HX_STACK_LINE(872)
			Float csy = (int)1;		HX_STACK_VAR(csy,"csy");
			HX_STACK_LINE(874)
			Float x1 = (this->origin->x - this->_flxFrame->center->x);		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(875)
			Float y1 = (this->origin->y - this->_flxFrame->center->y);		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(877)
			Float x2 = x1;		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(878)
			Float y2 = y1;		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(880)
			int facingMult = (  (((bool((this->_flipped != (int)0)) && bool((this->facing == (int)1))))) ? int((int)-1) : int((int)1) );		HX_STACK_VAR(facingMult,"facingMult");
			HX_STACK_LINE(883)
			Float a = csx;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(884)
			Float b = ssy;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(885)
			Float c = ssx;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(886)
			Float d = csy;		HX_STACK_VAR(d,"d");
			struct _Function_2_3{
				inline static bool Block( ::org::flixel::FlxSprite_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",888);
					{
						HX_STACK_LINE(888)
						bool result = (bool((bool(((bool((__this->angle == (int)0)) || bool((__this->bakedRotation > (int)0))))) && bool((__this->scale->x == (int)1)))) && bool((__this->scale->y == (int)1)));		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(888)
						if (((__this->_flxFrame != null()))){
							HX_STACK_LINE(888)
							result = (bool(result) && bool(((bool((bool((__this->angle == (int)0)) && bool((__this->_flxFrame->additionalAngle == (int)0)))) || bool((__this->bakedRotation > (int)0))))));
						}
						HX_STACK_LINE(888)
						return result;
					}
					return null();
				}
			};
			HX_STACK_LINE(888)
			if ((!(_Function_2_3::Block(this)))){
				HX_STACK_LINE(890)
				radians = (-(((this->angle + this->_flxFrame->additionalAngle))) * ::org::flixel::util::FlxAngle_obj::RAD);
				HX_STACK_LINE(891)
				cos = ::Math_obj::cos(radians);
				HX_STACK_LINE(892)
				sin = ::Math_obj::sin(radians);
				HX_STACK_LINE(894)
				csx = ((cos * this->scale->x) * facingMult);
				HX_STACK_LINE(895)
				ssy = (sin * this->scale->y);
				HX_STACK_LINE(896)
				ssx = ((sin * this->scale->x) * facingMult);
				HX_STACK_LINE(897)
				csy = (cos * this->scale->y);
				HX_STACK_LINE(899)
				if ((this->_flxFrame->rotated)){
					HX_STACK_LINE(901)
					x2 = ((x1 * ssx) - (y1 * csy));
					HX_STACK_LINE(902)
					y2 = ((x1 * csx) + (y1 * ssy));
					HX_STACK_LINE(904)
					a = csy;
					HX_STACK_LINE(905)
					b = ssx;
					HX_STACK_LINE(906)
					c = ssy;
					HX_STACK_LINE(907)
					d = csx;
				}
				else{
					HX_STACK_LINE(911)
					x2 = ((x1 * csx) + (y1 * ssy));
					HX_STACK_LINE(912)
					y2 = ((-(x1) * ssx) + (y1 * csy));
					HX_STACK_LINE(914)
					a = csx;
					HX_STACK_LINE(915)
					b = ssy;
					HX_STACK_LINE(916)
					c = ssx;
					HX_STACK_LINE(917)
					d = csy;
				}
			}
			else{
				HX_STACK_LINE(922)
				hx::MultEq(csx,facingMult);
				HX_STACK_LINE(924)
				x2 = ((x1 * csx) + (y1 * ssy));
				HX_STACK_LINE(925)
				y2 = ((-(x1) * ssx) + (y1 * csy));
				HX_STACK_LINE(927)
				hx::MultEq(a,facingMult);
			}
			HX_STACK_LINE(930)
			currDrawData[(currIndex)++] = (this->_point->x - x2);
			HX_STACK_LINE(931)
			currDrawData[(currIndex)++] = (this->_point->y - y2);
			HX_STACK_LINE(933)
			currDrawData[(currIndex)++] = this->_flxFrame->tileID;
			HX_STACK_LINE(935)
			currDrawData[(currIndex)++] = a;
			HX_STACK_LINE(936)
			currDrawData[(currIndex)++] = -(c);
			HX_STACK_LINE(937)
			currDrawData[(currIndex)++] = b;
			HX_STACK_LINE(938)
			currDrawData[(currIndex)++] = d;
			HX_STACK_LINE(941)
			if ((isColored)){
				HX_STACK_LINE(943)
				currDrawData[(currIndex)++] = this->_red;
				HX_STACK_LINE(944)
				currDrawData[(currIndex)++] = this->_green;
				HX_STACK_LINE(945)
				currDrawData[(currIndex)++] = this->_blue;
			}
			HX_STACK_LINE(947)
			currDrawData[(currIndex)++] = this->alpha;
			HX_STACK_LINE(954)
			drawItem->position = currIndex;
			HX_STACK_LINE(956)
			(::org::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
		}
	}
return null();
}


bool FlxSprite_obj::isColored( ){
	HX_STACK_PUSH("FlxSprite::isColored","org/flixel/FlxSprite.hx",763);
	HX_STACK_THIS(this);
	HX_STACK_LINE(763)
	return (this->_color < (int)16777215);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,isColored,return )

Void FlxSprite_obj::update( ){
{
		HX_STACK_PUSH("FlxSprite::update","org/flixel/FlxSprite.hx",754);
		HX_STACK_THIS(this);
		HX_STACK_LINE(755)
		this->super::update();
		HX_STACK_LINE(756)
		this->updateAnimation();
	}
return null();
}


Void FlxSprite_obj::resetHelpers( ){
{
		HX_STACK_PUSH("FlxSprite::resetHelpers","org/flixel/FlxSprite.hx",698);
		HX_STACK_THIS(this);
		HX_STACK_LINE(699)
		this->resetSize();
		HX_STACK_LINE(700)
		this->_flashRect2->x = (int)0;
		HX_STACK_LINE(701)
		this->_flashRect2->y = (int)0;
		HX_STACK_LINE(702)
		this->_flashRect2->width = this->_pixels->get_width();
		HX_STACK_LINE(703)
		this->_flashRect2->height = this->_pixels->get_height();
		HX_STACK_LINE(704)
		this->setOriginToCenter();
		HX_STACK_LINE(715)
		if (((this->_textureData == null()))){
			HX_STACK_LINE(720)
			this->frames = ::Std_obj::_int((Float(((Float(this->_flashRect2->width) / Float(((this->_flashRect->width + (int)1)))) * this->_flashRect2->height)) / Float(((this->_flashRect->height + (int)1)))));
			HX_STACK_LINE(721)
			if (((this->frames == (int)0))){
				HX_STACK_LINE(721)
				this->frames = (int)1;
			}
		}
		else{
			HX_STACK_LINE(725)
			this->frames = this->_framesData->frames->length;
		}
		HX_STACK_LINE(733)
		if (((this->_flipped > (int)0))){
			HX_STACK_LINE(734)
			hx::MultEq(this->frames,(int)2);
		}
		HX_STACK_LINE(741)
		this->_curIndex = (int)0;
		HX_STACK_LINE(743)
		if (((this->_framesData != null()))){
			HX_STACK_LINE(744)
			this->_flxFrame = this->_framesData->frames->__get(this->_curIndex).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >();
		}
		HX_STACK_LINE(748)
		this->_halfWidth = (this->frameWidth * 0.5);
		HX_STACK_LINE(749)
		this->_halfHeight = (this->frameHeight * 0.5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

Void FlxSprite_obj::setOriginToCenter( ){
{
		HX_STACK_PUSH("FlxSprite::setOriginToCenter","org/flixel/FlxSprite.hx",690);
		HX_STACK_THIS(this);
		HX_STACK_LINE(691)
		::org::flixel::util::FlxPoint _this = this->origin;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(691)
		_this->x = (this->frameWidth * 0.5);
		HX_STACK_LINE(691)
		_this->y = (this->frameHeight * 0.5);
		HX_STACK_LINE(691)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,setOriginToCenter,(void))

Void FlxSprite_obj::resetSizeFromFrame( ){
{
		HX_STACK_PUSH("FlxSprite::resetSizeFromFrame","org/flixel/FlxSprite.hx",684);
		HX_STACK_THIS(this);
		HX_STACK_LINE(685)
		this->set_width(this->frameWidth);
		HX_STACK_LINE(686)
		this->set_height(this->frameHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSizeFromFrame,(void))

Void FlxSprite_obj::resetFrameSize( ){
{
		HX_STACK_PUSH("FlxSprite::resetFrameSize","org/flixel/FlxSprite.hx",674);
		HX_STACK_THIS(this);
		HX_STACK_LINE(675)
		this->frameWidth = ::Std_obj::_int(this->_flxFrame->sourceSize->x);
		HX_STACK_LINE(676)
		this->frameHeight = ::Std_obj::_int(this->_flxFrame->sourceSize->y);
		HX_STACK_LINE(677)
		this->resetSize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameSize,(void))

Void FlxSprite_obj::resetSize( ){
{
		HX_STACK_PUSH("FlxSprite::resetSize","org/flixel/FlxSprite.hx",663);
		HX_STACK_THIS(this);
		HX_STACK_LINE(664)
		this->_flashRect->x = (int)0;
		HX_STACK_LINE(665)
		this->_flashRect->y = (int)0;
		HX_STACK_LINE(666)
		this->_flashRect->width = this->frameWidth;
		HX_STACK_LINE(667)
		this->_flashRect->height = this->frameHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSize,(void))

::org::flixel::FlxSprite FlxSprite_obj::loadRotatedImageFromTexture( ::org::flixel::plugin::texturepacker::TexturePackerData Data,::String Image,hx::Null< int >  __o_Rotations,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer){
int Rotations = __o_Rotations.Default(16);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_PUSH("FlxSprite::loadRotatedImageFromTexture","org/flixel/FlxSprite.hx",645);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(Image,"Image");
	HX_STACK_ARG(Rotations,"Rotations");
	HX_STACK_ARG(AntiAliasing,"AntiAliasing");
	HX_STACK_ARG(AutoBuffer,"AutoBuffer");
{
		HX_STACK_LINE(646)
		this->loadImageFromTexture(Data,null(),null(),null());
		HX_STACK_LINE(647)
		this->set_frameName(Image);
		HX_STACK_LINE(650)
		this->set_antialiasing(AntiAliasing);
		HX_STACK_LINE(656)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,loadRotatedImageFromTexture,return )

::org::flixel::FlxSprite FlxSprite_obj::loadImageFromTexture( ::org::flixel::plugin::texturepacker::TexturePackerData Data,hx::Null< bool >  __o_Reverse,hx::Null< bool >  __o_Unique,::String FrameName){
bool Reverse = __o_Reverse.Default(false);
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxSprite::loadImageFromTexture","org/flixel/FlxSprite.hx",606);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(Reverse,"Reverse");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(FrameName,"FrameName");
{
		HX_STACK_LINE(607)
		this->bakedRotation = (int)0;
		HX_STACK_LINE(608)
		this->_textureData = Data;
		HX_STACK_LINE(610)
		this->_pixels = ::org::flixel::FlxG_obj::addBitmap(Data->assetName,false,Unique,null(),null(),null(),null(),null());
		HX_STACK_LINE(611)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(613)
		if ((Reverse)){
			HX_STACK_LINE(614)
			this->_flipped = (int(this->_pixels->get_width()) >> int((int)1));
		}
		else{
			HX_STACK_LINE(618)
			this->_flipped = (int)0;
		}
		HX_STACK_LINE(622)
		this->updateAtlasInfo(null());
		HX_STACK_LINE(623)
		this->resetHelpers();
		HX_STACK_LINE(625)
		if (((FrameName != null()))){
			HX_STACK_LINE(626)
			this->set_frameName(FrameName);
		}
		HX_STACK_LINE(630)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,loadImageFromTexture,return )

::org::flixel::FlxSprite FlxSprite_obj::makeGraphic( int Width,int Height,hx::Null< int >  __o_Color,hx::Null< bool >  __o_Unique,::String Key){
int Color = __o_Color.Default(-1);
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxSprite::makeGraphic","org/flixel/FlxSprite.hx",581);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(582)
		this->bakedRotation = (int)0;
		HX_STACK_LINE(583)
		this->_pixels = ::org::flixel::FlxG_obj::createBitmap(Width,Height,Color,Unique,Key);
		HX_STACK_LINE(585)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(589)
		this->set_width(this->frameWidth = this->_pixels->get_width());
		HX_STACK_LINE(590)
		this->set_height(this->frameHeight = this->_pixels->get_height());
		HX_STACK_LINE(591)
		this->resetHelpers();
		HX_STACK_LINE(592)
		this->updateAtlasInfo(null());
		HX_STACK_LINE(593)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

::org::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer,::String Key){
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_PUSH("FlxSprite::loadRotatedGraphic","org/flixel/FlxSprite.hx",443);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Rotations,"Rotations");
	HX_STACK_ARG(Frame,"Frame");
	HX_STACK_ARG(AntiAliasing,"AntiAliasing");
	HX_STACK_ARG(AutoBuffer,"AutoBuffer");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(445)
		int rows = ::Std_obj::_int(::Math_obj::sqrt(Rotations));		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(446)
		::flash::display::BitmapData brush = ::org::flixel::FlxG_obj::addBitmap(Graphic,false,false,Key,null(),null(),null(),null());		HX_STACK_VAR(brush,"brush");
		HX_STACK_LINE(447)
		if (((Frame >= (int)0))){
			HX_STACK_LINE(450)
			::flash::display::BitmapData full = brush;		HX_STACK_VAR(full,"full");
			HX_STACK_LINE(451)
			brush = ::flash::display::BitmapData_obj::__new(full->get_height(),full->get_height(),null(),null(),null());
			HX_STACK_LINE(452)
			int rx = (Frame * brush->get_width());		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(453)
			int ry = (int)0;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(454)
			int fw = full->get_width();		HX_STACK_VAR(fw,"fw");
			HX_STACK_LINE(455)
			if (((rx >= fw))){
				HX_STACK_LINE(457)
				ry = (::Std_obj::_int((Float(rx) / Float(fw))) * brush->get_height());
				HX_STACK_LINE(458)
				hx::ModEq(rx,fw);
			}
			HX_STACK_LINE(460)
			this->_flashRect->x = rx;
			HX_STACK_LINE(461)
			this->_flashRect->y = ry;
			HX_STACK_LINE(462)
			this->_flashRect->width = brush->get_width();
			HX_STACK_LINE(463)
			this->_flashRect->height = brush->get_height();
			HX_STACK_LINE(464)
			brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
		}
		HX_STACK_LINE(467)
		int max = brush->get_width();		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(468)
		if (((brush->get_height() > max))){
			HX_STACK_LINE(469)
			max = brush->get_height();
		}
		HX_STACK_LINE(473)
		if ((AutoBuffer)){
			HX_STACK_LINE(474)
			max = ::Std_obj::_int((max * 1.5));
		}
		HX_STACK_LINE(478)
		int columns = ::Math_obj::ceil((Float(Rotations) / Float(rows)));		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(479)
		this->set_width((max * columns));
		HX_STACK_LINE(480)
		this->set_height((max * rows));
		HX_STACK_LINE(481)
		::String key = HX_CSTRING("");		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(482)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(483)
			key = Graphic;
		}
		else{
			HX_STACK_LINE(486)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(487)
				key = ::Type_obj::getClassName(Graphic);
			}
			else{
				HX_STACK_LINE(490)
				if (((bool(::Std_obj::is(Graphic,hx::ClassOf< ::flash::display::BitmapData >())) && bool((Key != null()))))){
					HX_STACK_LINE(491)
					key = Key;
				}
				else{
					HX_STACK_LINE(495)
					return null();
				}
			}
		}
		HX_STACK_LINE(501)
		hx::AddEq(key,(((((((HX_CSTRING(":") + Frame) + HX_CSTRING(":")) + this->width) + HX_CSTRING("x")) + this->height) + HX_CSTRING(":")) + Rotations));
		HX_STACK_LINE(503)
		bool skipGen = ::org::flixel::FlxG_obj::checkBitmapCache(key);		HX_STACK_VAR(skipGen,"skipGen");
		HX_STACK_LINE(508)
		this->_pixels = ::org::flixel::FlxG_obj::createBitmap((::Std_obj::_int(this->width) + columns),(::Std_obj::_int(this->height) + rows),(int)0,true,key);
		HX_STACK_LINE(512)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(515)
		this->set_width(this->frameWidth = this->_pixels->get_width());
		HX_STACK_LINE(516)
		this->set_height(this->frameHeight = this->_pixels->get_height());
		HX_STACK_LINE(517)
		this->bakedRotation = (Float((int)360) / Float(Rotations));
		HX_STACK_LINE(520)
		if ((!(skipGen))){
			HX_STACK_LINE(522)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(523)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(524)
			Float bakedAngle = (int)0;		HX_STACK_VAR(bakedAngle,"bakedAngle");
			HX_STACK_LINE(525)
			int halfBrushWidth = ::Std_obj::_int((brush->get_width() * 0.5));		HX_STACK_VAR(halfBrushWidth,"halfBrushWidth");
			HX_STACK_LINE(526)
			int halfBrushHeight = ::Std_obj::_int((brush->get_height() * 0.5));		HX_STACK_VAR(halfBrushHeight,"halfBrushHeight");
			HX_STACK_LINE(527)
			int midpointX = ::Std_obj::_int((max * 0.5));		HX_STACK_VAR(midpointX,"midpointX");
			HX_STACK_LINE(528)
			int midpointY = ::Std_obj::_int((max * 0.5));		HX_STACK_VAR(midpointY,"midpointY");
			HX_STACK_LINE(529)
			while(((row < rows))){
				HX_STACK_LINE(531)
				column = (int)0;
				HX_STACK_LINE(532)
				while(((column < columns))){
					HX_STACK_LINE(534)
					this->_matrix->identity();
					HX_STACK_LINE(535)
					this->_matrix->translate(-(halfBrushWidth),-(halfBrushHeight));
					HX_STACK_LINE(536)
					this->_matrix->rotate((bakedAngle * ::org::flixel::util::FlxAngle_obj::RAD));
					HX_STACK_LINE(540)
					this->_matrix->translate((((max * column) + midpointX) + column),(midpointY + row));
					HX_STACK_LINE(542)
					hx::AddEq(bakedAngle,this->bakedRotation);
					HX_STACK_LINE(543)
					this->_pixels->draw(brush,this->_matrix,null(),null(),null(),AntiAliasing);
					HX_STACK_LINE(544)
					(column)++;
				}
				HX_STACK_LINE(546)
				hx::AddEq(midpointY,max);
				HX_STACK_LINE(547)
				(row)++;
			}
		}
		HX_STACK_LINE(550)
		this->frameWidth = this->frameHeight = max;
		HX_STACK_LINE(551)
		this->set_width(this->set_height(max));
		HX_STACK_LINE(552)
		this->resetHelpers();
		HX_STACK_LINE(553)
		if ((AutoBuffer)){
			HX_STACK_LINE(555)
			this->set_width(brush->get_width());
			HX_STACK_LINE(556)
			this->set_height(brush->get_height());
			HX_STACK_LINE(557)
			this->centerOffsets(null());
		}
		HX_STACK_LINE(561)
		this->set_antialiasing(AntiAliasing);
		HX_STACK_LINE(566)
		this->updateAtlasInfo(null());
		HX_STACK_LINE(568)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

::org::flixel::FlxSprite FlxSprite_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< bool >  __o_Reverse,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
bool Reverse = __o_Reverse.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxSprite::loadGraphic","org/flixel/FlxSprite.hx",365);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Animated,"Animated");
	HX_STACK_ARG(Reverse,"Reverse");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(366)
		this->bakedRotation = (int)0;
		HX_STACK_LINE(368)
		this->_pixels = ::org::flixel::FlxG_obj::addBitmap(Graphic,false,Unique,Key,null(),null(),null(),null());
		HX_STACK_LINE(369)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(374)
		if ((Reverse)){
			HX_STACK_LINE(375)
			this->_flipped = (int(this->_pixels->get_width()) >> int((int)1));
		}
		else{
			HX_STACK_LINE(379)
			this->_flipped = (int)0;
		}
		HX_STACK_LINE(382)
		if (((Width == (int)0))){
			HX_STACK_LINE(383)
			if ((Animated)){
				HX_STACK_LINE(385)
				Width = this->_pixels->get_height();
			}
			else{
				HX_STACK_LINE(388)
				if (((this->_flipped > (int)0))){
					HX_STACK_LINE(389)
					Width = this->_pixels->get_width();
				}
				else{
					HX_STACK_LINE(397)
					Width = this->_pixels->get_width();
				}
			}
		}
		HX_STACK_LINE(401)
		this->set_width(this->frameWidth = Width);
		HX_STACK_LINE(402)
		if (((Height == (int)0))){
			HX_STACK_LINE(403)
			if ((Animated)){
				HX_STACK_LINE(405)
				Height = ::Std_obj::_int(this->width);
			}
			else{
				HX_STACK_LINE(409)
				Height = this->_pixels->get_height();
			}
		}
		HX_STACK_LINE(415)
		if (((bool((Key != null())) && bool(((bool((Width != (int)0)) || bool((Height != (int)0)))))))){
			HX_STACK_LINE(416)
			hx::AddEq(Key,(((HX_CSTRING("FrameSize:") + Width) + HX_CSTRING("_")) + Height));
		}
		HX_STACK_LINE(419)
		this->_pixels = ::org::flixel::FlxG_obj::addBitmap(Graphic,false,Unique,Key,Width,Height,null(),null());
		HX_STACK_LINE(420)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(425)
		this->set_height(this->frameHeight = Height);
		HX_STACK_LINE(426)
		this->resetHelpers();
		HX_STACK_LINE(427)
		this->updateAtlasInfo(null());
		HX_STACK_LINE(428)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxSprite_obj,loadGraphic,return )

::org::flixel::FlxSprite FlxSprite_obj::loadFromSprite( ::org::flixel::FlxSprite Sprite){
	HX_STACK_PUSH("FlxSprite::loadFromSprite","org/flixel/FlxSprite.hx",326);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_LINE(327)
	this->nullTextureData();
	HX_STACK_LINE(329)
	this->_pixels = Sprite->get_pixels();
	HX_STACK_LINE(330)
	this->_flipped = Sprite->get_flipped();
	HX_STACK_LINE(331)
	this->bakedRotation = Sprite->bakedRotation;
	HX_STACK_LINE(332)
	this->_bitmapDataKey = Sprite->get_bitmapDataKey();
	HX_STACK_LINE(333)
	this->_textureData = Sprite->_textureData;
	HX_STACK_LINE(335)
	this->set_width(this->frameWidth = Sprite->frameWidth);
	HX_STACK_LINE(336)
	this->set_height(this->frameHeight = Sprite->frameHeight);
	HX_STACK_LINE(337)
	if (((this->bakedRotation > (int)0))){
		HX_STACK_LINE(339)
		this->set_width(Sprite->width);
		HX_STACK_LINE(340)
		this->set_height(Sprite->height);
		HX_STACK_LINE(341)
		this->centerOffsets(null());
	}
	HX_STACK_LINE(344)
	this->set_atlas(Sprite->get_atlas());
	HX_STACK_LINE(345)
	this->resetHelpers();
	HX_STACK_LINE(346)
	this->set_antialiasing(Sprite->antialiasing);
	HX_STACK_LINE(347)
	this->set_frame(Sprite->get_frame());
	HX_STACK_LINE(349)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,loadFromSprite,return )

Void FlxSprite_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSprite::destroy","org/flixel/FlxSprite.hx",278);
		HX_STACK_THIS(this);
		HX_STACK_LINE(279)
		if (((this->_animations != null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ::org::flixel::FlxSprite_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",281);
					{
						HX_STACK_LINE(281)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_animations);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_3_1","org/flixel/FlxSprite.hx",281);
							{
								HX_STACK_LINE(281)
								return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(281)
						return  Dynamic(new _Function_3_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(281)
			for(::cpp::FastIterator_obj< ::org::flixel::system::FlxAnim > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::FlxAnim >((_Function_2_1::Block(this))());  __it->hasNext(); ){
				::org::flixel::system::FlxAnim anim = __it->next();
				if (((anim != null()))){
					HX_STACK_LINE(284)
					anim->destroy();
				}
;
			}
			HX_STACK_LINE(288)
			this->_animations = null();
		}
		HX_STACK_LINE(291)
		this->_flashPoint = null();
		HX_STACK_LINE(292)
		this->_flashRect = null();
		HX_STACK_LINE(293)
		this->_flashRect2 = null();
		HX_STACK_LINE(294)
		this->_flashPointZero = null();
		HX_STACK_LINE(295)
		this->offset = null();
		HX_STACK_LINE(296)
		this->origin = null();
		HX_STACK_LINE(297)
		this->scale = null();
		HX_STACK_LINE(298)
		this->_curAnim = null();
		HX_STACK_LINE(299)
		this->_matrix = null();
		HX_STACK_LINE(300)
		this->_callback = null();
		HX_STACK_LINE(301)
		this->_colorTransform = null();
		HX_STACK_LINE(302)
		if (((this->framePixels != null()))){
			HX_STACK_LINE(303)
			this->framePixels->dispose();
		}
		HX_STACK_LINE(306)
		this->framePixels = null();
		HX_STACK_LINE(310)
		this->_blend = null();
		HX_STACK_LINE(313)
		this->_textureData = null();
		HX_STACK_LINE(314)
		this->_flxFrame = null();
		HX_STACK_LINE(316)
		this->super::destroy();
	}
return null();
}


int FlxSprite_obj::get_flipped( ){
	HX_STACK_PUSH("FlxSprite::get_flipped","org/flixel/FlxSprite.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_LINE(52)
	return this->_flipped;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_flipped,return )

int FlxSprite_obj::prefixLength;

int FlxSprite_obj::postfixLength;

int FlxSprite_obj::frameSortFunction( ::org::flixel::system::layer::frames::FlxFrame frame1,::org::flixel::system::layer::frames::FlxFrame frame2){
	HX_STACK_PUSH("FlxSprite::frameSortFunction","org/flixel/FlxSprite.hx",2231);
	HX_STACK_ARG(frame1,"frame1");
	HX_STACK_ARG(frame2,"frame2");
	HX_STACK_LINE(2232)
	::String name1 = frame1->name;		HX_STACK_VAR(name1,"name1");
	HX_STACK_LINE(2233)
	::String name2 = frame2->name;		HX_STACK_VAR(name2,"name2");
	HX_STACK_LINE(2235)
	int num1 = ::Std_obj::parseInt(name1.substring(::org::flixel::FlxSprite_obj::prefixLength,(name1.length - ::org::flixel::FlxSprite_obj::postfixLength)));		HX_STACK_VAR(num1,"num1");
	HX_STACK_LINE(2236)
	int num2 = ::Std_obj::parseInt(name2.substring(::org::flixel::FlxSprite_obj::prefixLength,(name2.length - ::org::flixel::FlxSprite_obj::postfixLength)));		HX_STACK_VAR(num2,"num2");
	HX_STACK_LINE(2238)
	if (((num1 > num2))){
		HX_STACK_LINE(2239)
		return (int)1;
	}
	else{
		HX_STACK_LINE(2242)
		if (((num2 > num1))){
			HX_STACK_LINE(2243)
			return (int)-1;
		}
	}
	HX_STACK_LINE(2247)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,frameSortFunction,return )


FlxSprite_obj::FlxSprite_obj()
{
}

void FlxSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSprite);
	HX_MARK_MEMBER_NAME(simpleRender,"simpleRender");
	HX_MARK_MEMBER_NAME(bakedRotation,"bakedRotation");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_MARK_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_flxFrame,"_flxFrame");
	HX_MARK_MEMBER_NAME(_pixelsBackup,"_pixelsBackup");
	HX_MARK_MEMBER_NAME(filters,"filters");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_useColorTransform,"_useColorTransform");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_MARK_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_pixels,"_pixels");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	HX_MARK_MEMBER_NAME(_frameTimer,"_frameTimer");
	HX_MARK_MEMBER_NAME(_curIndex,"_curIndex");
	HX_MARK_MEMBER_NAME(_curFrame,"_curFrame");
	HX_MARK_MEMBER_NAME(_curAnim,"_curAnim");
	HX_MARK_MEMBER_NAME(_animations,"_animations");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(framePixels,"framePixels");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_blendInt,"_blendInt");
	HX_MARK_MEMBER_NAME(_blend,"_blend");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(_flipped,"_flipped");
	HX_MARK_MEMBER_NAME(flipped,"flipped");
	HX_MARK_MEMBER_NAME(facing,"facing");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(simpleRender,"simpleRender");
	HX_VISIT_MEMBER_NAME(bakedRotation,"bakedRotation");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_VISIT_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_flxFrame,"_flxFrame");
	HX_VISIT_MEMBER_NAME(_pixelsBackup,"_pixelsBackup");
	HX_VISIT_MEMBER_NAME(filters,"filters");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_useColorTransform,"_useColorTransform");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_VISIT_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_pixels,"_pixels");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
	HX_VISIT_MEMBER_NAME(_frameTimer,"_frameTimer");
	HX_VISIT_MEMBER_NAME(_curIndex,"_curIndex");
	HX_VISIT_MEMBER_NAME(_curFrame,"_curFrame");
	HX_VISIT_MEMBER_NAME(_curAnim,"_curAnim");
	HX_VISIT_MEMBER_NAME(_animations,"_animations");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(framePixels,"framePixels");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_blendInt,"_blendInt");
	HX_VISIT_MEMBER_NAME(_blend,"_blend");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(_flipped,"_flipped");
	HX_VISIT_MEMBER_NAME(flipped,"flipped");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return get_blend(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"frame") ) { return get_frame(); }
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return get_pixels(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"_blend") ) { return _blend; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"facing") ) { return facing; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"filters") ) { return filters; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_pixels") ) { return _pixels; }
		if (HX_FIELD_EQ(inName,"curAnim") ) { return get_curAnim(); }
		if (HX_FIELD_EQ(inName,"flipped") ) { return inCallProp ? get_flipped() : flipped; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onScreen") ) { return onScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { return _curAnim; }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"_flipped") ) { return _flipped; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blend") ) { return get_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"addFilter") ) { return addFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"frameName") ) { return get_frameName(); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frame") ) { return get_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"isColored") ) { return isColored_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSize") ) { return resetSize_dyn(); }
		if (HX_FIELD_EQ(inName,"_flxFrame") ) { return _flxFrame; }
		if (HX_FIELD_EQ(inName,"_callback") ) { return _callback; }
		if (HX_FIELD_EQ(inName,"_curIndex") ) { return _curIndex; }
		if (HX_FIELD_EQ(inName,"_curFrame") ) { return _curFrame; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { return _blendInt; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_facing") ) { return set_facing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { return _halfWidth; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return frameWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setClipping") ) { return setClipping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_curAnim") ) { return set_curAnim_dyn(); }
		if (HX_FIELD_EQ(inName,"get_curAnim") ) { return get_curAnim_dyn(); }
		if (HX_FIELD_EQ(inName,"randomFrame") ) { return randomFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoAndStop") ) { return gotoAndStop_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoAndPlay") ) { return gotoAndPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return makeGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { return _halfHeight; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { return _flashRect2; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { return _frameTimer; }
		if (HX_FIELD_EQ(inName,"_animations") ) { return _animations; }
		if (HX_FIELD_EQ(inName,"framePixels") ) { return framePixels; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return frameHeight; }
		if (HX_FIELD_EQ(inName,"get_flipped") ) { return get_flipped_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"prefixLength") ) { return prefixLength; }
		if (HX_FIELD_EQ(inName,"simpleRender") ) { return inCallProp ? get_simpleRender() : simpleRender; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"removeFilter") ) { return removeFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return replaceColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"postfixLength") ) { return postfixLength; }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"bakedRotation") ) { return bakedRotation; }
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return getFrameIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameName") ) { return set_frameName_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameName") ) { return get_frameName_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOffsets") ) { return centerOffsets_dyn(); }
		if (HX_FIELD_EQ(inName,"_pixelsBackup") ) { return _pixelsBackup; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onScreenSprite") ) { return onScreenSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"pauseAnimation") ) { return pauseAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"resetFrameSize") ) { return resetFrameSize_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFromSprite") ) { return loadFromSprite_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nullTextureData") ) { return nullTextureData_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"resumeAnimation") ) { return resumeAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return updateAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { return _flashPointZero; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_simpleRender") ) { return get_simpleRender_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAllFilters") ) { return removeAllFilters_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"frameSortFunction") ) { return frameSortFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"setOriginToCorner") ) { return setOriginToCorner_dyn(); }
		if (HX_FIELD_EQ(inName,"setOriginToCenter") ) { return setOriginToCenter_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"simpleRenderSprite") ) { return simpleRenderSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return pixelsOverlapPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSizeFromFrame") ) { return resetSizeFromFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return loadRotatedGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"_useColorTransform") ) { return _useColorTransform; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addAnimationCallback") ) { return addAnimationCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImageFromTexture") ) { return loadImageFromTexture_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"resetFrameBitmapDatas") ) { return resetFrameBitmapDatas_dyn(); }
		if (HX_FIELD_EQ(inName,"getFlxFrameBitmapData") ) { return getFlxFrameBitmapData_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"loadRotatedImageFromTexture") ) { return loadRotatedImageFromTexture_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"addAnimationByNamesFromTexture") ) { return addAnimationByNamesFromTexture_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"addAnimationByPrefixFromTexture") ) { return addAnimationByPrefixFromTexture_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"addAnimationByIndiciesFromTexture") ) { return addAnimationByIndiciesFromTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return set_blend(inValue); }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { return set_frame(inValue); }
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return set_pixels(inValue); }
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blend") ) { _blend=inValue.Cast< ::flash::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp) return set_facing(inValue);facing=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pixels") ) { _pixels=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curAnim") ) { return set_curAnim(inValue); }
		if (HX_FIELD_EQ(inName,"flipped") ) { flipped=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_curAnim") ) { _curAnim=inValue.Cast< ::org::flixel::system::FlxAnim >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flipped") ) { _flipped=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameName") ) { return set_frameName(inValue); }
		if (HX_FIELD_EQ(inName,"_flxFrame") ) { _flxFrame=inValue.Cast< ::org::flixel::system::layer::frames::FlxFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_callback") ) { _callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curIndex") ) { _curIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curFrame") ) { _curFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { _blendInt=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { _halfWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { _halfHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { _flashRect2=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { _frameTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animations") ) { _animations=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framePixels") ) { framePixels=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"prefixLength") ) { prefixLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"simpleRender") ) { simpleRender=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"postfixLength") ) { postfixLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bakedRotation") ) { bakedRotation=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pixelsBackup") ) { _pixelsBackup=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { _flashPointZero=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_useColorTransform") ) { _useColorTransform=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("simpleRender"));
	outFields->push(HX_CSTRING("bakedRotation"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("frameName"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("_halfHeight"));
	outFields->push(HX_CSTRING("_halfWidth"));
	outFields->push(HX_CSTRING("_blue"));
	outFields->push(HX_CSTRING("_green"));
	outFields->push(HX_CSTRING("_red"));
	outFields->push(HX_CSTRING("_flxFrame"));
	outFields->push(HX_CSTRING("_pixelsBackup"));
	outFields->push(HX_CSTRING("filters"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_useColorTransform"));
	outFields->push(HX_CSTRING("_colorTransform"));
	outFields->push(HX_CSTRING("_flashPointZero"));
	outFields->push(HX_CSTRING("_flashRect2"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_pixels"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_frameTimer"));
	outFields->push(HX_CSTRING("_curIndex"));
	outFields->push(HX_CSTRING("_curFrame"));
	outFields->push(HX_CSTRING("_curAnim"));
	outFields->push(HX_CSTRING("_animations"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("framePixels"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("frameHeight"));
	outFields->push(HX_CSTRING("frameWidth"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("_blendInt"));
	outFields->push(HX_CSTRING("_blend"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("curAnim"));
	outFields->push(HX_CSTRING("_flipped"));
	outFields->push(HX_CSTRING("flipped"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("facing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("prefixLength"),
	HX_CSTRING("postfixLength"),
	HX_CSTRING("frameSortFunction"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("resetFrameBitmapDatas"),
	HX_CSTRING("nullTextureData"),
	HX_CSTRING("getFlxFrameBitmapData"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("set_blend"),
	HX_CSTRING("get_blend"),
	HX_CSTRING("simpleRenderSprite"),
	HX_CSTRING("get_simpleRender"),
	HX_CSTRING("simpleRender"),
	HX_CSTRING("bakedRotation"),
	HX_CSTRING("set_antialiasing"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("removeAllFilters"),
	HX_CSTRING("removeFilter"),
	HX_CSTRING("setClipping"),
	HX_CSTRING("addFilter"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("pixelsOverlapPoint"),
	HX_CSTRING("onScreenSprite"),
	HX_CSTRING("onScreen"),
	HX_CSTRING("set_curAnim"),
	HX_CSTRING("get_curAnim"),
	HX_CSTRING("getFrameIndex"),
	HX_CSTRING("set_frameName"),
	HX_CSTRING("get_frameName"),
	HX_CSTRING("set_frame"),
	HX_CSTRING("get_frame"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("alpha"),
	HX_CSTRING("set_facing"),
	HX_CSTRING("set_pixels"),
	HX_CSTRING("get_pixels"),
	HX_CSTRING("replaceColor"),
	HX_CSTRING("centerOffsets"),
	HX_CSTRING("setOriginToCorner"),
	HX_CSTRING("randomFrame"),
	HX_CSTRING("getAnimation"),
	HX_CSTRING("resumeAnimation"),
	HX_CSTRING("pauseAnimation"),
	HX_CSTRING("gotoAndStop"),
	HX_CSTRING("gotoAndPlay"),
	HX_CSTRING("play"),
	HX_CSTRING("addAnimationCallback"),
	HX_CSTRING("addAnimationByPrefixFromTexture"),
	HX_CSTRING("addAnimationByIndiciesFromTexture"),
	HX_CSTRING("addAnimationByNamesFromTexture"),
	HX_CSTRING("addAnimation"),
	HX_CSTRING("drawFrame"),
	HX_CSTRING("updateAnimation"),
	HX_CSTRING("fill"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("stamp"),
	HX_CSTRING("draw"),
	HX_CSTRING("isColored"),
	HX_CSTRING("update"),
	HX_CSTRING("resetHelpers"),
	HX_CSTRING("setOriginToCenter"),
	HX_CSTRING("resetSizeFromFrame"),
	HX_CSTRING("resetFrameSize"),
	HX_CSTRING("resetSize"),
	HX_CSTRING("loadRotatedImageFromTexture"),
	HX_CSTRING("loadImageFromTexture"),
	HX_CSTRING("makeGraphic"),
	HX_CSTRING("loadRotatedGraphic"),
	HX_CSTRING("loadGraphic"),
	HX_CSTRING("loadFromSprite"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_halfHeight"),
	HX_CSTRING("_halfWidth"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_green"),
	HX_CSTRING("_red"),
	HX_CSTRING("_flxFrame"),
	HX_CSTRING("_pixelsBackup"),
	HX_CSTRING("filters"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_useColorTransform"),
	HX_CSTRING("_colorTransform"),
	HX_CSTRING("_flashPointZero"),
	HX_CSTRING("_flashRect2"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_pixels"),
	HX_CSTRING("_color"),
	HX_CSTRING("_callback"),
	HX_CSTRING("_frameTimer"),
	HX_CSTRING("_curIndex"),
	HX_CSTRING("_curFrame"),
	HX_CSTRING("_curAnim"),
	HX_CSTRING("_animations"),
	HX_CSTRING("dirty"),
	HX_CSTRING("framePixels"),
	HX_CSTRING("frames"),
	HX_CSTRING("frameHeight"),
	HX_CSTRING("frameWidth"),
	HX_CSTRING("paused"),
	HX_CSTRING("finished"),
	HX_CSTRING("_blendInt"),
	HX_CSTRING("_blend"),
	HX_CSTRING("scale"),
	HX_CSTRING("offset"),
	HX_CSTRING("origin"),
	HX_CSTRING("get_flipped"),
	HX_CSTRING("_flipped"),
	HX_CSTRING("flipped"),
	HX_CSTRING("facing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxSprite_obj::prefixLength,"prefixLength");
	HX_MARK_MEMBER_NAME(FlxSprite_obj::postfixLength,"postfixLength");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSprite_obj::prefixLength,"prefixLength");
	HX_VISIT_MEMBER_NAME(FlxSprite_obj::postfixLength,"postfixLength");
};

Class FlxSprite_obj::__mClass;

void FlxSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxSprite"), hx::TCanCast< FlxSprite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSprite_obj::__boot()
{
	prefixLength= (int)0;
	postfixLength= (int)0;
}

} // end namespace org
} // end namespace flixel
