-- name: Mario Sunshine 64
-- description: i have no idea what im doing

E_MODEL_FLUDDPICKUP = smlua_model_util_get_id("fluddpickup_geo")
E_MODEL_FLUDD = smlua_model_util_get_id("fludd_geo")

E_MODEL_GOOBLE = smlua_model_util_get_id("gooble_geo")
E_MODEL_STROLLINSTU = smlua_model_util_get_id("strollinstu_geo")

local objSpawned = false

local function update()
	
end

local function on_level_init()

end

hook_event(HOOK_UPDATE, update)
hook_event(HOOK_ON_LEVEL_INIT, on_level_init)

id_bhvfluddPickup = hook_behavior(nil, OBJ_LIST_DEFAULT, false, fluddPickup_init, fluddPickup_loop, "bhvfluddPickup")