/**
 * \file
 *
 * Owner: Chris Knight
 * Date:  March 2020
 */

#ifndef UT_OSCORE_SELECT_TEST_H
#define UT_OSCORE_SELECT_TEST_H

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

void UT_os_select_setup_file(void);
void UT_os_select_teardown_file(void);

void UT_os_select_fd_test(void);
void UT_os_select_single_test(void);
void UT_os_select_multi_test(void);

/*--------------------------------------------------------------------------------*/

#endif /* UT_OSCORE_SELECT_TEST_H */
