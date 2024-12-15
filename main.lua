-- name: Mario Sunshine 64
-- description: i have no idea what im doing
-- incompatible: romhack

E_MODEL_GOOBLE = smlua_model_util_get_id("gooble_geo")
E_MODEL_STROLLINSTU = smlua_model_util_get_id("strollinstu_geo")

screenWidth = djui_hud_get_screen_width()
screenHeight = djui_hud_get_screen_height()

local function update()
	
end

local function on_level_init()

end

local function on_hud_render()
    fluddUI(screenWidth - 288, screenHeight - 416, 4)
end

hook_event(HOOK_ON_HUD_RENDER, on_hud_render)
hook_event(HOOK_UPDATE, update)
hook_event(HOOK_ON_LEVEL_INIT, on_level_init)