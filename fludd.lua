function fluddPickup_init(obj)
	obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
	
	network_init_object(obj, true, nil)
end

function fluddPickup_loop(obj)
	--obj.oPosY = obj.oPosY + 0.2
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