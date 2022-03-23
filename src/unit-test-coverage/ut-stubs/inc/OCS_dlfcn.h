/**
 * \file
 * \ingroup ut-stubs
 *
 * OSAL coverage stub replacement for dlfcn.h
 */

#ifndef OCS_DLFCN_H
#define OCS_DLFCN_H

#include "OCS_basetypes.h"

/* ----------------------------------------- */
/* constants normally defined in dlfcn.h */
/* ----------------------------------------- */

/* ----------------------------------------- */
/* types normally defined in dlfcn.h */
/* ----------------------------------------- */

/* ----------------------------------------- */
/* prototypes normally declared in dlfcn.h */
/* ----------------------------------------- */

extern int   OCS_dlclose(void *handle);
extern char *OCS_dlerror(void);
extern void *OCS_dlopen(const char *file, int flags);
extern void *OCS_dlsym(void *handle, const char *name);

#endif /* OCS_DLFCN_H */
