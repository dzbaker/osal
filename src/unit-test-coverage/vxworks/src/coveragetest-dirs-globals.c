/**
 * \file
 * \ingroup  vxworks
 * \author   steven.seeger@nasa.gov
 *
 */

#include "os-vxworks-coveragetest.h"
#include "ut-adaptor-dirs.h"

#include "os-shared-dir.h"

#include "OCS_stdlib.h"
#include "OCS_taskLib.h"
#include "OCS_dirent.h"
#include "OCS_unistd.h"
#include "OCS_stat.h"

void Test_OS_VxWorks_DirAPI_Impl_Init(void)
{
    /*
     * Test Case For:
     * int32 OS_VxWorks_DirAPI_Impl_Init(void)
     */
    OSAPI_TEST_FUNCTION_RC(UT_Call_OS_VxWorks_DirAPI_Impl_Init(), OS_SUCCESS);
}

/* ------------------- End of test cases --------------------------------------*/

/* Osapi_Test_Setup
 *
 * Purpose:
 *   Called by the unit test tool to set up the app prior to each test
 */
void Osapi_Test_Setup(void)
{
    UT_ResetState(0);
}

/*
 * Osapi_Test_Teardown
 *
 * Purpose:
 *   Called by the unit test tool to tear down the app after each test
 */
void Osapi_Test_Teardown(void) {}

/* UtTest_Setup
 *
 * Purpose:
 *   Registers the test cases to execute with the unit test tool
 */
void UtTest_Setup(void)
{
    ADD_TEST(OS_VxWorks_DirAPI_Impl_Init);
}
