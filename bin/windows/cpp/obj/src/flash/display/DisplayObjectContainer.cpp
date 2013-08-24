#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_flash_errors_ArgumentError
#include <flash/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_errors_RangeError
#include <flash/errors/RangeError.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
namespace flash{
namespace display{

Void DisplayObjectContainer_obj::__construct(Dynamic handle,::String type)
{
HX_STACK_PUSH("DisplayObjectContainer::new","flash/display/DisplayObjectContainer.hx",21);
{
	HX_STACK_LINE(23)
	super::__construct(handle,type);
	HX_STACK_LINE(24)
	this->__children = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new(Dynamic handle,::String type)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct(handle,type);
	return result;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool DisplayObjectContainer_obj::set_tabChildren( bool value){
	HX_STACK_PUSH("DisplayObjectContainer::set_tabChildren","flash/display/DisplayObjectContainer.hx",492);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(492)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_tabChildren,return )

bool DisplayObjectContainer_obj::get_tabChildren( ){
	HX_STACK_PUSH("DisplayObjectContainer::get_tabChildren","flash/display/DisplayObjectContainer.hx",491);
	HX_STACK_THIS(this);
	HX_STACK_LINE(491)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_tabChildren,return )

int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_PUSH("DisplayObjectContainer::get_numChildren","flash/display/DisplayObjectContainer.hx",490);
	HX_STACK_THIS(this);
	HX_STACK_LINE(490)
	return this->__children->length;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )

bool DisplayObjectContainer_obj::set_mouseChildren( bool value){
	HX_STACK_PUSH("DisplayObjectContainer::set_mouseChildren","flash/display/DisplayObjectContainer.hx",482);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(484)
	::flash::display::DisplayObjectContainer_obj::nme_doc_set_mouse_children(this->__handle,value);
	HX_STACK_LINE(485)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_mouseChildren,return )

bool DisplayObjectContainer_obj::get_mouseChildren( ){
	HX_STACK_PUSH("DisplayObjectContainer::get_mouseChildren","flash/display/DisplayObjectContainer.hx",481);
	HX_STACK_THIS(this);
	HX_STACK_LINE(481)
	return ::flash::display::DisplayObjectContainer_obj::nme_doc_get_mouse_children(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_mouseChildren,return )

Void DisplayObjectContainer_obj::__swapChildrenAt( int index1,int index2){
{
		HX_STACK_PUSH("DisplayObjectContainer::__swapChildrenAt","flash/display/DisplayObjectContainer.hx",454);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index1,"index1");
		HX_STACK_ARG(index2,"index2");
		HX_STACK_LINE(456)
		if (((bool((bool((bool((index1 < (int)0)) || bool((index2 < (int)0)))) || bool((index1 > this->__children->length)))) || bool((index2 > this->__children->length))))){
			HX_STACK_LINE(456)
			hx::Throw (::flash::errors::RangeError_obj::__new(HX_CSTRING("swapChildrenAt : index out of bounds")));
		}
		HX_STACK_LINE(462)
		if (((index1 != index2))){
			HX_STACK_LINE(464)
			::flash::display::DisplayObject temp = this->__children->__get(index1).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(465)
			this->__children[index1] = this->__children->__get(index2).StaticCast< ::flash::display::DisplayObject >();
			HX_STACK_LINE(466)
			this->__children[index2] = temp;
			HX_STACK_LINE(467)
			::flash::display::DisplayObjectContainer_obj::nme_doc_swap_children(this->__handle,index1,index2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,__swapChildrenAt,(void))

Void DisplayObjectContainer_obj::__setChildIndex( ::flash::display::DisplayObject child,int index){
{
		HX_STACK_PUSH("DisplayObjectContainer::__setChildIndex","flash/display/DisplayObjectContainer.hx",376);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(378)
		if (((index > this->__children->length))){
			HX_STACK_LINE(378)
			hx::Throw ((HX_CSTRING("Invalid index position ") + index));
		}
		HX_STACK_LINE(384)
		int firstIndex = this->__getChildIndex(child);		HX_STACK_VAR(firstIndex,"firstIndex");
		HX_STACK_LINE(386)
		if (((firstIndex < (int)0))){
			HX_STACK_LINE(388)
			::String msg = ((HX_CSTRING("setChildIndex : object ") + child->toString()) + HX_CSTRING(" not found."));		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(390)
			if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(392)
				int actualIndex = (int)-1;		HX_STACK_VAR(actualIndex,"actualIndex");
				HX_STACK_LINE(394)
				{
					HX_STACK_LINE(394)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->__children->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(394)
					while(((_g1 < _g))){
						HX_STACK_LINE(394)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(396)
						if (((this->__children->__get(i).StaticCast< ::flash::display::DisplayObject >() == child))){
							HX_STACK_LINE(398)
							actualIndex = i;
							HX_STACK_LINE(399)
							break;
						}
					}
				}
				HX_STACK_LINE(405)
				if (((actualIndex != (int)-1))){
					HX_STACK_LINE(405)
					hx::AddEq(msg,(HX_CSTRING("Internal error: Real child index was ") + ::Std_obj::string(actualIndex)));
				}
				else{
					HX_STACK_LINE(409)
					hx::AddEq(msg,HX_CSTRING("Internal error: Child was not in __children array!"));
				}
			}
			HX_STACK_LINE(417)
			hx::Throw (msg);
		}
		HX_STACK_LINE(421)
		::flash::display::DisplayObjectContainer_obj::nme_doc_set_child_index(this->__handle,child->__handle,index);
		HX_STACK_LINE(423)
		if (((index < firstIndex))){
			HX_STACK_LINE(425)
			int i = firstIndex;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(427)
			while(((i > index))){
				HX_STACK_LINE(429)
				this->__children[i] = this->__children->__get((i - (int)1)).StaticCast< ::flash::display::DisplayObject >();
				HX_STACK_LINE(430)
				(i)--;
			}
			HX_STACK_LINE(434)
			this->__children[index] = child;
		}
		else{
			HX_STACK_LINE(436)
			if (((firstIndex < index))){
				HX_STACK_LINE(438)
				int i = firstIndex;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(440)
				while(((i < index))){
					HX_STACK_LINE(442)
					this->__children[i] = this->__children->__get((i + (int)1)).StaticCast< ::flash::display::DisplayObject >();
					HX_STACK_LINE(443)
					(i)++;
				}
				HX_STACK_LINE(447)
				this->__children[index] = child;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,__setChildIndex,(void))

Void DisplayObjectContainer_obj::__removeChildFromArray( ::flash::display::DisplayObject child){
{
		HX_STACK_PUSH("DisplayObjectContainer::__removeChildFromArray","flash/display/DisplayObjectContainer.hx",362);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_LINE(364)
		int i = this->__getChildIndex(child);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(366)
		if (((i >= (int)0))){
			HX_STACK_LINE(368)
			::flash::display::DisplayObjectContainer_obj::nme_doc_remove_child(this->__handle,i);
			HX_STACK_LINE(369)
			this->__children->splice(i,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,__removeChildFromArray,(void))

Void DisplayObjectContainer_obj::__onRemoved( ::flash::display::DisplayObject object,bool wasOnStage){
{
		HX_STACK_PUSH("DisplayObjectContainer::__onRemoved","flash/display/DisplayObjectContainer.hx",349);
		HX_STACK_THIS(this);
		HX_STACK_ARG(object,"object");
		HX_STACK_ARG(wasOnStage,"wasOnStage");
		HX_STACK_LINE(351)
		this->super::__onRemoved(object,wasOnStage);
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(353)
			while(((_g < _g1->length))){
				HX_STACK_LINE(353)
				::flash::display::DisplayObject child = _g1->__get(_g).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(353)
				++(_g);
				HX_STACK_LINE(355)
				child->__onRemoved(object,wasOnStage);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__onAdded( ::flash::display::DisplayObject object,bool isOnStage){
{
		HX_STACK_PUSH("DisplayObjectContainer::__onAdded","flash/display/DisplayObjectContainer.hx",336);
		HX_STACK_THIS(this);
		HX_STACK_ARG(object,"object");
		HX_STACK_ARG(isOnStage,"isOnStage");
		HX_STACK_LINE(338)
		this->super::__onAdded(object,isOnStage);
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(340)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(340)
			while(((_g < _g1->length))){
				HX_STACK_LINE(340)
				::flash::display::DisplayObject child = _g1->__get(_g).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(340)
				++(_g);
				HX_STACK_LINE(342)
				child->__onAdded(object,isOnStage);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getObjectsUnderPoint( ::flash::geom::Point point,Array< ::Dynamic > result){
{
		HX_STACK_PUSH("DisplayObjectContainer::__getObjectsUnderPoint","flash/display/DisplayObjectContainer.hx",323);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(result,"result");
		HX_STACK_LINE(325)
		this->super::__getObjectsUnderPoint(point,result);
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(327)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(327)
			while(((_g < _g1->length))){
				HX_STACK_LINE(327)
				::flash::display::DisplayObject child = _g1->__get(_g).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(327)
				++(_g);
				HX_STACK_LINE(329)
				child->__getObjectsUnderPoint(point,result);
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::__getChildIndex( ::flash::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::__getChildIndex","flash/display/DisplayObjectContainer.hx",306);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(308)
	{
		HX_STACK_LINE(308)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->__children->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(308)
		while(((_g1 < _g))){
			HX_STACK_LINE(308)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(310)
			if (((this->__children->__get(i).StaticCast< ::flash::display::DisplayObject >() == child))){
				HX_STACK_LINE(310)
				return i;
			}
		}
	}
	HX_STACK_LINE(318)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,__getChildIndex,return )

::flash::display::DisplayObject DisplayObjectContainer_obj::__findByID( int id){
	HX_STACK_PUSH("DisplayObjectContainer::__findByID","flash/display/DisplayObjectContainer.hx",279);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(281)
	if (((this->__id == id))){
		HX_STACK_LINE(281)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(287)
	::flash::display::DisplayObject found;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(289)
	{
		HX_STACK_LINE(289)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(289)
		while(((_g < _g1->length))){
			HX_STACK_LINE(289)
			::flash::display::DisplayObject child = _g1->__get(_g).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(289)
			++(_g);
			HX_STACK_LINE(291)
			found = child->__findByID(id);
			HX_STACK_LINE(293)
			if (((found != null()))){
				HX_STACK_LINE(293)
				return found;
			}
		}
	}
	HX_STACK_LINE(301)
	return this->super::__findByID(id);
}


bool DisplayObjectContainer_obj::__contains( ::flash::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::__contains","flash/display/DisplayObjectContainer.hx",250);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(252)
	if (((child == null()))){
		HX_STACK_LINE(252)
		return false;
	}
	HX_STACK_LINE(258)
	if (((hx::ObjectPtr<OBJ_>(this) == child))){
		HX_STACK_LINE(258)
		return true;
	}
	HX_STACK_LINE(264)
	{
		HX_STACK_LINE(264)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(264)
		while(((_g < _g1->length))){
			HX_STACK_LINE(264)
			::flash::display::DisplayObject c = _g1->__get(_g).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(264)
			++(_g);
			HX_STACK_LINE(266)
			if (((bool((c == child)) || bool(c->__contains(child))))){
				HX_STACK_LINE(266)
				return true;
			}
		}
	}
	HX_STACK_LINE(274)
	return false;
}


Void DisplayObjectContainer_obj::__broadcast( ::flash::events::Event event){
{
		HX_STACK_PUSH("DisplayObjectContainer::__broadcast","flash/display/DisplayObjectContainer.hx",210);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(212)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(214)
		if (((this->__children->length > (int)0))){
			HX_STACK_LINE(216)
			::flash::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(218)
			while((true)){
				HX_STACK_LINE(220)
				child = this->__children->__get(i).StaticCast< ::flash::display::DisplayObject >();
				HX_STACK_LINE(221)
				child->__broadcast(event);
				HX_STACK_LINE(223)
				if (((i >= this->__children->length))){
					HX_STACK_LINE(223)
					break;
				}
				HX_STACK_LINE(229)
				if (((this->__children->__get(i).StaticCast< ::flash::display::DisplayObject >() == child))){
					HX_STACK_LINE(231)
					(i)++;
					HX_STACK_LINE(233)
					if (((i >= this->__children->length))){
						HX_STACK_LINE(233)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(245)
		this->super::__broadcast(event);
	}
return null();
}


Void DisplayObjectContainer_obj::__addChild( ::flash::display::DisplayObject child){
{
		HX_STACK_PUSH("DisplayObjectContainer::__addChild","flash/display/DisplayObjectContainer.hx",187);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_LINE(189)
		if (((child == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(189)
			hx::Throw (HX_CSTRING("Adding to self"));
		}
		HX_STACK_LINE(195)
		if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(195)
			this->setChildIndex(child,(this->__children->length - (int)1));
		}
		else{
			HX_STACK_LINE(201)
			child->__setParent(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(202)
			this->__children->push(child);
			HX_STACK_LINE(203)
			::flash::display::DisplayObjectContainer_obj::nme_doc_add_child(this->__handle,child->__handle);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,__addChild,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int index1,int index2){
{
		HX_STACK_PUSH("DisplayObjectContainer::swapChildrenAt","flash/display/DisplayObjectContainer.hx",180);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index1,"index1");
		HX_STACK_ARG(index2,"index2");
		HX_STACK_LINE(182)
		if (((bool((bool((bool((index1 < (int)0)) || bool((index2 < (int)0)))) || bool((index1 > this->__children->length)))) || bool((index2 > this->__children->length))))){
			HX_STACK_LINE(182)
			hx::Throw (::flash::errors::RangeError_obj::__new(HX_CSTRING("swapChildrenAt : index out of bounds")));
		}
		HX_STACK_LINE(182)
		if (((index1 != index2))){
			HX_STACK_LINE(182)
			::flash::display::DisplayObject temp = this->__children->__get(index1).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(182)
			this->__children[index1] = this->__children->__get(index2).StaticCast< ::flash::display::DisplayObject >();
			HX_STACK_LINE(182)
			this->__children[index2] = temp;
			HX_STACK_LINE(182)
			::flash::display::DisplayObjectContainer_obj::nme_doc_swap_children(this->__handle,index1,index2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

Void DisplayObjectContainer_obj::swapChildren( ::flash::display::DisplayObject child1,::flash::display::DisplayObject child2){
{
		HX_STACK_PUSH("DisplayObjectContainer::swapChildren","flash/display/DisplayObjectContainer.hx",164);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child1,"child1");
		HX_STACK_ARG(child2,"child2");
		HX_STACK_LINE(166)
		int index1 = this->__getChildIndex(child1);		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(167)
		int index2 = this->__getChildIndex(child2);		HX_STACK_VAR(index2,"index2");
		HX_STACK_LINE(169)
		if (((bool((index1 < (int)0)) || bool((index2 < (int)0))))){
			HX_STACK_LINE(169)
			hx::Throw (HX_CSTRING("swapChildren:Could not find children"));
		}
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			if (((bool((bool((bool((index1 < (int)0)) || bool((index2 < (int)0)))) || bool((index1 > this->__children->length)))) || bool((index2 > this->__children->length))))){
				HX_STACK_LINE(175)
				hx::Throw (::flash::errors::RangeError_obj::__new(HX_CSTRING("swapChildrenAt : index out of bounds")));
			}
			HX_STACK_LINE(175)
			if (((index1 != index2))){
				HX_STACK_LINE(175)
				::flash::display::DisplayObject temp = this->__children->__get(index1).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(175)
				this->__children[index1] = this->__children->__get(index2).StaticCast< ::flash::display::DisplayObject >();
				HX_STACK_LINE(175)
				this->__children[index2] = temp;
				HX_STACK_LINE(175)
				::flash::display::DisplayObjectContainer_obj::nme_doc_swap_children(this->__handle,index1,index2);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::setChildIndex( ::flash::display::DisplayObject child,int index){
{
		HX_STACK_PUSH("DisplayObjectContainer::setChildIndex","flash/display/DisplayObjectContainer.hx",157);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(159)
		if (((index > this->__children->length))){
			HX_STACK_LINE(159)
			hx::Throw ((HX_CSTRING("Invalid index position ") + index));
		}
		HX_STACK_LINE(159)
		int firstIndex = this->__getChildIndex(child);		HX_STACK_VAR(firstIndex,"firstIndex");
		HX_STACK_LINE(159)
		if (((firstIndex < (int)0))){
			HX_STACK_LINE(159)
			::String msg = ((HX_CSTRING("setChildIndex : object ") + child->toString()) + HX_CSTRING(" not found."));		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(159)
			if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(159)
				int actualIndex = (int)-1;		HX_STACK_VAR(actualIndex,"actualIndex");
				HX_STACK_LINE(159)
				{
					HX_STACK_LINE(159)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->__children->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(159)
					while(((_g1 < _g))){
						HX_STACK_LINE(159)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(159)
						if (((this->__children->__get(i).StaticCast< ::flash::display::DisplayObject >() == child))){
							HX_STACK_LINE(159)
							actualIndex = i;
							HX_STACK_LINE(159)
							break;
						}
					}
				}
				HX_STACK_LINE(159)
				if (((actualIndex != (int)-1))){
					HX_STACK_LINE(159)
					hx::AddEq(msg,(HX_CSTRING("Internal error: Real child index was ") + ::Std_obj::string(actualIndex)));
				}
				else{
					HX_STACK_LINE(159)
					hx::AddEq(msg,HX_CSTRING("Internal error: Child was not in __children array!"));
				}
			}
			HX_STACK_LINE(159)
			hx::Throw (msg);
		}
		HX_STACK_LINE(159)
		::flash::display::DisplayObjectContainer_obj::nme_doc_set_child_index(this->__handle,child->__handle,index);
		HX_STACK_LINE(159)
		if (((index < firstIndex))){
			HX_STACK_LINE(159)
			int i = firstIndex;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(159)
			while(((i > index))){
				HX_STACK_LINE(159)
				this->__children[i] = this->__children->__get((i - (int)1)).StaticCast< ::flash::display::DisplayObject >();
				HX_STACK_LINE(159)
				(i)--;
			}
			HX_STACK_LINE(159)
			this->__children[index] = child;
		}
		else{
			HX_STACK_LINE(159)
			if (((firstIndex < index))){
				HX_STACK_LINE(159)
				int i = firstIndex;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(159)
				while(((i < index))){
					HX_STACK_LINE(159)
					this->__children[i] = this->__children->__get((i + (int)1)).StaticCast< ::flash::display::DisplayObject >();
					HX_STACK_LINE(159)
					(i)++;
				}
				HX_STACK_LINE(159)
				this->__children[index] = child;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

::flash::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_PUSH("DisplayObjectContainer::removeChildAt","flash/display/DisplayObjectContainer.hx",142);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(144)
	if (((bool((index >= (int)0)) && bool((index < this->__children->length))))){
		HX_STACK_LINE(146)
		::flash::display::DisplayObject result = this->__children->__get(index).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(147)
		result->__setParent(null());
		HX_STACK_LINE(148)
		return result;
	}
	HX_STACK_LINE(152)
	hx::Throw (::flash::errors::ArgumentError_obj::__new(HX_CSTRING("The supplied DisplayObject must be a child of the caller."),null()));
	HX_STACK_LINE(152)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

::flash::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::flash::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::removeChild","flash/display/DisplayObjectContainer.hx",126);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(128)
	int index = this->__getChildIndex(child);		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(130)
	if (((index >= (int)0))){
		HX_STACK_LINE(132)
		child->__setParent(null());
		HX_STACK_LINE(133)
		return child;
	}
	HX_STACK_LINE(137)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::flash::geom::Point point){
	HX_STACK_PUSH("DisplayObjectContainer::getObjectsUnderPoint","flash/display/DisplayObjectContainer.hx",98);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(101)
	bool onStage = (this->get_stage() != null());		HX_STACK_VAR(onStage,"onStage");
	HX_STACK_LINE(102)
	bool cacheVisible = this->get_visible();		HX_STACK_VAR(cacheVisible,"cacheVisible");
	HX_STACK_LINE(104)
	if ((!(onStage))){
		HX_STACK_LINE(106)
		this->set_visible(false);
		HX_STACK_LINE(107)
		::flash::Lib_obj::get_stage()->addChild(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(111)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(112)
	this->__getObjectsUnderPoint(point,result);
	HX_STACK_LINE(114)
	if ((!(onStage))){
		HX_STACK_LINE(116)
		::flash::Lib_obj::get_stage()->removeChild(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(117)
		this->set_visible(cacheVisible);
	}
	HX_STACK_LINE(121)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

int DisplayObjectContainer_obj::getChildIndex( ::flash::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::getChildIndex","flash/display/DisplayObjectContainer.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(91)
	return this->__getChildIndex(child);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

::flash::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_PUSH("DisplayObjectContainer::getChildByName","flash/display/DisplayObjectContainer.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		while(((_g < _g1->length))){
			HX_STACK_LINE(76)
			::flash::display::DisplayObject child = _g1->__get(_g).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(76)
			++(_g);
			HX_STACK_LINE(78)
			if (((name == child->get_name()))){
				HX_STACK_LINE(78)
				return child;
			}
		}
	}
	HX_STACK_LINE(86)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

::flash::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_PUSH("DisplayObjectContainer::getChildAt","flash/display/DisplayObjectContainer.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(62)
	if (((bool((index >= (int)0)) && bool((index < this->__children->length))))){
		HX_STACK_LINE(62)
		return this->__children->__get(index).StaticCast< ::flash::display::DisplayObject >();
	}
	HX_STACK_LINE(68)
	hx::Throw (::flash::errors::RangeError_obj::__new((((HX_CSTRING("getChildAt : index out of bounds ") + index) + HX_CSTRING("/")) + this->__children->length)));
	HX_STACK_LINE(69)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

bool DisplayObjectContainer_obj::contains( ::flash::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::contains","flash/display/DisplayObjectContainer.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(53)
	return this->__contains(child);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::flash::geom::Point point){
	HX_STACK_PUSH("DisplayObjectContainer::areInaccessibleObjectsUnderPoint","flash/display/DisplayObjectContainer.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(46)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

::flash::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::flash::display::DisplayObject child,int index){
	HX_STACK_PUSH("DisplayObjectContainer::addChildAt","flash/display/DisplayObjectContainer.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		if (((child == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(39)
			hx::Throw (HX_CSTRING("Adding to self"));
		}
		HX_STACK_LINE(39)
		if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(39)
			this->setChildIndex(child,(this->__children->length - (int)1));
		}
		else{
			HX_STACK_LINE(39)
			child->__setParent(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(39)
			this->__children->push(child);
			HX_STACK_LINE(39)
			::flash::display::DisplayObjectContainer_obj::nme_doc_add_child(this->__handle,child->__handle);
		}
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		if (((index > this->__children->length))){
			HX_STACK_LINE(40)
			hx::Throw ((HX_CSTRING("Invalid index position ") + index));
		}
		HX_STACK_LINE(40)
		int firstIndex = this->__getChildIndex(child);		HX_STACK_VAR(firstIndex,"firstIndex");
		HX_STACK_LINE(40)
		if (((firstIndex < (int)0))){
			HX_STACK_LINE(40)
			::String msg = ((HX_CSTRING("setChildIndex : object ") + child->toString()) + HX_CSTRING(" not found."));		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(40)
			if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(40)
				int actualIndex = (int)-1;		HX_STACK_VAR(actualIndex,"actualIndex");
				HX_STACK_LINE(40)
				{
					HX_STACK_LINE(40)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->__children->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(40)
					while(((_g1 < _g))){
						HX_STACK_LINE(40)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(40)
						if (((this->__children->__get(i).StaticCast< ::flash::display::DisplayObject >() == child))){
							HX_STACK_LINE(40)
							actualIndex = i;
							HX_STACK_LINE(40)
							break;
						}
					}
				}
				HX_STACK_LINE(40)
				if (((actualIndex != (int)-1))){
					HX_STACK_LINE(40)
					hx::AddEq(msg,(HX_CSTRING("Internal error: Real child index was ") + ::Std_obj::string(actualIndex)));
				}
				else{
					HX_STACK_LINE(40)
					hx::AddEq(msg,HX_CSTRING("Internal error: Child was not in __children array!"));
				}
			}
			HX_STACK_LINE(40)
			hx::Throw (msg);
		}
		HX_STACK_LINE(40)
		::flash::display::DisplayObjectContainer_obj::nme_doc_set_child_index(this->__handle,child->__handle,index);
		HX_STACK_LINE(40)
		if (((index < firstIndex))){
			HX_STACK_LINE(40)
			int i = firstIndex;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(40)
			while(((i > index))){
				HX_STACK_LINE(40)
				this->__children[i] = this->__children->__get((i - (int)1)).StaticCast< ::flash::display::DisplayObject >();
				HX_STACK_LINE(40)
				(i)--;
			}
			HX_STACK_LINE(40)
			this->__children[index] = child;
		}
		else{
			HX_STACK_LINE(40)
			if (((firstIndex < index))){
				HX_STACK_LINE(40)
				int i = firstIndex;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(40)
				while(((i < index))){
					HX_STACK_LINE(40)
					this->__children[i] = this->__children->__get((i + (int)1)).StaticCast< ::flash::display::DisplayObject >();
					HX_STACK_LINE(40)
					(i)++;
				}
				HX_STACK_LINE(40)
				this->__children[index] = child;
			}
		}
	}
	HX_STACK_LINE(41)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

::flash::display::DisplayObject DisplayObjectContainer_obj::addChild( ::flash::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::addChild","flash/display/DisplayObjectContainer.hx",29);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		if (((child == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(31)
			hx::Throw (HX_CSTRING("Adding to self"));
		}
		HX_STACK_LINE(31)
		if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(31)
			this->setChildIndex(child,(this->__children->length - (int)1));
		}
		else{
			HX_STACK_LINE(31)
			child->__setParent(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(31)
			this->__children->push(child);
			HX_STACK_LINE(31)
			::flash::display::DisplayObjectContainer_obj::nme_doc_add_child(this->__handle,child->__handle);
		}
	}
	HX_STACK_LINE(32)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

Dynamic DisplayObjectContainer_obj::nme_create_display_object_container;

Dynamic DisplayObjectContainer_obj::nme_doc_add_child;

Dynamic DisplayObjectContainer_obj::nme_doc_remove_child;

Dynamic DisplayObjectContainer_obj::nme_doc_set_child_index;

Dynamic DisplayObjectContainer_obj::nme_doc_get_mouse_children;

Dynamic DisplayObjectContainer_obj::nme_doc_set_mouse_children;

Dynamic DisplayObjectContainer_obj::nme_doc_swap_children;


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(__children,"__children");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__children,"__children");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__onAdded") ) { return __onAdded_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__findByID") ) { return __findByID_dyn(); }
		if (HX_FIELD_EQ(inName,"__contains") ) { return __contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__addChild") ) { return __addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__onRemoved") ) { return __onRemoved_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return get_tabChildren(); }
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp ? get_numChildren() : numChildren; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return get_mouseChildren(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_tabChildren") ) { return set_tabChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tabChildren") ) { return get_tabChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__setChildIndex") ) { return __setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"__getChildIndex") ) { return __getChildIndex_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__swapChildrenAt") ) { return __swapChildrenAt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_doc_add_child") ) { return nme_doc_add_child; }
		if (HX_FIELD_EQ(inName,"set_mouseChildren") ) { return set_mouseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseChildren") ) { return get_mouseChildren_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_doc_remove_child") ) { return nme_doc_remove_child; }
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_doc_swap_children") ) { return nme_doc_swap_children; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__removeChildFromArray") ) { return __removeChildFromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"__getObjectsUnderPoint") ) { return __getObjectsUnderPoint_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_doc_set_child_index") ) { return nme_doc_set_child_index; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_doc_get_mouse_children") ) { return nme_doc_get_mouse_children; }
		if (HX_FIELD_EQ(inName,"nme_doc_set_mouse_children") ) { return nme_doc_set_mouse_children; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_create_display_object_container") ) { return nme_create_display_object_container; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return set_tabChildren(inValue); }
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return set_mouseChildren(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_doc_add_child") ) { nme_doc_add_child=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_doc_remove_child") ) { nme_doc_remove_child=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_doc_swap_children") ) { nme_doc_swap_children=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_doc_set_child_index") ) { nme_doc_set_child_index=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_doc_get_mouse_children") ) { nme_doc_get_mouse_children=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_doc_set_mouse_children") ) { nme_doc_set_mouse_children=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_create_display_object_container") ) { nme_create_display_object_container=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__children"));
	outFields->push(HX_CSTRING("tabChildren"));
	outFields->push(HX_CSTRING("numChildren"));
	outFields->push(HX_CSTRING("mouseChildren"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_create_display_object_container"),
	HX_CSTRING("nme_doc_add_child"),
	HX_CSTRING("nme_doc_remove_child"),
	HX_CSTRING("nme_doc_set_child_index"),
	HX_CSTRING("nme_doc_get_mouse_children"),
	HX_CSTRING("nme_doc_set_mouse_children"),
	HX_CSTRING("nme_doc_swap_children"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_tabChildren"),
	HX_CSTRING("get_tabChildren"),
	HX_CSTRING("get_numChildren"),
	HX_CSTRING("set_mouseChildren"),
	HX_CSTRING("get_mouseChildren"),
	HX_CSTRING("__swapChildrenAt"),
	HX_CSTRING("__setChildIndex"),
	HX_CSTRING("__removeChildFromArray"),
	HX_CSTRING("__onRemoved"),
	HX_CSTRING("__onAdded"),
	HX_CSTRING("__getObjectsUnderPoint"),
	HX_CSTRING("__getChildIndex"),
	HX_CSTRING("__findByID"),
	HX_CSTRING("__contains"),
	HX_CSTRING("__broadcast"),
	HX_CSTRING("__addChild"),
	HX_CSTRING("swapChildrenAt"),
	HX_CSTRING("swapChildren"),
	HX_CSTRING("setChildIndex"),
	HX_CSTRING("removeChildAt"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("getObjectsUnderPoint"),
	HX_CSTRING("getChildIndex"),
	HX_CSTRING("getChildByName"),
	HX_CSTRING("getChildAt"),
	HX_CSTRING("contains"),
	HX_CSTRING("areInaccessibleObjectsUnderPoint"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("addChild"),
	HX_CSTRING("__children"),
	HX_CSTRING("numChildren"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_create_display_object_container,"nme_create_display_object_container");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_add_child,"nme_doc_add_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_remove_child,"nme_doc_remove_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_child_index,"nme_doc_set_child_index");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_get_mouse_children,"nme_doc_get_mouse_children");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_mouse_children,"nme_doc_set_mouse_children");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_swap_children,"nme_doc_swap_children");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_create_display_object_container,"nme_create_display_object_container");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_add_child,"nme_doc_add_child");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_remove_child,"nme_doc_remove_child");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_child_index,"nme_doc_set_child_index");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_get_mouse_children,"nme_doc_get_mouse_children");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_mouse_children,"nme_doc_set_mouse_children");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_swap_children,"nme_doc_swap_children");
};

Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display.DisplayObjectContainer"), hx::TCanCast< DisplayObjectContainer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DisplayObjectContainer_obj::__boot()
{
	nme_create_display_object_container= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_create_display_object_container"),(int)0);
	nme_doc_add_child= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_doc_add_child"),(int)2);
	nme_doc_remove_child= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_doc_remove_child"),(int)2);
	nme_doc_set_child_index= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_doc_set_child_index"),(int)3);
	nme_doc_get_mouse_children= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_doc_get_mouse_children"),(int)1);
	nme_doc_set_mouse_children= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_doc_set_mouse_children"),(int)2);
	nme_doc_swap_children= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_doc_swap_children"),(int)3);
}

} // end namespace flash
} // end namespace display
