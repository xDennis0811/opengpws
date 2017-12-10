/*
 * CDDL HEADER START
 *
 * This file and its contents are supplied under the terms of the
 * Common Development and Distribution License ("CDDL"), version 1.0.
 * You may only use this file in accordance with the terms of version
 * 1.0 of the CDDL.
 *
 * A full copy of the text of the CDDL should have accompanied this
 * source.  A copy of the CDDL is also available via the Internet at
 * http://www.illumos.org/license/CDDL.
 *
 * CDDL HEADER END
*/
/*
 * Copyright 2017 Saso Kiselkov. All rights reserved.
 */

#ifndef	_SND_SYS_H_
#define	_SND_SYS_H_

#include <acfutils/types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
	SND_PUP,		/* Pull up */
	SND_TERR2,		/* Terrain, terrain */
	SND_TERR_AHEAD_PUP,	/* Terrain ahead, pull up */
	SND_OBST_AHEAD_PUP,	/* Obstacle ahead, pull up */
	SND_WS,			/* Windshear */
	SND_GOAR_WS_AHEAD,	/* Go around, winshear ahead */
	SND_WS_AHEAD,		/* Windshear ahead */
	SND_TERR,		/* Terrain */
	SND_MINS,		/* Minimums, minimums */
	SND_TERR_AHEAD,		/* Terrain ahead */
	SND_OBST_AHEAD,		/* Obstacle ahead */
	SND_TOOLOW_TERR,	/* Too low, terrain */
	SND_RA_5,		/* 5 ft RA */
	SND_RA_10,		/* 10 ft RA */
	SND_RA_20,		/* 20 ft RA */
	SND_RA_30,		/* 30 ft RA */
	SND_RA_40,		/* 40 ft RA */
	SND_RA_50,		/* 50 ft RA */
	SND_RA_100,		/* 100 ft RA */
	SND_RA_200,		/* 200 ft RA */
	SND_RA_300,		/* 300 ft RA */
	SND_RA_400,		/* 400 ft RA */
	SND_RA_500,		/* 500 ft RA or 500 ft AFE (conf option) */
	SND_RA_1000,		/* 1000 ft RA */
	SND_RA_2500,		/* 2500 ft RA */
	SND_TOOLOW_GEAR,	/* Too low, gear */
	SND_TOOLOW_FLAPS,	/* Too low, flaps */
	SND_SINKRATE,		/* Sinkrate */
	SND_DONT_SINK,		/* Don't sink */
	SND_GS,			/* Glideslope */
	SND_BANK_ANGLE2,	/* Bank angle, bank angle */
	NUM_SOUNDS
} snd_id_t;

bool_t snd_sys_init(void);
void snd_sys_fini(void);
void snd_sys_floop_cb(void);
void sched_sound(snd_id_t snd);
void unsched_sound(snd_id_t snd);

#ifdef __cplusplus
}
#endif

#endif	/* _SND_SYS_H_ */