/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in os-shared-binsem header
 */

#include "os-shared-binsem.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for OS_BinSemCreate_Impl()
 * ----------------------------------------------------
 */
int32 OS_BinSemCreate_Impl(const OS_object_token_t *token, uint32 sem_initial_value, uint32 options)
{
    UT_GenStub_SetupReturnBuffer(OS_BinSemCreate_Impl, int32);

    UT_GenStub_AddParam(OS_BinSemCreate_Impl, const OS_object_token_t *, token);
    UT_GenStub_AddParam(OS_BinSemCreate_Impl, uint32, sem_initial_value);
    UT_GenStub_AddParam(OS_BinSemCreate_Impl, uint32, options);

    UT_GenStub_Execute(OS_BinSemCreate_Impl, Basic, NULL);

    return UT_GenStub_GetReturnValue(OS_BinSemCreate_Impl, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for OS_BinSemDelete_Impl()
 * ----------------------------------------------------
 */
int32 OS_BinSemDelete_Impl(const OS_object_token_t *token)
{
    UT_GenStub_SetupReturnBuffer(OS_BinSemDelete_Impl, int32);

    UT_GenStub_AddParam(OS_BinSemDelete_Impl, const OS_object_token_t *, token);

    UT_GenStub_Execute(OS_BinSemDelete_Impl, Basic, NULL);

    return UT_GenStub_GetReturnValue(OS_BinSemDelete_Impl, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for OS_BinSemFlush_Impl()
 * ----------------------------------------------------
 */
int32 OS_BinSemFlush_Impl(const OS_object_token_t *token)
{
    UT_GenStub_SetupReturnBuffer(OS_BinSemFlush_Impl, int32);

    UT_GenStub_AddParam(OS_BinSemFlush_Impl, const OS_object_token_t *, token);

    UT_GenStub_Execute(OS_BinSemFlush_Impl, Basic, NULL);

    return UT_GenStub_GetReturnValue(OS_BinSemFlush_Impl, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for OS_BinSemGetInfo_Impl()
 * ----------------------------------------------------
 */
int32 OS_BinSemGetInfo_Impl(const OS_object_token_t *token, OS_bin_sem_prop_t *bin_prop)
{
    UT_GenStub_SetupReturnBuffer(OS_BinSemGetInfo_Impl, int32);

    UT_GenStub_AddParam(OS_BinSemGetInfo_Impl, const OS_object_token_t *, token);
    UT_GenStub_AddParam(OS_BinSemGetInfo_Impl, OS_bin_sem_prop_t *, bin_prop);

    UT_GenStub_Execute(OS_BinSemGetInfo_Impl, Basic, NULL);

    return UT_GenStub_GetReturnValue(OS_BinSemGetInfo_Impl, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for OS_BinSemGive_Impl()
 * ----------------------------------------------------
 */
int32 OS_BinSemGive_Impl(const OS_object_token_t *token)
{
    UT_GenStub_SetupReturnBuffer(OS_BinSemGive_Impl, int32);

    UT_GenStub_AddParam(OS_BinSemGive_Impl, const OS_object_token_t *, token);

    UT_GenStub_Execute(OS_BinSemGive_Impl, Basic, NULL);

    return UT_GenStub_GetReturnValue(OS_BinSemGive_Impl, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for OS_BinSemTake_Impl()
 * ----------------------------------------------------
 */
int32 OS_BinSemTake_Impl(const OS_object_token_t *token)
{
    UT_GenStub_SetupReturnBuffer(OS_BinSemTake_Impl, int32);

    UT_GenStub_AddParam(OS_BinSemTake_Impl, const OS_object_token_t *, token);

    UT_GenStub_Execute(OS_BinSemTake_Impl, Basic, NULL);

    return UT_GenStub_GetReturnValue(OS_BinSemTake_Impl, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for OS_BinSemTimedWait_Impl()
 * ----------------------------------------------------
 */
int32 OS_BinSemTimedWait_Impl(const OS_object_token_t *token, uint32 msecs)
{
    UT_GenStub_SetupReturnBuffer(OS_BinSemTimedWait_Impl, int32);

    UT_GenStub_AddParam(OS_BinSemTimedWait_Impl, const OS_object_token_t *, token);
    UT_GenStub_AddParam(OS_BinSemTimedWait_Impl, uint32, msecs);

    UT_GenStub_Execute(OS_BinSemTimedWait_Impl, Basic, NULL);

    return UT_GenStub_GetReturnValue(OS_BinSemTimedWait_Impl, int32);
}
