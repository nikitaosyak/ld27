#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
namespace haxe{
namespace io{

Void Path_obj::__construct(::String path)
{
HX_STACK_PUSH("Path::new","C:\\haxe\\haxe/std/haxe/io/Path.hx",75);
{
	HX_STACK_LINE(76)
	int c1 = path.lastIndexOf(HX_CSTRING("/"),null());		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(77)
	int c2 = path.lastIndexOf(HX_CSTRING("\\"),null());		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(78)
	if (((c1 < c2))){
		HX_STACK_LINE(79)
		this->dir = path.substr((int)0,c2);
		HX_STACK_LINE(80)
		path = path.substr((c2 + (int)1),null());
		HX_STACK_LINE(81)
		this->backslash = true;
	}
	else{
		HX_STACK_LINE(82)
		if (((c2 < c1))){
			HX_STACK_LINE(83)
			this->dir = path.substr((int)0,c1);
			HX_STACK_LINE(84)
			path = path.substr((c1 + (int)1),null());
		}
		else{
			HX_STACK_LINE(86)
			this->dir = null();
		}
	}
	HX_STACK_LINE(87)
	int cp = path.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(cp,"cp");
	HX_STACK_LINE(88)
	if (((cp != (int)-1))){
		HX_STACK_LINE(89)
		this->ext = path.substr((cp + (int)1),null());
		HX_STACK_LINE(90)
		this->file = path.substr((int)0,cp);
	}
	else{
		HX_STACK_LINE(92)
		this->ext = null();
		HX_STACK_LINE(93)
		this->file = path;
	}
}
;
	return null();
}

Path_obj::~Path_obj() { }

Dynamic Path_obj::__CreateEmpty() { return  new Path_obj; }
hx::ObjectPtr< Path_obj > Path_obj::__new(::String path)
{  hx::ObjectPtr< Path_obj > result = new Path_obj();
	result->__construct(path);
	return result;}

Dynamic Path_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Path_obj > result = new Path_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Path_obj::directory( ::String path){
	HX_STACK_PUSH("Path::directory","C:\\haxe\\haxe/std/haxe/io/Path.hx",140);
	HX_STACK_ARG(path,"path");
	HX_STACK_LINE(141)
	::haxe::io::Path s = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(142)
	if (((s->dir == null()))){
		HX_STACK_LINE(143)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(144)
	return s->dir;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,directory,return )

::String Path_obj::addTrailingSlash( ::String path){
	HX_STACK_PUSH("Path::addTrailingSlash","C:\\haxe\\haxe/std/haxe/io/Path.hx",186);
	HX_STACK_ARG(path,"path");
	HX_STACK_LINE(187)
	if (((path.length == (int)0))){
		HX_STACK_LINE(188)
		return HX_CSTRING("/");
	}
	HX_STACK_LINE(189)
	int c1 = path.lastIndexOf(HX_CSTRING("/"),null());		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(190)
	int c2 = path.lastIndexOf(HX_CSTRING("\\"),null());		HX_STACK_VAR(c2,"c2");
	struct _Function_1_1{
		inline static ::String Block( int &c2,::String &path){
			HX_STACK_PUSH("*::closure","C:\\haxe\\haxe/std/haxe/io/Path.hx",191);
			{
				HX_STACK_LINE(191)
				return (  (((c2 != (path.length - (int)1)))) ? ::String((path + HX_CSTRING("\\"))) : ::String(path) );
			}
			return null();
		}
	};
	HX_STACK_LINE(191)
	return (  (((c1 < c2))) ? ::String(_Function_1_1::Block(c2,path)) : ::String((  (((c1 != (path.length - (int)1)))) ? ::String((path + HX_CSTRING("/"))) : ::String(path) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,addTrailingSlash,return )


Path_obj::Path_obj()
{
}

void Path_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Path);
	HX_MARK_MEMBER_NAME(backslash,"backslash");
	HX_MARK_MEMBER_NAME(ext,"ext");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_END_CLASS();
}

void Path_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backslash,"backslash");
	HX_VISIT_MEMBER_NAME(ext,"ext");
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(dir,"dir");
}

Dynamic Path_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ext") ) { return ext; }
		if (HX_FIELD_EQ(inName,"dir") ) { return dir; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return file; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"directory") ) { return directory_dyn(); }
		if (HX_FIELD_EQ(inName,"backslash") ) { return backslash; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addTrailingSlash") ) { return addTrailingSlash_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Path_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ext") ) { ext=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backslash") ) { backslash=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Path_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("backslash"));
	outFields->push(HX_CSTRING("ext"));
	outFields->push(HX_CSTRING("file"));
	outFields->push(HX_CSTRING("dir"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("directory"),
	HX_CSTRING("addTrailingSlash"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("backslash"),
	HX_CSTRING("ext"),
	HX_CSTRING("file"),
	HX_CSTRING("dir"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

Class Path_obj::__mClass;

void Path_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.Path"), hx::TCanCast< Path_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Path_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
