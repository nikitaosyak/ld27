#include <hxcpp.h>

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
#ifndef INCLUDED_org_flixel_system_BGSprite
#include <org/flixel/system/BGSprite.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_DrawStackItem
#include <org/flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_frames_FlxFrame
#include <org/flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace system{

Void BGSprite_obj::__construct()
{
HX_STACK_PUSH("BGSprite::new","org/flixel/system/BGSprite.hx",20);
{
	HX_STACK_LINE(21)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(22)
	this->makeGraphic((int)1,(int)1,(int)0,true,::org::flixel::FlxG_obj::getUniqueBitmapKey(HX_CSTRING("bg_graphic_")));
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::org::flixel::util::FlxPoint _this = this->scrollFactor;		HX_STACK_VAR(_this,"_this");
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(23)
		_this->x = X;
		HX_STACK_LINE(23)
		_this->y = Y;
		HX_STACK_LINE(23)
		_this;
	}
}
;
	return null();
}

BGSprite_obj::~BGSprite_obj() { }

Dynamic BGSprite_obj::__CreateEmpty() { return  new BGSprite_obj; }
hx::ObjectPtr< BGSprite_obj > BGSprite_obj::__new()
{  hx::ObjectPtr< BGSprite_obj > result = new BGSprite_obj();
	result->__construct();
	return result;}

Dynamic BGSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BGSprite_obj > result = new BGSprite_obj();
	result->__construct();
	return result;}

Void BGSprite_obj::draw( ){
{
		HX_STACK_PUSH("BGSprite::draw","org/flixel/system/BGSprite.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(32)
		if (((this->_atlas == null()))){
			HX_STACK_LINE(33)
			return null();
		}
		HX_STACK_LINE(38)
		if (((this->cameras == null()))){
			HX_STACK_LINE(39)
			this->cameras = ::org::flixel::FlxG_obj::cameras;
		}
		HX_STACK_LINE(42)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(43)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(44)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(46)
		::org::flixel::system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(47)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(48)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(50)
		bool isColored = (this->_color < (int)16777215);		HX_STACK_VAR(isColored,"isColored");
		HX_STACK_LINE(55)
		while(((i < l))){
			HX_STACK_LINE(57)
			camera = this->cameras->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
			HX_STACK_LINE(59)
			if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
				HX_STACK_LINE(60)
				continue;
			}
			struct _Function_2_1{
				inline static ::org::flixel::system::layer::DrawStackItem Block( ::org::flixel::system::BGSprite_obj *__this,::org::flixel::FlxCamera &camera,bool &isColored){
					HX_STACK_PUSH("*::closure","org/flixel/system/BGSprite.hx",65);
					{
						HX_STACK_LINE(65)
						::org::flixel::system::layer::Atlas ObjAtlas = __this->_atlas;		HX_STACK_VAR(ObjAtlas,"ObjAtlas");
						int ObjBlending = __this->_blendInt;		HX_STACK_VAR(ObjBlending,"ObjBlending");
						HX_STACK_LINE(65)
						::org::flixel::system::layer::DrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
						HX_STACK_LINE(65)
						if (((camera->_currentStackItem->initialized == false))){
							HX_STACK_LINE(65)
							camera->_headOfDrawStack = camera->_currentStackItem;
							HX_STACK_LINE(65)
							camera->_currentStackItem->atlas = ObjAtlas;
							HX_STACK_LINE(65)
							camera->_currentStackItem->colored = isColored;
							HX_STACK_LINE(65)
							camera->_currentStackItem->blending = ObjBlending;
							HX_STACK_LINE(65)
							itemToReturn = camera->_currentStackItem;
						}
						else{
							HX_STACK_LINE(65)
							if (((bool((bool((camera->_currentStackItem->atlas == ObjAtlas)) && bool((camera->_currentStackItem->colored == isColored)))) && bool((camera->_currentStackItem->blending == ObjBlending))))){
								HX_STACK_LINE(65)
								itemToReturn = camera->_currentStackItem;
							}
						}
						HX_STACK_LINE(65)
						if (((itemToReturn == null()))){
							HX_STACK_LINE(65)
							::org::flixel::system::layer::DrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
							HX_STACK_LINE(65)
							if (((::org::flixel::FlxCamera_obj::_storageHead != null()))){
								HX_STACK_LINE(65)
								newItem = ::org::flixel::FlxCamera_obj::_storageHead;
								HX_STACK_LINE(65)
								::org::flixel::system::layer::DrawStackItem newHead = ::org::flixel::FlxCamera_obj::_storageHead->next;		HX_STACK_VAR(newHead,"newHead");
								HX_STACK_LINE(65)
								newItem->next = null();
								HX_STACK_LINE(65)
								::org::flixel::FlxCamera_obj::_storageHead = newHead;
							}
							else{
								HX_STACK_LINE(65)
								newItem = ::org::flixel::system::layer::DrawStackItem_obj::__new();
							}
							HX_STACK_LINE(65)
							newItem->atlas = ObjAtlas;
							HX_STACK_LINE(65)
							newItem->colored = isColored;
							HX_STACK_LINE(65)
							newItem->blending = ObjBlending;
							HX_STACK_LINE(65)
							camera->_currentStackItem->next = newItem;
							HX_STACK_LINE(65)
							camera->_currentStackItem = newItem;
							HX_STACK_LINE(65)
							itemToReturn = camera->_currentStackItem;
						}
						HX_STACK_LINE(65)
						itemToReturn->initialized = true;
						HX_STACK_LINE(65)
						return itemToReturn;
					}
					return null();
				}
			};
			HX_STACK_LINE(65)
			drawItem = _Function_2_1::Block(this,camera,isColored);
			HX_STACK_LINE(69)
			currDrawData = drawItem->drawData;
			HX_STACK_LINE(70)
			currIndex = drawItem->position;
			HX_STACK_LINE(72)
			this->_point->x = (camera->width * 0.5);
			HX_STACK_LINE(73)
			this->_point->y = (camera->height * 0.5);
			HX_STACK_LINE(75)
			Float csx = camera->width;		HX_STACK_VAR(csx,"csx");
			HX_STACK_LINE(76)
			Float ssy = (int)0;		HX_STACK_VAR(ssy,"ssy");
			HX_STACK_LINE(77)
			Float ssx = (int)0;		HX_STACK_VAR(ssx,"ssx");
			HX_STACK_LINE(78)
			Float csy = camera->height;		HX_STACK_VAR(csy,"csy");
			HX_STACK_LINE(80)
			currDrawData[(currIndex)++] = this->_point->x;
			HX_STACK_LINE(81)
			currDrawData[(currIndex)++] = this->_point->y;
			HX_STACK_LINE(83)
			currDrawData[(currIndex)++] = this->_flxFrame->tileID;
			HX_STACK_LINE(85)
			currDrawData[(currIndex)++] = csx;
			HX_STACK_LINE(86)
			currDrawData[(currIndex)++] = ssx;
			HX_STACK_LINE(87)
			currDrawData[(currIndex)++] = -(ssy);
			HX_STACK_LINE(88)
			currDrawData[(currIndex)++] = csy;
			HX_STACK_LINE(91)
			if ((isColored)){
				HX_STACK_LINE(93)
				currDrawData[(currIndex)++] = this->_red;
				HX_STACK_LINE(94)
				currDrawData[(currIndex)++] = this->_green;
				HX_STACK_LINE(95)
				currDrawData[(currIndex)++] = this->_blue;
			}
			HX_STACK_LINE(97)
			currDrawData[(currIndex)++] = this->alpha;
			HX_STACK_LINE(104)
			drawItem->position = currIndex;
			HX_STACK_LINE(106)
			(::org::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
		}
	}
return null();
}



BGSprite_obj::BGSprite_obj()
{
}

void BGSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BGSprite);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BGSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BGSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BGSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BGSprite_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BGSprite_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BGSprite_obj::__mClass,"__mClass");
};

Class BGSprite_obj::__mClass;

void BGSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.BGSprite"), hx::TCanCast< BGSprite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BGSprite_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
