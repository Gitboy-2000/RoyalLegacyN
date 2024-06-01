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

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE, snow_tree_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(241, LEVEL_CASTLE_GROUNDS, 1, 6, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE_GROUNDS, 1, 5, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_WF, 1, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(12, LEVEL_WF, 1, 11, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_WF, 1, 12, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_WF, 1, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(17, LEVEL_WF, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_CASTLE_GROUNDS, 1, 10, WARP_NO_CHECKPOINT),
		OBJECT(212, 2261, 6571, 14054, 0, 0, 0, 0x0, bhv1upSliding),
		OBJECT(0, 1004, 487, 6412, 0, 0, 0, 0xb0000, bhvAirborneWarp),
		OBJECT(140, -1819, 1241, -795, 0, -58, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT_WITH_ACTS(195, -14579, 3727, -3870, 0, 0, 0, 0x1010000, bhvBobombBuddy, ACT_4),
		OBJECT_WITH_ACTS(129, -4113, 2618, 2075, 0, 52, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -4270, 2818, 1952, 0, 52, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -4899, 3618, 1463, 0, 52, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -4427, 3018, 1830, 0, 52, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -4740, 3418, 1585, 0, 52, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -4583, 3218, 1707, 0, 52, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -5056, 3818, 1339, 0, 52, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -5212, 4018, 1216, 0, 52, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -4116, 2418, 2239, 0, 52, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -4239, 2418, 2122, 0, 40, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -4363, 2318, 2274, 0, 40, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -4237, 2318, 2396, 0, 52, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -4462, 2318, 2154, 0, 43, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -4319, 2418, 2028, 0, 40, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -2616, 2550, 1394, 0, -60, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -2445, 2550, 1296, 0, -60, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, -2274, 2550, 1196, 0, -60, 0, 0x0, bhvBreakableBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(128, -7864, 4306, -1088, 0, 51, 0, 0x5a0000, bhvCannon, ACT_4 | ACT_5 | ACT_6),
		OBJECT(0, 404, 421, 4731, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -6364, -435, -1260, 0, 0, 0, 0x120000, bhvCoinFormation),
		OBJECT(0, -6161, 717, -2539, 0, 74, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -6081, 2370, 3094, 0, 104, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -72, 1074, 7072, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -6467, 4362, 160, 0, 48, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -7095, 593, 2252, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -2755, 684, 1549, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2235, 1074, 6197, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 3289, 6644, 14070, 0, -90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 9312, 5097, 12464, 0, -58, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 13695, 3241, 3411, 0, -146, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 491, 7710, 13959, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -2088, 1332, -1020, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT_WITH_ACTS(38, 1093, 487, 6911, 0, -161, 0, 0x110000, bhvDoorWarp, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(137, 1403, -1458, 4509, 0, 66, 0, 0xd0000, bhvExclamationBox, ACT_5),
		OBJECT_WITH_ACTS(137, 403, 780, 4737, 0, 0, 0, 0x0, bhvExclamationBox, ACT_6),
		OBJECT(137, -2040, 750, 5913, 0, 34, 0, 0x60000, bhvExclamationBox),
		OBJECT(137, 2654, 750, 3692, 0, 24, 0, 0x50000, bhvExclamationBox),
		OBJECT_WITH_ACTS(0, 381, 452, 4727, 0, 0, 0, 0xb0000, bhvFadingWarp, ACT_5),
		OBJECT_WITH_ACTS(0, 487, 7710, 13963, 0, 178, 0, 0xc0000, bhvFadingWarp, ACT_5),
		OBJECT(220, -2285, 103, -1936, 0, 0, 0, 0x0, bhvFlyGuy),
		OBJECT(0, -3292, 103, -154, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -5906, 4215, 586, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -7201, 4211, -532, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(118, -1656, 2721, -698, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1657, 2642, -698, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1861, 3082, -1334, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1487, 2359, -145, 0, -69, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1486, 2279, -146, 0, -69, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1861, 3002, -1334, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1750, 1770, -350, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1750, 1850, -350, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT_WITH_ACTS(0, 395, 572, 4734, -180, 0, 0, 0x2000000, bhvHiddenRedCoinStar, ACT_3),
		OBJECT_WITH_ACTS(124, 494, 452, 4970, 0, -157, 0, 0x120000, bhvMessagePanel, ACT_6),
		OBJECT(124, -1762, 731, 424, 0, -96, 0, 0x3c0000, bhvMessagePanel),
		OBJECT(85, -4756, 275, 1304, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, -7128, 237, 2238, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, -8825, 207, 559, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(86, -1340, 487, 4995, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(86, -778, 487, 5773, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(86, 1352, 487, 3570, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(86, 1777, 487, 4755, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT_WITH_ACTS(217, 1130, 457, 6954, 0, 19, 0, 0x0, bhvPushableMetalBox, ACT_1),
		OBJECT_WITH_ACTS(215, -1005, 480, -693, 0, 0, 0, 0x0, bhvRedCoin, ACT_3),
		OBJECT_WITH_ACTS(215, -6365, -427, -1257, 0, 0, 0, 0x0, bhvRedCoin, ACT_3),
		OBJECT_WITH_ACTS(215, 1278, 498, 7454, 0, 0, 0, 0x0, bhvRedCoin, ACT_3),
		OBJECT_WITH_ACTS(215, -9409, 1632, -267, 0, 0, 0, 0x0, bhvRedCoin, ACT_3),
		OBJECT_WITH_ACTS(215, -3282, 2508, 1768, 0, 0, 0, 0x0, bhvRedCoin, ACT_3),
		OBJECT_WITH_ACTS(215, -7720, 1788, -2885, 0, -171, 0, 0x0, bhvRedCoin, ACT_3),
		OBJECT_WITH_ACTS(215, -4156, 191, -2310, 0, 0, 0, 0x0, bhvRedCoin, ACT_3),
		OBJECT_WITH_ACTS(215, -1021, 3581, 442, 0, 0, 0, 0x0, bhvRedCoin, ACT_3),
		OBJECT(0, -453, -180, -955, 0, 136, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(84, -5156, 1394, -2663, 0, 0, 0, 0x0, bhvSpindrift),
		OBJECT(84, -9004, 1560, -1870, 0, 0, 0, 0x0, bhvSpindrift),
		OBJECT(84, -8882, 1571, 1669, 0, 0, 0, 0x0, bhvSpindrift),
		OBJECT_WITH_ACTS(122, -3306, 2520, 1795, 0, 0, 0, 0x0, bhvStar, ACT_1),
		OBJECT_WITH_ACTS(122, -15202, 1548, -4415, 0, 0, 0, 0x3000000, bhvStar, ACT_4),
		OBJECT(122, -6597, 7590, -188, 0, 0, 0, 0x5000000, bhvStar),
		OBJECT_WITH_ACTS(221, 1350, 487, 6630, 0, -152, 0, 0x85000000, bhvToadMessage, ACT_1),
		OBJECT_WITH_ACTS(221, -2644, 103, -1954, 0, 0, 0, 0x87000000, bhvToadMessage, ACT_4),
		OBJECT_WITH_ACTS(221, -3954, 103, -2233, 0, -21, 0, 0x86000000, bhvToadMessage, ACT_1),
		OBJECT(25, -2741, 103, 1545, 0, 115, 0, 0x0, bhvTree),
		OBJECT(25, 2240, 456, 6193, 0, -135, 0, 0x0, bhvTree),
		OBJECT(25, -80, 456, 7087, 0, 170, 0, 0x0, bhvTree),
		OBJECT(25, -1026, 3017, 444, 0, 0, 0, 0x0, bhvTree),
		OBJECT(25, -2094, 731, -1016, 0, -72, 0, 0x0, bhvTree),
		OBJECT(25, -1026, 3017, 444, 0, -164, 0, 0x0, bhvTree),
		OBJECT(25, -13980, 3727, -3331, 0, -102, 0, 0x0, bhvTree),
		OBJECT(25, -12926, 3688, -4819, 0, -125, 0, 0x0, bhvTree),
		OBJECT(25, 1937, 487, 3163, 0, -56, 0, 0x0, bhvTree),
		OBJECT(25, -2078, 487, 5165, 0, 111, 0, 0x0, bhvTree),
		OBJECT(25, -2235, 487, 3832, 0, 111, 0, 0x0, bhvTree),
		OBJECT(25, 826, 487, 2133, 0, -69, 0, 0x0, bhvTree),
		OBJECT(25, -1583, 1745, -548, 0, -69, 0, 0x0, bhvTree),
		OBJECT(25, -1583, 1745, -548, 0, -69, 0, 0x0, bhvTree),
		OBJECT(25, -1330, 456, 6235, 0, 170, 0, 0x0, bhvTree),
		OBJECT(25, 2489, 456, 4559, 0, 170, 0, 0x0, bhvTree),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 37),
		TERRAIN_TYPE(TERRAIN_SNOW),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, wf_area_2),
		WARP_NODE(241, LEVEL_CASTLE_GROUNDS, 1, 6, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE_GROUNDS, 1, 5, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_WF, 2, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(18, LEVEL_WF, 1, 11, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_GROUNDS, 1, 10, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(0, 1857, 0, -358, 0, 0, 0, 0xa0000, bhvAirborneWarp, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(129, 590, 1152, -2396, 0, 0, 0, 0x0, bhvBreakableBox, ACT_2),
		OBJECT(0, -517, 1002, -1385, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -119, 1548, -1403, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2084, 1200, -418, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(34, 3026, 1200, -764, 0, 0, 0, 0x0, bhvDoor),
		OBJECT(34, 1049, 1200, -763, 0, 0, 0, 0x0, bhvDoor),
		OBJECT(34, 1200, 1200, -763, 0, -180, 0, 0x0, bhvDoor),
		OBJECT(34, 141, 1200, -332, 0, -90, 0, 0x0, bhvDoor),
		OBJECT_WITH_ACTS(122, 595, 1278, -2381, 0, 0, 0, 0x1000000, bhvStar, ACT_2),
		OBJECT_WITH_ACTS(221, 2850, 1200, -1663, 0, 42, 0, 0x88000000, bhvToadMessage, ACT_2),
		OBJECT_WITH_ACTS(221, 1867, 0, -1554, 0, 0, 0, 0x2a000000, bhvToadMessage, ACT_3),
		OBJECT_WITH_ACTS(221, 3177, 1200, -1668, 0, -44, 0, 0x2b000000, bhvToadMessage, ACT_4),
		OBJECT_WITH_ACTS(221, 1871, 0, -1556, 0, 0, 0, 0x2c000000, bhvToadMessage, ACT_5),
		OBJECT_WITH_ACTS(221, 2994, 1200, -1619, 0, 0, 0, 0x2d000000, bhvToadMessage, ACT_6),
		OBJECT_WITH_ACTS(0, 1874, 150, 70, 0, 0, 0, 0x120000, bhvWarp, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		TERRAIN(wf_area_2_collision),
		MACRO_OBJECTS(wf_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 37),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
