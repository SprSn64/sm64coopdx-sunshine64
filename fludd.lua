E_MODEL_FLUDDPICKUP = smlua_model_util_get_id("fluddpickup_geo")
E_MODEL_FLUDD = smlua_model_util_get_id("fludd_geo")

TEX_FLUDDWATERUI_BACK = get_texture_info("fluddwaterui_back")
TEX_FLUDDWATERUI_WATER = get_texture_info("fluddwaterui_water")
TEX_FLUDDWATERUI_FRONT = get_texture_info("fluddwaterui_front")

local fluddWaterPercent = 0

function fluddPickup_init(obj)
	obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
	
	network_init_object(obj, true, nil)
end

function fluddPickup_loop(obj)
	--obj.oPosY = obj.oPosY + 0.2
	cur_obj_set_pos_relative(gMarioObject, 0, 60, 100)
end

function fludd_init(obj)
	obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
end

function fludd_loop(obj)
	cur_obj_set_pos_relative(gMarioObject, 0, 60, 100)
	fluddWaterPercent = (math.sin(get_network_area_timer() / 24) + 1) / 2
end

--Gfx *geo_switch_fludd_nozzle(s32 callContext, struct GraphNode *node, UNUSED Mat4 *c) {
--    struct GraphNodeSwitchCase *switchCase = (struct GraphNodeSwitchCase *) node;
--    struct MarioBodyState *bodyState = &gBodyStates[switchCase->numCases];
--    s16 blinkFrame;
--
--    if (callContext == GEO_CONTEXT_RENDER) {
--        if (bodyState->eyeState == 0) {
--            blinkFrame = ((switchCase->numCases * 32 + gAreaUpdateCounter) >> 1) & 0x1F;
--            if (blinkFrame < 7) {
--                switchCase->selectedCase = gMarioBlinkAnimation[blinkFrame];
--            } else {
--                switchCase->selectedCase = 0;
--            }
--       } else {
--            switchCase->selectedCase = bodyState->eyeState - 1;
--        }
--    }
--    return NULL;
--}

function geo_switch_fludd_nozzle()
	return 2
end

function fluddUI(x, y, scale)
	djui_hud_set_color(255, 255, 255, 255)
	djui_hud_set_font(FONT_MENU)
	djui_hud_print_text(tostring(fluddWaterPercent), x, y - (8*scale), 0.5)
	djui_hud_render_texture(TEX_FLUDDWATERUI_BACK, x + 16 * scale, y + 28 * scale, scale, scale)
	djui_hud_render_texture_tile(TEX_FLUDDWATERUI_WATER, x + 16 * scale, y + 24 + ((1 - fluddWaterPercent) * 26) * scale, fluddWaterPercent, scale * fluddWaterPercent, 0, 0, 26, 26 * fluddWaterPercent)
	--djui_hud_render_texture(TEX_FLUDDWATERUI_WATER, x+(16*scale), y+(24*scale), scale, scale)
	--djui_hud_render_texture(TEX_FLUDDWATERUI_FRONT, x, y, scale, scale)
end

id_bhvfluddPickup = hook_behavior(nil, OBJ_LIST_DEFAULT, false, fluddPickup_init, fluddPickup_loop, "bhvfluddPickup")
id_bhvfludd = hook_behavior(nil, OBJ_LIST_DEFAULT, false, fludd_init, fludd_loop, "bhvfludd")