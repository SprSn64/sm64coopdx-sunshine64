#include "src/game/envfx_snow.h"

const GeoLayout gooble_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, -90, 0, -180),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
			GEO_OPEN_NODE(),
				GEO_SHADOW(1, 59, 100),
				GEO_OPEN_NODE(),
					GEO_SCALE(LAYER_OPAQUE, 16384),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 90, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, gooble_Main_mesh_layer_4),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_TRANSPARENT, gooble_Main_mesh_layer_5),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 186, 0, -90, 0, 0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, gooble_GoopBlob_mesh_layer_1),
								GEO_CLOSE_NODE(),
								GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 0, 360, 0, gooble_ThingBill_mesh_layer_4),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, gooble_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, gooble_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, gooble_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
