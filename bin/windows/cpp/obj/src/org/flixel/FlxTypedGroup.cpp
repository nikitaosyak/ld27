#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
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
#ifndef INCLUDED_org_flixel_system_layer_frames_FlxSpriteFrames
#include <org/flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_tweens_FlxTween
#include <org/flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxArray
#include <org/flixel/util/FlxArray.h>
#endif
namespace org{
namespace flixel{

Void FlxTypedGroup_obj::__construct(hx::Null< int >  __o_MaxSize)
{
HX_STACK_PUSH("FlxTypedGroup::new","org/flixel/FlxTypedGroup.hx",58);
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(59)
	super::__construct();
	HX_STACK_LINE(60)
	this->members = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(61)
	this->length = (int)0;
	HX_STACK_LINE(62)
	this->set_maxSize(::Std_obj::_int(::Math_obj::abs(MaxSize)));
	HX_STACK_LINE(63)
	this->_marker = (int)0;
	HX_STACK_LINE(64)
	this->_sortIndex = null();
	HX_STACK_LINE(65)
	this->autoReviveMembers = false;
}
;
	return null();
}

FlxTypedGroup_obj::~FlxTypedGroup_obj() { }

Dynamic FlxTypedGroup_obj::__CreateEmpty() { return  new FlxTypedGroup_obj; }
hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__new(hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxTypedGroup_obj > result = new FlxTypedGroup_obj();
	result->__construct(__o_MaxSize);
	return result;}

Dynamic FlxTypedGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedGroup_obj > result = new FlxTypedGroup_obj();
	result->__construct(inArgs[0]);
	return result;}

int FlxTypedGroup_obj::sortHandler( Dynamic Obj1,Dynamic Obj2){
	HX_STACK_PUSH("FlxTypedGroup::sortHandler","org/flixel/FlxTypedGroup.hx",712);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Obj1,"Obj1");
	HX_STACK_ARG(Obj2,"Obj2");
	HX_STACK_LINE(713)
	int prop1 = (  (((Obj1 == null()))) ? Dynamic(null()) : Dynamic(Obj1->__Field(this->_sortIndex,true)) );		HX_STACK_VAR(prop1,"prop1");
	HX_STACK_LINE(714)
	int prop2 = (  (((Obj2 == null()))) ? Dynamic(null()) : Dynamic(Obj2->__Field(this->_sortIndex,true)) );		HX_STACK_VAR(prop2,"prop2");
	HX_STACK_LINE(716)
	if (((prop1 < prop2))){
		HX_STACK_LINE(717)
		return this->_sortOrder;
	}
	else{
		HX_STACK_LINE(720)
		if (((prop1 > prop2))){
			HX_STACK_LINE(721)
			return -(this->_sortOrder);
		}
	}
	HX_STACK_LINE(724)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sortHandler,return )

Void FlxTypedGroup_obj::revive( ){
{
		HX_STACK_PUSH("FlxTypedGroup::revive","org/flixel/FlxTypedGroup.hx",688);
		HX_STACK_THIS(this);
		HX_STACK_LINE(689)
		this->super::revive();
		HX_STACK_LINE(690)
		if ((this->autoReviveMembers)){
			HX_STACK_LINE(692)
			Dynamic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(693)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(694)
			while(((i < this->length))){
				HX_STACK_LINE(696)
				basic = this->members->__GetItem((i)++);
				HX_STACK_LINE(697)
				if (((bool((basic != null())) && bool(!(basic->__Field(HX_CSTRING("exists"),true)))))){
					HX_STACK_LINE(698)
					basic->__Field(HX_CSTRING("revive"),true)();
				}
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::kill( ){
{
		HX_STACK_PUSH("FlxTypedGroup::kill","org/flixel/FlxTypedGroup.hx",670);
		HX_STACK_THIS(this);
		HX_STACK_LINE(671)
		Dynamic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(672)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(673)
		while(((i < this->length))){
			HX_STACK_LINE(675)
			basic = this->members->__GetItem((i)++);
			HX_STACK_LINE(676)
			if (((bool((basic != null())) && bool(basic->__Field(HX_CSTRING("exists"),true))))){
				HX_STACK_LINE(677)
				basic->__Field(HX_CSTRING("kill"),true)();
			}
		}
		HX_STACK_LINE(681)
		this->super::kill();
	}
return null();
}


Void FlxTypedGroup_obj::clear( ){
{
		HX_STACK_PUSH("FlxTypedGroup::clear","org/flixel/FlxTypedGroup.hx",660);
		HX_STACK_THIS(this);
		HX_STACK_LINE(661)
		this->length = (int)0;
		HX_STACK_LINE(662)
		this->members->__Field(HX_CSTRING("splice"),true)((int)0,this->members->__Field(HX_CSTRING("length"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,clear,(void))

Dynamic FlxTypedGroup_obj::getRandom( hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_PUSH("FlxTypedGroup::getRandom","org/flixel/FlxTypedGroup.hx",643);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartIndex,"StartIndex");
	HX_STACK_ARG(Length,"Length");
{
		HX_STACK_LINE(644)
		if (((StartIndex < (int)0))){
			HX_STACK_LINE(645)
			StartIndex = (int)0;
		}
		HX_STACK_LINE(648)
		if (((Length <= (int)0))){
			HX_STACK_LINE(649)
			Length = this->length;
		}
		HX_STACK_LINE(652)
		return ::org::flixel::util::FlxArray_obj::getRandom(this->members,StartIndex,Length);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getRandom,return )

int FlxTypedGroup_obj::countDead( ){
	HX_STACK_PUSH("FlxTypedGroup::countDead","org/flixel/FlxTypedGroup.hx",612);
	HX_STACK_THIS(this);
	HX_STACK_LINE(613)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(614)
	Dynamic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(615)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(616)
	while(((i < this->length))){
		HX_STACK_LINE(618)
		basic = this->members->__GetItem((i)++);
		HX_STACK_LINE(619)
		if (((basic != null()))){
			HX_STACK_LINE(621)
			if (((count < (int)0))){
				HX_STACK_LINE(622)
				count = (int)0;
			}
			HX_STACK_LINE(625)
			if ((!(basic->__Field(HX_CSTRING("alive"),true)))){
				HX_STACK_LINE(626)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(631)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countDead,return )

int FlxTypedGroup_obj::countLiving( ){
	HX_STACK_PUSH("FlxTypedGroup::countLiving","org/flixel/FlxTypedGroup.hx",585);
	HX_STACK_THIS(this);
	HX_STACK_LINE(586)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(587)
	Dynamic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(588)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(589)
	while(((i < this->length))){
		HX_STACK_LINE(591)
		basic = this->members->__GetItem((i)++);
		HX_STACK_LINE(592)
		if (((basic != null()))){
			HX_STACK_LINE(594)
			if (((count < (int)0))){
				HX_STACK_LINE(595)
				count = (int)0;
			}
			HX_STACK_LINE(598)
			if (((bool(basic->__Field(HX_CSTRING("exists"),true)) && bool(basic->__Field(HX_CSTRING("alive"),true))))){
				HX_STACK_LINE(599)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(604)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countLiving,return )

Dynamic FlxTypedGroup_obj::getFirstDead( ){
	HX_STACK_PUSH("FlxTypedGroup::getFirstDead","org/flixel/FlxTypedGroup.hx",566);
	HX_STACK_THIS(this);
	HX_STACK_LINE(567)
	Dynamic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(568)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(569)
	while(((i < this->length))){
		HX_STACK_LINE(571)
		basic = this->members->__GetItem((i)++);
		HX_STACK_LINE(572)
		if (((bool((basic != null())) && bool(!(basic->__Field(HX_CSTRING("alive"),true)))))){
			HX_STACK_LINE(573)
			return basic;
		}
	}
	HX_STACK_LINE(577)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstDead,return )

Dynamic FlxTypedGroup_obj::getFirstAlive( ){
	HX_STACK_PUSH("FlxTypedGroup::getFirstAlive","org/flixel/FlxTypedGroup.hx",545);
	HX_STACK_THIS(this);
	HX_STACK_LINE(546)
	Dynamic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(547)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(548)
	while(((i < this->length))){
		HX_STACK_LINE(550)
		basic = this->members->__GetItem((i)++);
		HX_STACK_LINE(551)
		if (((bool((bool((basic != null())) && bool(basic->__Field(HX_CSTRING("exists"),true)))) && bool(basic->__Field(HX_CSTRING("alive"),true))))){
			HX_STACK_LINE(552)
			return basic;
		}
	}
	HX_STACK_LINE(556)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstAlive,return )

Dynamic FlxTypedGroup_obj::getFirstExtant( ){
	HX_STACK_PUSH("FlxTypedGroup::getFirstExtant","org/flixel/FlxTypedGroup.hx",524);
	HX_STACK_THIS(this);
	HX_STACK_LINE(525)
	Dynamic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(526)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(527)
	while(((i < this->length))){
		HX_STACK_LINE(529)
		basic = this->members->__GetItem((i)++);
		HX_STACK_LINE(530)
		if (((bool((basic != null())) && bool(basic->__Field(HX_CSTRING("exists"),true))))){
			HX_STACK_LINE(531)
			return basic;
		}
	}
	HX_STACK_LINE(535)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstExtant,return )

int FlxTypedGroup_obj::getFirstNull( ){
	HX_STACK_PUSH("FlxTypedGroup::getFirstNull","org/flixel/FlxTypedGroup.hx",500);
	HX_STACK_THIS(this);
	HX_STACK_LINE(501)
	Dynamic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(502)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(503)
	int l = this->members->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(504)
	while(((i < l))){
		HX_STACK_LINE(505)
		if (((this->members->__GetItem(i) == null()))){
			HX_STACK_LINE(507)
			return i;
		}
		else{
			HX_STACK_LINE(511)
			(i)++;
		}
	}
	HX_STACK_LINE(515)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstNull,return )

Dynamic FlxTypedGroup_obj::getFirstAvailable( ::Class ObjectClass){
	HX_STACK_PUSH("FlxTypedGroup::getFirstAvailable","org/flixel/FlxTypedGroup.hx",480);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectClass,"ObjectClass");
	HX_STACK_LINE(481)
	Dynamic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(482)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(483)
	while(((i < this->length))){
		HX_STACK_LINE(485)
		basic = this->members->__GetItem((i)++);
		HX_STACK_LINE(486)
		if (((bool((bool((basic != null())) && bool(!(basic->__Field(HX_CSTRING("exists"),true))))) && bool(((bool((ObjectClass == null())) || bool(::Std_obj::is(basic,ObjectClass)))))))){
			HX_STACK_LINE(487)
			return basic;
		}
	}
	HX_STACK_LINE(491)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getFirstAvailable,return )

Void FlxTypedGroup_obj::callAll( ::String FunctionName,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_PUSH("FlxTypedGroup::callAll","org/flixel/FlxTypedGroup.hx",453);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FunctionName,"FunctionName");
	HX_STACK_ARG(Recurse,"Recurse");
{
		HX_STACK_LINE(454)
		Dynamic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(455)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(456)
		while(((i < this->length))){
			HX_STACK_LINE(458)
			basic = this->members->__GetItem((i)++);
			HX_STACK_LINE(459)
			if (((basic != null()))){
				HX_STACK_LINE(460)
				if (((bool(Recurse) && bool(::Std_obj::is(basic,hx::ClassOf< ::org::flixel::FlxTypedGroup >()))))){
					HX_STACK_LINE(462)
					basic->__Field(HX_CSTRING("callAll"),true)(FunctionName,Recurse);
				}
				else{
					HX_STACK_LINE(466)
					::Reflect_obj::callMethod(basic,(  (((basic == null()))) ? Dynamic(null()) : Dynamic(basic->__Field(FunctionName,true)) ),Dynamic( Array_obj<Dynamic>::__new()));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,callAll,(void))

Void FlxTypedGroup_obj::setAll( ::String VariableName,Dynamic Value,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_PUSH("FlxTypedGroup::setAll","org/flixel/FlxTypedGroup.hx",426);
	HX_STACK_THIS(this);
	HX_STACK_ARG(VariableName,"VariableName");
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Recurse,"Recurse");
{
		HX_STACK_LINE(427)
		Dynamic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(428)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(429)
		while(((i < this->length))){
			HX_STACK_LINE(431)
			basic = this->members->__GetItem((i)++);
			HX_STACK_LINE(432)
			if (((basic != null()))){
				HX_STACK_LINE(433)
				if (((bool(Recurse) && bool(::Std_obj::is(basic,hx::ClassOf< ::org::flixel::FlxTypedGroup >()))))){
					HX_STACK_LINE(435)
					basic->__Field(HX_CSTRING("setAll"),true)(VariableName,Value,Recurse);
				}
				else{
					HX_STACK_LINE(439)
					if (((basic != null()))){
						HX_STACK_LINE(440)
						basic->__SetField(VariableName,Value,true);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,setAll,(void))

Void FlxTypedGroup_obj::sort( ::String __o_Index,hx::Null< int >  __o_Order){
::String Index = __o_Index.Default(HX_CSTRING("y"));
int Order = __o_Order.Default(-1);
	HX_STACK_PUSH("FlxTypedGroup::sort","org/flixel/FlxTypedGroup.hx",413);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_ARG(Order,"Order");
{
		HX_STACK_LINE(414)
		this->_sortIndex = Index;
		HX_STACK_LINE(415)
		this->_sortOrder = Order;
		HX_STACK_LINE(416)
		this->members->__Field(HX_CSTRING("sort"),true)(this->sortHandler_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sort,(void))

Dynamic FlxTypedGroup_obj::replace( Dynamic OldObject,Dynamic NewObject){
	HX_STACK_PUSH("FlxTypedGroup::replace","org/flixel/FlxTypedGroup.hx",393);
	HX_STACK_THIS(this);
	HX_STACK_ARG(OldObject,"OldObject");
	HX_STACK_ARG(NewObject,"NewObject");
	struct _Function_1_1{
		inline static int Block( ::org::flixel::FlxTypedGroup_obj *__this,Dynamic &OldObject){
			HX_STACK_PUSH("*::closure","org/flixel/FlxTypedGroup.hx",394);
			{
				HX_STACK_LINE(394)
				Dynamic array = __this->members;		HX_STACK_VAR(array,"array");
				int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
				HX_STACK_LINE(394)
				int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(394)
				int index = (int)-1;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(394)
				{
					HX_STACK_LINE(394)
					int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(394)
					while(((_g < len))){
						HX_STACK_LINE(394)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(394)
						if (((array->__GetItem(i) == OldObject))){
							HX_STACK_LINE(394)
							index = i;
							HX_STACK_LINE(394)
							break;
						}
					}
				}
				HX_STACK_LINE(394)
				return index;
			}
			return null();
		}
	};
	HX_STACK_LINE(394)
	int index = _Function_1_1::Block(this,OldObject);		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(395)
	if (((bool((index < (int)0)) || bool((index >= this->members->__Field(HX_CSTRING("length"),true)))))){
		HX_STACK_LINE(396)
		return null();
	}
	HX_STACK_LINE(399)
	hx::IndexRef((this->members).mPtr,index) = NewObject;
	HX_STACK_LINE(400)
	return NewObject;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,replace,return )

Dynamic FlxTypedGroup_obj::remove( Dynamic Object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_PUSH("FlxTypedGroup::remove","org/flixel/FlxTypedGroup.hx",364);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Splice,"Splice");
{
		HX_STACK_LINE(365)
		if (((this->members == null()))){
			HX_STACK_LINE(366)
			return null();
		}
		struct _Function_1_1{
			inline static int Block( ::org::flixel::FlxTypedGroup_obj *__this,Dynamic &Object){
				HX_STACK_PUSH("*::closure","org/flixel/FlxTypedGroup.hx",370);
				{
					HX_STACK_LINE(370)
					Dynamic array = __this->members;		HX_STACK_VAR(array,"array");
					int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
					HX_STACK_LINE(370)
					int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(370)
					int index = (int)-1;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(370)
					{
						HX_STACK_LINE(370)
						int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(370)
						while(((_g < len))){
							HX_STACK_LINE(370)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(370)
							if (((array->__GetItem(i) == Object))){
								HX_STACK_LINE(370)
								index = i;
								HX_STACK_LINE(370)
								break;
							}
						}
					}
					HX_STACK_LINE(370)
					return index;
				}
				return null();
			}
		};
		HX_STACK_LINE(370)
		int index = _Function_1_1::Block(this,Object);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(371)
		if (((bool((index < (int)0)) || bool((index >= this->members->__Field(HX_CSTRING("length"),true)))))){
			HX_STACK_LINE(372)
			return null();
		}
		HX_STACK_LINE(375)
		if ((Splice)){
			HX_STACK_LINE(376)
			this->members->__Field(HX_CSTRING("splice"),true)(index,(int)1);
		}
		else{
			HX_STACK_LINE(380)
			hx::IndexRef((this->members).mPtr,index) = null();
		}
		HX_STACK_LINE(383)
		return Object;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,remove,return )

Dynamic FlxTypedGroup_obj::recycle( ::Class ObjectClass,Dynamic ContructorArgs){
	HX_STACK_PUSH("FlxTypedGroup::recycle","org/flixel/FlxTypedGroup.hx",317);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectClass,"ObjectClass");
	HX_STACK_ARG(ContructorArgs,"ContructorArgs");
	HX_STACK_LINE(318)
	if (((ContructorArgs == null()))){
		HX_STACK_LINE(319)
		ContructorArgs = Dynamic( Array_obj<Dynamic>::__new());
	}
	HX_STACK_LINE(321)
	Dynamic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(322)
	if (((this->maxSize > (int)0))){
		HX_STACK_LINE(323)
		if (((this->length < this->maxSize))){
			HX_STACK_LINE(326)
			if (((ObjectClass == null()))){
				HX_STACK_LINE(327)
				return null();
			}
			HX_STACK_LINE(330)
			return this->add(::Type_obj::createInstance(ObjectClass,ContructorArgs));
		}
		else{
			HX_STACK_LINE(334)
			basic = this->members->__GetItem((this->_marker)++);
			HX_STACK_LINE(335)
			if (((this->_marker >= this->maxSize))){
				HX_STACK_LINE(336)
				this->_marker = (int)0;
			}
			HX_STACK_LINE(339)
			return basic;
		}
	}
	else{
		HX_STACK_LINE(344)
		basic = this->getFirstAvailable(ObjectClass);
		HX_STACK_LINE(345)
		if (((basic != null()))){
			HX_STACK_LINE(346)
			return basic;
		}
		HX_STACK_LINE(349)
		if (((ObjectClass == null()))){
			HX_STACK_LINE(350)
			return null();
		}
		HX_STACK_LINE(353)
		return this->add(::Type_obj::createInstance(ObjectClass,ContructorArgs));
	}
	HX_STACK_LINE(322)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,recycle,return )

::org::flixel::system::layer::Atlas FlxTypedGroup_obj::set_atlas( ::org::flixel::system::layer::Atlas value){
	HX_STACK_PUSH("FlxTypedGroup::set_atlas","org/flixel/FlxTypedGroup.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(272)
	if (((this->_atlas != value))){
		HX_STACK_LINE(273)
		if (((value == null()))){
			HX_STACK_LINE(276)
			this->_node = null();
			HX_STACK_LINE(277)
			this->_framesData = null();
		}
	}
	HX_STACK_LINE(281)
	if (((this->_atlas != null()))){
		HX_STACK_LINE(283)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Dynamic _g1 = this->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(283)
		while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(283)
			Dynamic basic = _g1->__GetItem(_g);		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(283)
			++(_g);
			HX_STACK_LINE(285)
			if (((basic != null()))){
				HX_STACK_LINE(286)
				this->setGroupAtlas(basic);
			}
		}
	}
	HX_STACK_LINE(292)
	this->_atlas = value;
	HX_STACK_LINE(293)
	return value;
}


Void FlxTypedGroup_obj::setGroupAtlas( Dynamic Object){
{
		HX_STACK_PUSH("FlxTypedGroup::setGroupAtlas","org/flixel/FlxTypedGroup.hx",263);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Object,"Object");
		HX_STACK_LINE(263)
		if (((this->_atlas != null()))){
			HX_STACK_LINE(265)
			Object->__Field(HX_CSTRING("set_atlas"),true)(this->_atlas);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,setGroupAtlas,(void))

Dynamic FlxTypedGroup_obj::add( Dynamic Object){
	HX_STACK_PUSH("FlxTypedGroup::add","org/flixel/FlxTypedGroup.hx",197);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_LINE(198)
	if (((Object == null()))){
		HX_STACK_LINE(200)
		::org::flixel::FlxG_obj::warn(HX_CSTRING("Cannot add a `null` object to a FlxGroup."));
		HX_STACK_LINE(201)
		return null();
	}
	struct _Function_1_1{
		inline static int Block( ::org::flixel::FlxTypedGroup_obj *__this,Dynamic &Object){
			HX_STACK_PUSH("*::closure","org/flixel/FlxTypedGroup.hx",205);
			{
				HX_STACK_LINE(205)
				Dynamic array = __this->members;		HX_STACK_VAR(array,"array");
				int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
				HX_STACK_LINE(205)
				int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(205)
				int index = (int)-1;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(205)
				{
					HX_STACK_LINE(205)
					int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(205)
					while(((_g < len))){
						HX_STACK_LINE(205)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(205)
						if (((array->__GetItem(i) == Object))){
							HX_STACK_LINE(205)
							index = i;
							HX_STACK_LINE(205)
							break;
						}
					}
				}
				HX_STACK_LINE(205)
				return index;
			}
			return null();
		}
	};
	HX_STACK_LINE(205)
	if (((_Function_1_1::Block(this,Object) >= (int)0))){
		HX_STACK_LINE(206)
		return Object;
	}
	HX_STACK_LINE(211)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(212)
	int l = this->members->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(213)
	while(((i < l))){
		HX_STACK_LINE(215)
		if (((this->members->__GetItem(i) == null()))){
			HX_STACK_LINE(217)
			hx::IndexRef((this->members).mPtr,i) = Object;
			HX_STACK_LINE(218)
			if (((i >= this->length))){
				HX_STACK_LINE(219)
				this->length = (i + (int)1);
			}
			HX_STACK_LINE(223)
			this->setGroupAtlas(Object);
			HX_STACK_LINE(225)
			return Object;
		}
		HX_STACK_LINE(227)
		(i)++;
	}
	HX_STACK_LINE(231)
	if (((this->maxSize > (int)0))){
		HX_STACK_LINE(232)
		if (((this->members->__Field(HX_CSTRING("length"),true) >= this->maxSize))){
			HX_STACK_LINE(234)
			return Object;
		}
		else{
			HX_STACK_LINE(237)
			if ((((this->members->__Field(HX_CSTRING("length"),true) * (int)2) <= this->maxSize))){
				HX_STACK_LINE(238)
				::org::flixel::util::FlxArray_obj::setLength(this->members,(this->members->__Field(HX_CSTRING("length"),true) * (int)2));
			}
			else{
				HX_STACK_LINE(242)
				::org::flixel::util::FlxArray_obj::setLength(this->members,this->maxSize);
			}
		}
	}
	else{
		HX_STACK_LINE(247)
		::org::flixel::util::FlxArray_obj::setLength(this->members,(this->members->__Field(HX_CSTRING("length"),true) * (int)2));
	}
	HX_STACK_LINE(254)
	this->setGroupAtlas(Object);
	HX_STACK_LINE(256)
	hx::IndexRef((this->members).mPtr,i) = Object;
	HX_STACK_LINE(257)
	this->length = (i + (int)1);
	HX_STACK_LINE(258)
	return Object;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,add,return )

int FlxTypedGroup_obj::set_maxSize( int Size){
	HX_STACK_PUSH("FlxTypedGroup::set_maxSize","org/flixel/FlxTypedGroup.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Size,"Size");
	HX_STACK_LINE(159)
	this->maxSize = ::Std_obj::_int(::Math_obj::abs(Size));
	HX_STACK_LINE(160)
	if (((this->_marker >= this->maxSize))){
		HX_STACK_LINE(161)
		this->_marker = (int)0;
	}
	HX_STACK_LINE(164)
	if (((bool((bool((this->maxSize == (int)0)) || bool((this->members == null())))) || bool((this->maxSize >= this->members->__Field(HX_CSTRING("length"),true)))))){
		HX_STACK_LINE(165)
		return this->maxSize;
	}
	HX_STACK_LINE(170)
	Dynamic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(171)
	int i = this->maxSize;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(172)
	int l = this->members->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(173)
	while(((i < l))){
		HX_STACK_LINE(175)
		basic = this->members->__GetItem((i)++);
		HX_STACK_LINE(176)
		if (((basic != null()))){
			HX_STACK_LINE(177)
			basic->__Field(HX_CSTRING("destroy"),true)();
		}
	}
	HX_STACK_LINE(181)
	this->length = this->maxSize;
	HX_STACK_LINE(182)
	::org::flixel::util::FlxArray_obj::setLength(this->members,this->maxSize);
	HX_STACK_LINE(183)
	return this->maxSize;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,set_maxSize,return )

Void FlxTypedGroup_obj::drawDebug( ){
{
		HX_STACK_PUSH("FlxTypedGroup::drawDebug","org/flixel/FlxTypedGroup.hx",140);
		HX_STACK_THIS(this);
		HX_STACK_LINE(141)
		Dynamic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(142)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(143)
		while(((i < this->length))){
			HX_STACK_LINE(145)
			basic = this->members->__GetItem((i)++);
			HX_STACK_LINE(146)
			if (((bool((bool((basic != null())) && bool(basic->__Field(HX_CSTRING("exists"),true)))) && bool(basic->__Field(HX_CSTRING("visible"),true))))){
				HX_STACK_LINE(147)
				basic->__Field(HX_CSTRING("drawDebug"),true)();
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::draw( ){
{
		HX_STACK_PUSH("FlxTypedGroup::draw","org/flixel/FlxTypedGroup.hx",125);
		HX_STACK_THIS(this);
		HX_STACK_LINE(126)
		Dynamic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(127)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(128)
		while(((i < this->length))){
			HX_STACK_LINE(130)
			basic = this->members->__GetItem((i)++);
			HX_STACK_LINE(131)
			if (((bool((bool((basic != null())) && bool(basic->__Field(HX_CSTRING("exists"),true)))) && bool(basic->__Field(HX_CSTRING("visible"),true))))){
				HX_STACK_LINE(132)
				basic->__Field(HX_CSTRING("draw"),true)();
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::update( ){
{
		HX_STACK_PUSH("FlxTypedGroup::update","org/flixel/FlxTypedGroup.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_LINE(99)
		Dynamic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(100)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(101)
		while(((i < this->length))){
			HX_STACK_LINE(103)
			basic = this->members->__GetItem((i)++);
			HX_STACK_LINE(104)
			if (((bool((bool((basic != null())) && bool(basic->__Field(HX_CSTRING("exists"),true)))) && bool(basic->__Field(HX_CSTRING("active"),true))))){
				HX_STACK_LINE(106)
				basic->__Field(HX_CSTRING("update"),true)();
				HX_STACK_LINE(108)
				if ((basic->__Field(HX_CSTRING("get_hasTween"),true)())){
					HX_STACK_LINE(110)
					::org::flixel::tweens::FlxTween t;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(110)
					Dynamic ft = basic->__Field(HX_CSTRING("_tween"),true);		HX_STACK_VAR(ft,"ft");
					HX_STACK_LINE(110)
					while(((ft != null()))){
						HX_STACK_LINE(110)
						t = hx::TCast< org::flixel::tweens::FlxTween >::cast(ft);
						HX_STACK_LINE(110)
						if ((t->active)){
							HX_STACK_LINE(110)
							t->update();
							HX_STACK_LINE(110)
							if ((ft->__Field(HX_CSTRING("_finish"),true))){
								HX_STACK_LINE(110)
								ft->__Field(HX_CSTRING("finish"),true)();
							}
						}
						HX_STACK_LINE(110)
						ft = ft->__Field(HX_CSTRING("_next"),true);
					}
				}
			}
		}
		HX_STACK_LINE(115)
		if ((this->get_hasTween())){
			HX_STACK_LINE(117)
			::org::flixel::tweens::FlxTween t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(117)
			Dynamic ft = this->_tween;		HX_STACK_VAR(ft,"ft");
			HX_STACK_LINE(117)
			while(((ft != null()))){
				HX_STACK_LINE(117)
				t = hx::TCast< org::flixel::tweens::FlxTween >::cast(ft);
				HX_STACK_LINE(117)
				if ((t->active)){
					HX_STACK_LINE(117)
					t->update();
					HX_STACK_LINE(117)
					if ((ft->__Field(HX_CSTRING("_finish"),true))){
						HX_STACK_LINE(117)
						ft->__Field(HX_CSTRING("finish"),true)();
					}
				}
				HX_STACK_LINE(117)
				ft = ft->__Field(HX_CSTRING("_next"),true);
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTypedGroup::destroy","org/flixel/FlxTypedGroup.hx",75);
		HX_STACK_THIS(this);
		HX_STACK_LINE(76)
		if (((this->members != null()))){
			HX_STACK_LINE(78)
			Dynamic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(79)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(80)
			while(((i < this->length))){
				HX_STACK_LINE(82)
				basic = this->members->__GetItem((i)++);
				HX_STACK_LINE(83)
				if (((basic != null()))){
					HX_STACK_LINE(84)
					basic->__Field(HX_CSTRING("destroy"),true)();
				}
			}
			HX_STACK_LINE(88)
			this->members = null();
		}
		HX_STACK_LINE(90)
		this->_sortIndex = null();
		HX_STACK_LINE(91)
		this->super::destroy();
	}
return null();
}



FlxTypedGroup_obj::FlxTypedGroup_obj()
{
}

void FlxTypedGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroup);
	HX_MARK_MEMBER_NAME(autoReviveMembers,"autoReviveMembers");
	HX_MARK_MEMBER_NAME(_sortOrder,"_sortOrder");
	HX_MARK_MEMBER_NAME(_sortIndex,"_sortIndex");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(autoReviveMembers,"autoReviveMembers");
	HX_VISIT_MEMBER_NAME(_sortOrder,"_sortOrder");
	HX_VISIT_MEMBER_NAME(_sortIndex,"_sortIndex");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"revive") ) { return revive_dyn(); }
		if (HX_FIELD_EQ(inName,"setAll") ) { return setAll_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"callAll") ) { return callAll_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_marker") ) { return _marker; }
		if (HX_FIELD_EQ(inName,"members") ) { return members; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		if (HX_FIELD_EQ(inName,"countDead") ) { return countDead_dyn(); }
		if (HX_FIELD_EQ(inName,"set_atlas") ) { return set_atlas_dyn(); }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_sortOrder") ) { return _sortOrder; }
		if (HX_FIELD_EQ(inName,"_sortIndex") ) { return _sortIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sortHandler") ) { return sortHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"countLiving") ) { return countLiving_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return set_maxSize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return getFirstDead_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return getFirstNull_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return getFirstAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"setGroupAtlas") ) { return setGroupAtlas_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFirstExtant") ) { return getFirstExtant_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return getFirstAvailable_dyn(); }
		if (HX_FIELD_EQ(inName,"autoReviveMembers") ) { return autoReviveMembers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp) return set_maxSize(inValue);maxSize=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_sortOrder") ) { _sortOrder=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sortIndex") ) { _sortIndex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"autoReviveMembers") ) { autoReviveMembers=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("autoReviveMembers"));
	outFields->push(HX_CSTRING("_sortOrder"));
	outFields->push(HX_CSTRING("_sortIndex"));
	outFields->push(HX_CSTRING("_marker"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("members"));
	outFields->push(HX_CSTRING("maxSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("sortHandler"),
	HX_CSTRING("revive"),
	HX_CSTRING("kill"),
	HX_CSTRING("clear"),
	HX_CSTRING("getRandom"),
	HX_CSTRING("countDead"),
	HX_CSTRING("countLiving"),
	HX_CSTRING("getFirstDead"),
	HX_CSTRING("getFirstAlive"),
	HX_CSTRING("getFirstExtant"),
	HX_CSTRING("getFirstNull"),
	HX_CSTRING("getFirstAvailable"),
	HX_CSTRING("callAll"),
	HX_CSTRING("setAll"),
	HX_CSTRING("sort"),
	HX_CSTRING("replace"),
	HX_CSTRING("remove"),
	HX_CSTRING("recycle"),
	HX_CSTRING("set_atlas"),
	HX_CSTRING("setGroupAtlas"),
	HX_CSTRING("add"),
	HX_CSTRING("set_maxSize"),
	HX_CSTRING("drawDebug"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("autoReviveMembers"),
	HX_CSTRING("_sortOrder"),
	HX_CSTRING("_sortIndex"),
	HX_CSTRING("_marker"),
	HX_CSTRING("length"),
	HX_CSTRING("members"),
	HX_CSTRING("maxSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

Class FlxTypedGroup_obj::__mClass;

void FlxTypedGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxTypedGroup"), hx::TCanCast< FlxTypedGroup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTypedGroup_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
