/**
 * \file
 * \ingroup  rtems
 * \author   joseph.p.hickey@nasa.gov
 *
 */

/****************************************************************************************
                                    INCLUDE FILES
 ***************************************************************************************/

#include "os-rtems.h"
#include "os-shared-dir.h"

#include <fcntl.h>
#include <dirent.h>
#include <sys/stat.h>

/****************************************************************************************
                                     DEFINES
 ***************************************************************************************/

/****************************************************************************************
                                     GLOBALS
 ***************************************************************************************/

/*
 * The directory handle table.
 */
DIR *OS_impl_dir_table[OS_MAX_NUM_OPEN_DIRS];

/****************************************************************************************
                         IMPLEMENTATION-SPECIFIC ROUTINES
             These are specific to this particular operating system
 ****************************************************************************************/

/* --------------------------------------------------------------------------------------
    Name: OS_Rtems_DirAPI_Impl_Init

    Purpose: Directory table initialization

    Returns: OS_SUCCESS if success
 ---------------------------------------------------------------------------------------*/
int32 OS_Rtems_DirAPI_Impl_Init(void)
{
    memset(OS_impl_dir_table, 0, sizeof(OS_impl_dir_table));
    return OS_SUCCESS;
} /* end OS_Rtems_DirAPI_Impl_Init */
