/**
 * \file
 *
 * \ingroup  vxworks
 *
 */

#ifndef OS_IMPL_IDMAP_H
#define OS_IMPL_IDMAP_H

#include "osconfig.h"
#include "osapi-idmap.h"
#include <semLib.h>

typedef struct
{
    void *const mem;
    SEM_ID      vxid;
} OS_impl_objtype_lock_t;

/* Tables where the lock state information is stored */
extern OS_impl_objtype_lock_t *const OS_impl_objtype_lock_table[OS_OBJECT_TYPE_USER];

#endif /* OS_IMPL_IDMAP_H */
