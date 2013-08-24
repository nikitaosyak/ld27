#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_texturepacker_Frame
#include <org/flixel/plugin/texturepacker/Frame.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_texturepacker_TexturePackerData
#include <org/flixel/plugin/texturepacker/TexturePackerData.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#include <org/flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetExt
#include <org/flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_frames_FlxFrame
#include <org/flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_frames_FlxSpriteFrames
#include <org/flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace layer{

Void TileSheetData_obj::__construct(::org::flixel::system::layer::TileSheetExt tileSheet)
{
HX_STACK_PUSH("TileSheetData::new","org/flixel/system/layer/TileSheetData.hx",108);
{
	HX_STACK_LINE(109)
	this->tileSheet = tileSheet;
	HX_STACK_LINE(110)
	this->flxSpriteFrames = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(111)
	this->flxFrames = ::haxe::ds::StringMap_obj::__new();
}
;
	return null();
}

TileSheetData_obj::~TileSheetData_obj() { }

Dynamic TileSheetData_obj::__CreateEmpty() { return  new TileSheetData_obj; }
hx::ObjectPtr< TileSheetData_obj > TileSheetData_obj::__new(::org::flixel::system::layer::TileSheetExt tileSheet)
{  hx::ObjectPtr< TileSheetData_obj > result = new TileSheetData_obj();
	result->__construct(tileSheet);
	return result;}

Dynamic TileSheetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSheetData_obj > result = new TileSheetData_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TileSheetData_obj::destroyFrameBitmapDatas( ){
{
		HX_STACK_PUSH("TileSheetData::destroyFrameBitmapDatas","org/flixel/system/layer/TileSheetData.hx",324);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::org::flixel::system::layer::TileSheetData_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/layer/TileSheetData.hx",325);
				{
					HX_STACK_LINE(325)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->flxFrames);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","org/flixel/system/layer/TileSheetData.hx",325);
						{
							HX_STACK_LINE(325)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(325)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(324)
		for(::cpp::FastIterator_obj< ::org::flixel::system::layer::frames::FlxFrame > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::layer::frames::FlxFrame >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::org::flixel::system::layer::frames::FlxFrame frame = __it->next();
			frame->destroyBitmapDatas();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,destroyFrameBitmapDatas,(void))

::org::flixel::system::layer::frames::FlxFrame TileSheetData_obj::addTexturePackerFrame( ::org::flixel::plugin::texturepacker::Frame frameData,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
	HX_STACK_PUSH("TileSheetData::addTexturePackerFrame","org/flixel/system/layer/TileSheetData.hx",291);
	HX_STACK_THIS(this);
	HX_STACK_ARG(frameData,"frameData");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
{
		HX_STACK_LINE(292)
		::String key = frameData->name;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(293)
		if ((this->containsFrame(key))){
			HX_STACK_LINE(294)
			return this->flxFrames->get(key);
		}
		HX_STACK_LINE(298)
		::org::flixel::system::layer::frames::FlxFrame texFrame = ::org::flixel::system::layer::frames::FlxFrame_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(texFrame,"texFrame");
		HX_STACK_LINE(299)
		texFrame->trimmed = frameData->trimmed;
		HX_STACK_LINE(300)
		texFrame->rotated = frameData->rotated;
		HX_STACK_LINE(301)
		texFrame->name = key;
		struct _Function_1_1{
			inline static ::org::flixel::util::FlxPoint Block( ::org::flixel::plugin::texturepacker::Frame &frameData){
				HX_STACK_PUSH("*::closure","org/flixel/system/layer/TileSheetData.hx",302);
				{
					HX_STACK_LINE(302)
					::org::flixel::util::FlxPoint _this = ::org::flixel::util::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(_this,"_this");
					::org::flixel::util::FlxPoint point = frameData->sourceSize;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(302)
					_this->x = point->x;
					HX_STACK_LINE(302)
					_this->y = point->y;
					HX_STACK_LINE(302)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(302)
		texFrame->sourceSize = _Function_1_1::Block(frameData);
		struct _Function_1_2{
			inline static ::org::flixel::util::FlxPoint Block( ::org::flixel::plugin::texturepacker::Frame &frameData){
				HX_STACK_PUSH("*::closure","org/flixel/system/layer/TileSheetData.hx",303);
				{
					HX_STACK_LINE(303)
					::org::flixel::util::FlxPoint _this = ::org::flixel::util::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(_this,"_this");
					::org::flixel::util::FlxPoint point = frameData->offset;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(303)
					_this->x = point->x;
					HX_STACK_LINE(303)
					_this->y = point->y;
					HX_STACK_LINE(303)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(303)
		texFrame->offset = _Function_1_2::Block(frameData);
		HX_STACK_LINE(304)
		texFrame->center = ::org::flixel::util::FlxPoint_obj::__new((int)0,(int)0);
		HX_STACK_LINE(305)
		texFrame->frame = frameData->frame->clone();
		HX_STACK_LINE(307)
		if ((frameData->rotated)){
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				::org::flixel::util::FlxPoint _this = texFrame->center;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(309)
				_this->x = ((texFrame->frame->height * 0.5) + texFrame->offset->x);
				HX_STACK_LINE(309)
				_this->y = ((texFrame->frame->width * 0.5) + texFrame->offset->y);
				HX_STACK_LINE(309)
				_this;
			}
			HX_STACK_LINE(310)
			texFrame->additionalAngle = -90.0;
		}
		else{
			HX_STACK_LINE(314)
			::org::flixel::util::FlxPoint _this = texFrame->center;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(314)
			_this->x = ((texFrame->frame->width * 0.5) + texFrame->offset->x);
			HX_STACK_LINE(314)
			_this->y = ((texFrame->frame->height * 0.5) + texFrame->offset->y);
			HX_STACK_LINE(314)
			_this;
		}
		HX_STACK_LINE(317)
		texFrame->tileID = this->addTileRect(texFrame->frame,::flash::geom::Point_obj::__new((0.5 * texFrame->frame->width),(0.5 * texFrame->frame->height)));
		HX_STACK_LINE(319)
		this->flxFrames->set(key,texFrame);
		HX_STACK_LINE(320)
		return texFrame;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TileSheetData_obj,addTexturePackerFrame,return )

::org::flixel::system::layer::frames::FlxSpriteFrames TileSheetData_obj::getTexturePackerFrames( ::org::flixel::plugin::texturepacker::TexturePackerData data,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
	HX_STACK_PUSH("TileSheetData::getTexturePackerFrames","org/flixel/system/layer/TileSheetData.hx",266);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
{
		HX_STACK_LINE(268)
		if ((this->flxSpriteFrames->exists(data->assetName))){
			HX_STACK_LINE(269)
			return this->flxSpriteFrames->get(data->assetName);
		}
		HX_STACK_LINE(273)
		data->parseData();
		HX_STACK_LINE(274)
		::org::flixel::system::layer::frames::FlxSpriteFrames packerFrames = ::org::flixel::system::layer::frames::FlxSpriteFrames_obj::__new(data->assetName);		HX_STACK_VAR(packerFrames,"packerFrames");
		HX_STACK_LINE(276)
		int l = data->frames->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(277)
		{
			HX_STACK_LINE(277)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(277)
			while(((_g < l))){
				HX_STACK_LINE(277)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(279)
				::org::flixel::system::layer::frames::FlxFrame frame = this->addTexturePackerFrame(data->frames->__get(i).StaticCast< ::org::flixel::plugin::texturepacker::Frame >(),startX,startY);		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(280)
				packerFrames->addFrame(frame);
			}
		}
		HX_STACK_LINE(283)
		this->flxSpriteFrames->set(data->assetName,packerFrames);
		HX_STACK_LINE(284)
		return packerFrames;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TileSheetData_obj,getTexturePackerFrames,return )

Void TileSheetData_obj::destroy( ){
{
		HX_STACK_PUSH("TileSheetData::destroy","org/flixel/system/layer/TileSheetData.hx",240);
		HX_STACK_THIS(this);
		HX_STACK_LINE(241)
		::org::flixel::system::layer::TileSheetExt_obj::removeTileSheet(this->tileSheet);
		HX_STACK_LINE(242)
		this->tileSheet = null();
		struct _Function_1_1{
			inline static Dynamic Block( ::org::flixel::system::layer::TileSheetData_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/layer/TileSheetData.hx",244);
				{
					HX_STACK_LINE(244)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->flxSpriteFrames);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","org/flixel/system/layer/TileSheetData.hx",244);
						{
							HX_STACK_LINE(244)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(244)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(244)
		for(::cpp::FastIterator_obj< ::org::flixel::system::layer::frames::FlxSpriteFrames > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::layer::frames::FlxSpriteFrames >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::org::flixel::system::layer::frames::FlxSpriteFrames spriteData = __it->next();
			spriteData->destroy();
		}
		struct _Function_1_2{
			inline static Dynamic Block( ::org::flixel::system::layer::TileSheetData_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/layer/TileSheetData.hx",249);
				{
					HX_STACK_LINE(249)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->flxSpriteFrames);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","org/flixel/system/layer/TileSheetData.hx",249);
						{
							HX_STACK_LINE(249)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(249)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(249)
		for(::cpp::FastIterator_obj< ::org::flixel::system::layer::frames::FlxSpriteFrames > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::layer::frames::FlxSpriteFrames >((_Function_1_2::Block(this))());  __it->hasNext(); ){
			::org::flixel::system::layer::frames::FlxSpriteFrames frames = __it->next();
			frames->destroy();
		}
		HX_STACK_LINE(253)
		this->flxSpriteFrames = null();
		struct _Function_1_3{
			inline static Dynamic Block( ::org::flixel::system::layer::TileSheetData_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/layer/TileSheetData.hx",255);
				{
					HX_STACK_LINE(255)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->flxFrames);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","org/flixel/system/layer/TileSheetData.hx",255);
						{
							HX_STACK_LINE(255)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(255)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(255)
		for(::cpp::FastIterator_obj< ::org::flixel::system::layer::frames::FlxFrame > *__it = ::cpp::CreateFastIterator< ::org::flixel::system::layer::frames::FlxFrame >((_Function_1_3::Block(this))());  __it->hasNext(); ){
			::org::flixel::system::layer::frames::FlxFrame frame = __it->next();
			frame->destroy();
		}
		HX_STACK_LINE(259)
		this->flxFrames = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,destroy,(void))

int TileSheetData_obj::addTileRect( ::flash::geom::Rectangle tileRect,::flash::geom::Point point){
	HX_STACK_PUSH("TileSheetData::addTileRect","org/flixel/system/layer/TileSheetData.hx",235);
	HX_STACK_THIS(this);
	HX_STACK_ARG(tileRect,"tileRect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(235)
	return this->tileSheet->addTileRectID(tileRect,point);
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,addTileRect,return )

bool TileSheetData_obj::containsFrame( ::String key){
	HX_STACK_PUSH("TileSheetData::containsFrame","org/flixel/system/layer/TileSheetData.hx",230);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(230)
	return this->flxFrames->exists(key);
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,containsFrame,return )

::org::flixel::system::layer::frames::FlxFrame TileSheetData_obj::addSpriteSheetFrame( ::flash::geom::Rectangle rect,::flash::geom::Point point){
	HX_STACK_PUSH("TileSheetData::addSpriteSheetFrame","org/flixel/system/layer/TileSheetData.hx",205);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(206)
	::String key = this->getSpriteSheetFrameKey(rect,point);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(207)
	if ((this->containsFrame(key))){
		HX_STACK_LINE(208)
		return this->flxFrames->get(key);
	}
	HX_STACK_LINE(212)
	::org::flixel::system::layer::frames::FlxFrame frame = ::org::flixel::system::layer::frames::FlxFrame_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(214)
	frame->tileID = this->addTileRect(rect,point);
	HX_STACK_LINE(216)
	frame->name = key;
	HX_STACK_LINE(217)
	frame->frame = rect;
	HX_STACK_LINE(219)
	frame->rotated = false;
	HX_STACK_LINE(220)
	frame->trimmed = false;
	HX_STACK_LINE(221)
	frame->sourceSize = ::org::flixel::util::FlxPoint_obj::__new(rect->width,rect->height);
	HX_STACK_LINE(222)
	frame->offset = ::org::flixel::util::FlxPoint_obj::__new((int)0,(int)0);
	HX_STACK_LINE(224)
	frame->center = ::org::flixel::util::FlxPoint_obj::__new((0.5 * rect->width),(0.5 * rect->height));
	HX_STACK_LINE(225)
	this->flxFrames->set(key,frame);
	HX_STACK_LINE(226)
	return frame;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,addSpriteSheetFrame,return )

::String TileSheetData_obj::getSpriteSheetFrameKey( ::flash::geom::Rectangle rect,::flash::geom::Point point){
	HX_STACK_PUSH("TileSheetData::getSpriteSheetFrameKey","org/flixel/system/layer/TileSheetData.hx",197);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(197)
	return ((((((((((rect->x + HX_CSTRING("_")) + rect->y) + HX_CSTRING("_")) + rect->width) + HX_CSTRING("_")) + rect->height) + HX_CSTRING("_")) + point->x) + HX_CSTRING("_")) + point->y);
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,getSpriteSheetFrameKey,return )

::String TileSheetData_obj::getKeyForSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_PUSH("TileSheetData::getKeyForSpriteSheetFrames","org/flixel/system/layer/TileSheetData.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_LINE(192)
	return ((((((((((((((((((width + HX_CSTRING("_")) + height) + HX_CSTRING("_")) + startX) + HX_CSTRING("_")) + startY) + HX_CSTRING("_")) + endX) + HX_CSTRING("_")) + endY) + HX_CSTRING("_")) + xSpacing) + HX_CSTRING("_")) + ySpacing) + HX_CSTRING("_")) + pointX) + HX_CSTRING("_")) + pointY);
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,getKeyForSpriteSheetFrames,return )

bool TileSheetData_obj::containsSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_PUSH("TileSheetData::containsSpriteSheetFrames","org/flixel/system/layer/TileSheetData.hx",186);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_LINE(187)
	::String key = this->getKeyForSpriteSheetFrames(width,height,startX,startY,endX,endY,xSpacing,ySpacing,pointX,pointY);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(188)
	return this->flxSpriteFrames->exists(key);
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,containsSpriteSheetFrames,return )

::org::flixel::system::layer::frames::FlxSpriteFrames TileSheetData_obj::getSpriteSheetFrames( int width,int height,::flash::geom::Point origin,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_endX,hx::Null< int >  __o_endY,hx::Null< int >  __o_xSpacing,hx::Null< int >  __o_ySpacing){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
int endX = __o_endX.Default(0);
int endY = __o_endY.Default(0);
int xSpacing = __o_xSpacing.Default(0);
int ySpacing = __o_ySpacing.Default(0);
	HX_STACK_PUSH("TileSheetData::getSpriteSheetFrames","org/flixel/system/layer/TileSheetData.hx",126);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(origin,"origin");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
{
		HX_STACK_LINE(127)
		int bitmapWidth = this->tileSheet->get_nmeBitmap()->get_width();		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
		HX_STACK_LINE(128)
		int bitmapHeight = this->tileSheet->get_nmeBitmap()->get_height();		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
		HX_STACK_LINE(130)
		if (((endX == (int)0))){
			HX_STACK_LINE(131)
			endX = bitmapWidth;
		}
		HX_STACK_LINE(134)
		if (((endY == (int)0))){
			HX_STACK_LINE(135)
			endY = bitmapHeight;
		}
		HX_STACK_LINE(139)
		Float pointX = (0.5 * width);		HX_STACK_VAR(pointX,"pointX");
		HX_STACK_LINE(140)
		Float pointY = (0.5 * height);		HX_STACK_VAR(pointY,"pointY");
		HX_STACK_LINE(142)
		if (((origin != null()))){
			HX_STACK_LINE(144)
			pointX = origin->x;
			HX_STACK_LINE(145)
			pointY = origin->y;
		}
		HX_STACK_LINE(148)
		::String key = this->getKeyForSpriteSheetFrames(width,height,startX,startY,endX,endY,xSpacing,ySpacing,pointX,pointY);		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(149)
		if ((this->flxSpriteFrames->exists(key))){
			HX_STACK_LINE(150)
			return this->flxSpriteFrames->get(key);
		}
		HX_STACK_LINE(154)
		int numRows = ::Std_obj::_int((Float(((endY - startY))) / Float(((height + ySpacing)))));		HX_STACK_VAR(numRows,"numRows");
		HX_STACK_LINE(155)
		int numCols = ::Std_obj::_int((Float(((endX - startX))) / Float(((width + xSpacing)))));		HX_STACK_VAR(numCols,"numCols");
		HX_STACK_LINE(157)
		::flash::geom::Point tempPoint = origin;		HX_STACK_VAR(tempPoint,"tempPoint");
		HX_STACK_LINE(158)
		if (((origin == null()))){
			HX_STACK_LINE(159)
			tempPoint = ::flash::geom::Point_obj::__new(pointX,pointY);
		}
		HX_STACK_LINE(163)
		::org::flixel::system::layer::frames::FlxSpriteFrames spriteData = ::org::flixel::system::layer::frames::FlxSpriteFrames_obj::__new(key);		HX_STACK_VAR(spriteData,"spriteData");
		HX_STACK_LINE(165)
		::flash::geom::Rectangle tempRect;		HX_STACK_VAR(tempRect,"tempRect");
		HX_STACK_LINE(166)
		::org::flixel::system::layer::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(168)
		int spacedWidth = (width + xSpacing);		HX_STACK_VAR(spacedWidth,"spacedWidth");
		HX_STACK_LINE(169)
		int spacedHeight = (height + ySpacing);		HX_STACK_VAR(spacedHeight,"spacedHeight");
		HX_STACK_LINE(171)
		{
			HX_STACK_LINE(171)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = numRows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(171)
			while(((_g1 < _g))){
				HX_STACK_LINE(171)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(173)
				{
					HX_STACK_LINE(173)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = numCols;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(173)
					while(((_g3 < _g2))){
						HX_STACK_LINE(173)
						int i = (_g3)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(175)
						tempRect = ::flash::geom::Rectangle_obj::__new((startX + (i * spacedWidth)),(startY + (j * spacedHeight)),width,height);
						HX_STACK_LINE(176)
						frame = this->addSpriteSheetFrame(tempRect,tempPoint);
						HX_STACK_LINE(177)
						spriteData->addFrame(frame);
					}
				}
			}
		}
		HX_STACK_LINE(181)
		this->flxSpriteFrames->set(key,spriteData);
		HX_STACK_LINE(182)
		return spriteData;
	}
}


HX_DEFINE_DYNAMIC_FUNC9(TileSheetData_obj,getSpriteSheetFrames,return )

::org::flixel::system::layer::frames::FlxFrame TileSheetData_obj::getFrame( ::String name){
	HX_STACK_PUSH("TileSheetData::getFrame","org/flixel/system/layer/TileSheetData.hx",115);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(115)
	return this->flxFrames->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,getFrame,return )

Array< ::Dynamic > TileSheetData_obj::tileSheetData;

::org::flixel::system::layer::TileSheetData TileSheetData_obj::addTileSheet( ::flash::display::BitmapData bitmapData){
	HX_STACK_PUSH("TileSheetData::addTileSheet","org/flixel/system/layer/TileSheetData.hx",28);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(29)
	if ((::org::flixel::system::layer::TileSheetData_obj::containsTileSheet(bitmapData))){
		HX_STACK_LINE(30)
		return ::org::flixel::system::layer::TileSheetData_obj::getTileSheet(bitmapData);
	}
	HX_STACK_LINE(34)
	::org::flixel::system::layer::TileSheetExt tilesheet = ::org::flixel::system::layer::TileSheetExt_obj::addTileSheet(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
	HX_STACK_LINE(35)
	::org::flixel::system::layer::TileSheetData tempTileSheetData = ::org::flixel::system::layer::TileSheetData_obj::__new(tilesheet);		HX_STACK_VAR(tempTileSheetData,"tempTileSheetData");
	HX_STACK_LINE(36)
	::org::flixel::system::layer::TileSheetData_obj::tileSheetData->push(tempTileSheetData);
	HX_STACK_LINE(37)
	return tempTileSheetData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,addTileSheet,return )

bool TileSheetData_obj::containsTileSheet( ::flash::display::BitmapData bitmapData){
	HX_STACK_PUSH("TileSheetData::containsTileSheet","org/flixel/system/layer/TileSheetData.hx",41);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		while(((_g < _g1->length))){
			HX_STACK_LINE(42)
			::org::flixel::system::layer::TileSheetData tsd = _g1->__get(_g).StaticCast< ::org::flixel::system::layer::TileSheetData >();		HX_STACK_VAR(tsd,"tsd");
			HX_STACK_LINE(42)
			++(_g);
			HX_STACK_LINE(44)
			if (((tsd->tileSheet->get_nmeBitmap() == bitmapData))){
				HX_STACK_LINE(45)
				return true;
			}
		}
	}
	HX_STACK_LINE(49)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,containsTileSheet,return )

::org::flixel::system::layer::TileSheetData TileSheetData_obj::getTileSheet( ::flash::display::BitmapData bitmapData){
	HX_STACK_PUSH("TileSheetData::getTileSheet","org/flixel/system/layer/TileSheetData.hx",53);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(54)
		while(((_g < _g1->length))){
			HX_STACK_LINE(54)
			::org::flixel::system::layer::TileSheetData tsd = _g1->__get(_g).StaticCast< ::org::flixel::system::layer::TileSheetData >();		HX_STACK_VAR(tsd,"tsd");
			HX_STACK_LINE(54)
			++(_g);
			HX_STACK_LINE(56)
			if (((tsd->tileSheet->get_nmeBitmap() == bitmapData))){
				HX_STACK_LINE(57)
				return tsd;
			}
		}
	}
	HX_STACK_LINE(61)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,getTileSheet,return )

Void TileSheetData_obj::removeTileSheet( ::org::flixel::system::layer::TileSheetData tileSheetObj){
{
		HX_STACK_PUSH("TileSheetData::removeTileSheet","org/flixel/system/layer/TileSheetData.hx",65);
		HX_STACK_ARG(tileSheetObj,"tileSheetObj");
		HX_STACK_LINE(66)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		while(((_g1 < _g))){
			HX_STACK_LINE(66)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(68)
			if (((::org::flixel::system::layer::TileSheetData_obj::tileSheetData->__get(i).StaticCast< ::org::flixel::system::layer::TileSheetData >() == tileSheetObj))){
				HX_STACK_LINE(71)
				::org::flixel::system::layer::TileSheetData_obj::tileSheetData[i] = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData->__get((::org::flixel::system::layer::TileSheetData_obj::tileSheetData->length - (int)1)).StaticCast< ::org::flixel::system::layer::TileSheetData >();
				HX_STACK_LINE(72)
				::org::flixel::system::layer::TileSheetData_obj::tileSheetData->pop().StaticCast< ::org::flixel::system::layer::TileSheetData >();
				HX_STACK_LINE(74)
				tileSheetObj->destroy();
				HX_STACK_LINE(75)
				return null();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,removeTileSheet,(void))

Void TileSheetData_obj::clear( ){
{
		HX_STACK_PUSH("TileSheetData::clear","org/flixel/system/layer/TileSheetData.hx",81);
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(82)
			while(((_g < _g1->length))){
				HX_STACK_LINE(82)
				::org::flixel::system::layer::TileSheetData dataObject = _g1->__get(_g).StaticCast< ::org::flixel::system::layer::TileSheetData >();		HX_STACK_VAR(dataObject,"dataObject");
				HX_STACK_LINE(82)
				++(_g);
				HX_STACK_LINE(84)
				dataObject->destroy();
			}
		}
		HX_STACK_LINE(86)
		::org::flixel::system::layer::TileSheetData_obj::tileSheetData = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(88)
		::org::flixel::system::layer::TileSheetExt_obj::clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,clear,(void))


TileSheetData_obj::TileSheetData_obj()
{
}

void TileSheetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileSheetData);
	HX_MARK_MEMBER_NAME(flxFrames,"flxFrames");
	HX_MARK_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_MARK_MEMBER_NAME(tileSheet,"tileSheet");
	HX_MARK_END_CLASS();
}

void TileSheetData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flxFrames,"flxFrames");
	HX_VISIT_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_VISIT_MEMBER_NAME(tileSheet,"tileSheet");
}

Dynamic TileSheetData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFrame") ) { return getFrame_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"flxFrames") ) { return flxFrames; }
		if (HX_FIELD_EQ(inName,"tileSheet") ) { return tileSheet; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addTileSheet") ) { return addTileSheet_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileSheet") ) { return getTileSheet_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tileSheetData") ) { return tileSheetData; }
		if (HX_FIELD_EQ(inName,"containsFrame") ) { return containsFrame_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeTileSheet") ) { return removeTileSheet_dyn(); }
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { return flxSpriteFrames; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"containsTileSheet") ) { return containsTileSheet_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteSheetFrame") ) { return addSpriteSheetFrame_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getSpriteSheetFrames") ) { return getSpriteSheetFrames_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addTexturePackerFrame") ) { return addTexturePackerFrame_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getTexturePackerFrames") ) { return getTexturePackerFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"getSpriteSheetFrameKey") ) { return getSpriteSheetFrameKey_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"destroyFrameBitmapDatas") ) { return destroyFrameBitmapDatas_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"containsSpriteSheetFrames") ) { return containsSpriteSheetFrames_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getKeyForSpriteSheetFrames") ) { return getKeyForSpriteSheetFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileSheetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"flxFrames") ) { flxFrames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileSheet") ) { tileSheet=inValue.Cast< ::org::flixel::system::layer::TileSheetExt >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tileSheetData") ) { tileSheetData=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { flxSpriteFrames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileSheetData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("flxFrames"));
	outFields->push(HX_CSTRING("flxSpriteFrames"));
	outFields->push(HX_CSTRING("tileSheet"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("tileSheetData"),
	HX_CSTRING("addTileSheet"),
	HX_CSTRING("containsTileSheet"),
	HX_CSTRING("getTileSheet"),
	HX_CSTRING("removeTileSheet"),
	HX_CSTRING("clear"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroyFrameBitmapDatas"),
	HX_CSTRING("addTexturePackerFrame"),
	HX_CSTRING("getTexturePackerFrames"),
	HX_CSTRING("destroy"),
	HX_CSTRING("addTileRect"),
	HX_CSTRING("containsFrame"),
	HX_CSTRING("addSpriteSheetFrame"),
	HX_CSTRING("getSpriteSheetFrameKey"),
	HX_CSTRING("getKeyForSpriteSheetFrames"),
	HX_CSTRING("containsSpriteSheetFrames"),
	HX_CSTRING("getSpriteSheetFrames"),
	HX_CSTRING("getFrame"),
	HX_CSTRING("flxFrames"),
	HX_CSTRING("flxSpriteFrames"),
	HX_CSTRING("tileSheet"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TileSheetData_obj::tileSheetData,"tileSheetData");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TileSheetData_obj::tileSheetData,"tileSheetData");
};

Class TileSheetData_obj::__mClass;

void TileSheetData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.layer.TileSheetData"), hx::TCanCast< TileSheetData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileSheetData_obj::__boot()
{
	tileSheetData= Array_obj< ::Dynamic >::__new();
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer
