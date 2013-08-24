#include <hxcpp.h>

#include <util/MathHelp.h>
#include <tmx/TiledLevel.h>
#include <sys/io/FileOutput.h>
#include <sys/io/File.h>
#include <sys/FileSystem.h>
#include <org/flixel/util/FlxTimer.h>
#include <org/flixel/util/FlxString.h>
#include <org/flixel/util/FlxRandom.h>
#include <org/flixel/util/FlxMisc.h>
#include <org/flixel/util/FlxMath.h>
#include <org/flixel/util/FlxColor.h>
#include <org/flixel/util/FlxArray.h>
#include <org/flixel/util/FlxAngle.h>
#include <org/flixel/tweens/util/Ease.h>
#include <org/flixel/tweens/misc/MultiVarTween.h>
#include <org/flixel/tweens/FlxTween.h>
#include <org/flixel/system/replay/MouseRecord.h>
#include <org/flixel/system/replay/FrameRecord.h>
#include <org/flixel/system/replay/CodeValuePair.h>
#include <org/flixel/system/layer/frames/FlxSpriteFrames.h>
#include <org/flixel/system/layer/frames/FlxFrame.h>
#include <org/flixel/system/layer/TileSheetExt.h>
#include <org/flixel/system/layer/TileSheetData.h>
#include <org/flixel/system/layer/Node.h>
#include <org/flixel/system/layer/DrawStackItem.h>
#include <org/flixel/system/layer/Atlas.h>
#include <org/flixel/system/input/FlxTouchManager.h>
#include <org/flixel/system/input/FlxTouch.h>
#include <org/flixel/system/input/FlxMouse.h>
#include <org/flixel/system/input/FlxMapObject.h>
#include <org/flixel/system/input/FlxKeyboard.h>
#include <org/flixel/system/input/FlxJoystickManager.h>
#include <org/flixel/system/input/IFlxInput.h>
#include <org/flixel/system/input/XBOX_BUTTON_IDS.h>
#include <org/flixel/system/input/FlxJoyButton.h>
#include <org/flixel/system/input/FlxJoystick.h>
#include <org/flixel/system/input/FlxInputs.h>
#include <org/flixel/system/input/FlxInputStates.h>
#include <org/flixel/system/debug/WatchEntry.h>
#include <org/flixel/system/debug/Watch.h>
#include <org/flixel/system/debug/Vis.h>
#include <org/flixel/system/debug/VCR.h>
#include <org/flixel/system/debug/Perf.h>
#include <org/flixel/system/debug/LogStyle.h>
#include <org/flixel/system/debug/Log.h>
#include <org/flixel/system/debug/ConsoleCommands.h>
#include <org/flixel/system/debug/Console.h>
#include <org/flixel/system/FlxWindow.h>
#include <org/flixel/system/FlxTilemapBuffer.h>
#include <org/flixel/system/FlxTile.h>
#include <org/flixel/system/FlxReplay.h>
#include <org/flixel/system/FlxQuadTree.h>
#include <org/flixel/system/FlxList.h>
#include <org/flixel/system/FlxDebugger.h>
#include <org/flixel/system/FlxAnim.h>
#include <org/flixel/system/BGSprite.h>
#include <org/flixel/plugin/texturepacker/TexturePackerData.h>
#include <org/flixel/plugin/texturepacker/Frame.h>
#include <org/flixel/plugin/pxText/PxFontSymbol.h>
#include <org/flixel/plugin/pxText/HelperSymbol.h>
#include <org/flixel/plugin/pxText/PxBitmapFont.h>
#include <org/flixel/plugin/TimerManager.h>
#include <org/flixel/plugin/DebugPathDisplay.h>
#include <org/flixel/FlxTilemap.h>
#include <org/flixel/FlxText.h>
#include <org/flixel/FlxSubState.h>
#include <org/flixel/FadeTween.h>
#include <org/flixel/FlxSound.h>
#include <org/flixel/FlxSave.h>
#include <org/flixel/FlxPath.h>
#include <org/flixel/FlxG.h>
#include <org/flixel/FlxCamera.h>
#include <org/flixel/FlxAssets.h>
#include <openfl/utils/WeakRef.h>
#include <openfl/events/SystemEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/display/Tilesheet.h>
#include <openfl/display/ManagedStage.h>
#include <openfl/display/FPS.h>
#include <openfl/LibraryType.h>
#include <openfl/AssetType.h>
#include <openfl/Assets.h>
#include <nme/AssetData.h>
#include <haxe/xml/Fast.h>
#include <haxe/xml/_Fast/NodeListAccess.h>
#include <haxe/xml/_Fast/HasNodeAccess.h>
#include <haxe/xml/_Fast/HasAttribAccess.h>
#include <haxe/xml/_Fast/AttribAccess.h>
#include <haxe/xml/_Fast/NodeAccess.h>
#include <haxe/io/Path.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Serializer.h>
#include <haxe/Resource.h>
#include <haxe/Log.h>
#include <haxe/Json.h>
#include <flx/state/level/LevelBase.h>
#include <org/flixel/FlxState.h>
#include <org/flixel/FlxGroup.h>
#include <flx/core/SpawnPlace.h>
#include <flx/core/SortingGroup.h>
#include <org/flixel/FlxTypedGroup.h>
#include <flx/core/PlayerController.h>
#include <flx/core/KeyStatus.h>
#include <flx/core/Player.h>
#include <flx/core/Facade.h>
#include <flx/core/Enemy.h>
#include <org/flixel/FlxSprite.h>
#include <org/flixel/FlxObject.h>
#include <org/flixel/util/FlxPoint.h>
#include <org/flixel/util/FlxRect.h>
#include <org/flixel/FlxBasic.h>
#include <flx/Game.h>
#include <org/flixel/FlxGame.h>
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#include <flixel/addons/editors/tiled/TiledTile.h>
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#include <flixel/addons/editors/tiled/TiledObjectGroup.h>
#include <flixel/addons/editors/tiled/TiledObject.h>
#include <flixel/addons/editors/tiled/TiledMap.h>
#include <flixel/addons/editors/tiled/TiledLayer.h>
#include <flash/utils/Endian.h>
#include <flash/utils/CompressionAlgorithm.h>
#include <flash/utils/ByteArray.h>
#include <flash/utils/IDataInput.h>
#include <openfl/utils/IMemoryRange.h>
#include <flash/utils/IDataOutput.h>
#include <flash/ui/MultitouchInputMode.h>
#include <flash/ui/Multitouch.h>
#include <flash/ui/Mouse.h>
#include <flash/ui/Keyboard.h>
#include <flash/text/TextLineMetrics.h>
#include <flash/text/TextFormatAlign.h>
#include <flash/text/TextFormat.h>
#include <flash/text/TextFieldType.h>
#include <flash/text/TextFieldAutoSize.h>
#include <flash/text/TextField.h>
#include <flash/text/GridFitType.h>
#include <flash/text/FontType.h>
#include <flash/text/FontStyle.h>
#include <flash/text/Font.h>
#include <flash/text/AntiAliasType.h>
#include <flash/system/System.h>
#include <flash/system/SecurityDomain.h>
#include <flash/system/LoaderContext.h>
#include <flash/system/ApplicationDomain.h>
#include <flash/net/URLVariables.h>
#include <flash/net/URLRequestMethod.h>
#include <flash/net/URLRequestHeader.h>
#include <flash/net/URLRequest.h>
#include <flash/net/URLLoaderDataFormat.h>
#include <flash/net/SharedObjectFlushStatus.h>
#include <flash/net/SharedObject.h>
#include <flash/media/SoundTransform.h>
#include <flash/media/SoundLoaderContext.h>
#include <flash/media/SoundChannel.h>
#include <flash/media/Sound.h>
#include <flash/media/ID3Info.h>
#include <flash/geom/Vector3D.h>
#include <flash/geom/Transform.h>
#include <flash/geom/Rectangle.h>
#include <flash/geom/Point.h>
#include <flash/geom/Matrix.h>
#include <flash/geom/ColorTransform.h>
#include <flash/filters/BitmapFilter.h>
#include <flash/filesystem/File.h>
#include <flash/events/SampleDataEvent.h>
#include <flash/events/ProgressEvent.h>
#include <flash/events/KeyboardEvent.h>
#include <flash/events/IOErrorEvent.h>
#include <flash/events/HTTPStatusEvent.h>
#include <flash/events/FocusEvent.h>
#include <flash/events/EventPhase.h>
#include <flash/events/Listener.h>
#include <flash/events/ErrorEvent.h>
#include <flash/events/TextEvent.h>
#include <flash/errors/RangeError.h>
#include <flash/errors/EOFError.h>
#include <flash/errors/ArgumentError.h>
#include <flash/errors/Error.h>
#include <flash/display/TriangleCulling.h>
#include <flash/display/StageScaleMode.h>
#include <flash/display/StageQuality.h>
#include <flash/display/StageDisplayState.h>
#include <flash/display/StageAlign.h>
#include <flash/display/TouchInfo.h>
#include <flash/display/Stage.h>
#include <flash/events/TouchEvent.h>
#include <flash/events/MouseEvent.h>
#include <flash/events/Event.h>
#include <flash/display/SpreadMethod.h>
#include <flash/display/Shape.h>
#include <flash/display/PixelSnapping.h>
#include <flash/display/MovieClip.h>
#include <flash/display/LoaderInfo.h>
#include <flash/net/URLLoader.h>
#include <flash/display/Loader.h>
#include <flash/display/LineScaleMode.h>
#include <flash/display/JointStyle.h>
#include <flash/display/InterpolationMethod.h>
#include <flash/display/IGraphicsData.h>
#include <flash/display/GraphicsPathWinding.h>
#include <flash/display/Graphics.h>
#include <flash/display/GradientType.h>
#include <flash/display/CapsStyle.h>
#include <flash/display/BlendMode.h>
#include <flash/display/OptimizedPerlin.h>
#include <flash/display/BitmapData.h>
#include <flash/display/Bitmap.h>
#include <flash/_Vector/Vector_Impl_.h>
#include <flash/Memory.h>
#include <cpp/zip/Uncompress.h>
#include <cpp/zip/Flush.h>
#include <cpp/zip/Compress.h>
#include <cpp/vm/Gc.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <Xml.h>
#include <XmlType.h>
#include <Type.h>
#include <ValueType.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Reflect.h>
#include <IMap.h>
#include <List.h>
#include <Lambda.h>
#include <EReg.h>
#include <Date.h>
#include <DocumentClass.h>
#include <Main.h>
#include <flash/display/Sprite.h>
#include <flash/display/DisplayObjectContainer.h>
#include <flash/display/InteractiveObject.h>
#include <flash/display/DisplayObject.h>
#include <flash/Lib.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <flash/display/IBitmapDrawable.h>
#include <flash/events/EventDispatcher.h>
#include <flash/events/IEventDispatcher.h>
#include <ApplicationMain.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::util::MathHelp_obj::__register();
::tmx::TiledLevel_obj::__register();
::sys::io::FileOutput_obj::__register();
::sys::io::File_obj::__register();
::sys::FileSystem_obj::__register();
::org::flixel::util::FlxTimer_obj::__register();
::org::flixel::util::FlxString_obj::__register();
::org::flixel::util::FlxRandom_obj::__register();
::org::flixel::util::FlxMisc_obj::__register();
::org::flixel::util::FlxMath_obj::__register();
::org::flixel::util::FlxColor_obj::__register();
::org::flixel::util::FlxArray_obj::__register();
::org::flixel::util::FlxAngle_obj::__register();
::org::flixel::tweens::util::Ease_obj::__register();
::org::flixel::tweens::misc::MultiVarTween_obj::__register();
::org::flixel::tweens::FlxTween_obj::__register();
::org::flixel::system::replay::MouseRecord_obj::__register();
::org::flixel::system::replay::FrameRecord_obj::__register();
::org::flixel::system::replay::CodeValuePair_obj::__register();
::org::flixel::system::layer::frames::FlxSpriteFrames_obj::__register();
::org::flixel::system::layer::frames::FlxFrame_obj::__register();
::org::flixel::system::layer::TileSheetExt_obj::__register();
::org::flixel::system::layer::TileSheetData_obj::__register();
::org::flixel::system::layer::Node_obj::__register();
::org::flixel::system::layer::DrawStackItem_obj::__register();
::org::flixel::system::layer::Atlas_obj::__register();
::org::flixel::system::input::FlxTouchManager_obj::__register();
::org::flixel::system::input::FlxTouch_obj::__register();
::org::flixel::system::input::FlxMouse_obj::__register();
::org::flixel::system::input::FlxMapObject_obj::__register();
::org::flixel::system::input::FlxKeyboard_obj::__register();
::org::flixel::system::input::FlxJoystickManager_obj::__register();
::org::flixel::system::input::IFlxInput_obj::__register();
::org::flixel::system::input::XBOX_BUTTON_IDS_obj::__register();
::org::flixel::system::input::FlxJoyButton_obj::__register();
::org::flixel::system::input::FlxJoystick_obj::__register();
::org::flixel::system::input::FlxInputs_obj::__register();
::org::flixel::system::input::FlxInputStates_obj::__register();
::org::flixel::system::debug::WatchEntry_obj::__register();
::org::flixel::system::debug::Watch_obj::__register();
::org::flixel::system::debug::Vis_obj::__register();
::org::flixel::system::debug::VCR_obj::__register();
::org::flixel::system::debug::Perf_obj::__register();
::org::flixel::system::debug::LogStyle_obj::__register();
::org::flixel::system::debug::Log_obj::__register();
::org::flixel::system::debug::ConsoleCommands_obj::__register();
::org::flixel::system::debug::Console_obj::__register();
::org::flixel::system::FlxWindow_obj::__register();
::org::flixel::system::FlxTilemapBuffer_obj::__register();
::org::flixel::system::FlxTile_obj::__register();
::org::flixel::system::FlxReplay_obj::__register();
::org::flixel::system::FlxQuadTree_obj::__register();
::org::flixel::system::FlxList_obj::__register();
::org::flixel::system::FlxDebugger_obj::__register();
::org::flixel::system::FlxAnim_obj::__register();
::org::flixel::system::BGSprite_obj::__register();
::org::flixel::plugin::texturepacker::TexturePackerData_obj::__register();
::org::flixel::plugin::texturepacker::Frame_obj::__register();
::org::flixel::plugin::pxText::PxFontSymbol_obj::__register();
::org::flixel::plugin::pxText::HelperSymbol_obj::__register();
::org::flixel::plugin::pxText::PxBitmapFont_obj::__register();
::org::flixel::plugin::TimerManager_obj::__register();
::org::flixel::plugin::DebugPathDisplay_obj::__register();
::org::flixel::FlxTilemap_obj::__register();
::org::flixel::FlxText_obj::__register();
::org::flixel::FlxSubState_obj::__register();
::org::flixel::FadeTween_obj::__register();
::org::flixel::FlxSound_obj::__register();
::org::flixel::FlxSave_obj::__register();
::org::flixel::FlxPath_obj::__register();
::org::flixel::FlxG_obj::__register();
::org::flixel::FlxCamera_obj::__register();
::org::flixel::FlxAssets_obj::__register();
::openfl::utils::WeakRef_obj::__register();
::openfl::events::SystemEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::display::Tilesheet_obj::__register();
::openfl::display::ManagedStage_obj::__register();
::openfl::display::FPS_obj::__register();
::openfl::LibraryType_obj::__register();
::openfl::AssetType_obj::__register();
::openfl::Assets_obj::__register();
::nme::AssetData_obj::__register();
::haxe::xml::Fast_obj::__register();
::haxe::xml::_Fast::NodeListAccess_obj::__register();
::haxe::xml::_Fast::HasNodeAccess_obj::__register();
::haxe::xml::_Fast::HasAttribAccess_obj::__register();
::haxe::xml::_Fast::AttribAccess_obj::__register();
::haxe::xml::_Fast::NodeAccess_obj::__register();
::haxe::io::Path_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Serializer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::Log_obj::__register();
::haxe::Json_obj::__register();
::flx::state::level::LevelBase_obj::__register();
::org::flixel::FlxState_obj::__register();
::org::flixel::FlxGroup_obj::__register();
::flx::core::SpawnPlace_obj::__register();
::flx::core::SortingGroup_obj::__register();
::org::flixel::FlxTypedGroup_obj::__register();
::flx::core::PlayerController_obj::__register();
::flx::core::KeyStatus_obj::__register();
::flx::core::Player_obj::__register();
::flx::core::Facade_obj::__register();
::flx::core::Enemy_obj::__register();
::org::flixel::FlxSprite_obj::__register();
::org::flixel::FlxObject_obj::__register();
::org::flixel::util::FlxPoint_obj::__register();
::org::flixel::util::FlxRect_obj::__register();
::org::flixel::FlxBasic_obj::__register();
::flx::Game_obj::__register();
::org::flixel::FlxGame_obj::__register();
::flixel::addons::editors::tiled::TiledTileSet_obj::__register();
::flixel::addons::editors::tiled::TiledTile_obj::__register();
::flixel::addons::editors::tiled::TiledPropertySet_obj::__register();
::flixel::addons::editors::tiled::TiledObjectGroup_obj::__register();
::flixel::addons::editors::tiled::TiledObject_obj::__register();
::flixel::addons::editors::tiled::TiledMap_obj::__register();
::flixel::addons::editors::tiled::TiledLayer_obj::__register();
::flash::utils::Endian_obj::__register();
::flash::utils::CompressionAlgorithm_obj::__register();
::flash::utils::ByteArray_obj::__register();
::flash::utils::IDataInput_obj::__register();
::openfl::utils::IMemoryRange_obj::__register();
::flash::utils::IDataOutput_obj::__register();
::flash::ui::MultitouchInputMode_obj::__register();
::flash::ui::Multitouch_obj::__register();
::flash::ui::Mouse_obj::__register();
::flash::ui::Keyboard_obj::__register();
::flash::text::TextLineMetrics_obj::__register();
::flash::text::TextFormatAlign_obj::__register();
::flash::text::TextFormat_obj::__register();
::flash::text::TextFieldType_obj::__register();
::flash::text::TextFieldAutoSize_obj::__register();
::flash::text::TextField_obj::__register();
::flash::text::GridFitType_obj::__register();
::flash::text::FontType_obj::__register();
::flash::text::FontStyle_obj::__register();
::flash::text::Font_obj::__register();
::flash::text::AntiAliasType_obj::__register();
::flash::system::System_obj::__register();
::flash::system::SecurityDomain_obj::__register();
::flash::system::LoaderContext_obj::__register();
::flash::system::ApplicationDomain_obj::__register();
::flash::net::URLVariables_obj::__register();
::flash::net::URLRequestMethod_obj::__register();
::flash::net::URLRequestHeader_obj::__register();
::flash::net::URLRequest_obj::__register();
::flash::net::URLLoaderDataFormat_obj::__register();
::flash::net::SharedObjectFlushStatus_obj::__register();
::flash::net::SharedObject_obj::__register();
::flash::media::SoundTransform_obj::__register();
::flash::media::SoundLoaderContext_obj::__register();
::flash::media::SoundChannel_obj::__register();
::flash::media::Sound_obj::__register();
::flash::media::ID3Info_obj::__register();
::flash::geom::Vector3D_obj::__register();
::flash::geom::Transform_obj::__register();
::flash::geom::Rectangle_obj::__register();
::flash::geom::Point_obj::__register();
::flash::geom::Matrix_obj::__register();
::flash::geom::ColorTransform_obj::__register();
::flash::filters::BitmapFilter_obj::__register();
::flash::filesystem::File_obj::__register();
::flash::events::SampleDataEvent_obj::__register();
::flash::events::ProgressEvent_obj::__register();
::flash::events::KeyboardEvent_obj::__register();
::flash::events::IOErrorEvent_obj::__register();
::flash::events::HTTPStatusEvent_obj::__register();
::flash::events::FocusEvent_obj::__register();
::flash::events::EventPhase_obj::__register();
::flash::events::Listener_obj::__register();
::flash::events::ErrorEvent_obj::__register();
::flash::events::TextEvent_obj::__register();
::flash::errors::RangeError_obj::__register();
::flash::errors::EOFError_obj::__register();
::flash::errors::ArgumentError_obj::__register();
::flash::errors::Error_obj::__register();
::flash::display::TriangleCulling_obj::__register();
::flash::display::StageScaleMode_obj::__register();
::flash::display::StageQuality_obj::__register();
::flash::display::StageDisplayState_obj::__register();
::flash::display::StageAlign_obj::__register();
::flash::display::TouchInfo_obj::__register();
::flash::display::Stage_obj::__register();
::flash::events::TouchEvent_obj::__register();
::flash::events::MouseEvent_obj::__register();
::flash::events::Event_obj::__register();
::flash::display::SpreadMethod_obj::__register();
::flash::display::Shape_obj::__register();
::flash::display::PixelSnapping_obj::__register();
::flash::display::MovieClip_obj::__register();
::flash::display::LoaderInfo_obj::__register();
::flash::net::URLLoader_obj::__register();
::flash::display::Loader_obj::__register();
::flash::display::LineScaleMode_obj::__register();
::flash::display::JointStyle_obj::__register();
::flash::display::InterpolationMethod_obj::__register();
::flash::display::IGraphicsData_obj::__register();
::flash::display::GraphicsPathWinding_obj::__register();
::flash::display::Graphics_obj::__register();
::flash::display::GradientType_obj::__register();
::flash::display::CapsStyle_obj::__register();
::flash::display::BlendMode_obj::__register();
::flash::display::OptimizedPerlin_obj::__register();
::flash::display::BitmapData_obj::__register();
::flash::display::Bitmap_obj::__register();
::flash::_Vector::Vector_Impl__obj::__register();
::flash::Memory_obj::__register();
::cpp::zip::Uncompress_obj::__register();
::cpp::zip::Flush_obj::__register();
::cpp::zip::Compress_obj::__register();
::cpp::vm::Gc_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Reflect_obj::__register();
::IMap_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::EReg_obj::__register();
::Date_obj::__register();
::DocumentClass_obj::__register();
::Main_obj::__register();
::flash::display::Sprite_obj::__register();
::flash::display::DisplayObjectContainer_obj::__register();
::flash::display::InteractiveObject_obj::__register();
::flash::display::DisplayObject_obj::__register();
::flash::Lib_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::flash::display::IBitmapDrawable_obj::__register();
::flash::events::EventDispatcher_obj::__register();
::flash::events::IEventDispatcher_obj::__register();
::ApplicationMain_obj::__register();
::Xml_obj::__init__();
::flash::ui::Multitouch_obj::__init__();
::flash::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::EReg_obj::__boot();
::Xml_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::vm::Gc_obj::__boot();
::cpp::zip::Compress_obj::__boot();
::cpp::zip::Flush_obj::__boot();
::cpp::zip::Uncompress_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::flash::events::IEventDispatcher_obj::__boot();
::flash::events::EventDispatcher_obj::__boot();
::flash::display::IBitmapDrawable_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::flash::Lib_obj::__boot();
::flash::display::DisplayObject_obj::__boot();
::flash::display::InteractiveObject_obj::__boot();
::flash::display::DisplayObjectContainer_obj::__boot();
::flash::display::Sprite_obj::__boot();
::Main_obj::__boot();
::DocumentClass_obj::__boot();
::Date_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::IMap_obj::__boot();
::Reflect_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::XmlType_obj::__boot();
::flash::Memory_obj::__boot();
::flash::_Vector::Vector_Impl__obj::__boot();
::flash::display::Bitmap_obj::__boot();
::flash::display::BitmapData_obj::__boot();
::flash::display::OptimizedPerlin_obj::__boot();
::flash::display::BlendMode_obj::__boot();
::flash::display::CapsStyle_obj::__boot();
::flash::display::GradientType_obj::__boot();
::flash::display::Graphics_obj::__boot();
::flash::display::GraphicsPathWinding_obj::__boot();
::flash::display::IGraphicsData_obj::__boot();
::flash::display::InterpolationMethod_obj::__boot();
::flash::display::JointStyle_obj::__boot();
::flash::display::LineScaleMode_obj::__boot();
::flash::display::Loader_obj::__boot();
::flash::net::URLLoader_obj::__boot();
::flash::display::LoaderInfo_obj::__boot();
::flash::display::MovieClip_obj::__boot();
::flash::display::PixelSnapping_obj::__boot();
::flash::display::Shape_obj::__boot();
::flash::display::SpreadMethod_obj::__boot();
::flash::events::Event_obj::__boot();
::flash::events::MouseEvent_obj::__boot();
::flash::events::TouchEvent_obj::__boot();
::flash::display::Stage_obj::__boot();
::flash::display::TouchInfo_obj::__boot();
::flash::display::StageAlign_obj::__boot();
::flash::display::StageDisplayState_obj::__boot();
::flash::display::StageQuality_obj::__boot();
::flash::display::StageScaleMode_obj::__boot();
::flash::display::TriangleCulling_obj::__boot();
::flash::errors::Error_obj::__boot();
::flash::errors::ArgumentError_obj::__boot();
::flash::errors::EOFError_obj::__boot();
::flash::errors::RangeError_obj::__boot();
::flash::events::TextEvent_obj::__boot();
::flash::events::ErrorEvent_obj::__boot();
::flash::events::Listener_obj::__boot();
::flash::events::EventPhase_obj::__boot();
::flash::events::FocusEvent_obj::__boot();
::flash::events::HTTPStatusEvent_obj::__boot();
::flash::events::IOErrorEvent_obj::__boot();
::flash::events::KeyboardEvent_obj::__boot();
::flash::events::ProgressEvent_obj::__boot();
::flash::events::SampleDataEvent_obj::__boot();
::flash::filesystem::File_obj::__boot();
::flash::filters::BitmapFilter_obj::__boot();
::flash::geom::ColorTransform_obj::__boot();
::flash::geom::Matrix_obj::__boot();
::flash::geom::Point_obj::__boot();
::flash::geom::Rectangle_obj::__boot();
::flash::geom::Transform_obj::__boot();
::flash::geom::Vector3D_obj::__boot();
::flash::media::ID3Info_obj::__boot();
::flash::media::Sound_obj::__boot();
::flash::media::SoundChannel_obj::__boot();
::flash::media::SoundLoaderContext_obj::__boot();
::flash::media::SoundTransform_obj::__boot();
::flash::net::SharedObject_obj::__boot();
::flash::net::SharedObjectFlushStatus_obj::__boot();
::flash::net::URLLoaderDataFormat_obj::__boot();
::flash::net::URLRequest_obj::__boot();
::flash::net::URLRequestHeader_obj::__boot();
::flash::net::URLRequestMethod_obj::__boot();
::flash::net::URLVariables_obj::__boot();
::flash::system::ApplicationDomain_obj::__boot();
::flash::system::LoaderContext_obj::__boot();
::flash::system::SecurityDomain_obj::__boot();
::flash::system::System_obj::__boot();
::flash::text::AntiAliasType_obj::__boot();
::flash::text::Font_obj::__boot();
::flash::text::FontStyle_obj::__boot();
::flash::text::FontType_obj::__boot();
::flash::text::GridFitType_obj::__boot();
::flash::text::TextField_obj::__boot();
::flash::text::TextFieldAutoSize_obj::__boot();
::flash::text::TextFieldType_obj::__boot();
::flash::text::TextFormat_obj::__boot();
::flash::text::TextFormatAlign_obj::__boot();
::flash::text::TextLineMetrics_obj::__boot();
::flash::ui::Keyboard_obj::__boot();
::flash::ui::Mouse_obj::__boot();
::flash::ui::Multitouch_obj::__boot();
::flash::ui::MultitouchInputMode_obj::__boot();
::flash::utils::IDataOutput_obj::__boot();
::openfl::utils::IMemoryRange_obj::__boot();
::flash::utils::IDataInput_obj::__boot();
::flash::utils::ByteArray_obj::__boot();
::flash::utils::CompressionAlgorithm_obj::__boot();
::flash::utils::Endian_obj::__boot();
::flixel::addons::editors::tiled::TiledLayer_obj::__boot();
::flixel::addons::editors::tiled::TiledMap_obj::__boot();
::flixel::addons::editors::tiled::TiledObject_obj::__boot();
::flixel::addons::editors::tiled::TiledObjectGroup_obj::__boot();
::flixel::addons::editors::tiled::TiledPropertySet_obj::__boot();
::flixel::addons::editors::tiled::TiledTile_obj::__boot();
::flixel::addons::editors::tiled::TiledTileSet_obj::__boot();
::org::flixel::FlxGame_obj::__boot();
::flx::Game_obj::__boot();
::org::flixel::FlxBasic_obj::__boot();
::org::flixel::util::FlxRect_obj::__boot();
::org::flixel::util::FlxPoint_obj::__boot();
::org::flixel::FlxObject_obj::__boot();
::org::flixel::FlxSprite_obj::__boot();
::flx::core::Enemy_obj::__boot();
::flx::core::Facade_obj::__boot();
::flx::core::Player_obj::__boot();
::flx::core::KeyStatus_obj::__boot();
::flx::core::PlayerController_obj::__boot();
::org::flixel::FlxTypedGroup_obj::__boot();
::flx::core::SortingGroup_obj::__boot();
::flx::core::SpawnPlace_obj::__boot();
::org::flixel::FlxGroup_obj::__boot();
::org::flixel::FlxState_obj::__boot();
::flx::state::level::LevelBase_obj::__boot();
::haxe::Json_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Serializer_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Path_obj::__boot();
::haxe::xml::_Fast::NodeAccess_obj::__boot();
::haxe::xml::_Fast::AttribAccess_obj::__boot();
::haxe::xml::_Fast::HasAttribAccess_obj::__boot();
::haxe::xml::_Fast::HasNodeAccess_obj::__boot();
::haxe::xml::_Fast::NodeListAccess_obj::__boot();
::haxe::xml::Fast_obj::__boot();
::nme::AssetData_obj::__boot();
::openfl::Assets_obj::__boot();
::openfl::AssetType_obj::__boot();
::openfl::LibraryType_obj::__boot();
::openfl::display::FPS_obj::__boot();
::openfl::display::ManagedStage_obj::__boot();
::openfl::display::Tilesheet_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::SystemEvent_obj::__boot();
::openfl::utils::WeakRef_obj::__boot();
::org::flixel::FlxAssets_obj::__boot();
::org::flixel::FlxCamera_obj::__boot();
::org::flixel::FlxG_obj::__boot();
::org::flixel::FlxPath_obj::__boot();
::org::flixel::FlxSave_obj::__boot();
::org::flixel::FlxSound_obj::__boot();
::org::flixel::FadeTween_obj::__boot();
::org::flixel::FlxSubState_obj::__boot();
::org::flixel::FlxText_obj::__boot();
::org::flixel::FlxTilemap_obj::__boot();
::org::flixel::plugin::DebugPathDisplay_obj::__boot();
::org::flixel::plugin::TimerManager_obj::__boot();
::org::flixel::plugin::pxText::PxBitmapFont_obj::__boot();
::org::flixel::plugin::pxText::HelperSymbol_obj::__boot();
::org::flixel::plugin::pxText::PxFontSymbol_obj::__boot();
::org::flixel::plugin::texturepacker::Frame_obj::__boot();
::org::flixel::plugin::texturepacker::TexturePackerData_obj::__boot();
::org::flixel::system::BGSprite_obj::__boot();
::org::flixel::system::FlxAnim_obj::__boot();
::org::flixel::system::FlxDebugger_obj::__boot();
::org::flixel::system::FlxList_obj::__boot();
::org::flixel::system::FlxQuadTree_obj::__boot();
::org::flixel::system::FlxReplay_obj::__boot();
::org::flixel::system::FlxTile_obj::__boot();
::org::flixel::system::FlxTilemapBuffer_obj::__boot();
::org::flixel::system::FlxWindow_obj::__boot();
::org::flixel::system::debug::Console_obj::__boot();
::org::flixel::system::debug::ConsoleCommands_obj::__boot();
::org::flixel::system::debug::Log_obj::__boot();
::org::flixel::system::debug::LogStyle_obj::__boot();
::org::flixel::system::debug::Perf_obj::__boot();
::org::flixel::system::debug::VCR_obj::__boot();
::org::flixel::system::debug::Vis_obj::__boot();
::org::flixel::system::debug::Watch_obj::__boot();
::org::flixel::system::debug::WatchEntry_obj::__boot();
::org::flixel::system::input::FlxInputStates_obj::__boot();
::org::flixel::system::input::FlxInputs_obj::__boot();
::org::flixel::system::input::FlxJoystick_obj::__boot();
::org::flixel::system::input::FlxJoyButton_obj::__boot();
::org::flixel::system::input::XBOX_BUTTON_IDS_obj::__boot();
::org::flixel::system::input::IFlxInput_obj::__boot();
::org::flixel::system::input::FlxJoystickManager_obj::__boot();
::org::flixel::system::input::FlxKeyboard_obj::__boot();
::org::flixel::system::input::FlxMapObject_obj::__boot();
::org::flixel::system::input::FlxMouse_obj::__boot();
::org::flixel::system::input::FlxTouch_obj::__boot();
::org::flixel::system::input::FlxTouchManager_obj::__boot();
::org::flixel::system::layer::Atlas_obj::__boot();
::org::flixel::system::layer::DrawStackItem_obj::__boot();
::org::flixel::system::layer::Node_obj::__boot();
::org::flixel::system::layer::TileSheetData_obj::__boot();
::org::flixel::system::layer::TileSheetExt_obj::__boot();
::org::flixel::system::layer::frames::FlxFrame_obj::__boot();
::org::flixel::system::layer::frames::FlxSpriteFrames_obj::__boot();
::org::flixel::system::replay::CodeValuePair_obj::__boot();
::org::flixel::system::replay::FrameRecord_obj::__boot();
::org::flixel::system::replay::MouseRecord_obj::__boot();
::org::flixel::tweens::FlxTween_obj::__boot();
::org::flixel::tweens::misc::MultiVarTween_obj::__boot();
::org::flixel::tweens::util::Ease_obj::__boot();
::org::flixel::util::FlxAngle_obj::__boot();
::org::flixel::util::FlxArray_obj::__boot();
::org::flixel::util::FlxColor_obj::__boot();
::org::flixel::util::FlxMath_obj::__boot();
::org::flixel::util::FlxMisc_obj::__boot();
::org::flixel::util::FlxRandom_obj::__boot();
::org::flixel::util::FlxString_obj::__boot();
::org::flixel::util::FlxTimer_obj::__boot();
::sys::FileSystem_obj::__boot();
::sys::io::File_obj::__boot();
::sys::io::FileOutput_obj::__boot();
::tmx::TiledLevel_obj::__boot();
::util::MathHelp_obj::__boot();
}

