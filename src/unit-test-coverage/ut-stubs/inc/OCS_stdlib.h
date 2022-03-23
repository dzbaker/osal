/**
 * \file
 * \ingroup ut-stubs
 *
 * OSAL coverage stub replacement for stdlib.h
 */

#ifndef OCS_STDLIB_H
#define OCS_STDLIB_H

#include "OCS_basetypes.h"

/* ----------------------------------------- */
/* constants normally defined in stdlib.h */
/* ----------------------------------------- */

#define OCS_EXIT_SUCCESS 0x0100
#define OCS_EXIT_FAILURE 0x0101

/* ----------------------------------------- */
/* types normally defined in stdlib.h */
/* ----------------------------------------- */

/* ----------------------------------------- */
/* prototypes normally declared in stdlib.h */
/* ----------------------------------------- */

extern void              OCS_abort(void);
extern void              OCS_exit(int status);
extern unsigned long int OCS_strtoul(const char *nptr, char **endptr, int base);
extern int               OCS_system(const char *command);
extern void *            OCS_malloc(size_t sz);
extern void              OCS_free(void *ptr);

#endif /* OCS_STDLIB_H */
