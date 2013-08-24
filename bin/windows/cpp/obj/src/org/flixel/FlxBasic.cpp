#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_texturepacker_TexturePackerData
#include <org/flixel/plugin/texturepacker/TexturePackerData.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_frames_FlxSpriteFrames
#include <org/flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_tweens_FlxTween
#include <org/flixel/tweens/FlxTween.h>
#endif
namespace org{
namespace flixel{

Void FlxBasic_obj::__construct()
{
HX_STACK_PUSH("FlxBasic::new","org/flixel/FlxBasic.hx",70);
{
	HX_STACK_LINE(71)
	this->ID = (int)-1;
	HX_STACK_LINE(72)
	this->exists = true;
	HX_STACK_LINE(73)
	this->active = true;
	HX_STACK_LINE(74)
	this->visible = true;
	HX_STACK_LINE(75)
	this->alive = true;
	HX_STACK_LINE(76)
	this->autoClear = true;
	HX_STACK_LINE(79)
	this->ignoreDrawDebug = false;
}
;
	return null();
}

FlxBasic_obj::~FlxBasic_obj() { }

Dynamic FlxBasic_obj::__CreateEmpty() { return  new FlxBasic_obj; }
hx::ObjectPtr< FlxBasic_obj > FlxBasic_obj::__new()
{  hx::ObjectPtr< FlxBasic_obj > result = new FlxBasic_obj();
	result->__construct();
	return result;}

Dynamic FlxBasic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBasic_obj > result = new FlxBasic_obj();
	result->__construct();
	return result;}

Void FlxBasic_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxBasic::updateFrameData","org/flixel/FlxBasic.hx",405);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,updateFrameData,(void))

::org::flixel::system::layer::Atlas FlxBasic_obj::getAtlas( ){
	HX_STACK_PUSH("FlxBasic::getAtlas","org/flixel/FlxBasic.hx",400);
	HX_STACK_THIS(this);
	HX_STACK_LINE(400)
	return ::org::flixel::FlxG_obj::get_state()->getAtlasFor(this->_bitmapDataKey);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,getAtlas,return )

Void FlxBasic_obj::updateAtlasInfo( hx::Null< bool >  __o_updateAtlas){
bool updateAtlas = __o_updateAtlas.Default(false);
	HX_STACK_PUSH("FlxBasic::updateAtlasInfo","org/flixel/FlxBasic.hx",352);
	HX_STACK_THIS(this);
	HX_STACK_ARG(updateAtlas,"updateAtlas");
{
		HX_STACK_LINE(369)
		if (((this->_atlas == null()))){
			HX_STACK_LINE(371)
			this->_atlas = this->getAtlas();
			HX_STACK_LINE(372)
			this->_node = this->_atlas->getNodeByKey(this->_bitmapDataKey);
		}
		else{
			HX_STACK_LINE(374)
			if ((this->_atlas->hasNodeWithName(this->_bitmapDataKey))){
				HX_STACK_LINE(376)
				this->_node = this->_atlas->getNodeByKey(this->_bitmapDataKey);
				HX_STACK_LINE(377)
				if ((updateAtlas)){
					HX_STACK_LINE(378)
					this->_atlas->redrawNode(this->_node);
				}
			}
			else{
				HX_STACK_LINE(384)
				::flash::display::BitmapData bm = ::org::flixel::FlxG_obj::_cache->get(this->_bitmapDataKey);		HX_STACK_VAR(bm,"bm");
				HX_STACK_LINE(385)
				this->_node = this->_atlas->addNode(bm,this->_bitmapDataKey);
				HX_STACK_LINE(386)
				if (((this->_node == null()))){
					HX_STACK_LINE(388)
					this->_atlas = this->getAtlas();
					HX_STACK_LINE(389)
					this->_node = this->_atlas->getNodeByKey(this->_bitmapDataKey);
				}
			}
		}
		HX_STACK_LINE(392)
		this->updateFrameData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,updateAtlasInfo,(void))

::String FlxBasic_obj::get_bitmapDataKey( ){
	HX_STACK_PUSH("FlxBasic::get_bitmapDataKey","org/flixel/FlxBasic.hx",346);
	HX_STACK_THIS(this);
	HX_STACK_LINE(346)
	return this->_bitmapDataKey;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,get_bitmapDataKey,return )

::org::flixel::system::layer::Atlas FlxBasic_obj::set_atlas( ::org::flixel::system::layer::Atlas value){
	HX_STACK_PUSH("FlxBasic::set_atlas","org/flixel/FlxBasic.hx",300);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(301)
	if (((this->_atlas != value))){
		HX_STACK_LINE(302)
		if (((value == null()))){
			HX_STACK_LINE(305)
			this->_atlas = value;
			HX_STACK_LINE(306)
			this->_node = null();
			HX_STACK_LINE(307)
			this->_framesData = null();
		}
		else{
			HX_STACK_LINE(311)
			if (((this->_bitmapDataKey != null()))){
				HX_STACK_LINE(313)
				if ((!(value->hasNodeWithName(this->_bitmapDataKey)))){
					HX_STACK_LINE(315)
					::flash::display::BitmapData bm = ::org::flixel::FlxG_obj::_cache->get(this->_bitmapDataKey);		HX_STACK_VAR(bm,"bm");
					HX_STACK_LINE(316)
					if (((bm == null()))){
						HX_STACK_LINE(317)
						return null();
					}
					else{
						HX_STACK_LINE(323)
						if (((value->addNode(bm,this->_bitmapDataKey) == null()))){
							HX_STACK_LINE(324)
							return null();
						}
					}
				}
				HX_STACK_LINE(332)
				this->_atlas = value;
				HX_STACK_LINE(333)
				this->_node = value->getNodeByKey(this->_bitmapDataKey);
			}
			HX_STACK_LINE(336)
			this->updateFrameData();
		}
	}
	HX_STACK_LINE(340)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_atlas,return )

::org::flixel::system::layer::Atlas FlxBasic_obj::get_atlas( ){
	HX_STACK_PUSH("FlxBasic::get_atlas","org/flixel/FlxBasic.hx",295);
	HX_STACK_THIS(this);
	HX_STACK_LINE(295)
	return this->_atlas;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,get_atlas,return )

bool FlxBasic_obj::get_hasTween( ){
	HX_STACK_PUSH("FlxBasic::get_hasTween","org/flixel/FlxBasic.hx",273);
	HX_STACK_THIS(this);
	HX_STACK_LINE(273)
	return (this->_tween != null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,get_hasTween,return )

Void FlxBasic_obj::updateTweens( ){
{
		HX_STACK_PUSH("FlxBasic::updateTweens","org/flixel/FlxBasic.hx",252);
		HX_STACK_THIS(this);
		HX_STACK_LINE(253)
		::org::flixel::tweens::FlxTween t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(254)
		Dynamic ft = this->_tween;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(255)
		while(((ft != null()))){
			HX_STACK_LINE(257)
			t = hx::TCast< org::flixel::tweens::FlxTween >::cast(ft);
			HX_STACK_LINE(258)
			if ((t->active)){
				HX_STACK_LINE(260)
				t->update();
				HX_STACK_LINE(261)
				if ((ft->__Field(HX_CSTRING("_finish"),true))){
					HX_STACK_LINE(262)
					ft->__Field(HX_CSTRING("finish"),true)();
				}
			}
			HX_STACK_LINE(266)
			ft = ft->__Field(HX_CSTRING("_next"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,updateTweens,(void))

Void FlxBasic_obj::clearTweens( hx::Null< bool >  __o_destroy){
bool destroy = __o_destroy.Default(false);
	HX_STACK_PUSH("FlxBasic::clearTweens","org/flixel/FlxBasic.hx",239);
	HX_STACK_THIS(this);
	HX_STACK_ARG(destroy,"destroy");
{
		HX_STACK_LINE(240)
		::org::flixel::tweens::FlxTween t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(241)
		Dynamic ft = this->_tween;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(242)
		Dynamic fn;		HX_STACK_VAR(fn,"fn");
		HX_STACK_LINE(243)
		while(((ft != null()))){
			HX_STACK_LINE(245)
			fn = ft->__Field(HX_CSTRING("_next"),true);
			HX_STACK_LINE(246)
			this->removeTween(hx::TCast< org::flixel::tweens::FlxTween >::cast(ft),destroy);
			HX_STACK_LINE(247)
			ft = fn;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,clearTweens,(void))

::org::flixel::tweens::FlxTween FlxBasic_obj::removeTween( ::org::flixel::tweens::FlxTween t,hx::Null< bool >  __o_destroy){
bool destroy = __o_destroy.Default(false);
	HX_STACK_PUSH("FlxBasic::removeTween","org/flixel/FlxBasic.hx",213);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(destroy,"destroy");
{
		HX_STACK_LINE(214)
		Dynamic ft = t;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(215)
		if (((ft->__Field(HX_CSTRING("_parent"),true) != hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(216)
			hx::Throw (HX_CSTRING("Core object does not contain FlxTween."));
		}
		HX_STACK_LINE(219)
		if (((ft->__Field(HX_CSTRING("_next"),true) != null()))){
			HX_STACK_LINE(220)
			ft->__Field(HX_CSTRING("_next"),true)->__FieldRef(HX_CSTRING("_prev")) = ft->__Field(HX_CSTRING("_prev"),true);
		}
		HX_STACK_LINE(223)
		if (((ft->__Field(HX_CSTRING("_prev"),true) != null()))){
			HX_STACK_LINE(224)
			ft->__Field(HX_CSTRING("_prev"),true)->__FieldRef(HX_CSTRING("_next")) = ft->__Field(HX_CSTRING("_next"),true);
		}
		else{
			HX_STACK_LINE(228)
			this->_tween = (  (((ft->__Field(HX_CSTRING("_next"),true) == null()))) ? ::org::flixel::tweens::FlxTween(null()) : ::org::flixel::tweens::FlxTween(hx::TCast< org::flixel::tweens::FlxTween >::cast(ft->__Field(HX_CSTRING("_next"),true))) );
		}
		HX_STACK_LINE(231)
		ft->__FieldRef(HX_CSTRING("_next")) = ft->__FieldRef(HX_CSTRING("_prev")) = null();
		HX_STACK_LINE(232)
		ft->__FieldRef(HX_CSTRING("_parent")) = null();
		HX_STACK_LINE(233)
		if ((destroy)){
			HX_STACK_LINE(233)
			t->destroy();
		}
		HX_STACK_LINE(234)
		t->active = false;
		HX_STACK_LINE(235)
		return t;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBasic_obj,removeTween,return )

::org::flixel::tweens::FlxTween FlxBasic_obj::addTween( ::org::flixel::tweens::FlxTween t,hx::Null< bool >  __o_start){
bool start = __o_start.Default(false);
	HX_STACK_PUSH("FlxBasic::addTween","org/flixel/FlxBasic.hx",191);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(start,"start");
{
		HX_STACK_LINE(192)
		Dynamic ft = t;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(193)
		if (((ft->__Field(HX_CSTRING("_parent"),true) != null()))){
			HX_STACK_LINE(194)
			hx::Throw (HX_CSTRING("Cannot add a FlxTween object more than once."));
		}
		HX_STACK_LINE(197)
		ft->__FieldRef(HX_CSTRING("_parent")) = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(198)
		ft->__FieldRef(HX_CSTRING("_next")) = this->_tween;
		HX_STACK_LINE(199)
		Dynamic friendTween = this->_tween;		HX_STACK_VAR(friendTween,"friendTween");
		HX_STACK_LINE(200)
		if (((this->_tween != null()))){
			HX_STACK_LINE(201)
			friendTween->__FieldRef(HX_CSTRING("_prev")) = t;
		}
		HX_STACK_LINE(204)
		this->_tween = t;
		HX_STACK_LINE(205)
		if ((start)){
			HX_STACK_LINE(206)
			this->_tween->start();
		}
		HX_STACK_LINE(209)
		return t;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBasic_obj,addTween,return )

::String FlxBasic_obj::toString( ){
	HX_STACK_PUSH("FlxBasic::toString","org/flixel/FlxBasic.hx",186);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::String Block( ::org::flixel::FlxBasic_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/FlxBasic.hx",187);
			{
				HX_STACK_LINE(187)
				::String s = ::Type_obj::getClassName(::Type_obj::getClass(__this));		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(187)
				if (((s != null()))){
					HX_STACK_LINE(187)
					s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
					HX_STACK_LINE(187)
					s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
				}
				HX_STACK_LINE(187)
				return s;
			}
			return null();
		}
	};
	HX_STACK_LINE(186)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,toString,return )

Void FlxBasic_obj::revive( ){
{
		HX_STACK_PUSH("FlxBasic::revive","org/flixel/FlxBasic.hx",177);
		HX_STACK_THIS(this);
		HX_STACK_LINE(178)
		this->alive = true;
		HX_STACK_LINE(179)
		this->exists = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,revive,(void))

Void FlxBasic_obj::kill( ){
{
		HX_STACK_PUSH("FlxBasic::kill","org/flixel/FlxBasic.hx",167);
		HX_STACK_THIS(this);
		HX_STACK_LINE(168)
		this->alive = false;
		HX_STACK_LINE(169)
		this->exists = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,kill,(void))

Void FlxBasic_obj::drawDebugOnCamera( ::org::flixel::FlxCamera Camera){
{
		HX_STACK_PUSH("FlxBasic::drawDebugOnCamera","org/flixel/FlxBasic.hx",156);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Camera,"Camera");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,drawDebugOnCamera,(void))

Void FlxBasic_obj::drawDebug( ){
{
		HX_STACK_PUSH("FlxBasic::drawDebug","org/flixel/FlxBasic.hx",135);
		HX_STACK_THIS(this);
		HX_STACK_LINE(135)
		if ((!(this->ignoreDrawDebug))){
			HX_STACK_LINE(138)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(139)
			if (((this->cameras == null()))){
				HX_STACK_LINE(140)
				this->cameras = ::org::flixel::FlxG_obj::cameras;
			}
			HX_STACK_LINE(143)
			int l = this->cameras->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(144)
			while(((i < l))){
				HX_STACK_LINE(145)
				this->drawDebugOnCamera(this->cameras->__get((i)++).StaticCast< ::org::flixel::FlxCamera >());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,drawDebug,(void))

Void FlxBasic_obj::draw( ){
{
		HX_STACK_PUSH("FlxBasic::draw","org/flixel/FlxBasic.hx",118);
		HX_STACK_THIS(this);
		HX_STACK_LINE(119)
		if (((this->cameras == null()))){
			HX_STACK_LINE(120)
			this->cameras = ::org::flixel::FlxG_obj::cameras;
		}
		HX_STACK_LINE(123)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(124)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(125)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(126)
		while(((i < l))){
			HX_STACK_LINE(128)
			camera = this->cameras->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
			HX_STACK_LINE(129)
			(::org::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,draw,(void))

Void FlxBasic_obj::update( ){
{
		HX_STACK_PUSH("FlxBasic::update","org/flixel/FlxBasic.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_LINE(109)
		(::org::flixel::FlxBasic_obj::_ACTIVECOUNT)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,update,(void))

Void FlxBasic_obj::destroy( ){
{
		HX_STACK_PUSH("FlxBasic::destroy","org/flixel/FlxBasic.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_LINE(92)
		if (((bool(this->autoClear) && bool(this->get_hasTween())))){
			HX_STACK_LINE(94)
			this->clearTweens(true);
			HX_STACK_LINE(95)
			this->_tween = null();
		}
		HX_STACK_LINE(98)
		this->_framesData = null();
		HX_STACK_LINE(99)
		this->_bitmapDataKey = null();
		HX_STACK_LINE(100)
		this->_atlas = null();
		HX_STACK_LINE(101)
		this->_node = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,destroy,(void))

int FlxBasic_obj::_ACTIVECOUNT;

int FlxBasic_obj::_VISIBLECOUNT;


FlxBasic_obj::FlxBasic_obj()
{
}

void FlxBasic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBasic);
	HX_MARK_MEMBER_NAME(bitmapDataKey,"bitmapDataKey");
	HX_MARK_MEMBER_NAME(_textureData,"_textureData");
	HX_MARK_MEMBER_NAME(_node,"_node");
	HX_MARK_MEMBER_NAME(_atlas,"_atlas");
	HX_MARK_MEMBER_NAME(_framesData,"_framesData");
	HX_MARK_MEMBER_NAME(_bitmapDataKey,"_bitmapDataKey");
	HX_MARK_MEMBER_NAME(_tween,"_tween");
	HX_MARK_MEMBER_NAME(autoClear,"autoClear");
	HX_MARK_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_MARK_MEMBER_NAME(cameras,"cameras");
	HX_MARK_MEMBER_NAME(alive,"alive");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_END_CLASS();
}

void FlxBasic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapDataKey,"bitmapDataKey");
	HX_VISIT_MEMBER_NAME(_textureData,"_textureData");
	HX_VISIT_MEMBER_NAME(_node,"_node");
	HX_VISIT_MEMBER_NAME(_atlas,"_atlas");
	HX_VISIT_MEMBER_NAME(_framesData,"_framesData");
	HX_VISIT_MEMBER_NAME(_bitmapDataKey,"_bitmapDataKey");
	HX_VISIT_MEMBER_NAME(_tween,"_tween");
	HX_VISIT_MEMBER_NAME(autoClear,"autoClear");
	HX_VISIT_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_VISIT_MEMBER_NAME(cameras,"cameras");
	HX_VISIT_MEMBER_NAME(alive,"alive");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(exists,"exists");
	HX_VISIT_MEMBER_NAME(ID,"ID");
}

Dynamic FlxBasic_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"atlas") ) { return get_atlas(); }
		if (HX_FIELD_EQ(inName,"_node") ) { return _node; }
		if (HX_FIELD_EQ(inName,"alive") ) { return alive; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_atlas") ) { return _atlas; }
		if (HX_FIELD_EQ(inName,"_tween") ) { return _tween; }
		if (HX_FIELD_EQ(inName,"revive") ) { return revive_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"cameras") ) { return cameras; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAtlas") ) { return getAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"hasTween") ) { return get_hasTween(); }
		if (HX_FIELD_EQ(inName,"addTween") ) { return addTween_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_atlas") ) { return set_atlas_dyn(); }
		if (HX_FIELD_EQ(inName,"get_atlas") ) { return get_atlas_dyn(); }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"autoClear") ) { return autoClear; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_framesData") ) { return _framesData; }
		if (HX_FIELD_EQ(inName,"clearTweens") ) { return clearTweens_dyn(); }
		if (HX_FIELD_EQ(inName,"removeTween") ) { return removeTween_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ACTIVECOUNT") ) { return _ACTIVECOUNT; }
		if (HX_FIELD_EQ(inName,"_textureData") ) { return _textureData; }
		if (HX_FIELD_EQ(inName,"get_hasTween") ) { return get_hasTween_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTweens") ) { return updateTweens_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_VISIBLECOUNT") ) { return _VISIBLECOUNT; }
		if (HX_FIELD_EQ(inName,"bitmapDataKey") ) { return inCallProp ? get_bitmapDataKey() : bitmapDataKey; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_bitmapDataKey") ) { return _bitmapDataKey; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAtlasInfo") ) { return updateAtlasInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { return ignoreDrawDebug; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_bitmapDataKey") ) { return get_bitmapDataKey_dyn(); }
		if (HX_FIELD_EQ(inName,"drawDebugOnCamera") ) { return drawDebugOnCamera_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBasic_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"atlas") ) { return set_atlas(inValue); }
		if (HX_FIELD_EQ(inName,"_node") ) { _node=inValue.Cast< ::org::flixel::system::layer::Node >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alive") ) { alive=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_atlas") ) { _atlas=inValue.Cast< ::org::flixel::system::layer::Atlas >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tween") ) { _tween=inValue.Cast< ::org::flixel::tweens::FlxTween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exists") ) { exists=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cameras") ) { cameras=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoClear") ) { autoClear=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_framesData") ) { _framesData=inValue.Cast< ::org::flixel::system::layer::frames::FlxSpriteFrames >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ACTIVECOUNT") ) { _ACTIVECOUNT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textureData") ) { _textureData=inValue.Cast< ::org::flixel::plugin::texturepacker::TexturePackerData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_VISIBLECOUNT") ) { _VISIBLECOUNT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitmapDataKey") ) { bitmapDataKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_bitmapDataKey") ) { _bitmapDataKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { ignoreDrawDebug=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBasic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmapDataKey"));
	outFields->push(HX_CSTRING("atlas"));
	outFields->push(HX_CSTRING("_textureData"));
	outFields->push(HX_CSTRING("_node"));
	outFields->push(HX_CSTRING("_atlas"));
	outFields->push(HX_CSTRING("_framesData"));
	outFields->push(HX_CSTRING("_bitmapDataKey"));
	outFields->push(HX_CSTRING("_tween"));
	outFields->push(HX_CSTRING("hasTween"));
	outFields->push(HX_CSTRING("autoClear"));
	outFields->push(HX_CSTRING("ignoreDrawDebug"));
	outFields->push(HX_CSTRING("cameras"));
	outFields->push(HX_CSTRING("alive"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("exists"));
	outFields->push(HX_CSTRING("ID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ACTIVECOUNT"),
	HX_CSTRING("_VISIBLECOUNT"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("getAtlas"),
	HX_CSTRING("updateAtlasInfo"),
	HX_CSTRING("get_bitmapDataKey"),
	HX_CSTRING("bitmapDataKey"),
	HX_CSTRING("set_atlas"),
	HX_CSTRING("get_atlas"),
	HX_CSTRING("_textureData"),
	HX_CSTRING("_node"),
	HX_CSTRING("_atlas"),
	HX_CSTRING("_framesData"),
	HX_CSTRING("_bitmapDataKey"),
	HX_CSTRING("_tween"),
	HX_CSTRING("get_hasTween"),
	HX_CSTRING("updateTweens"),
	HX_CSTRING("clearTweens"),
	HX_CSTRING("removeTween"),
	HX_CSTRING("addTween"),
	HX_CSTRING("toString"),
	HX_CSTRING("revive"),
	HX_CSTRING("kill"),
	HX_CSTRING("drawDebugOnCamera"),
	HX_CSTRING("drawDebug"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("autoClear"),
	HX_CSTRING("ignoreDrawDebug"),
	HX_CSTRING("cameras"),
	HX_CSTRING("alive"),
	HX_CSTRING("visible"),
	HX_CSTRING("active"),
	HX_CSTRING("exists"),
	HX_CSTRING("ID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBasic_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxBasic_obj::_ACTIVECOUNT,"_ACTIVECOUNT");
	HX_MARK_MEMBER_NAME(FlxBasic_obj::_VISIBLECOUNT,"_VISIBLECOUNT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBasic_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxBasic_obj::_ACTIVECOUNT,"_ACTIVECOUNT");
	HX_VISIT_MEMBER_NAME(FlxBasic_obj::_VISIBLECOUNT,"_VISIBLECOUNT");
};

Class FlxBasic_obj::__mClass;

void FlxBasic_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxBasic"), hx::TCanCast< FlxBasic_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxBasic_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
