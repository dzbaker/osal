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
#include "os-impl-sockets.h"
#include "os-shared-network.h"

/*----------------------------------------------------------------
 *
 * Function: OS_NetworkGetID_Impl
 *
 *  Purpose: Implemented per internal OSAL API
 *           See prototype for argument/return detail
 *
 *-----------------------------------------------------------------*/
int32 OS_NetworkGetID_Impl(int32 *IdBuf)
{
    /* RTEMS does not have the GetHostId call -
     * it is deprecated in other OS's anyway and not a good idea to use it
     */
    return OS_ERR_NOT_IMPLEMENTED;
} /* end OS_NetworkGetID_Impl */

/*----------------------------------------------------------------
 *
 * Function: OS_NetworkGetHostName_Impl
 *
 *  Purpose: Implemented per internal OSAL API
 *           See prototype for argument/return detail
 *
 *-----------------------------------------------------------------*/
int32 OS_NetworkGetHostName_Impl(char *host_name, size_t name_len)
{
    int32 return_code;

    if (gethostname(host_name, name_len) < 0)
    {
        return_code = OS_ERROR;
    }
    else
    {
        /*
         * posix does not say that the name is always
         * null terminated, so its worthwhile to ensure it
         */
        host_name[name_len - 1] = 0;
        return_code             = OS_SUCCESS;
    }

    return (return_code);
} /* end OS_NetworkGetHostName_Impl */
