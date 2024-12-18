#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"


/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario),

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF2, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -185, 649, 6558, 0, 180, 0, 0x000A0000, bhvInstantActiveWarp),
		MARIO_POS(0x01, 180, -185, 166, 6558),
		OBJECT(MODEL_NONE, -185, 193, 5497, 0, 0, 0, (0xF2 << 16), bhvFadingWarp),
		OBJECT(E_MODEL_FLUDD, -785, 166, 3034, 0, 0, 0, 0x00000000, id_bhvfludd),
		OBJECT(E_MODEL_FLUDDPICKUP, -185, 166, 3034, 0, 0, 0, 0x00000000, id_bhvfluddPickup),
		OBJECT(E_MODEL_GOOBLE, -361, 166, 4126, 0, 0, 0, 0x00000000, id_bhvGoomba),
		OBJECT(E_MODEL_GOOBLE, -2660, 566, -108, 0, -180, 0, 0x00000000, id_bhvStaticObject),
		OBJECT(E_MODEL_STROLLINSTU, 8552, 166, -7798, 0, 0, 0, 0x00000000, id_bhvGoomba),
		OBJECT(E_MODEL_STROLLINSTU, -7288, 166, -5786, 0, -90, 0, 0x00000000, id_bhvStaticObject),
		OBJECT(MODEL_NONE, 9233, 324, -7378, 0, 0, 0, (0xF3 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -185, 649, 6558, 0, 180, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -185, 649, 6558, 0, 180, 0, (0xF0 << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -185, 649, 6558, 0, 180, 0, (0xF1 << 16), bhvInstantActiveWarp),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_INSIDE_CASTLE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 180, -185, 166, 6558),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
