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
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
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
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
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
#ifndef INCLUDED_org_flixel_FlxText
#include <org/flixel/FlxText.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
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
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{

Void FlxText_obj::__construct(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_size,hx::Null< bool >  __o_EmbeddedFont,hx::Null< bool >  __o_IsStatic)
{
HX_STACK_PUSH("FlxText::new","org/flixel/FlxText.hx",66);
int size = __o_size.Default(8);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
bool IsStatic = __o_IsStatic.Default(false);
{
	HX_STACK_LINE(67)
	super::__construct(X,Y,null());
	HX_STACK_LINE(69)
	this->_isStatic = false;
	HX_STACK_LINE(71)
	::String key = ::org::flixel::FlxG_obj::getUniqueBitmapKey(HX_CSTRING("text"));		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(72)
	this->makeGraphic(Width,(int)1,(int)0,false,key);
	HX_STACK_LINE(74)
	if (((Text == null()))){
		HX_STACK_LINE(75)
		Text = HX_CSTRING("");
	}
	HX_STACK_LINE(78)
	this->_textField = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(79)
	this->_textField->set_width(Width);
	HX_STACK_LINE(80)
	this->_textField->set_selectable(false);
	HX_STACK_LINE(81)
	this->_textField->set_multiline(true);
	HX_STACK_LINE(82)
	this->_textField->set_wordWrap(true);
	HX_STACK_LINE(83)
	this->_format = ::flash::text::TextFormat_obj::__new(::openfl::Assets_obj::getFont(::org::flixel::FlxAssets_obj::defaultFont)->fontName,size,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(84)
	this->_formatAdjusted = ::flash::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(85)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(86)
	this->_textField->set_text(Text);
	HX_STACK_LINE(87)
	this->_textField->set_embedFonts(EmbeddedFont);
	HX_STACK_LINE(91)
	if (((Text.length <= (int)0))){
		HX_STACK_LINE(92)
		this->_textField->set_height((int)1);
	}
	else{
		HX_STACK_LINE(96)
		this->_textField->set_height((int)10);
	}
	HX_STACK_LINE(100)
	this->_regen = true;
	HX_STACK_LINE(101)
	this->_shadow = (int)0;
	HX_STACK_LINE(102)
	this->_useShadow = false;
	HX_STACK_LINE(103)
	this->allowCollisions = (int)0;
	HX_STACK_LINE(104)
	this->moves = false;
	HX_STACK_LINE(108)
	if (((Text != HX_CSTRING("")))){
		HX_STACK_LINE(109)
		this->calcFrame(true);
	}
	HX_STACK_LINE(114)
	this->_isStatic = IsStatic;
}
;
	return null();
}

FlxText_obj::~FlxText_obj() { }

Dynamic FlxText_obj::__CreateEmpty() { return  new FlxText_obj; }
hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_size,hx::Null< bool >  __o_EmbeddedFont,hx::Null< bool >  __o_IsStatic)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(X,Y,Width,Text,__o_size,__o_EmbeddedFont,__o_IsStatic);
	return result;}

Dynamic FlxText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void FlxText_obj::updateFormat( ::flash::text::TextFormat format){
{
		HX_STACK_PUSH("FlxText::updateFormat","org/flixel/FlxText.hx",598);
		HX_STACK_THIS(this);
		HX_STACK_ARG(format,"format");
		HX_STACK_LINE(598)
		this->_textField->setTextFormat(format,(int)0,this->_textField->get_text().length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,updateFormat,(void))

Void FlxText_obj::draw( ){
{
		HX_STACK_PUSH("FlxText::draw","org/flixel/FlxText.hx",584);
		HX_STACK_THIS(this);
		HX_STACK_LINE(585)
		if ((this->_regen)){
			HX_STACK_LINE(586)
			this->calcFrame(true);
		}
		HX_STACK_LINE(594)
		this->super::draw();
	}
return null();
}


Void FlxText_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxText::updateFrameData","org/flixel/FlxText.hx",573);
		HX_STACK_THIS(this);
		HX_STACK_LINE(573)
		if (((bool((bool((this->_node != null())) && bool((this->frameWidth >= (int)1)))) && bool((this->frameHeight >= (int)1))))){
			HX_STACK_LINE(577)
			this->_framesData = this->_node->getSpriteSheetFrames(::Std_obj::_int(this->width),::Std_obj::_int(this->height),null(),null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(578)
			this->_flxFrame = this->_framesData->frames->__get((int)0).StaticCast< ::org::flixel::system::layer::frames::FlxFrame >();
		}
	}
return null();
}


Void FlxText_obj::updateAtlasInfo( hx::Null< bool >  __o_updateAtlas){
bool updateAtlas = __o_updateAtlas.Default(false);
	HX_STACK_PUSH("FlxText::updateAtlasInfo","org/flixel/FlxText.hx",557);
	HX_STACK_THIS(this);
	HX_STACK_ARG(updateAtlas,"updateAtlas");
{
		HX_STACK_LINE(559)
		this->_atlas = ::org::flixel::FlxG_obj::get_state()->getAtlasFor(this->_bitmapDataKey);
		HX_STACK_LINE(560)
		::flash::display::BitmapData cachedBmd = ::org::flixel::FlxG_obj::_cache->get(this->_bitmapDataKey);		HX_STACK_VAR(cachedBmd,"cachedBmd");
		HX_STACK_LINE(561)
		if (((cachedBmd != this->_pixels))){
			HX_STACK_LINE(563)
			::org::flixel::FlxG_obj::_cache->set(this->_bitmapDataKey,this->_pixels);
			HX_STACK_LINE(564)
			this->_atlas->clearAndFillWith(this->_pixels);
			HX_STACK_LINE(565)
			cachedBmd->dispose();
		}
		HX_STACK_LINE(567)
		this->_node = this->_atlas->getNodeByKey(this->_bitmapDataKey);
		HX_STACK_LINE(568)
		this->updateFrameData();
	}
return null();
}


::org::flixel::system::layer::Atlas FlxText_obj::set_atlas( ::org::flixel::system::layer::Atlas value){
	HX_STACK_PUSH("FlxText::set_atlas","org/flixel/FlxText.hx",546);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(547)
	if ((!(this->_isStatic))){
		HX_STACK_LINE(548)
		return value;
	}
	HX_STACK_LINE(552)
	return this->super::set_atlas(value);
}


::String FlxText_obj::convertTextAlignmentFromString( ::String strAlign){
	HX_STACK_PUSH("FlxText::convertTextAlignmentFromString","org/flixel/FlxText.hx",536);
	HX_STACK_THIS(this);
	HX_STACK_ARG(strAlign,"strAlign");
	HX_STACK_LINE(536)
	return strAlign;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,convertTextAlignmentFromString,return )

::flash::text::TextFormat FlxText_obj::dtfCopy( ){
	HX_STACK_PUSH("FlxText::dtfCopy","org/flixel/FlxText.hx",506);
	HX_STACK_THIS(this);
	HX_STACK_LINE(507)
	::flash::text::TextFormat defaultTextFormat = this->_textField->get_defaultTextFormat();		HX_STACK_VAR(defaultTextFormat,"defaultTextFormat");
	HX_STACK_LINE(508)
	return ::flash::text::TextFormat_obj::__new(defaultTextFormat->font,defaultTextFormat->size,defaultTextFormat->color,defaultTextFormat->bold,defaultTextFormat->italic,defaultTextFormat->underline,defaultTextFormat->url,defaultTextFormat->target,defaultTextFormat->align,null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

Void FlxText_obj::setClipping( int width,int height){
{
		HX_STACK_PUSH("FlxText::setClipping","org/flixel/FlxText.hx",498);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
	}
return null();
}


Void FlxText_obj::addFilter( ::flash::filters::BitmapFilter filter,hx::Null< int >  __o_widthInc,hx::Null< int >  __o_heightInc){
int widthInc = __o_widthInc.Default(0);
int heightInc = __o_heightInc.Default(0);
	HX_STACK_PUSH("FlxText::addFilter","org/flixel/FlxText.hx",487);
	HX_STACK_THIS(this);
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(widthInc,"widthInc");
	HX_STACK_ARG(heightInc,"heightInc");
{
		HX_STACK_LINE(487)
		this->super::addFilter(filter,null(),null());
	}
return null();
}


Void FlxText_obj::calcFrame( hx::Null< bool >  __o_AreYouSure){
bool AreYouSure = __o_AreYouSure.Default(false);
	HX_STACK_PUSH("FlxText::calcFrame","org/flixel/FlxText.hx",379);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AreYouSure,"AreYouSure");
{
		HX_STACK_LINE(381)
		if ((AreYouSure)){
			HX_STACK_LINE(383)
			this->_regen = true;
			HX_STACK_LINE(385)
			if ((this->_regen)){
				HX_STACK_LINE(388)
				this->set_height(this->_textField->get_textHeight());
				HX_STACK_LINE(389)
				{
					HX_STACK_LINE(389)
					::org::flixel::FlxText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(389)
					_g->set_height((_g->height + (int)4));
				}
				HX_STACK_LINE(390)
				this->_pixels = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(this->width),::Std_obj::_int(this->height),true,(int)0,null());
				HX_STACK_LINE(391)
				this->frameHeight = ::Std_obj::_int(this->height);
				HX_STACK_LINE(392)
				this->_textField->set_height((this->height * 1.2));
				HX_STACK_LINE(393)
				this->_flashRect->x = (int)0;
				HX_STACK_LINE(394)
				this->_flashRect->y = (int)0;
				HX_STACK_LINE(395)
				this->_flashRect->width = this->width;
				HX_STACK_LINE(396)
				this->_flashRect->height = this->height;
				HX_STACK_LINE(397)
				this->_regen = false;
			}
			else{
				HX_STACK_LINE(400)
				this->_pixels->fillRect(this->_flashRect,(int)0);
			}
			HX_STACK_LINE(404)
			if (((bool((bool((this->_textField != null())) && bool((this->_textField->get_text() != null())))) && bool((this->_textField->get_text().length > (int)0))))){
				HX_STACK_LINE(407)
				this->_formatAdjusted->font = this->_format->font;
				HX_STACK_LINE(408)
				this->_formatAdjusted->size = this->_format->size;
				HX_STACK_LINE(409)
				this->_formatAdjusted->color = this->_format->color;
				HX_STACK_LINE(410)
				this->_formatAdjusted->align = this->_format->align;
				HX_STACK_LINE(411)
				this->_matrix->identity();
				HX_STACK_LINE(416)
				if (((bool((this->_format->align == ::flash::text::TextFormatAlign_obj::CENTER)) && bool((this->_textField->get_numLines() == (int)1))))){
					HX_STACK_LINE(419)
					this->_formatAdjusted->align = ::flash::text::TextFormatAlign_obj::LEFT;
					HX_STACK_LINE(420)
					this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
					HX_STACK_LINE(424)
					this->_matrix->translate(::Math_obj::floor((Float(((this->width - this->_textField->get_textWidth()))) / Float((int)2))),(int)0);
				}
				HX_STACK_LINE(428)
				if ((this->_useShadow)){
					HX_STACK_LINE(430)
					this->_formatAdjusted->color = this->_shadow;
					HX_STACK_LINE(431)
					this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
					HX_STACK_LINE(432)
					this->_matrix->translate((int)1,(int)1);
					HX_STACK_LINE(433)
					this->_pixels->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
					HX_STACK_LINE(434)
					this->_matrix->translate((int)-1,(int)-1);
					HX_STACK_LINE(435)
					this->_formatAdjusted->color = this->_format->color;
					HX_STACK_LINE(436)
					this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
				}
				HX_STACK_LINE(439)
				this->_pixels->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
				HX_STACK_LINE(440)
				this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
			}
			HX_STACK_LINE(443)
			this->updateAtlasInfo(null());
			HX_STACK_LINE(454)
			{
				HX_STACK_LINE(454)
				::org::flixel::util::FlxPoint _this = this->origin;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(454)
				_this->x = (this->frameWidth * 0.5);
				HX_STACK_LINE(454)
				_this->y = (this->frameHeight * 0.5);
				HX_STACK_LINE(454)
				_this;
			}
		}
		HX_STACK_LINE(458)
		this->dirty = false;
		HX_STACK_LINE(461)
		if (((this->filters != null()))){
			HX_STACK_LINE(469)
			this->_pixels->copyPixels(this->_pixelsBackup,this->_flashRect,this->_flashPointZero,null(),null(),null());
			HX_STACK_LINE(470)
			{
				HX_STACK_LINE(470)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->filters;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(470)
				while(((_g < _g1->length))){
					HX_STACK_LINE(470)
					::flash::filters::BitmapFilter filter = _g1->__get(_g).StaticCast< ::flash::filters::BitmapFilter >();		HX_STACK_VAR(filter,"filter");
					HX_STACK_LINE(470)
					++(_g);
					HX_STACK_LINE(472)
					this->_pixels->applyFilter(this->_pixels,this->_flashRect,this->_flashPointZero,filter);
				}
			}
		}
	}
return null();
}


bool FlxText_obj::set_isStatic( bool value){
	HX_STACK_PUSH("FlxText::set_isStatic","org/flixel/FlxText.hx",362);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(363)
	if ((this->_isStatic)){
		HX_STACK_LINE(364)
		return value;
	}
	HX_STACK_LINE(368)
	return this->_isStatic = value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_isStatic,return )

bool FlxText_obj::get_isStatic( ){
	HX_STACK_PUSH("FlxText::get_isStatic","org/flixel/FlxText.hx",357);
	HX_STACK_THIS(this);
	HX_STACK_LINE(357)
	return this->_isStatic;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_isStatic,return )

bool FlxText_obj::set_useShadow( bool value){
	HX_STACK_PUSH("FlxText::set_useShadow","org/flixel/FlxText.hx",334);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(335)
	if ((this->_isStatic)){
		HX_STACK_LINE(336)
		return value;
	}
	HX_STACK_LINE(340)
	if (((value != this->_useShadow))){
		HX_STACK_LINE(342)
		this->_useShadow = value;
		HX_STACK_LINE(343)
		this->dirty = true;
	}
	HX_STACK_LINE(345)
	return this->_useShadow;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_useShadow,return )

bool FlxText_obj::get_useShadow( ){
	HX_STACK_PUSH("FlxText::get_useShadow","org/flixel/FlxText.hx",329);
	HX_STACK_THIS(this);
	HX_STACK_LINE(329)
	return this->_useShadow;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_useShadow,return )

int FlxText_obj::set_shadow( int Color){
	HX_STACK_PUSH("FlxText::set_shadow","org/flixel/FlxText.hx",317);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(318)
	if ((this->_isStatic)){
		HX_STACK_LINE(319)
		return Color;
	}
	HX_STACK_LINE(323)
	this->_shadow = Color;
	HX_STACK_LINE(324)
	this->dirty = true;
	HX_STACK_LINE(325)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_shadow,return )

int FlxText_obj::get_shadow( ){
	HX_STACK_PUSH("FlxText::get_shadow","org/flixel/FlxText.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_LINE(309)
	return this->_shadow;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_shadow,return )

::String FlxText_obj::set_alignment( ::String Alignment){
	HX_STACK_PUSH("FlxText::set_alignment","org/flixel/FlxText.hx",291);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_LINE(292)
	if ((this->_isStatic)){
		HX_STACK_LINE(293)
		return Alignment;
	}
	HX_STACK_LINE(297)
	this->_format->align = this->convertTextAlignmentFromString(Alignment);
	HX_STACK_LINE(298)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(299)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(300)
	this->dirty = true;
	HX_STACK_LINE(301)
	this->_regen = true;
	HX_STACK_LINE(302)
	return Alignment;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

::String FlxText_obj::get_alignment( ){
	HX_STACK_PUSH("FlxText::get_alignment","org/flixel/FlxText.hx",283);
	HX_STACK_THIS(this);
	HX_STACK_LINE(283)
	return hx::TCast< String >::cast(this->_format->align);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

::String FlxText_obj::set_font( ::String Font){
	HX_STACK_PUSH("FlxText::set_font","org/flixel/FlxText.hx",264);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_LINE(265)
	if ((this->_isStatic)){
		HX_STACK_LINE(266)
		return Font;
	}
	HX_STACK_LINE(270)
	this->_format->font = ::openfl::Assets_obj::getFont(Font)->fontName;
	HX_STACK_LINE(271)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(272)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(273)
	this->_regen = true;
	HX_STACK_LINE(274)
	return Font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

::String FlxText_obj::get_font( ){
	HX_STACK_PUSH("FlxText::get_font","org/flixel/FlxText.hx",256);
	HX_STACK_THIS(this);
	HX_STACK_LINE(256)
	return this->_format->font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

int FlxText_obj::set_color( int Color){
	HX_STACK_PUSH("FlxText::set_color","org/flixel/FlxText.hx",236);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(237)
	if ((this->_isStatic)){
		HX_STACK_LINE(238)
		return Color;
	}
	HX_STACK_LINE(242)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(243)
	this->_format->color = Color;
	HX_STACK_LINE(244)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(245)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(246)
	this->_regen = true;
	HX_STACK_LINE(247)
	return Color;
}


int FlxText_obj::get_color( ){
	HX_STACK_PUSH("FlxText::get_color","org/flixel/FlxText.hx",228);
	HX_STACK_THIS(this);
	HX_STACK_LINE(228)
	return this->_format->color;
}


Float FlxText_obj::set_size( Float Size){
	HX_STACK_PUSH("FlxText::set_size","org/flixel/FlxText.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Size,"Size");
	HX_STACK_LINE(212)
	if ((this->_isStatic)){
		HX_STACK_LINE(213)
		return Size;
	}
	HX_STACK_LINE(217)
	this->_format->size = Size;
	HX_STACK_LINE(218)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(219)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(220)
	this->_regen = true;
	HX_STACK_LINE(221)
	return Size;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

Float FlxText_obj::get_size( ){
	HX_STACK_PUSH("FlxText::get_size","org/flixel/FlxText.hx",203);
	HX_STACK_THIS(this);
	HX_STACK_LINE(203)
	return this->_format->size;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

::String FlxText_obj::set_text( ::String Text){
	HX_STACK_PUSH("FlxText::set_text","org/flixel/FlxText.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Text,"Text");
	HX_STACK_LINE(183)
	if ((this->_isStatic)){
		HX_STACK_LINE(184)
		return Text;
	}
	HX_STACK_LINE(188)
	::String ot = this->_textField->get_text();		HX_STACK_VAR(ot,"ot");
	HX_STACK_LINE(189)
	this->_textField->set_text(Text);
	HX_STACK_LINE(190)
	if (((this->_textField->get_text() != ot))){
		HX_STACK_LINE(191)
		this->_regen = true;
	}
	HX_STACK_LINE(194)
	return this->_textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

::String FlxText_obj::get_text( ){
	HX_STACK_PUSH("FlxText::get_text","org/flixel/FlxText.hx",174);
	HX_STACK_THIS(this);
	HX_STACK_LINE(174)
	return this->_textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_text,return )

::org::flixel::FlxText FlxText_obj::setFormat( ::String Font,hx::Null< Float >  __o_Size,hx::Null< int >  __o_Color,::String Alignment,hx::Null< int >  __o_ShadowColor,hx::Null< bool >  __o_UseShadow){
Float Size = __o_Size.Default(8);
int Color = __o_Color.Default(16777215);
int ShadowColor = __o_ShadowColor.Default(0);
bool UseShadow = __o_UseShadow.Default(false);
	HX_STACK_PUSH("FlxText::setFormat","org/flixel/FlxText.hx",145);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_ARG(Size,"Size");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_ARG(ShadowColor,"ShadowColor");
	HX_STACK_ARG(UseShadow,"UseShadow");
{
		HX_STACK_LINE(146)
		if ((this->_isStatic)){
			HX_STACK_LINE(147)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(151)
		if (((Font == null()))){
			HX_STACK_LINE(152)
			Font = ::org::flixel::FlxAssets_obj::defaultFont;
		}
		HX_STACK_LINE(155)
		this->_format->font = ::openfl::Assets_obj::getFont(Font)->fontName;
		HX_STACK_LINE(156)
		this->_format->size = Size;
		HX_STACK_LINE(157)
		hx::AndEq(Color,(int)16777215);
		HX_STACK_LINE(158)
		this->_format->color = Color;
		HX_STACK_LINE(159)
		this->_format->align = this->convertTextAlignmentFromString(Alignment);
		HX_STACK_LINE(160)
		this->_textField->set_defaultTextFormat(this->_format);
		HX_STACK_LINE(161)
		this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(162)
		this->_shadow = ShadowColor;
		HX_STACK_LINE(163)
		this->_useShadow = UseShadow;
		HX_STACK_LINE(164)
		this->_regen = true;
		HX_STACK_LINE(165)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxText_obj,setFormat,return )

Void FlxText_obj::destroy( ){
{
		HX_STACK_PUSH("FlxText::destroy","org/flixel/FlxText.hx",121);
		HX_STACK_THIS(this);
		HX_STACK_LINE(123)
		if (((this->_pixels != null()))){
			HX_STACK_LINE(124)
			this->_pixels->dispose();
		}
		HX_STACK_LINE(128)
		this->_textField = null();
		HX_STACK_LINE(129)
		this->_format = null();
		HX_STACK_LINE(130)
		this->_formatAdjusted = null();
		HX_STACK_LINE(131)
		this->super::destroy();
	}
return null();
}



FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(_isStatic,"_isStatic");
	HX_MARK_MEMBER_NAME(_useShadow,"_useShadow");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(_regen,"_regen");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_textField,"_textField");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_isStatic,"_isStatic");
	HX_VISIT_MEMBER_NAME(_useShadow,"_useShadow");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(_regen,"_regen");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_textField,"_textField");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"font") ) { return get_font(); }
		if (HX_FIELD_EQ(inName,"size") ) { return get_size(); }
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_regen") ) { return _regen; }
		if (HX_FIELD_EQ(inName,"shadow") ) { return get_shadow(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return dtfCopy_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_shadow") ) { return _shadow; }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isStatic") ) { return get_isStatic(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_atlas") ) { return set_atlas_dyn(); }
		if (HX_FIELD_EQ(inName,"addFilter") ) { return addFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"alignment") ) { return get_alignment(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"_isStatic") ) { return _isStatic; }
		if (HX_FIELD_EQ(inName,"useShadow") ) { return get_useShadow(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_shadow") ) { return set_shadow_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shadow") ) { return get_shadow_dyn(); }
		if (HX_FIELD_EQ(inName,"_useShadow") ) { return _useShadow; }
		if (HX_FIELD_EQ(inName,"_textField") ) { return _textField; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setClipping") ) { return setClipping_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateFormat") ) { return updateFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_isStatic") ) { return set_isStatic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isStatic") ) { return get_isStatic_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_useShadow") ) { return set_useShadow_dyn(); }
		if (HX_FIELD_EQ(inName,"get_useShadow") ) { return get_useShadow_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return get_alignment_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAtlasInfo") ) { return updateAtlasInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return _formatAdjusted; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"convertTextAlignmentFromString") ) { return convertTextAlignmentFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return set_font(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { return set_size(inValue); }
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_regen") ) { _regen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow") ) { return set_shadow(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isStatic") ) { return set_isStatic(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { return set_alignment(inValue); }
		if (HX_FIELD_EQ(inName,"_isStatic") ) { _isStatic=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useShadow") ) { return set_useShadow(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_useShadow") ) { _useShadow=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textField") ) { _textField=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isStatic"));
	outFields->push(HX_CSTRING("alignment"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("_isStatic"));
	outFields->push(HX_CSTRING("_useShadow"));
	outFields->push(HX_CSTRING("_shadow"));
	outFields->push(HX_CSTRING("_regen"));
	outFields->push(HX_CSTRING("_formatAdjusted"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_textField"));
	outFields->push(HX_CSTRING("useShadow"));
	outFields->push(HX_CSTRING("shadow"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateFormat"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("updateAtlasInfo"),
	HX_CSTRING("set_atlas"),
	HX_CSTRING("convertTextAlignmentFromString"),
	HX_CSTRING("dtfCopy"),
	HX_CSTRING("setClipping"),
	HX_CSTRING("addFilter"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("set_isStatic"),
	HX_CSTRING("get_isStatic"),
	HX_CSTRING("set_useShadow"),
	HX_CSTRING("get_useShadow"),
	HX_CSTRING("set_shadow"),
	HX_CSTRING("get_shadow"),
	HX_CSTRING("set_alignment"),
	HX_CSTRING("get_alignment"),
	HX_CSTRING("set_font"),
	HX_CSTRING("get_font"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_size"),
	HX_CSTRING("get_size"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_text"),
	HX_CSTRING("setFormat"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_isStatic"),
	HX_CSTRING("_useShadow"),
	HX_CSTRING("_shadow"),
	HX_CSTRING("_regen"),
	HX_CSTRING("_formatAdjusted"),
	HX_CSTRING("_format"),
	HX_CSTRING("_textField"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

Class FlxText_obj::__mClass;

void FlxText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxText"), hx::TCanCast< FlxText_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxText_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
