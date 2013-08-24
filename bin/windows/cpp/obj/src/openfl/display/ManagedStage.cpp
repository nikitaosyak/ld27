#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_ManagedStage
#include <openfl/display/ManagedStage.h>
#endif
namespace openfl{
namespace display{

Void ManagedStage_obj::__construct(int width,int height,hx::Null< int >  __o_flags)
{
HX_STACK_PUSH("ManagedStage::new","openfl/display/ManagedStage.hx",42);
int flags = __o_flags.Default(0);
{
	HX_STACK_LINE(42)
	super::__construct(::openfl::display::ManagedStage_obj::nme_managed_stage_create(width,height,flags),width,height);
}
;
	return null();
}

ManagedStage_obj::~ManagedStage_obj() { }

Dynamic ManagedStage_obj::__CreateEmpty() { return  new ManagedStage_obj; }
hx::ObjectPtr< ManagedStage_obj > ManagedStage_obj::__new(int width,int height,hx::Null< int >  __o_flags)
{  hx::ObjectPtr< ManagedStage_obj > result = new ManagedStage_obj();
	result->__construct(width,height,__o_flags);
	return result;}

Dynamic ManagedStage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ManagedStage_obj > result = new ManagedStage_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ManagedStage_obj::__render( bool sendEnterFrame){
{
		HX_STACK_PUSH("ManagedStage::__render","openfl/display/ManagedStage.hx",103);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sendEnterFrame,"sendEnterFrame");
		HX_STACK_LINE(105)
		this->beginRender();
		HX_STACK_LINE(106)
		this->super::__render(sendEnterFrame);
		HX_STACK_LINE(107)
		this->endRender();
	}
return null();
}


Float ManagedStage_obj::__doProcessStageEvent( Dynamic event){
	HX_STACK_PUSH("ManagedStage::__doProcessStageEvent","openfl/display/ManagedStage.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_ARG(event,"event");
	HX_STACK_LINE(93)
	this->__pollTimers();
	HX_STACK_LINE(95)
	Float wake = this->super::__doProcessStageEvent(event);		HX_STACK_VAR(wake,"wake");
	HX_STACK_LINE(96)
	this->setNextWake(wake);
	HX_STACK_LINE(98)
	return wake;
}


HX_BEGIN_DEFAULT_FUNC(__default_setNextWake,ManagedStage_obj)
Void run(Float delay){
{
		HX_STACK_PUSH("ManagedStage::setNextWake","openfl/display/ManagedStage.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_ARG(delay,"delay");
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Void ManagedStage_obj::sendQuit( ){
{
		HX_STACK_PUSH("ManagedStage::sendQuit","openfl/display/ManagedStage.hx",77);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","openfl/display/ManagedStage.hx",79);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)10,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(77)
		this->pumpEvent(_Function_1_1::Block());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ManagedStage_obj,sendQuit,(void))

Void ManagedStage_obj::resize( int width,int height){
{
		HX_STACK_PUSH("ManagedStage::resize","openfl/display/ManagedStage.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		struct _Function_1_1{
			inline static Dynamic Block( int &width,int &height){
				HX_STACK_PUSH("*::closure","openfl/display/ManagedStage.hx",72);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					__result->Add(HX_CSTRING("x") , width,false);
					__result->Add(HX_CSTRING("y") , height,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(70)
		this->pumpEvent(_Function_1_1::Block(width,height));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ManagedStage_obj,resize,(void))

Void ManagedStage_obj::pumpEvent( Dynamic event){
{
		HX_STACK_PUSH("ManagedStage::pumpEvent","openfl/display/ManagedStage.hx",63);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(63)
		::openfl::display::ManagedStage_obj::nme_managed_stage_pump_event(this->__handle,event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ManagedStage_obj,pumpEvent,(void))

HX_BEGIN_DEFAULT_FUNC(__default_endRender,ManagedStage_obj)
Void run(){
{
		HX_STACK_PUSH("ManagedStage::endRender","openfl/display/ManagedStage.hx",56);
		HX_STACK_THIS(this);
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_beginRender,ManagedStage_obj)
Void run(){
{
		HX_STACK_PUSH("ManagedStage::beginRender","openfl/display/ManagedStage.hx",49);
		HX_STACK_THIS(this);
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Dynamic ManagedStage_obj::nme_managed_stage_create;

Dynamic ManagedStage_obj::nme_managed_stage_pump_event;


ManagedStage_obj::ManagedStage_obj()
{
	setNextWake = new __default_setNextWake(this);
	endRender = new __default_endRender(this);
	beginRender = new __default_beginRender(this);
}

void ManagedStage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ManagedStage);
	HX_MARK_MEMBER_NAME(setNextWake,"setNextWake");
	HX_MARK_MEMBER_NAME(endRender,"endRender");
	HX_MARK_MEMBER_NAME(beginRender,"beginRender");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ManagedStage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(setNextWake,"setNextWake");
	HX_VISIT_MEMBER_NAME(endRender,"endRender");
	HX_VISIT_MEMBER_NAME(beginRender,"beginRender");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ManagedStage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { return __render_dyn(); }
		if (HX_FIELD_EQ(inName,"sendQuit") ) { return sendQuit_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pumpEvent") ) { return pumpEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"endRender") ) { return endRender; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setNextWake") ) { return setNextWake; }
		if (HX_FIELD_EQ(inName,"beginRender") ) { return beginRender; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__doProcessStageEvent") ) { return __doProcessStageEvent_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_managed_stage_create") ) { return nme_managed_stage_create; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_managed_stage_pump_event") ) { return nme_managed_stage_pump_event; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ManagedStage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"endRender") ) { endRender=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setNextWake") ) { setNextWake=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"beginRender") ) { beginRender=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_managed_stage_create") ) { nme_managed_stage_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_managed_stage_pump_event") ) { nme_managed_stage_pump_event=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ManagedStage_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_managed_stage_create"),
	HX_CSTRING("nme_managed_stage_pump_event"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__render"),
	HX_CSTRING("__doProcessStageEvent"),
	HX_CSTRING("setNextWake"),
	HX_CSTRING("sendQuit"),
	HX_CSTRING("resize"),
	HX_CSTRING("pumpEvent"),
	HX_CSTRING("endRender"),
	HX_CSTRING("beginRender"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ManagedStage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::nme_managed_stage_create,"nme_managed_stage_create");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::nme_managed_stage_pump_event,"nme_managed_stage_pump_event");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::nme_managed_stage_create,"nme_managed_stage_create");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::nme_managed_stage_pump_event,"nme_managed_stage_pump_event");
};

Class ManagedStage_obj::__mClass;

void ManagedStage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.ManagedStage"), hx::TCanCast< ManagedStage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ManagedStage_obj::__boot()
{
	nme_managed_stage_create= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_managed_stage_create"),(int)3);
	nme_managed_stage_pump_event= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_managed_stage_pump_event"),(int)2);
}

} // end namespace openfl
} // end namespace display
