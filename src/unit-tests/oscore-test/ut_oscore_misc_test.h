/**
 * \file
 *
 * Owner: Tam Ngo
 * Date:  April 2013
 */

#ifndef UT_OSCORE_MISC_TEST_H
#define UT_OSCORE_MISC_TEST_H

/*--------------------------------------------------------------------------------*
** Includes
**--------------------------------------------------------------------------------*/

#include "ut_os_support.h"

/*--------------------------------------------------------------------------------*
** Macros
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Data types
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** External global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Function prototypes
**--------------------------------------------------------------------------------*/

void UT_os_apiinit_test(void);
void UT_os_registereventhandler_test(void);

void UT_os_printf_test(void);
void UT_os_printfenable_test(void);
void UT_os_printfdisable_test(void);

void UT_os_getlocaltime_test(void);
void UT_os_setlocaltime_test(void);

void UT_os_geterrorname_test(void);

void UT_os_heapgetinfo_test(void);

/*--------------------------------------------------------------------------------*/

#endif /* UT_OSCORE_MISC_TEST_H */
