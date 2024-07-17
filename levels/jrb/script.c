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

#include "actors/common0.h"
#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/jrb/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_jrb_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _bitfs_skybox_mio0SegmentRomStart, _bitfs_skybox_mio0SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_C3_SPIN, c3_spin_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_GEM_STAR, gem_star_red_geo),

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, jrb_area_1),
		WARP_NODE(241, LEVEL_CASTLE_GROUNDS, 1, 8, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE_GROUNDS, 1, 7, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_JRB, 1, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(5, LEVEL_JRB, 1, 6, WARP_NO_CHECKPOINT),
		WARP_NODE(6, LEVEL_JRB, 1, 5, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_GROUNDS, 1, 10, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 1045, 3317, -6355, 0, 0, 0, 0x00000000, bhvCS),
		OBJECT(137, 8184, -110, 2850, 0, 7, 0, 0, bhvGem),
		OBJECT(212, -7962, 1481, 342, 0, 136, 0, 0x0, bhv1Up),
		OBJECT(212, -9103, -179, 3814, 0, 136, 0, 0x0, bhv1Up),
		OBJECT(140, -8520, -177, 6525, 0, 96, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(188, 4948, 2979, -9945, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(195, -3636, 2308, 6871, 0, -53, 0, 0x0, bhvBobombBuddyOpensCannon),
		OBJECT(201, 1660, 491, 1963, 0, -180, 0, 0x0, bhvCannonClosed),
		OBJECT_WITH_ACTS(202, 4240, 1500, -3531, 0, 0, 0, 0x0, bhvCheckerboardElevatorGroup, ACT_5),
		OBJECT_WITH_ACTS(202, 4230, 480, -2948, 0, 0, 0, 0x0, bhvCheckerboardElevatorGroup, ACT_5),
		OBJECT(223, 8437, 3781, 3358, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(223, 8155, 3781, 5130, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(223, 6834, 3781, 4085, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(0, 86, 1896, -11090, 0, 111, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 197, 1896, -10807, 0, 111, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 307, 1896, -10527, 0, 111, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 8459, 4434, 67, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 7600, 3722, -581, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -3723, -464, -9173, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -3065, 1624, -6200, 0, 102, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -6294, 990, -2860, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -6806, 313, -6538, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -7175, -515, -9080, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 8099, -536, -3565, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 4325, 2401, 5122, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -5788, 2372, 6191, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 8317, 3781, 1765, 0, 3, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1262, 29, 1909, 0, 156, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -2020, -190, -590, 0, 91, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -8321, -211, 1482, 0, -29, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 8092, 2759, -4468, 0, -39, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 5733, -211, 2434, 0, 97, 0, 0x40000, bhvCoinFormation),
		OBJECT(0, 1167, 78, -1136, 0, 49, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 4798, 2237, 7521, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2515, 2237, 8501, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 973, 2282, -7217, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 5279, 3069, -9724, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -4651, 1481, -1189, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -6481, 1481, -3110, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 8168, -142, 6869, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 8428, 4560, -1257, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT_WITH_ACTS(137, -8253, 5418, 1142, 0, -32, 0, 0x0, bhvExclamationBox, ACT_6),
		OBJECT(137, 8160, 104, 6878, 0, 27, 0, 0x30000, bhvExclamationBox),
		OBJECT(137, 6664, 4139, -1302, 0, -1, 0, 0x30000, bhvExclamationBox),
		OBJECT(137, -8525, 130, 6506, 0, 21, 0, 0x30000, bhvExclamationBox),
		OBJECT(0, -993, -30, -9884, 0, 14, 0, 0x50000, bhvFadingWarp),
		OBJECT(0, 8177, 527, -6659, 0, 37, 0, 0x60000, bhvFadingWarp),
		OBJECT(180, -6943, 943, -7682, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -567, 2005, -7680, 0, -46, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 8313, 3781, 1777, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 8113, 4052, -3535, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT_WITH_ACTS(0, 1275, 3180, 10587, 0, -173, 0, 0x0, bhvFlamethrower, ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(0, -2094, 3198, 10547, 0, -180, 0, 0x0, bhvFlamethrower, ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(0, -4498, 3192, 10317, 0, 168, 0, 0x0, bhvFlamethrower, ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(0, -6609, 3198, 9167, 0, 143, 0, 0x0, bhvFlamethrower, ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(0, 3454, 3132, 10292, 0, -166, 0, 0x0, bhvFlamethrower, ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(0, 5788, 3258, 9072, 0, -142, 0, 0x0, bhvFlamethrower, ACT_5 | ACT_6),
		OBJECT(207, -6942, 313, -7646, 0, 9, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(0, -3716, -464, -9138, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 2775, 229, -36, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -2325, -161, -1771, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -1105, 1591, -6348, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 3662, 2649, -8941, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(118, -7790, -141, 7691, 0, 5, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -7303, -141, 8205, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -5831, -141, 9430, 0, 8, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -8221, -141, 7142, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -6596, -141, 8825, 0, 4, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(0, -7238, 62, -443, 0, 0, 0, 0x3000000, bhvHiddenRedCoinStar),
		OBJECT(0, 3354, 2641, 7317, 0, 0, 0, 0x5000000, bhvHiddenStar),
		OBJECT(0, -6148, 5029, 2021, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, -4020, 3844, 2995, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, -1819, 2283, 3788, 0, -23, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 542, 3305, 4706, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 2667, 4128, 5384, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT_WITH_ACTS(104, -6873, -94, -1007, 0, -121, 0, 0x4020000, bhvKoopa, ACT_5),
		OBJECT_WITH_ACTS(0, -8572, 4002, 5072, 0, 0, 0, 0x0, bhvKoopaRaceEndpoint, ACT_5),
		OBJECT_WITH_ACTS(124, 4323, 560, -2399, 0, -43, 0, 0x230000, bhvMessagePanel, ACT_1 | ACT_2 | ACT_3 | ACT_4),
		OBJECT(124, -8131, 5163, 936, 0, -29, 0, 0x200000, bhvMessagePanel),
		OBJECT(116, 6098, 4243, -7211, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 6059, 4243, -7728, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 6046, 4243, -8261, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 6443, 4243, -6815, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 6821, 4243, -6440, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 7154, 4243, -6115, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 6049, 4243, -8788, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 6047, 4243, -9334, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 7455, 4243, -5813, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -6129, 4982, 2033, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -4025, 3800, 3001, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -1824, 2256, 3780, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 541, 3282, 4704, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 2671, 4092, 5394, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -3548, -358, -2856, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -3718, -522, -3293, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -4024, -522, -3705, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -4483, -521, -4056, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -5048, -521, -4130, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -5573, -508, -3864, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(215, 4890, 4493, -7422, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 5955, 4489, -5468, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 4415, 4504, -5910, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 7323, 4493, -7575, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -5720, -292, -2420, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -5893, -292, -1047, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -7348, -292, -1747, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -5422, -292, 13, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(86, 1327, -107, 649, 0, 0, 0, 0x0, bhvSmallBully),
		OBJECT(86, 435, -162, 1675, 0, 0, 0, 0x0, bhvSmallBully),
		OBJECT(86, -1858, -161, 650, 0, 0, 0, 0x0, bhvSmallBully),
		OBJECT(86, -4692, -500, -6932, 0, 0, 0, 0x0, bhvSmallBully),
		OBJECT(86, -4011, -500, -6692, 0, 0, 0, 0x0, bhvSmallBully),
		OBJECT(86, -5912, 2372, 6432, 0, 0, 0, 0x0, bhvSmallBully),
		OBJECT(86, -5884, 2372, 5933, 0, 0, 0, 0x0, bhvSmallBully),
		OBJECT(86, 4195, 2401, 5329, 0, 0, 0, 0x0, bhvSmallBully),
		OBJECT(86, 4568, 2401, 4919, 0, 0, 0, 0x0, bhvSmallBully),
		OBJECT(86, 4078, 2401, 4826, 0, 0, 0, 0x0, bhvSmallBully),
		OBJECT(0, -7229, -94, -452, 0, -180, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, -966, -6, -9893, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(122, 9468, 4692, -516, 0, 0, 0, 0x2000000, bhvStar),
		OBJECT(MODEL_RED_COIN_ARROW, -314, 1896, -9177, 0, 0, 0, (4 << 16), bhvRedCoinRadar),
		OBJECT(MODEL_C3_SPIN, -7188, 1294, -9108, 0, 0, 0, (2 << 16), bhvHiddenObject),
		OBJECT(MODEL_C3_SPIN, -7188, 1294, -9108, 0, -120, 0, (2 << 16), bhvHiddenObject),
		OBJECT(MODEL_C3_SPIN, -7188, 1294, -9108, 0, 120, 0, (2 << 16), bhvHiddenObject),
		OBJECT(MODEL_C3_SPIN, -7188, 2169, -9108, 0, 0, 0, (2 << 16), bhvHiddenObject),
		OBJECT(MODEL_C3_SPIN, -7188, 2169, -9108, 0, 120, 0, (2 << 16), bhvHiddenObject),
		OBJECT(MODEL_C3_SPIN, -7188, 2169, -9108, 0, -120, 0, (2 << 16), bhvHiddenObject),
		OBJECT(MODEL_STAR, -7188, 2672, -9108, 0, -120, 0, (0 << 24), bhvStar),
		OBJECT(MODEL_NONE, 7870, 2455, -8467, 0, -120, 0, 0, bhvZipline),
		MARIO_POS(0x01, -120, 8024, 1896, -8575),
		TERRAIN(jrb_area_1_collision),
		MACRO_OBJECTS(jrb_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 40),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -120, 8024, 1896, -8575),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
