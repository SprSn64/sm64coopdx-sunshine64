#include "src/game/envfx_snow.h"

const GeoLayout fluddpickup_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, -90, 0, -180),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, fluddpickup_Root_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, fluddpickup_Root_mesh_layer_5),
				GEO_SHADOW(1, 180, 100),
				GEO_OPEN_NODE(),
					GEO_SCALE(LAYER_OPAQUE, 16384),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, fluddpickup_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, fluddpickup_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
