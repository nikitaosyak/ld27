#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTile
#include <flixel/addons/editors/tiled/TiledTile.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledTile_obj::__construct(int OriginalId)
{
HX_STACK_PUSH("TiledTile::new","flixel/addons/editors/tiled/TiledTile.hx",7);
{
	HX_STACK_LINE(34)
	this->isFlipVertically = false;
	HX_STACK_LINE(30)
	this->isFlipHorizontally = false;
	HX_STACK_LINE(42)
	this->tileID = OriginalId;
	HX_STACK_LINE(43)
	this->tilesetID = (int(this->tileID) & int((int)536870911));
	HX_STACK_LINE(44)
	this->rotate = (int)0;
	HX_STACK_LINE(45)
	this->resolveFlipAndRotation();
}
;
	return null();
}

TiledTile_obj::~TiledTile_obj() { }

Dynamic TiledTile_obj::__CreateEmpty() { return  new TiledTile_obj; }
hx::ObjectPtr< TiledTile_obj > TiledTile_obj::__new(int OriginalId)
{  hx::ObjectPtr< TiledTile_obj > result = new TiledTile_obj();
	result->__construct(OriginalId);
	return result;}

Dynamic TiledTile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledTile_obj > result = new TiledTile_obj();
	result->__construct(inArgs[0]);
	return result;}

int TiledTile_obj::resolveTilesetID( ){
	HX_STACK_PUSH("TiledTile::resolveTilesetID","flixel/addons/editors/tiled/TiledTile.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_LINE(77)
	return (int(this->tileID) & int((int)536870911));
}


HX_DEFINE_DYNAMIC_FUNC0(TiledTile_obj,resolveTilesetID,return )

Void TiledTile_obj::resolveFlipAndRotation( ){
{
		HX_STACK_PUSH("TiledTile::resolveFlipAndRotation","flixel/addons/editors/tiled/TiledTile.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_LINE(49)
		bool flipHorizontal = false;		HX_STACK_VAR(flipHorizontal,"flipHorizontal");
		HX_STACK_LINE(50)
		bool flipVertical = false;		HX_STACK_VAR(flipVertical,"flipVertical");
		HX_STACK_LINE(51)
		if (((((int(this->tileID) & int((int)-2147483648))) != (int)0))){
			HX_STACK_LINE(51)
			flipHorizontal = true;
		}
		HX_STACK_LINE(54)
		if (((((int(this->tileID) & int((int)1073741824))) != (int)0))){
			HX_STACK_LINE(54)
			flipVertical = true;
		}
		HX_STACK_LINE(58)
		if (((((int(this->tileID) & int((int)536870912))) != (int)0))){
			HX_STACK_LINE(58)
			if (((bool(flipHorizontal) && bool(flipVertical)))){
				HX_STACK_LINE(60)
				this->isFlipHorizontally = true;
				HX_STACK_LINE(61)
				this->rotate = (int)2;
			}
			else{
				HX_STACK_LINE(62)
				if ((flipHorizontal)){
					HX_STACK_LINE(62)
					this->rotate = (int)1;
				}
				else{
					HX_STACK_LINE(64)
					if ((flipVertical)){
						HX_STACK_LINE(64)
						this->rotate = (int)2;
					}
					else{
						HX_STACK_LINE(67)
						this->isFlipVertically = true;
						HX_STACK_LINE(68)
						this->rotate = (int)2;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(71)
			this->isFlipHorizontally = flipHorizontal;
			HX_STACK_LINE(72)
			this->isFlipVertically = flipVertical;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TiledTile_obj,resolveFlipAndRotation,(void))


TiledTile_obj::TiledTile_obj()
{
}

void TiledTile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledTile);
	HX_MARK_MEMBER_NAME(rotate,"rotate");
	HX_MARK_MEMBER_NAME(isFlipVertically,"isFlipVertically");
	HX_MARK_MEMBER_NAME(isFlipHorizontally,"isFlipHorizontally");
	HX_MARK_MEMBER_NAME(tilesetID,"tilesetID");
	HX_MARK_MEMBER_NAME(tileID,"tileID");
	HX_MARK_END_CLASS();
}

void TiledTile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rotate,"rotate");
	HX_VISIT_MEMBER_NAME(isFlipVertically,"isFlipVertically");
	HX_VISIT_MEMBER_NAME(isFlipHorizontally,"isFlipHorizontally");
	HX_VISIT_MEMBER_NAME(tilesetID,"tilesetID");
	HX_VISIT_MEMBER_NAME(tileID,"tileID");
}

Dynamic TiledTile_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate; }
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesetID") ) { return tilesetID; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"resolveTilesetID") ) { return resolveTilesetID_dyn(); }
		if (HX_FIELD_EQ(inName,"isFlipVertically") ) { return isFlipVertically; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isFlipHorizontally") ) { return isFlipHorizontally; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"resolveFlipAndRotation") ) { return resolveFlipAndRotation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledTile_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { rotate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesetID") ) { tilesetID=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isFlipVertically") ) { isFlipVertically=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isFlipHorizontally") ) { isFlipHorizontally=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rotate"));
	outFields->push(HX_CSTRING("isFlipVertically"));
	outFields->push(HX_CSTRING("isFlipHorizontally"));
	outFields->push(HX_CSTRING("tilesetID"));
	outFields->push(HX_CSTRING("tileID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("resolveTilesetID"),
	HX_CSTRING("resolveFlipAndRotation"),
	HX_CSTRING("rotate"),
	HX_CSTRING("isFlipVertically"),
	HX_CSTRING("isFlipHorizontally"),
	HX_CSTRING("tilesetID"),
	HX_CSTRING("tileID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledTile_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledTile_obj::__mClass,"__mClass");
};

Class TiledTile_obj::__mClass;

void TiledTile_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.tiled.TiledTile"), hx::TCanCast< TiledTile_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TiledTile_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
