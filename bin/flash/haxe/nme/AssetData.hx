package nme;


import openfl.Assets;


class AssetData {

	
	public static var className = new #if haxe3 Map <String, #else Hash <#end Dynamic> ();
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();
	
	private static var initialized:Bool = false;
	
	
	public static function initialize ():Void {
		
		if (!initialized) {
			
			className.set ("Beep", nme.NME_assets_data_beep_mp3);
			type.set ("Beep", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("assets/Ambient Cave.mp3", nme.NME_assets_ambient_cave_mp3);
			type.set ("assets/Ambient Cave.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			className.set ("assets/an_hero_lifeBar.png", nme.NME_assets_an_hero_lifebar_png);
			type.set ("assets/an_hero_lifeBar.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/an_lifeBar.png", nme.NME_assets_an_lifebar_png);
			type.set ("assets/an_lifeBar.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/boss_tilesheet.png", nme.NME_assets_boss_tilesheet_png);
			type.set ("assets/boss_tilesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/button1_tilesheet.png", nme.NME_assets_button1_tilesheet_png);
			type.set ("assets/button1_tilesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/char_tilesheet.png", nme.NME_assets_char_tilesheet_png);
			type.set ("assets/char_tilesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/autotiles.png", nme.NME_assets_data_autotiles_png);
			type.set ("assets/data/autotiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/autotiles_alt.png", nme.NME_assets_data_autotiles_alt_png);
			type.set ("assets/data/autotiles_alt.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/base.png", nme.NME_assets_data_base_png);
			type.set ("assets/data/base.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/beep.mp3", nme.NME_assets_data_beep_mp4);
			type.set ("assets/data/beep.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			className.set ("assets/data/button.png", nme.NME_assets_data_button_png);
			type.set ("assets/data/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_a.png", nme.NME_assets_data_button_a_png);
			type.set ("assets/data/button_a.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_b.png", nme.NME_assets_data_button_b_png);
			type.set ("assets/data/button_b.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_c.png", nme.NME_assets_data_button_c_png);
			type.set ("assets/data/button_c.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_down.png", nme.NME_assets_data_button_down_png);
			type.set ("assets/data/button_down.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_left.png", nme.NME_assets_data_button_left_png);
			type.set ("assets/data/button_left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_right.png", nme.NME_assets_data_button_right_png);
			type.set ("assets/data/button_right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_up.png", nme.NME_assets_data_button_up_png);
			type.set ("assets/data/button_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_x.png", nme.NME_assets_data_button_x_png);
			type.set ("assets/data/button_x.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_y.png", nme.NME_assets_data_button_y_png);
			type.set ("assets/data/button_y.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/courier.ttf", nme.NME_assets_data_courier_ttf);
			type.set ("assets/data/courier.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			className.set ("assets/data/cursor.png", nme.NME_assets_data_cursor_png);
			type.set ("assets/data/cursor.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/default.png", nme.NME_assets_data_default_png);
			type.set ("assets/data/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/fontData10pt.png", nme.NME_assets_data_fontdata10pt_png);
			type.set ("assets/data/fontData10pt.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/fontData11pt.png", nme.NME_assets_data_fontdata11pt_png);
			type.set ("assets/data/fontData11pt.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/handle.png", nme.NME_assets_data_handle_png);
			type.set ("assets/data/handle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/logo.png", nme.NME_assets_data_logo_png);
			type.set ("assets/data/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/logo_corners.png", nme.NME_assets_data_logo_corners_png);
			type.set ("assets/data/logo_corners.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/logo_light.png", nme.NME_assets_data_logo_light_png);
			type.set ("assets/data/logo_light.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/nokiafc22.ttf", nme.NME_assets_data_nokiafc22_ttf);
			type.set ("assets/data/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			className.set ("assets/data/stick.png", nme.NME_assets_data_stick_png);
			type.set ("assets/data/stick.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/flixel.png", nme.NME_assets_data_vcr_flixel_png);
			type.set ("assets/data/vcr/flixel.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/open.png", nme.NME_assets_data_vcr_open_png);
			type.set ("assets/data/vcr/open.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/pause.png", nme.NME_assets_data_vcr_pause_png);
			type.set ("assets/data/vcr/pause.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/play.png", nme.NME_assets_data_vcr_play_png);
			type.set ("assets/data/vcr/play.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/record_off.png", nme.NME_assets_data_vcr_record_off_png);
			type.set ("assets/data/vcr/record_off.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/record_on.png", nme.NME_assets_data_vcr_record_on_png);
			type.set ("assets/data/vcr/record_on.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/restart.png", nme.NME_assets_data_vcr_restart_png);
			type.set ("assets/data/vcr/restart.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/step.png", nme.NME_assets_data_vcr_step_png);
			type.set ("assets/data/vcr/step.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/stop.png", nme.NME_assets_data_vcr_stop_png);
			type.set ("assets/data/vcr/stop.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vis/bounds.png", nme.NME_assets_data_vis_bounds_png);
			type.set ("assets/data/vis/bounds.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gate_tilesheet.png", nme.NME_assets_gate_tilesheet_png);
			type.set ("assets/gate_tilesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/grave2_tilesheet.png", nme.NME_assets_grave2_tilesheet_png);
			type.set ("assets/grave2_tilesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/HaxeFlixel.svg", nme.NME_assets_haxeflixel_svg);
			type.set ("assets/HaxeFlixel.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/HUD_tilesheet.png", nme.NME_assets_hud_tilesheet_png);
			type.set ("assets/HUD_tilesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/monster1_tilesheet.png", nme.NME_assets_monster1_tilesheet_png);
			type.set ("assets/monster1_tilesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/powerUps.png", nme.NME_assets_powerups_png);
			type.set ("assets/powerUps.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/rumble.png", nme.NME_assets_rumble_png);
			type.set ("assets/rumble.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/splash.png", nme.NME_assets_splash_png);
			type.set ("assets/splash.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/Spooky wind.mp3", nme.NME_assets_spooky_wind_mp3);
			type.set ("assets/Spooky wind.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			className.set ("assets/tiled/bush.png", nme.NME_assets_tiled_bush_png);
			type.set ("assets/tiled/bush.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/tiled/edge.png", nme.NME_assets_tiled_edge_png);
			type.set ("assets/tiled/edge.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/tiled/grave1.png", nme.NME_assets_tiled_grave1_png);
			type.set ("assets/tiled/grave1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/tiled/rock.png", nme.NME_assets_tiled_rock_png);
			type.set ("assets/tiled/rock.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/tiled/ScreenSize.png", nme.NME_assets_tiled_screensize_png);
			type.set ("assets/tiled/ScreenSize.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/tiled/testmap.tmx", nme.NME_assets_tiled_testmap_tmx);
			type.set ("assets/tiled/testmap.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/tiled/tiles.png", nme.NME_assets_tiled_tiles_png);
			type.set ("assets/tiled/tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/tiled/tree.png", nme.NME_assets_tiled_tree_png);
			type.set ("assets/tiled/tree.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/Wind.mp3", nme.NME_assets_wind_mp3);
			type.set ("assets/Wind.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			className.set ("assets/win_tilesheet.png", nme.NME_assets_win_tilesheet_png);
			type.set ("assets/win_tilesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/wood.png", nme.NME_assets_wood_png);
			type.set ("assets/wood.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/youAreDead_tilesheet.png", nme.NME_assets_youaredead_tilesheet_png);
			type.set ("assets/youAreDead_tilesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		}
		
	}
	
	
}


class NME_assets_data_beep_mp3 extends flash.media.Sound { }
class NME_assets_ambient_cave_mp3 extends flash.media.Sound { }
class NME_assets_an_hero_lifebar_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_an_lifebar_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_boss_tilesheet_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_button1_tilesheet_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_char_tilesheet_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_autotiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_autotiles_alt_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_base_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_beep_mp4 extends flash.media.Sound { }
class NME_assets_data_button_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_a_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_b_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_c_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_down_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_left_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_right_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_up_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_y_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_courier_ttf extends flash.text.Font { }
class NME_assets_data_cursor_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_default_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_fontdata10pt_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_fontdata11pt_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_handle_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_corners_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_light_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_nokiafc22_ttf extends flash.text.Font { }
class NME_assets_data_stick_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_flixel_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_open_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_pause_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_play_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_off_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_on_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_restart_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_step_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_stop_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vis_bounds_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gate_tilesheet_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_grave2_tilesheet_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_haxeflixel_svg extends flash.utils.ByteArray { }
class NME_assets_hud_tilesheet_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_monster1_tilesheet_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_powerups_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_rumble_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_splash_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_spooky_wind_mp3 extends flash.media.Sound { }
class NME_assets_tiled_bush_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_tiled_edge_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_tiled_grave1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_tiled_rock_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_tiled_screensize_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_tiled_testmap_tmx extends flash.utils.ByteArray { }
class NME_assets_tiled_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_tiled_tree_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_wind_mp3 extends flash.media.Sound { }
class NME_assets_win_tilesheet_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_wood_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_youaredead_tilesheet_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
