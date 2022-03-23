/**
 * \file
 * \ingroup ut-stubs
 *
 * OSAL coverage stub replacement for ramDrv.h
 */

#ifndef OCS_RAMDRV_H
#define OCS_RAMDRV_H

#include "OCS_basetypes.h"
#include "OCS_vxWorks.h"
#include "OCS_blkIo.h"

/* ----------------------------------------- */
/* constants normally defined in ramDrv.h */
/* ----------------------------------------- */

/* ----------------------------------------- */
/* types normally defined in ramDrv.h */
/* ----------------------------------------- */

/* ----------------------------------------- */
/* prototypes normally declared in ramDrv.h */
/* ----------------------------------------- */
extern OCS_BLK_DEV *OCS_ramDevCreate(char *ramAddr, int bytesPerSec, int secPerTrack, int nSectors, int secOffset);

#endif /* OCS_RAMDRV_H */
