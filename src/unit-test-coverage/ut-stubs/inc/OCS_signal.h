/**
 * \file
 * \ingroup ut-stubs
 *
 * OSAL coverage stub replacement for signal.h
 */

#ifndef OCS_SIGNAL_H
#define OCS_SIGNAL_H

#include "OCS_basetypes.h"
#include "OCS_sys_types.h"

/* ----------------------------------------- */
/* constants normally defined in signal.h */
/* ----------------------------------------- */

#define OCS_SIG_SETMASK 0x1100
#define OCS_SIGHUP      0x1101
#define OCS_SIGINT      0x1102
#define OCS_SIGABRT     0x1103
#define OCS_SIGSEGV     0x1104
#define OCS_SIGBUS      0x1105
#define OCS_SIGFPE      0x1106
#define OCS_SIGILL      0x1107
#define OCS_SIGRTMIN    0x1110
#define OCS_SIGRTMAX    0x1120

#define OCS_SIGEV_SIGNAL 0x1180

/* ----------------------------------------- */
/* types normally defined in signal.h */
/* ----------------------------------------- */
typedef struct
{
    unsigned int ss;
} OCS_sigset_t;

struct OCS_sigevent
{
    int sigev_signo;
    int sigev_notify;
};

typedef void (*OCS_sighandler_t)(int);
typedef int OCS_sig_atomic_t;

/* ----------------------------------------- */
/* prototypes normally declared in signal.h */
/* ----------------------------------------- */

extern int              OCS_kill(OCS_pid_t pid, int sig);
extern int              OCS_sigaddset(OCS_sigset_t *set, int signo);
extern int              OCS_sigdelset(OCS_sigset_t *set, int signo);
extern int              OCS_sigemptyset(OCS_sigset_t *set);
extern int              OCS_sigfillset(OCS_sigset_t *set);
extern int              OCS_sigismember(const OCS_sigset_t *set, int signo);
extern OCS_sighandler_t OCS_signal(int signum, OCS_sighandler_t handler);
extern int              OCS_sigprocmask(int how, const OCS_sigset_t *set, OCS_sigset_t *oset);
extern int              OCS_sigsuspend(const OCS_sigset_t *set);
extern int              OCS_sigwait(const OCS_sigset_t *set, int *sig);

#endif /* OCS_SIGNAL_H */
