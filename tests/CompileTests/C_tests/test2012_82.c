// # 1 "./print-lmp.c"
// # 1 "/export/tmp.hudson-rose/jenkins/edg4x/workspace/compile_with_rose-tcpdump/frontend/EDG_4_4/gcc/4.4.1/label/amd64-linux/tcpdump-4.3.0//"
// # 1 "<built-in>"
// # 1 "<command-line>"
// # 1 "./print-lmp.c"
// # 21 "./print-lmp.c"
static const char rcsid[] __attribute__((unused)) =
    "@(#) $Header: /tcpdump/master/tcpdump/print-lmp.c,v 1.11 2007-08-02 17:32:49 hannes Exp $";



// # 1 "./config.h" 1
// # 27 "./print-lmp.c" 2


// # 1 "./tcpdump-stdinc.h" 1
// # 107 "./tcpdump-stdinc.h"
// # 1 "/usr/include/ctype.h" 1 3 4
// # 27 "/usr/include/ctype.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/features.h" 1 3 4
// # 338 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/features.h" 3 4
// # 1 "/usr/include/sys/cdefs.h" 1 3 4
// # 313 "/usr/include/sys/cdefs.h" 3 4
// # 1 "/usr/include/bits/wordsize.h" 1 3 4
// # 314 "/usr/include/sys/cdefs.h" 2 3 4
// # 339 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/features.h" 2 3 4
// # 361 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/features.h" 3 4
// # 1 "/usr/include/gnu/stubs.h" 1 3 4



// # 1 "/usr/include/bits/wordsize.h" 1 3 4
// # 5 "/usr/include/gnu/stubs.h" 2 3 4




// # 1 "/usr/include/gnu/stubs-64.h" 1 3 4
// # 10 "/usr/include/gnu/stubs.h" 2 3 4
// # 362 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/features.h" 2 3 4
// # 28 "/usr/include/ctype.h" 2 3 4
// # 1 "/usr/include/bits/types.h" 1 3 4
// # 28 "/usr/include/bits/types.h" 3 4
// # 1 "/usr/include/bits/wordsize.h" 1 3 4
// # 29 "/usr/include/bits/types.h" 2 3 4


// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 211 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
// # 32 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
// # 134 "/usr/include/bits/types.h" 3 4
// # 1 "/usr/include/bits/typesizes.h" 1 3 4
// # 135 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
// # 29 "/usr/include/ctype.h" 2 3 4


// # 41 "/usr/include/ctype.h" 3 4
// # 1 "/usr/include/endian.h" 1 3 4
// # 37 "/usr/include/endian.h" 3 4
// # 1 "/usr/include/bits/endian.h" 1 3 4
// # 38 "/usr/include/endian.h" 2 3 4
// # 42 "/usr/include/ctype.h" 2 3 4






enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
// # 81 "/usr/include/ctype.h" 3 4
extern __const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__const));
// # 96 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__));
extern int isalpha (int) __attribute__ ((__nothrow__));
extern int iscntrl (int) __attribute__ ((__nothrow__));
extern int isdigit (int) __attribute__ ((__nothrow__));
extern int islower (int) __attribute__ ((__nothrow__));
extern int isgraph (int) __attribute__ ((__nothrow__));
extern int isprint (int) __attribute__ ((__nothrow__));
extern int ispunct (int) __attribute__ ((__nothrow__));
extern int isspace (int) __attribute__ ((__nothrow__));
extern int isupper (int) __attribute__ ((__nothrow__));
extern int isxdigit (int) __attribute__ ((__nothrow__));



extern int tolower (int __c) __attribute__ ((__nothrow__));


extern int toupper (int __c) __attribute__ ((__nothrow__));


// # 142 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__));



extern int toascii (int __c) __attribute__ ((__nothrow__));



extern int _toupper (int) __attribute__ ((__nothrow__));
extern int _tolower (int) __attribute__ ((__nothrow__));
// # 190 "/usr/include/ctype.h" 3 4
extern __inline int
__attribute__ ((__nothrow__)) tolower (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
}

extern __inline int
__attribute__ ((__nothrow__)) toupper (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_toupper_loc ())[__c] : __c;
}
// # 323 "/usr/include/ctype.h" 3 4

// # 108 "./tcpdump-stdinc.h" 2
// # 1 "/usr/include/unistd.h" 1 3 4
// # 28 "/usr/include/unistd.h" 3 4

// # 173 "/usr/include/unistd.h" 3 4
// # 1 "/usr/include/bits/posix_opt.h" 1 3 4
// # 174 "/usr/include/unistd.h" 2 3 4
// # 191 "/usr/include/unistd.h" 3 4
typedef __ssize_t ssize_t;





// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 198 "/usr/include/unistd.h" 2 3 4





typedef __gid_t gid_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
// # 226 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;




typedef __pid_t pid_t;






typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
// # 258 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
// # 301 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
// # 320 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
// # 384 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__)) ;
// # 393 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__));
// # 405 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);






extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__));






extern int usleep (__useconds_t __useconds);
// # 429 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
// # 457 "/usr/include/unistd.h" 3 4
extern int chdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__)) ;
// # 471 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__)) ;
// # 484 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__));


extern char **__environ;







extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
// # 516 "/usr/include/unistd.h" 3 4
extern int execv (__const char *__path, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int execle (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int execl (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int execvp (__const char *__file, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int nice (int __inc) __attribute__ ((__nothrow__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





// # 1 "/usr/include/bits/confname.h" 1 3 4
// # 26 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,


    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS

  };
// # 555 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__));
// # 591 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__));
// # 600 "/usr/include/unistd.h" 3 4
extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
// # 617 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__));
// # 634 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) __attribute__ ((__nothrow__));







extern __uid_t getuid (void) __attribute__ ((__nothrow__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__)) ;
// # 667 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__));
// # 723 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));






extern __pid_t vfork (void) __attribute__ ((__nothrow__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__));





extern int ttyslot (void) __attribute__ ((__nothrow__));




extern int link (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;
// # 769 "/usr/include/unistd.h" 3 4
extern int symlink (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;
// # 792 "/usr/include/unistd.h" 3 4
extern int unlink (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
// # 801 "/usr/include/unistd.h" 3 4
extern int rmdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
// # 837 "/usr/include/unistd.h" 3 4
// # 1 "/usr/include/getopt.h" 1 3 4
// # 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
// # 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
// # 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__));
// # 838 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__));


extern int revoke (__const char *__file) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) __attribute__ ((__nothrow__));



extern char *getusershell (void) __attribute__ ((__nothrow__));
extern void endusershell (void) __attribute__ ((__nothrow__));
extern void setusershell (void) __attribute__ ((__nothrow__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__)) ;






extern int chroot (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
// # 923 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__));




extern int getpagesize (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__));




extern int truncate (__const char *__file, __off_t __length)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
// # 970 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__)) ;
// # 990 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__));
// # 1011 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__));
// # 1034 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
// # 1065 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
// # 1103 "/usr/include/unistd.h" 3 4

// # 109 "./tcpdump-stdinc.h" 2
// # 1 "/usr/include/netdb.h" 1 3 4
// # 28 "/usr/include/netdb.h" 3 4
// # 1 "/usr/include/netinet/in.h" 1 3 4
// # 23 "/usr/include/netinet/in.h" 3 4
// # 1 "/usr/include/stdint.h" 1 3 4
// # 27 "/usr/include/stdint.h" 3 4
// # 1 "/usr/include/bits/wchar.h" 1 3 4
// # 28 "/usr/include/stdint.h" 2 3 4
// # 1 "/usr/include/bits/wordsize.h" 1 3 4
// # 29 "/usr/include/stdint.h" 2 3 4
// # 37 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
// # 66 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
// # 91 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
// # 104 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
// # 123 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
// # 135 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
// # 24 "/usr/include/netinet/in.h" 2 3 4
// # 1 "/usr/include/sys/socket.h" 1 3 4
// # 25 "/usr/include/sys/socket.h" 3 4


// # 1 "/usr/include/sys/uio.h" 1 3 4
// # 24 "/usr/include/sys/uio.h" 3 4
// # 1 "/usr/include/sys/types.h" 1 3 4
// # 29 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
// # 62 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;
// # 72 "/usr/include/sys/types.h" 3 4
typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
// # 105 "/usr/include/sys/types.h" 3 4
typedef __id_t id_t;
// # 116 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
// # 133 "/usr/include/sys/types.h" 3 4
// # 1 "/usr/include/time.h" 1 3 4
// # 75 "/usr/include/time.h" 3 4


typedef __time_t time_t;



// # 93 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
// # 105 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
// # 134 "/usr/include/sys/types.h" 2 3 4
// # 147 "/usr/include/sys/types.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
// # 201 "/usr/include/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
// # 220 "/usr/include/sys/types.h" 3 4
// # 1 "/usr/include/sys/select.h" 1 3 4
// # 31 "/usr/include/sys/select.h" 3 4
// # 1 "/usr/include/bits/select.h" 1 3 4
// # 32 "/usr/include/sys/select.h" 2 3 4


// # 1 "/usr/include/bits/sigset.h" 1 3 4
// # 23 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
// # 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





// # 1 "/usr/include/time.h" 1 3 4
// # 121 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
// # 45 "/usr/include/sys/select.h" 2 3 4

// # 1 "/usr/include/bits/time.h" 1 3 4
// # 69 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
// # 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
// # 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
// # 99 "/usr/include/sys/select.h" 3 4

// # 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
// # 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);



// # 221 "/usr/include/sys/types.h" 2 3 4


// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/sys/sysmacros.h" 1 3 4
// # 38 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/sys/sysmacros.h" 3 4
__extension__
extern __inline __attribute__ ((__gnu_inline__)) unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern __inline __attribute__ ((__gnu_inline__)) unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern __inline __attribute__ ((__gnu_inline__)) unsigned long long int gnu_dev_makedev (unsigned int __major,
       unsigned int __minor)
     __attribute__ ((__nothrow__));


__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
__attribute__ ((__nothrow__)) gnu_dev_major (unsigned long long int __dev)
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
__attribute__ ((__nothrow__)) gnu_dev_minor (unsigned long long int __dev)
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned long long int
__attribute__ ((__nothrow__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
// # 224 "/usr/include/sys/types.h" 2 3 4
// # 235 "/usr/include/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
// # 270 "/usr/include/sys/types.h" 3 4
// # 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
// # 23 "/usr/include/bits/pthreadtypes.h" 3 4
// # 1 "/usr/include/bits/wordsize.h" 1 3 4
// # 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
// # 50 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
// # 76 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
// # 101 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
// # 187 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
// # 271 "/usr/include/sys/types.h" 2 3 4



// # 25 "/usr/include/sys/uio.h" 2 3 4




// # 1 "/usr/include/bits/uio.h" 1 3 4
// # 44 "/usr/include/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
// # 30 "/usr/include/sys/uio.h" 2 3 4
// # 40 "/usr/include/sys/uio.h" 3 4
extern ssize_t readv (int __fd, __const struct iovec *__iovec, int __count);
// # 50 "/usr/include/sys/uio.h" 3 4
extern ssize_t writev (int __fd, __const struct iovec *__iovec, int __count);


// # 28 "/usr/include/sys/socket.h" 2 3 4

// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 30 "/usr/include/sys/socket.h" 2 3 4





// # 1 "/usr/include/bits/socket.h" 1 3 4
// # 29 "/usr/include/bits/socket.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 30 "/usr/include/bits/socket.h" 2 3 4

// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/limits.h" 1 3 4
// # 11 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/limits.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/syslimits.h" 1 3 4






// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/limits.h" 1 3 4
// # 122 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/limits.h" 3 4
// # 1 "/usr/include/limits.h" 1 3 4
// # 145 "/usr/include/limits.h" 3 4
// # 1 "/usr/include/bits/posix1_lim.h" 1 3 4
// # 153 "/usr/include/bits/posix1_lim.h" 3 4
// # 1 "/usr/include/bits/local_lim.h" 1 3 4
// # 36 "/usr/include/bits/local_lim.h" 3 4
// # 1 "/usr/include/linux/limits.h" 1 3 4
// # 37 "/usr/include/bits/local_lim.h" 2 3 4
// # 154 "/usr/include/bits/posix1_lim.h" 2 3 4
// # 146 "/usr/include/limits.h" 2 3 4



// # 1 "/usr/include/bits/posix2_lim.h" 1 3 4
// # 150 "/usr/include/limits.h" 2 3 4
// # 123 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/limits.h" 2 3 4
// # 8 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/syslimits.h" 2 3 4
// # 12 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/limits.h" 2 3 4
// # 32 "/usr/include/bits/socket.h" 2 3 4
// # 41 "/usr/include/bits/socket.h" 3 4
enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_PACKET = 10



};
// # 142 "/usr/include/bits/socket.h" 3 4
// # 1 "/usr/include/bits/sockaddr.h" 1 3 4
// # 29 "/usr/include/bits/sockaddr.h" 3 4
typedef unsigned short int sa_family_t;
// # 143 "/usr/include/bits/socket.h" 2 3 4


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
// # 162 "/usr/include/bits/socket.h" 3 4
struct sockaddr_storage
  {
    sa_family_t ss_family;
    __uint64_t __ss_align;
    char __ss_padding[(128 - (2 * sizeof (__uint64_t)))];
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,






    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000

  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
// # 263 "/usr/include/bits/socket.h" 3 4
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) __attribute__ ((__nothrow__));




extern __inline struct cmsghdr *
__attribute__ ((__nothrow__)) __cmsg_nxthdr (struct msghdr *__mhdr, struct cmsghdr *__cmsg)
{
  if ((size_t) __cmsg->cmsg_len < sizeof (struct cmsghdr))

    return 0;

  __cmsg = (struct cmsghdr *) ((unsigned char *) __cmsg
          + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1)));
  if ((unsigned char *) (__cmsg + 1) > ((unsigned char *) __mhdr->msg_control
     + __mhdr->msg_controllen)
      || ((unsigned char *) __cmsg + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
   > ((unsigned char *) __mhdr->msg_control + __mhdr->msg_controllen)))

    return 0;
  return __cmsg;
}




enum
  {
    SCM_RIGHTS = 0x01


    , SCM_CREDENTIALS = 0x02


  };



struct ucred
{
  pid_t pid;
  uid_t uid;
  gid_t gid;
};


// # 1 "/usr/include/asm/socket.h" 1 3 4




// # 1 "/usr/include/asm-x86_64/socket.h" 1 3 4



// # 1 "/usr/include/asm/sockios.h" 1 3 4




// # 1 "/usr/include/asm-x86_64/sockios.h" 1 3 4
// # 6 "/usr/include/asm/sockios.h" 2 3 4
// # 5 "/usr/include/asm-x86_64/socket.h" 2 3 4
// # 6 "/usr/include/asm/socket.h" 2 3 4
// # 311 "/usr/include/bits/socket.h" 2 3 4



struct linger
  {
    int l_onoff;
    int l_linger;
  };
// # 36 "/usr/include/sys/socket.h" 2 3 4




struct osockaddr
  {
    unsigned short int sa_family;
    unsigned char sa_data[14];
  };




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
// # 100 "/usr/include/sys/socket.h" 3 4
extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__));


extern int bind (int __fd, __const struct sockaddr * __addr, socklen_t __len)
     __attribute__ ((__nothrow__));


extern int getsockname (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__));
// # 124 "/usr/include/sys/socket.h" 3 4
extern int connect (int __fd, __const struct sockaddr * __addr, socklen_t __len);



extern int getpeername (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__));






extern ssize_t send (int __fd, __const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, __const void *__buf, size_t __n,
         int __flags, __const struct sockaddr * __addr,
         socklen_t __addr_len);
// # 161 "/usr/include/sys/socket.h" 3 4
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, struct sockaddr *__restrict __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, __const struct msghdr *__message,
   int __flags);






extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);





extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__));




extern int setsockopt (int __fd, int __level, int __optname,
         __const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__));
// # 209 "/usr/include/sys/socket.h" 3 4
extern int accept (int __fd, struct sockaddr *__restrict __addr,
     socklen_t *__restrict __addr_len);







extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__));
// # 240 "/usr/include/sys/socket.h" 3 4

// # 25 "/usr/include/netinet/in.h" 2 3 4






enum
  {
    IPPROTO_IP = 0,

    IPPROTO_HOPOPTS = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_IPV6 = 41,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MTP = 92,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_RAW = 255,

    IPPROTO_MAX
  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };



typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };
// # 193 "/usr/include/netinet/in.h" 3 4
struct in6_addr
  {
    union
      {
 uint8_t u6_addr8[16];
 uint16_t u6_addr16[8];
 uint32_t u6_addr32[4];
      } in6_u;



  };

extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
// # 219 "/usr/include/netinet/in.h" 3 4
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr) -
      (sizeof (unsigned short int)) -
      sizeof (in_port_t) -
      sizeof (struct in_addr)];
  };


struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };



struct ip_mreq
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;
  };

struct ip_mreq_source
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;


    struct in_addr imr_sourceaddr;
  };


struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };



struct group_req
  {

    uint32_t gr_interface;


    struct sockaddr_storage gr_group;
  };

struct group_source_req
  {

    uint32_t gsr_interface;


    struct sockaddr_storage gsr_group;


    struct sockaddr_storage gsr_source;
  };



struct ip_msfilter
  {

    struct in_addr imsf_multiaddr;


    struct in_addr imsf_interface;


    uint32_t imsf_fmode;


    uint32_t imsf_numsrc;

    struct in_addr imsf_slist[1];
  };





struct group_filter
  {

    uint32_t gf_interface;


    struct sockaddr_storage gf_group;


    uint32_t gf_fmode;


    uint32_t gf_numsrc;

    struct sockaddr_storage gf_slist[1];
};
// # 345 "/usr/include/netinet/in.h" 3 4
// # 1 "/usr/include/bits/in.h" 1 3 4
// # 82 "/usr/include/bits/in.h" 3 4
struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };
// # 346 "/usr/include/netinet/in.h" 2 3 4
// # 354 "/usr/include/netinet/in.h" 3 4
extern uint32_t ntohl (uint32_t __netlong) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));




// # 1 "/usr/include/bits/byteswap.h" 1 3 4
// # 27 "/usr/include/bits/byteswap.h" 3 4
// # 1 "/usr/include/bits/wordsize.h" 1 3 4
// # 28 "/usr/include/bits/byteswap.h" 2 3 4
// # 366 "/usr/include/netinet/in.h" 2 3 4
// # 428 "/usr/include/netinet/in.h" 3 4
extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) __attribute__ ((__nothrow__));


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     __attribute__ ((__nothrow__));
// # 456 "/usr/include/netinet/in.h" 3 4
struct in6_pktinfo
  {
    struct in6_addr ipi6_addr;
    unsigned int ipi6_ifindex;
  };


struct ip6_mtuinfo
  {
    struct sockaddr_in6 ip6m_addr;
    uint32_t ip6m_mtu;
  };
// # 551 "/usr/include/netinet/in.h" 3 4

// # 29 "/usr/include/netdb.h" 2 3 4




// # 1 "/usr/include/rpc/netdb.h" 1 3 4
// # 42 "/usr/include/rpc/netdb.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 43 "/usr/include/rpc/netdb.h" 2 3 4



struct rpcent
{
  char *r_name;
  char **r_aliases;
  int r_number;
};

extern void setrpcent (int __stayopen) __attribute__ ((__nothrow__));
extern void endrpcent (void) __attribute__ ((__nothrow__));
extern struct rpcent *getrpcbyname (__const char *__name) __attribute__ ((__nothrow__));
extern struct rpcent *getrpcbynumber (int __number) __attribute__ ((__nothrow__));
extern struct rpcent *getrpcent (void) __attribute__ ((__nothrow__));


extern int getrpcbyname_r (__const char *__name, struct rpcent *__result_buf,
      char *__buffer, size_t __buflen,
      struct rpcent **__result) __attribute__ ((__nothrow__));

extern int getrpcbynumber_r (int __number, struct rpcent *__result_buf,
        char *__buffer, size_t __buflen,
        struct rpcent **__result) __attribute__ ((__nothrow__));

extern int getrpcent_r (struct rpcent *__result_buf, char *__buffer,
   size_t __buflen, struct rpcent **__result) __attribute__ ((__nothrow__));



// # 34 "/usr/include/netdb.h" 2 3 4
// # 43 "/usr/include/netdb.h" 3 4
// # 1 "/usr/include/bits/netdb.h" 1 3 4
// # 27 "/usr/include/bits/netdb.h" 3 4
struct netent
{
  char *n_name;
  char **n_aliases;
  int n_addrtype;
  uint32_t n_net;
};
// # 44 "/usr/include/netdb.h" 2 3 4
// # 54 "/usr/include/netdb.h" 3 4







extern int *__h_errno_location (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
// # 88 "/usr/include/netdb.h" 3 4
extern void herror (__const char *__str) __attribute__ ((__nothrow__));


extern __const char *hstrerror (int __err_num) __attribute__ ((__nothrow__));




struct hostent
{
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;

};






extern void sethostent (int __stay_open);





extern void endhostent (void);






extern struct hostent *gethostent (void);






extern struct hostent *gethostbyaddr (__const void *__addr, __socklen_t __len,
          int __type);





extern struct hostent *gethostbyname (__const char *__name);
// # 149 "/usr/include/netdb.h" 3 4
extern struct hostent *gethostbyname2 (__const char *__name, int __af);
// # 161 "/usr/include/netdb.h" 3 4
extern int gethostent_r (struct hostent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct hostent **__restrict __result,
    int *__restrict __h_errnop);

extern int gethostbyaddr_r (__const void *__restrict __addr, __socklen_t __len,
       int __type,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname_r (__const char *__restrict __name,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname2_r (__const char *__restrict __name, int __af,
        struct hostent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct hostent **__restrict __result,
        int *__restrict __h_errnop);
// # 192 "/usr/include/netdb.h" 3 4
extern void setnetent (int __stay_open);





extern void endnetent (void);






extern struct netent *getnetent (void);






extern struct netent *getnetbyaddr (uint32_t __net, int __type);





extern struct netent *getnetbyname (__const char *__name);
// # 231 "/usr/include/netdb.h" 3 4
extern int getnetent_r (struct netent *__restrict __result_buf,
   char *__restrict __buf, size_t __buflen,
   struct netent **__restrict __result,
   int *__restrict __h_errnop);

extern int getnetbyaddr_r (uint32_t __net, int __type,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);

extern int getnetbyname_r (__const char *__restrict __name,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);




struct servent
{
  char *s_name;
  char **s_aliases;
  int s_port;
  char *s_proto;
};






extern void setservent (int __stay_open);





extern void endservent (void);






extern struct servent *getservent (void);






extern struct servent *getservbyname (__const char *__name,
          __const char *__proto);






extern struct servent *getservbyport (int __port, __const char *__proto);
// # 303 "/usr/include/netdb.h" 3 4
extern int getservent_r (struct servent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct servent **__restrict __result);

extern int getservbyname_r (__const char *__restrict __name,
       __const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);

extern int getservbyport_r (int __port, __const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);




struct protoent
{
  char *p_name;
  char **p_aliases;
  int p_proto;
};






extern void setprotoent (int __stay_open);





extern void endprotoent (void);






extern struct protoent *getprotoent (void);





extern struct protoent *getprotobyname (__const char *__name);





extern struct protoent *getprotobynumber (int __proto);
// # 369 "/usr/include/netdb.h" 3 4
extern int getprotoent_r (struct protoent *__restrict __result_buf,
     char *__restrict __buf, size_t __buflen,
     struct protoent **__restrict __result);

extern int getprotobyname_r (__const char *__restrict __name,
        struct protoent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct protoent **__restrict __result);

extern int getprotobynumber_r (int __proto,
          struct protoent *__restrict __result_buf,
          char *__restrict __buf, size_t __buflen,
          struct protoent **__restrict __result);
// # 390 "/usr/include/netdb.h" 3 4
extern int setnetgrent (__const char *__netgroup);







extern void endnetgrent (void);
// # 407 "/usr/include/netdb.h" 3 4
extern int getnetgrent (char **__restrict __hostp,
   char **__restrict __userp,
   char **__restrict __domainp);
// # 418 "/usr/include/netdb.h" 3 4
extern int innetgr (__const char *__netgroup, __const char *__host,
      __const char *__user, __const char *domain);







extern int getnetgrent_r (char **__restrict __hostp,
     char **__restrict __userp,
     char **__restrict __domainp,
     char *__restrict __buffer, size_t __buflen);
// # 446 "/usr/include/netdb.h" 3 4
extern int rcmd (char **__restrict __ahost, unsigned short int __rport,
   __const char *__restrict __locuser,
   __const char *__restrict __remuser,
   __const char *__restrict __cmd, int *__restrict __fd2p);
// # 458 "/usr/include/netdb.h" 3 4
extern int rcmd_af (char **__restrict __ahost, unsigned short int __rport,
      __const char *__restrict __locuser,
      __const char *__restrict __remuser,
      __const char *__restrict __cmd, int *__restrict __fd2p,
      sa_family_t __af);
// # 474 "/usr/include/netdb.h" 3 4
extern int rexec (char **__restrict __ahost, int __rport,
    __const char *__restrict __name,
    __const char *__restrict __pass,
    __const char *__restrict __cmd, int *__restrict __fd2p);
// # 486 "/usr/include/netdb.h" 3 4
extern int rexec_af (char **__restrict __ahost, int __rport,
       __const char *__restrict __name,
       __const char *__restrict __pass,
       __const char *__restrict __cmd, int *__restrict __fd2p,
       sa_family_t __af);
// # 500 "/usr/include/netdb.h" 3 4
extern int ruserok (__const char *__rhost, int __suser,
      __const char *__remuser, __const char *__locuser);
// # 510 "/usr/include/netdb.h" 3 4
extern int ruserok_af (__const char *__rhost, int __suser,
         __const char *__remuser, __const char *__locuser,
         sa_family_t __af);
// # 522 "/usr/include/netdb.h" 3 4
extern int rresvport (int *__alport);
// # 531 "/usr/include/netdb.h" 3 4
extern int rresvport_af (int *__alport, sa_family_t __af);






struct addrinfo
{
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  socklen_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname;
  struct addrinfo *ai_next;
};
// # 631 "/usr/include/netdb.h" 3 4
extern int getaddrinfo (__const char *__restrict __name,
   __const char *__restrict __service,
   __const struct addrinfo *__restrict __req,
   struct addrinfo **__restrict __pai);


extern void freeaddrinfo (struct addrinfo *__ai) __attribute__ ((__nothrow__));


extern __const char *gai_strerror (int __ecode) __attribute__ ((__nothrow__));





extern int getnameinfo (__const struct sockaddr *__restrict __sa,
   socklen_t __salen, char *__restrict __host,
   socklen_t __hostlen, char *__restrict __serv,
   socklen_t __servlen, unsigned int __flags);
// # 682 "/usr/include/netdb.h" 3 4

// # 110 "./tcpdump-stdinc.h" 2

// # 1 "/usr/include/inttypes.h" 1 3 4
// # 35 "/usr/include/inttypes.h" 3 4
typedef int __gwchar_t;
// # 274 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
// # 298 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern intmax_t strtoimax (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern uintmax_t strtoumax (__const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern intmax_t wcstoimax (__const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__));


extern uintmax_t wcstoumax (__const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__));







extern long int __strtol_internal (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, int __group) __attribute__ ((__nothrow__));


extern __inline intmax_t
__attribute__ ((__nothrow__)) strtoimax (__const char *__restrict nptr, char **__restrict endptr, int base)

{
  return __strtol_internal (nptr, endptr, base, 0);
}



extern unsigned long int __strtoul_internal (__const char *
          __restrict __nptr,
          char ** __restrict __endptr,
          int __base, int __group) __attribute__ ((__nothrow__));


extern __inline uintmax_t
__attribute__ ((__nothrow__)) strtoumax (__const char *__restrict nptr, char **__restrict endptr, int base)

{
  return __strtoul_internal (nptr, endptr, base, 0);
}



extern long int __wcstol_internal (__const __gwchar_t * __restrict __nptr,
       __gwchar_t **__restrict __endptr,
       int __base, int __group) __attribute__ ((__nothrow__));


extern __inline intmax_t
__attribute__ ((__nothrow__)) wcstoimax (__const __gwchar_t *__restrict nptr, __gwchar_t **__restrict endptr, int base)

{
  return __wcstol_internal (nptr, endptr, base, 0);
}




extern unsigned long int __wcstoul_internal (__const __gwchar_t *
          __restrict __nptr,
          __gwchar_t **
          __restrict __endptr,
          int __base, int __group) __attribute__ ((__nothrow__));


extern __inline uintmax_t
__attribute__ ((__nothrow__)) wcstoumax (__const __gwchar_t *__restrict nptr, __gwchar_t **__restrict endptr, int base)

{
  return __wcstoul_internal (nptr, endptr, base, 0);
}
// # 459 "/usr/include/inttypes.h" 3 4

// # 112 "./tcpdump-stdinc.h" 2






// # 1 "/usr/include/sys/bitypes.h" 1 3 4
// # 119 "./tcpdump-stdinc.h" 2

// # 1 "/usr/include/sys/param.h" 1 3 4
// # 22 "/usr/include/sys/param.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/limits.h" 1 3 4
// # 23 "/usr/include/sys/param.h" 2 3 4

// # 1 "/usr/include/linux/param.h" 1 3 4



// # 1 "/usr/include/asm/param.h" 1 3 4




// # 1 "/usr/include/asm-x86_64/param.h" 1 3 4
// # 6 "/usr/include/asm/param.h" 2 3 4
// # 5 "/usr/include/linux/param.h" 2 3 4
// # 25 "/usr/include/sys/param.h" 2 3 4
// # 121 "./tcpdump-stdinc.h" 2

// # 1 "/usr/include/sys/time.h" 1 3 4
// # 27 "/usr/include/sys/time.h" 3 4
// # 1 "/usr/include/time.h" 1 3 4
// # 28 "/usr/include/sys/time.h" 2 3 4

// # 1 "/usr/include/bits/time.h" 1 3 4
// # 30 "/usr/include/sys/time.h" 2 3 4
// # 39 "/usr/include/sys/time.h" 3 4

// # 57 "/usr/include/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
// # 73 "/usr/include/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (__const struct timeval *__tv,
    __const struct timezone *__tz)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int adjtime (__const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__));




extern int setitimer (__itimer_which_t __which,
        __const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__));




extern int utimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, __const struct timeval __tvp[2]) __attribute__ ((__nothrow__));
// # 191 "/usr/include/sys/time.h" 3 4

// # 123 "./tcpdump-stdinc.h" 2




// # 1 "/usr/include/time.h" 1 3 4
// # 31 "/usr/include/time.h" 3 4








// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 40 "/usr/include/time.h" 2 3 4



// # 1 "/usr/include/bits/time.h" 1 3 4
// # 44 "/usr/include/time.h" 2 3 4
// # 59 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



// # 132 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
// # 181 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) __attribute__ ((__nothrow__));

// # 229 "/usr/include/time.h" 3 4



extern struct tm *gmtime (__const time_t *__timer) __attribute__ ((__nothrow__));



extern struct tm *localtime (__const time_t *__timer) __attribute__ ((__nothrow__));





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__));



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__));





extern char *asctime (__const struct tm *__tp) __attribute__ ((__nothrow__));


extern char *ctime (__const time_t *__timer) __attribute__ ((__nothrow__));







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__));


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__));



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) __attribute__ ((__nothrow__));
// # 312 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__));


extern int dysize (int __year) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
// # 327 "/usr/include/time.h" 3 4
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__));


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     __attribute__ ((__nothrow__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__));


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__));
// # 416 "/usr/include/time.h" 3 4

// # 128 "./tcpdump-stdinc.h" 2


// # 1 "/usr/include/arpa/inet.h" 1 3 4
// # 31 "/usr/include/arpa/inet.h" 3 4




extern in_addr_t inet_addr (__const char *__cp) __attribute__ ((__nothrow__));


extern in_addr_t inet_lnaof (struct in_addr __in) __attribute__ ((__nothrow__));



extern struct in_addr inet_makeaddr (in_addr_t __net, in_addr_t __host)
     __attribute__ ((__nothrow__));


extern in_addr_t inet_netof (struct in_addr __in) __attribute__ ((__nothrow__));



extern in_addr_t inet_network (__const char *__cp) __attribute__ ((__nothrow__));



extern char *inet_ntoa (struct in_addr __in) __attribute__ ((__nothrow__));




extern int inet_pton (int __af, __const char *__restrict __cp,
        void *__restrict __buf) __attribute__ ((__nothrow__));




extern __const char *inet_ntop (int __af, __const void *__restrict __cp,
    char *__restrict __buf, socklen_t __len)
     __attribute__ ((__nothrow__));






extern int inet_aton (__const char *__cp, struct in_addr *__inp) __attribute__ ((__nothrow__));



extern char *inet_neta (in_addr_t __net, char *__buf, size_t __len) __attribute__ ((__nothrow__));




extern char *inet_net_ntop (int __af, __const void *__cp, int __bits,
       char *__buf, size_t __len) __attribute__ ((__nothrow__));




extern int inet_net_pton (int __af, __const char *__cp,
     void *__buf, size_t __len) __attribute__ ((__nothrow__));




extern unsigned int inet_nsap_addr (__const char *__cp,
        unsigned char *__buf, int __len) __attribute__ ((__nothrow__));



extern char *inet_nsap_ntoa (int __len, __const unsigned char *__cp,
        char *__buf) __attribute__ ((__nothrow__));



// # 131 "./tcpdump-stdinc.h" 2
// # 30 "./print-lmp.c" 2

// # 1 "/usr/include/stdio.h" 1 3 4
// # 30 "/usr/include/stdio.h" 3 4




// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 35 "/usr/include/stdio.h" 2 3 4
// # 44 "/usr/include/stdio.h" 3 4


typedef struct _IO_FILE FILE;





// # 62 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
// # 72 "/usr/include/stdio.h" 3 4
// # 1 "/usr/include/libio.h" 1 3 4
// # 32 "/usr/include/libio.h" 3 4
// # 1 "/usr/include/_G_config.h" 1 3 4
// # 14 "/usr/include/_G_config.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 323 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 3 4
typedef int wchar_t;
// # 352 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 3 4
typedef unsigned int wint_t;
// # 15 "/usr/include/_G_config.h" 2 3 4
// # 24 "/usr/include/_G_config.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/wchar.h" 1 3 4
// # 57 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/wchar.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 58 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/wchar.h" 2 3 4
// # 85 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
// # 25 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
// # 44 "/usr/include/_G_config.h" 3 4
// # 1 "/usr/include/gconv.h" 1 3 4
// # 28 "/usr/include/gconv.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/wchar.h" 1 3 4
// # 57 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/wchar.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 58 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/wchar.h" 2 3 4
// # 29 "/usr/include/gconv.h" 2 3 4


// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 32 "/usr/include/gconv.h" 2 3 4





enum
{
  __GCONV_OK = 0,
  __GCONV_NOCONV,
  __GCONV_NODB,
  __GCONV_NOMEM,

  __GCONV_EMPTY_INPUT,
  __GCONV_FULL_OUTPUT,
  __GCONV_ILLEGAL_INPUT,
  __GCONV_INCOMPLETE_INPUT,

  __GCONV_ILLEGAL_DESCRIPTOR,
  __GCONV_INTERNAL_ERROR
};



enum
{
  __GCONV_IS_LAST = 0x0001,
  __GCONV_IGNORE_ERRORS = 0x0002
};



struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;
struct __gconv_trans_data;



typedef int (*__gconv_fct) (struct __gconv_step *, struct __gconv_step_data *,
       __const unsigned char **, __const unsigned char *,
       unsigned char **, size_t *, int, int);


typedef wint_t (*__gconv_btowc_fct) (struct __gconv_step *, unsigned char);


typedef int (*__gconv_init_fct) (struct __gconv_step *);
typedef void (*__gconv_end_fct) (struct __gconv_step *);



typedef int (*__gconv_trans_fct) (struct __gconv_step *,
      struct __gconv_step_data *, void *,
      __const unsigned char *,
      __const unsigned char **,
      __const unsigned char *, unsigned char **,
      size_t *);


typedef int (*__gconv_trans_context_fct) (void *, __const unsigned char *,
       __const unsigned char *,
       unsigned char *, unsigned char *);


typedef int (*__gconv_trans_query_fct) (__const char *, __const char ***,
     size_t *);


typedef int (*__gconv_trans_init_fct) (void **, const char *);
typedef void (*__gconv_trans_end_fct) (void *);

struct __gconv_trans_data
{

  __gconv_trans_fct __trans_fct;
  __gconv_trans_context_fct __trans_context_fct;
  __gconv_trans_end_fct __trans_end_fct;
  void *__data;
  struct __gconv_trans_data *__next;
};



struct __gconv_step
{
  struct __gconv_loaded_object *__shlib_handle;
  __const char *__modname;

  int __counter;

  char *__from_name;
  char *__to_name;

  __gconv_fct __fct;
  __gconv_btowc_fct __btowc_fct;
  __gconv_init_fct __init_fct;
  __gconv_end_fct __end_fct;



  int __min_needed_from;
  int __max_needed_from;
  int __min_needed_to;
  int __max_needed_to;


  int __stateful;

  void *__data;
};



struct __gconv_step_data
{
  unsigned char *__outbuf;
  unsigned char *__outbufend;



  int __flags;



  int __invocation_counter;



  int __internal_use;

  __mbstate_t *__statep;
  __mbstate_t __state;



  struct __gconv_trans_data *__trans;
};



typedef struct __gconv_info
{
  size_t __nsteps;
  struct __gconv_step *__steps;
  __extension__ struct __gconv_step_data __data [];
} *__gconv_t;
// # 45 "/usr/include/_G_config.h" 2 3 4
typedef union
{
  struct __gconv_info __cd;
  struct
  {
    struct __gconv_info __cd;
    struct __gconv_step_data __data;
  } __combined;
} _G_iconv_t;

typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
// # 33 "/usr/include/libio.h" 2 3 4
// # 53 "/usr/include/libio.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stdarg.h" 1 3 4
// # 40 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
// # 54 "/usr/include/libio.h" 2 3 4
// # 167 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
// # 177 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
// # 200 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
// # 268 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
// # 316 "/usr/include/libio.h" 3 4
  __off64_t _offset;
// # 325 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
// # 361 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
// # 413 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern wint_t __wunderflow (_IO_FILE *);
extern wint_t __wuflow (_IO_FILE *);
extern wint_t __woverflow (_IO_FILE *, wint_t);
// # 451 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
// # 481 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
// # 73 "/usr/include/stdio.h" 2 3 4
// # 86 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




// # 138 "/usr/include/stdio.h" 3 4
// # 1 "/usr/include/bits/stdio_lim.h" 1 3 4
// # 139 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;









extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));














extern FILE *tmpfile (void);
// # 185 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__));





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__));
// # 203 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

// # 228 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
// # 242 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes);




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream);
// # 269 "/usr/include/stdio.h" 3 4

// # 280 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__));
// # 300 "/usr/include/stdio.h" 3 4



extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

// # 394 "/usr/include/stdio.h" 3 4





extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));

// # 436 "/usr/include/stdio.h" 3 4





extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

// # 460 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
// # 471 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

// # 504 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

// # 585 "/usr/include/stdio.h" 3 4





extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;

// # 638 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

// # 674 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
// # 693 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
// # 716 "/usr/include/stdio.h" 3 4

// # 725 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






// # 1 "/usr/include/bits/sys_errlist.h" 1 3 4
// # 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
// # 755 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
// # 774 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
// # 814 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
// # 835 "/usr/include/stdio.h" 3 4
// # 1 "/usr/include/bits/stdio.h" 1 3 4
// # 33 "/usr/include/bits/stdio.h" 3 4
extern __inline int
vprintf (__const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}


extern __inline int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
// # 121 "/usr/include/bits/stdio.h" 3 4
extern __inline int
__attribute__ ((__nothrow__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline int
__attribute__ ((__nothrow__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x20) != 0);
}
// # 836 "/usr/include/stdio.h" 2 3 4
// # 844 "/usr/include/stdio.h" 3 4

// # 32 "./print-lmp.c" 2
// # 1 "/usr/include/stdlib.h" 1 3 4
// # 33 "/usr/include/stdlib.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 34 "/usr/include/stdlib.h" 2 3 4


// # 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;



// # 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

// # 182 "/usr/include/stdlib.h" 3 4


extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

// # 279 "/usr/include/stdlib.h" 3 4
extern double __strtod_internal (__const char *__restrict __nptr,
     char **__restrict __endptr, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern float __strtof_internal (__const char *__restrict __nptr,
    char **__restrict __endptr, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern long double __strtold_internal (__const char *__restrict __nptr,
           char **__restrict __endptr,
           int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
// # 305 "/usr/include/stdlib.h" 3 4
__extension__
extern long long int __strtoll_internal (__const char *__restrict __nptr,
      char **__restrict __endptr,
      int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



__extension__
extern unsigned long long int __strtoull_internal (__const char *
         __restrict __nptr,
         char **__restrict __endptr,
         int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;








extern __inline double
__attribute__ ((__nothrow__)) strtod (__const char *__restrict __nptr, char **__restrict __endptr)
{
  return __strtod_internal (__nptr, __endptr, 0);
}
extern __inline long int
__attribute__ ((__nothrow__)) strtol (__const char *__restrict __nptr, char **__restrict __endptr, int __base)

{
  return __strtol_internal (__nptr, __endptr, __base, 0);
}
extern __inline unsigned long int
__attribute__ ((__nothrow__)) strtoul (__const char *__restrict __nptr, char **__restrict __endptr, int __base)

{
  return __strtoul_internal (__nptr, __endptr, __base, 0);
}

// # 364 "/usr/include/stdlib.h" 3 4
__extension__ extern __inline long long int
__attribute__ ((__nothrow__)) strtoq (__const char *__restrict __nptr, char **__restrict __endptr, int __base)

{
  return __strtoll_internal (__nptr, __endptr, __base, 0);
}
__extension__ extern __inline unsigned long long int
__attribute__ ((__nothrow__)) strtouq (__const char *__restrict __nptr, char **__restrict __endptr, int __base)

{
  return __strtoull_internal (__nptr, __endptr, __base, 0);
}




__extension__ extern __inline long long int
__attribute__ ((__nothrow__)) strtoll (__const char *__restrict __nptr, char **__restrict __endptr, int __base)

{
  return __strtoll_internal (__nptr, __endptr, __base, 0);
}
__extension__ extern __inline unsigned long long int
__attribute__ ((__nothrow__)) strtoull (__const char * __restrict __nptr, char **__restrict __endptr, int __base)

{
  return __strtoull_internal (__nptr, __endptr, __base, 0);
}




extern __inline double
__attribute__ ((__nothrow__)) atof (__const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
extern __inline int
__attribute__ ((__nothrow__)) atoi (__const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline long int
__attribute__ ((__nothrow__)) atol (__const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}




__extension__ extern __inline long long int
__attribute__ ((__nothrow__)) atoll (__const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}

// # 429 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
// # 445 "/usr/include/stdlib.h" 3 4
extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;







extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



// # 1 "/usr/include/alloca.h" 1 3 4
// # 25 "/usr/include/alloca.h" 3 4
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






// # 613 "/usr/include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));

// # 658 "/usr/include/stdlib.h" 3 4


extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__));






extern int clearenv (void) __attribute__ ((__nothrow__));
// # 698 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
// # 709 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
// # 729 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;








extern int system (__const char *__command) ;

// # 756 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);









extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));



extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;












extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

// # 821 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
// # 926 "/usr/include/stdlib.h" 3 4
extern int posix_openpt (int __oflag) ;
// # 961 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
// # 977 "/usr/include/stdlib.h" 3 4

// # 33 "./print-lmp.c" 2
// # 1 "/usr/include/string.h" 1 3 4
// # 28 "/usr/include/string.h" 3 4





// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stddef.h" 1 3 4
// # 34 "/usr/include/string.h" 2 3 4




extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

// # 82 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

// # 130 "/usr/include/string.h" 3 4
extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
// # 165 "/usr/include/string.h" 3 4


extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

// # 181 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
// # 240 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

// # 254 "/usr/include/string.h" 3 4


extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

// # 270 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
// # 288 "/usr/include/string.h" 3 4
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
// # 325 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
// # 348 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
// # 414 "/usr/include/string.h" 3 4
// # 1 "/usr/include/bits/string.h" 1 3 4
// # 415 "/usr/include/string.h" 2 3 4


// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/bits/string2.h" 1 3 4
// # 403 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/bits/string2.h" 3 4
extern void *__rawmemchr (const void *__s, int __c);
// # 978 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/bits/string2.h" 3 4
extern __inline size_t __strcspn_c1 (__const char *__s, int __reject);
extern __inline size_t
__strcspn_c1 (__const char *__s, int __reject)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject)
    ++__result;
  return __result;
}

extern __inline size_t __strcspn_c2 (__const char *__s, int __reject1,
         int __reject2);
extern __inline size_t
__strcspn_c2 (__const char *__s, int __reject1, int __reject2)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2)
    ++__result;
  return __result;
}

extern __inline size_t __strcspn_c3 (__const char *__s, int __reject1,
         int __reject2, int __reject3);
extern __inline size_t
__strcspn_c3 (__const char *__s, int __reject1, int __reject2,
       int __reject3)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2 && __s[__result] != __reject3)
    ++__result;
  return __result;
}
// # 1054 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/bits/string2.h" 3 4
extern __inline size_t __strspn_c1 (__const char *__s, int __accept);
extern __inline size_t
__strspn_c1 (__const char *__s, int __accept)
{
  register size_t __result = 0;

  while (__s[__result] == __accept)
    ++__result;
  return __result;
}

extern __inline size_t __strspn_c2 (__const char *__s, int __accept1,
        int __accept2);
extern __inline size_t
__strspn_c2 (__const char *__s, int __accept1, int __accept2)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2)
    ++__result;
  return __result;
}

extern __inline size_t __strspn_c3 (__const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline size_t
__strspn_c3 (__const char *__s, int __accept1, int __accept2, int __accept3)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2
  || __s[__result] == __accept3)
    ++__result;
  return __result;
}
// # 1130 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/bits/string2.h" 3 4
extern __inline char *__strpbrk_c2 (__const char *__s, int __accept1,
         int __accept2);
extern __inline char *
__strpbrk_c2 (__const char *__s, int __accept1, int __accept2)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}

extern __inline char *__strpbrk_c3 (__const char *__s, int __accept1,
         int __accept2, int __accept3);
extern __inline char *
__strpbrk_c3 (__const char *__s, int __accept1, int __accept2,
       int __accept3)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2
  && *__s != __accept3)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}
// # 1182 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/bits/string2.h" 3 4
extern __inline char *__strtok_r_1c (char *__s, char __sep, char **__nextp);
extern __inline char *
__strtok_r_1c (char *__s, char __sep, char **__nextp)
{
  char *__result;
  if (__s == ((void *)0))
    __s = *__nextp;
  while (*__s == __sep)
    ++__s;
  __result = ((void *)0);
  if (*__s != '\0')
    {
      __result = __s++;
      while (*__s != '\0')
 if (*__s++ == __sep)
   {
     __s[-1] = '\0';
     break;
   }
      *__nextp = __s;
    }
  return __result;
}
// # 1214 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/bits/string2.h" 3 4
extern char *__strsep_g (char **__stringp, __const char *__delim);
// # 1232 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/bits/string2.h" 3 4
extern __inline char *__strsep_1c (char **__s, char __reject);
extern __inline char *
__strsep_1c (char **__s, char __reject)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0) && (*__s = (__extension__ (__builtin_constant_p (__reject) && !__builtin_constant_p (__retval) && (__reject) == '\0' ? (char *) __rawmemchr (__retval, __reject) : __builtin_strchr (__retval, __reject)))) != ((void *)0))
    *(*__s)++ = '\0';
  return __retval;
}

extern __inline char *__strsep_2c (char **__s, char __reject1, char __reject2);
extern __inline char *
__strsep_2c (char **__s, char __reject1, char __reject2)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}

extern __inline char *__strsep_3c (char **__s, char __reject1, char __reject2,
       char __reject3);
extern __inline char *
__strsep_3c (char **__s, char __reject1, char __reject2, char __reject3)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2 || *__cp == __reject3)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}
// # 1313 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/bits/string2.h" 3 4
extern char *__strdup (__const char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
// # 1332 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include-fixed/bits/string2.h" 3 4
extern char *__strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
// # 418 "/usr/include/string.h" 2 3 4
// # 426 "/usr/include/string.h" 3 4

// # 34 "./print-lmp.c" 2

// # 1 "./interface.h" 1
// # 33 "./interface.h"
// # 1 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stdarg.h" 1 3 4
// # 102 "/nfs/apps/gcc/4.4.1/lib/gcc/x86_64-unknown-linux-gnu/4.4.1/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
// # 34 "./interface.h" 2
// # 50 "./interface.h"
extern size_t strlcat(char *, const char *, size_t);


extern size_t strlcpy(char *, const char *, size_t);
// # 97 "./interface.h"
extern char *program_name;

extern int32_t thiszone;
// # 121 "./interface.h"
extern void ts_print(const struct timeval *);
extern void relts_print(int);

extern int fn_print(const u_char *, const u_char *);
extern int fn_printn(const u_char *, u_int, const u_char *);
extern int fn_printzp(const u_char *, u_int, const u_char *);
extern int mask2plen(u_int32_t);
extern const char *tok2strary_internal(const char **, int, const char *, int);


extern const char *dnaddr_string(u_short);

extern void error(const char *, ...)
    __attribute__((noreturn, format (printf, 1, 2)));
extern void warning(const char *, ...) __attribute__ ((format (printf, 1, 2)));

extern char *read_infile(char *);
extern char *copy_argv(char **);

extern void safeputchar(int);
extern void safeputs(const char *, int);

extern const char *isonsap_string(const u_char *, register u_int);
extern const char *protoid_string(const u_char *);
extern const char *ipxsap_string(u_short);
extern const char *dnname_string(u_short);
extern const char *dnnum_string(u_short);


extern void init_checksum(void);
extern u_int16_t verify_crc10_cksum(u_int16_t, const u_char *, int);
extern u_int16_t create_osi_cksum(const u_int8_t *, int, int);



// # 1 "./../libpcap-1.3.0/pcap.h" 1
// # 45 "./../libpcap-1.3.0/pcap.h"
// # 1 "./../libpcap-1.3.0/pcap/pcap.h" 1
// # 51 "./../libpcap-1.3.0/pcap/pcap.h"
// # 1 "./../libpcap-1.3.0/pcap/bpf.h" 1
// # 87 "./../libpcap-1.3.0/pcap/bpf.h"
typedef int bpf_int32;
typedef u_int bpf_u_int32;
// # 107 "./../libpcap-1.3.0/pcap/bpf.h"
struct bpf_program {
 u_int bf_len;
 struct bpf_insn *bf_insns;
};
// # 1259 "./../libpcap-1.3.0/pcap/bpf.h"
struct bpf_insn {
 u_short code;
 u_char jt;
 u_char jf;
 bpf_u_int32 k;
};
// # 1273 "./../libpcap-1.3.0/pcap/bpf.h"
extern int bpf_validate(const struct bpf_insn *, int);
extern u_int bpf_filter(const struct bpf_insn *, const u_char *, u_int, u_int);
// # 52 "./../libpcap-1.3.0/pcap/pcap.h" 2
// # 81 "./../libpcap-1.3.0/pcap/pcap.h"
typedef struct pcap pcap_t;
typedef struct pcap_dumper pcap_dumper_t;
typedef struct pcap_if pcap_if_t;
typedef struct pcap_addr pcap_addr_t;
// # 123 "./../libpcap-1.3.0/pcap/pcap.h"
struct pcap_file_header {
 bpf_u_int32 magic;
 u_short version_major;
 u_short version_minor;
 bpf_int32 thiszone;
 bpf_u_int32 sigfigs;
 bpf_u_int32 snaplen;
 bpf_u_int32 linktype;
};
// # 143 "./../libpcap-1.3.0/pcap/pcap.h"
typedef enum {
       PCAP_D_INOUT = 0,
       PCAP_D_IN,
       PCAP_D_OUT
} pcap_direction_t;
// # 161 "./../libpcap-1.3.0/pcap/pcap.h"
struct pcap_pkthdr {
 struct timeval ts;
 bpf_u_int32 caplen;
 bpf_u_int32 len;
};




struct pcap_stat {
 u_int ps_recv;
 u_int ps_drop;
 u_int ps_ifdrop;



};
// # 215 "./../libpcap-1.3.0/pcap/pcap.h"
struct pcap_if {
 struct pcap_if *next;
 char *name;
 char *description;
 struct pcap_addr *addresses;
 bpf_u_int32 flags;
};






struct pcap_addr {
 struct pcap_addr *next;
 struct sockaddr *addr;
 struct sockaddr *netmask;
 struct sockaddr *broadaddr;
 struct sockaddr *dstaddr;
};

typedef void (*pcap_handler)(u_char *, const struct pcap_pkthdr *,
        const u_char *);
// # 272 "./../libpcap-1.3.0/pcap/pcap.h"
char *pcap_lookupdev(char *);
int pcap_lookupnet(const char *, bpf_u_int32 *, bpf_u_int32 *, char *);

pcap_t *pcap_create(const char *, char *);
int pcap_set_snaplen(pcap_t *, int);
int pcap_set_promisc(pcap_t *, int);
int pcap_can_set_rfmon(pcap_t *);
int pcap_set_rfmon(pcap_t *, int);
int pcap_set_timeout(pcap_t *, int);
int pcap_set_tstamp_type(pcap_t *, int);
int pcap_set_buffer_size(pcap_t *, int);
int pcap_activate(pcap_t *);

int pcap_list_tstamp_types(pcap_t *, int **);
void pcap_free_tstamp_types(int *);
int pcap_tstamp_type_name_to_val(const char *);
const char *pcap_tstamp_type_val_to_name(int);
const char *pcap_tstamp_type_val_to_description(int);
// # 335 "./../libpcap-1.3.0/pcap/pcap.h"
pcap_t *pcap_open_live(const char *, int, int, int, char *);
pcap_t *pcap_open_dead(int, int);
pcap_t *pcap_open_offline(const char *, char *);
// # 347 "./../libpcap-1.3.0/pcap/pcap.h"
pcap_t *pcap_fopen_offline(FILE *, char *);


void pcap_close(pcap_t *);
int pcap_loop(pcap_t *, int, pcap_handler, u_char *);
int pcap_dispatch(pcap_t *, int, pcap_handler, u_char *);
const u_char*
 pcap_next(pcap_t *, struct pcap_pkthdr *);
int pcap_next_ex(pcap_t *, struct pcap_pkthdr **, const u_char **);
void pcap_breakloop(pcap_t *);
int pcap_stats(pcap_t *, struct pcap_stat *);
int pcap_setfilter(pcap_t *, struct bpf_program *);
int pcap_setdirection(pcap_t *, pcap_direction_t);
int pcap_getnonblock(pcap_t *, char *);
int pcap_setnonblock(pcap_t *, int, char *);
int pcap_inject(pcap_t *, const void *, size_t);
int pcap_sendpacket(pcap_t *, const u_char *, int);
const char *pcap_statustostr(int);
const char *pcap_strerror(int);
char *pcap_geterr(pcap_t *);
void pcap_perror(pcap_t *, char *);
int pcap_compile(pcap_t *, struct bpf_program *, const char *, int,
     bpf_u_int32);
int pcap_compile_nopcap(int, int, struct bpf_program *,
     const char *, int, bpf_u_int32);
void pcap_freecode(struct bpf_program *);
int pcap_offline_filter(struct bpf_program *, const struct pcap_pkthdr *,
     const u_char *);
int pcap_datalink(pcap_t *);
int pcap_datalink_ext(pcap_t *);
int pcap_list_datalinks(pcap_t *, int **);
int pcap_set_datalink(pcap_t *, int);
void pcap_free_datalinks(int *);
int pcap_datalink_name_to_val(const char *);
const char *pcap_datalink_val_to_name(int);
const char *pcap_datalink_val_to_description(int);
int pcap_snapshot(pcap_t *);
int pcap_is_swapped(pcap_t *);
int pcap_major_version(pcap_t *);
int pcap_minor_version(pcap_t *);


FILE *pcap_file(pcap_t *);
int pcap_fileno(pcap_t *);

pcap_dumper_t *pcap_dump_open(pcap_t *, const char *);
pcap_dumper_t *pcap_dump_fopen(pcap_t *, FILE *fp);
FILE *pcap_dump_file(pcap_dumper_t *);
long pcap_dump_ftell(pcap_dumper_t *);
int pcap_dump_flush(pcap_dumper_t *);
void pcap_dump_close(pcap_dumper_t *);
void pcap_dump(u_char *, const struct pcap_pkthdr *, const u_char *);

int pcap_findalldevs(pcap_if_t **, char *);
void pcap_freealldevs(pcap_if_t *);

const char *pcap_lib_version(void);
// # 413 "./../libpcap-1.3.0/pcap/pcap.h"
u_int bpf_filter(const struct bpf_insn *, const u_char *, u_int, u_int);

int bpf_validate(const struct bpf_insn *f, int len);
char *bpf_image(const struct bpf_insn *, int);
void bpf_dump(const struct bpf_program *, int);
// # 454 "./../libpcap-1.3.0/pcap/pcap.h"
int pcap_get_selectable_fd(pcap_t *);
// # 45 "./../libpcap-1.3.0/pcap.h" 2
// # 157 "./interface.h" 2

extern int print_unknown_data(const u_char *, const char *,int);
extern void ascii_print(const u_char *, u_int);
extern void hex_and_ascii_print_with_offset(const char *, const u_char *,
 u_int, u_int);
extern void hex_and_ascii_print(const char *, const u_char *, u_int);
extern void hex_print_with_offset(const char *, const u_char *, u_int, u_int);
extern void hex_print(const char *, const u_char *, u_int);
extern void telnet_print(const u_char *, u_int);
extern int llc_print(const u_char *, u_int, u_int, const u_char *,
 const u_char *, u_short *);
extern int snap_print(const u_char *, u_int, u_int, u_int);
extern void aarp_print(const u_char *, u_int);
extern void aodv_print(const u_char *, u_int, int);
extern void atalk_print(const u_char *, u_int);
extern void atm_print(u_int, u_int, u_int, const u_char *, u_int, u_int);
extern u_int atm_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int sunatm_if_print(const struct pcap_pkthdr *, const u_char *);
extern int oam_print(const u_char *, u_int, u_int);
extern void bootp_print(const u_char *, u_int);
extern void bgp_print(const u_char *, int);
extern void beep_print(const u_char *, u_int);
extern void cnfp_print(const u_char *, const u_char *);
extern void decnet_print(const u_char *, u_int, u_int);
extern void default_print(const u_char *, u_int);
extern void dvmrp_print(const u_char *, u_int);
extern void egp_print(const u_char *, u_int);
extern u_int enc_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int pflog_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int arcnet_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int arcnet_linux_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int token_print(const u_char *, u_int, u_int);
extern u_int token_if_print(const struct pcap_pkthdr *, const u_char *);
extern void fddi_print(const u_char *, u_int, u_int);
extern u_int fddi_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int fr_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int mfr_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int fr_print(register const u_char *, u_int);
extern u_int mfr_print(register const u_char *, u_int);
extern char *q922_string(const u_char *);
extern u_int ieee802_11_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int ieee802_11_radio_if_print(const struct pcap_pkthdr *,
 const u_char *);
extern u_int ap1394_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int ieee802_11_radio_avs_if_print(const struct pcap_pkthdr *,
 const u_char *);
extern void gre_print(const u_char *, u_int);
extern void icmp_print(const u_char *, u_int, const u_char *, int);
extern void igmp_print(const u_char *, u_int);
extern void igrp_print(const u_char *, u_int, const u_char *);
extern void ipN_print(const u_char *, u_int);
extern u_int ipfc_if_print(const struct pcap_pkthdr *, const u_char *);
extern void ipx_print(const u_char *, u_int);
extern void isoclns_print(const u_char *, u_int, u_int);
extern void krb_print(const u_char *);
extern u_int llap_print(const u_char *, u_int);
extern u_int ltalk_if_print(const struct pcap_pkthdr *, const u_char *);
extern void msdp_print(const unsigned char *, u_int);
extern void nfsreply_print(const u_char *, u_int, const u_char *);
extern void nfsreq_print(const u_char *, u_int, const u_char *);
extern void ns_print(const u_char *, u_int, int);
extern void ntp_print(const u_char *, u_int);
extern u_int null_if_print(const struct pcap_pkthdr *, const u_char *);
extern void ospf_print(const u_char *, u_int, const u_char *);
extern void olsr_print (const u_char *, u_int, int);
extern void pimv1_print(const u_char *, u_int);
extern void cisco_autorp_print(const u_char *, u_int);
extern void rsvp_print(const u_char *, u_int);
extern void ldp_print(const u_char *, u_int);
extern void lldp_print(const u_char *, u_int);
extern void rpki_rtr_print(const u_char *, u_int);
extern void lmp_print(const u_char *, u_int);
extern void lspping_print(const u_char *, u_int);
extern void lwapp_control_print(const u_char *, u_int, int);
extern void lwapp_data_print(const u_char *, u_int);
extern void eigrp_print(const u_char *, u_int);
extern void mobile_print(const u_char *, u_int);
extern void pim_print(const u_char *, u_int, u_int);
extern u_int pppoe_print(const u_char *, u_int);
extern u_int ppp_print(register const u_char *, u_int);
extern u_int ppp_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int ppp_hdlc_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int ppp_bsdos_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int pppoe_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int prism_if_print(const struct pcap_pkthdr *, const u_char *);
extern void q933_print(const u_char *, u_int);
extern int vjc_print(register const char *, u_short);
extern void vqp_print(register const u_char *, register u_int);
extern u_int raw_if_print(const struct pcap_pkthdr *, const u_char *);
extern void rip_print(const u_char *, u_int);
extern u_int sl_if_print(const struct pcap_pkthdr *, const u_char *);
extern void lane_print(const u_char *, u_int, u_int);
extern u_int lane_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int cip_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int sl_bsdos_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int chdlc_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int chdlc_print(register const u_char *, u_int);
extern u_int juniper_atm1_print(const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_atm2_print(const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_mfr_print(const struct pcap_pkthdr *, register const u_char *);
extern u_int juniper_mlfr_print(const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_mlppp_print(const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_pppoe_print(const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_pppoe_atm_print(const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_ggsn_print(const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_es_print(const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_monitor_print(const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_services_print(const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_ether_print(const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_ppp_print(const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_frelay_print(const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_chdlc_print(const struct pcap_pkthdr *, const u_char *);
extern u_int sll_if_print(const struct pcap_pkthdr *, const u_char *);
extern void snmp_print(const u_char *, u_int);
extern void sunrpcrequest_print(const u_char *, u_int, const u_char *);
extern u_int symantec_if_print(const struct pcap_pkthdr *, const u_char *);
extern void tcp_print(const u_char *, u_int, const u_char *, int);
extern void tftp_print(const u_char *, u_int);
extern void timed_print(const u_char *);
extern void udld_print(const u_char *, u_int);
extern void udp_print(const u_char *, u_int, const u_char *, int);
extern void vtp_print(const u_char *, u_int);
extern void wb_print(const void *, u_int);
extern int ah_print(register const u_char *);
extern int ipcomp_print(register const u_char *, int *);
extern void rx_print(register const u_char *, int, int, int, u_char *);
extern void netbeui_print(u_short, const u_char *, int);
extern void ipx_netbios_print(const u_char *, u_int);
extern void nbt_tcp_print(const u_char *, int);
extern void nbt_udp137_print(const u_char *, int);
extern void nbt_udp138_print(const u_char *, int);
extern void smb_tcp_print(const u_char *, int);
extern char *smb_errstr(int, int);
extern const char *nt_errstr(u_int32_t);
extern void print_data(const unsigned char *, int);
extern void l2tp_print(const u_char *, u_int);
extern void vrrp_print(const u_char *, u_int, int);
extern void carp_print(const u_char *, u_int, int);
extern void slow_print(const u_char *, u_int);
extern void sflow_print(const u_char *, u_int);
extern void mpcp_print(const u_char *, u_int);
extern void cfm_print(const u_char *, u_int);
extern void pgm_print(const u_char *, u_int, const u_char *);
extern void cdp_print(const u_char *, u_int, u_int);
extern void dtp_print(const u_char *, u_int);
extern void stp_print(const u_char *, u_int);
extern void radius_print(const u_char *, u_int);
extern void lwres_print(const u_char *, u_int);
extern void pptp_print(const u_char *);
extern void dccp_print(const u_char *, const u_char *, u_int);
extern void sctp_print(const u_char *, const u_char *, u_int);
extern void forces_print(const u_char *, u_int);
extern void mpls_print(const u_char *, u_int);
extern void mpls_lsp_ping_print(const u_char *, u_int);
extern void zephyr_print(const u_char *, int);
extern void hsrp_print(const u_char *, u_int);
extern void bfd_print(const u_char *, u_int, u_int);
extern void sip_print(const u_char *, u_int);
extern void syslog_print(const u_char *, u_int);
extern u_int bt_if_print(const struct pcap_pkthdr *, const u_char *);
extern u_int usb_linux_48_byte_print(const struct pcap_pkthdr *, const u_char *);
extern u_int usb_linux_64_byte_print(const struct pcap_pkthdr *, const u_char *);
// # 335 "./interface.h"
struct cksum_vec {
 const u_int8_t *ptr;
 int len;
};
extern u_int16_t in_cksum(const struct cksum_vec *, int);
extern u_int16_t in_cksum_shouldbe(u_int16_t, u_int16_t);
// # 349 "./interface.h"
// # 1 "./netdissect.h" 1
// # 54 "./netdissect.h"
extern size_t strlcat (char *, const char *, size_t);


extern size_t strlcpy (char *, const char *, size_t);
// # 68 "./netdissect.h"
struct tok {
 int v;
 const char *s;
};


extern const char *tok2strbuf(const struct tok *, const char *, int,
         char *buf, size_t bufsize);


extern const char *tok2str(const struct tok *, const char *, int);
extern char *bittok2str(const struct tok *, const char *, int);
extern char *bittok2str_nosep(const struct tok *, const char *, int);


typedef struct netdissect_options netdissect_options;

struct netdissect_options {
  int ndo_aflag;
  int ndo_bflag;
  int ndo_eflag;
  int ndo_fflag;
  int ndo_Kflag;
  int ndo_nflag;
  int ndo_Nflag;
  int ndo_qflag;
  int ndo_Rflag;
  int ndo_sflag;
  int ndo_Sflag;
  int ndo_tflag;
  int ndo_Uflag;
  int ndo_uflag;
  int ndo_vflag;
  int ndo_xflag;
  int ndo_Xflag;
  int ndo_Aflag;


  int ndo_Bflag;
  int ndo_Iflag;
  int ndo_Oflag;
  int ndo_dlt;
  int ndo_jflag;
  int ndo_pflag;

  int ndo_Cflag;
  int ndo_Cflag_count;
  int ndo_Gflag;
  int ndo_Gflag_count;
  time_t ndo_Gflag_time;
  int ndo_Wflag;
  int ndo_WflagChars;
  int ndo_Hflag;
  int ndo_suppress_default_print;
  const char *ndo_dltname;

  char *ndo_espsecret;
  struct sa_list *ndo_sa_list_head;
  struct sa_list *ndo_sa_default;

  char *ndo_sigsecret;

  struct esp_algorithm *ndo_espsecret_xform;
  char *ndo_espsecret_key;

  int ndo_packettype;

  char *ndo_program_name;

  int32_t ndo_thiszone;

  int ndo_snaplen;


  const u_char *ndo_packetp;
  const u_char *ndo_snapend;


  int ndo_infodelay;


  void (*ndo_default_print)(netdissect_options *,
          register const u_char *bp, register u_int length);
  void (*ndo_info)(netdissect_options *, int verbose);

  int (*ndo_printf)(netdissect_options *,
       const char *fmt, ...)



       ;
  void (*ndo_error)(netdissect_options *,
      const char *fmt, ...)



       ;
  void (*ndo_warning)(netdissect_options *,
        const char *fmt, ...)



       ;
};
// # 243 "./netdissect.h"
extern int fn_print(const u_char *, const u_char *);
extern int fn_printn(const u_char *, u_int, const u_char *);
extern const char *tok2str(const struct tok *, const char *, int);

extern void wrapup(int);






extern void safeputchar(int);
extern void safeputs(const char *, int);
// # 269 "./netdissect.h"
// # 1 "./../libpcap-1.3.0/pcap.h" 1
// # 270 "./netdissect.h" 2

typedef u_int (*if_ndo_printer)(struct netdissect_options *ndo,
    const struct pcap_pkthdr *, const u_char *);
typedef u_int (*if_printer)(const struct pcap_pkthdr *, const u_char *);

extern if_ndo_printer lookup_ndo_printer(int);
extern if_printer lookup_printer(int);

extern void eap_print(netdissect_options *,const u_char *, u_int);
extern int esp_print(netdissect_options *,
       register const u_char *bp, int len, register const u_char *bp2,
       int *nhdr, int *padlen);
extern void arp_print(netdissect_options *,const u_char *, u_int, u_int);
extern void tipc_print(netdissect_options *, const u_char *, u_int, u_int);
extern void icmp6_print(netdissect_options *ndo, const u_char *,
                        u_int, const u_char *, int);
extern void isakmp_print(netdissect_options *,const u_char *,
    u_int, const u_char *);
extern void isakmp_rfc3948_print(netdissect_options *,const u_char *,
     u_int, const u_char *);
extern void ip_print(netdissect_options *,const u_char *, u_int);
extern void ip_print_inner(netdissect_options *ndo,
      const u_char *bp, u_int length, u_int nh,
      const u_char *bp2);
extern void rrcp_print(netdissect_options *,const u_char *, u_int);

extern void ether_print(netdissect_options *,
                        const u_char *, u_int, u_int,
                        void (*)(netdissect_options *, const u_char *),
                        const u_char *);

extern u_int ether_if_print(netdissect_options *,
                            const struct pcap_pkthdr *,const u_char *);
extern u_int netanalyzer_if_print(netdissect_options *,
                                  const struct pcap_pkthdr *,const u_char *);
extern u_int netanalyzer_transparent_if_print(netdissect_options *,
                                              const struct pcap_pkthdr *,
                                              const u_char *);

extern int ethertype_print(netdissect_options *,u_short, const u_char *,
        u_int, u_int);
// # 464 "./netdissect.h"
extern u_int ipnet_if_print(netdissect_options *,const struct pcap_pkthdr *, const u_char *);
extern u_int ppi_if_print(netdissect_options *,const struct pcap_pkthdr *, const u_char *);

extern u_int ieee802_15_4_if_print(netdissect_options *,const struct pcap_pkthdr *, const u_char *);
// # 501 "./netdissect.h"
extern void esp_print_decodesecret(netdissect_options *ndo);
extern int esp_print_decrypt_buffer_by_ikev2(netdissect_options *ndo,
          int initiator,
          u_char spii[8], u_char spir[8],
          u_char *buf, u_char *end);
// # 350 "./interface.h" 2




extern netdissect_options *gndo;
// # 36 "./print-lmp.c" 2
// # 1 "./extract.h" 1
// # 37 "./print-lmp.c" 2
// # 1 "./addrtoname.h" 1
// # 26 "./addrtoname.h"
enum {
    LINKADDR_ETHER,
    LINKADDR_FRELAY,
    LINKADDR_IEEE1394,
    LINKADDR_ATM
};



extern const char *linkaddr_string(const u_char *, const unsigned int, const unsigned int);
extern const char *etheraddr_string(const u_char *);
extern const char *le64addr_string(const u_char *);
extern const char *etherproto_string(u_short);
extern const char *tcpport_string(u_short);
extern const char *udpport_string(u_short);
extern const char *getname(const u_char *);



extern const char *intoa(u_int32_t);

extern void init_addrtoname(u_int32_t, u_int32_t);
extern struct hnamemem *newhnamemem(void);
// # 38 "./print-lmp.c" 2
// # 1 "./gmpls.h" 1
// # 26 "./gmpls.h"
extern const struct tok gmpls_link_prot_values[];
extern const struct tok gmpls_switch_cap_values[];
extern const struct tok gmpls_switch_cap_tsc_indication_values[];
extern const struct tok gmpls_encoding_values[];
extern const struct tok gmpls_payload_values[];
extern const struct tok diffserv_te_bc_values[];
extern const struct tok lmp_sd_service_config_cpsa_link_type_values[];
extern const struct tok lmp_sd_service_config_cpsa_signal_type_sdh_values[];
extern const struct tok lmp_sd_service_config_cpsa_signal_type_sonet_values[];
// # 39 "./print-lmp.c" 2
// # 52 "./print-lmp.c"
struct lmp_common_header {
    u_int8_t version_res[2];
    u_int8_t flags;
    u_int8_t msg_type;
    u_int8_t length[2];
    u_int8_t reserved[2];
};




static const struct tok lmp_header_flag_values[] = {
    { 0x01, "Control Channel Down"},
    { 0x02, "LMP restart"},
    { 0, ((void *)0)}
};

static const struct tok lmp_obj_te_link_flag_values[] = {
    { 0x01, "Fault Management Supported"},
    { 0x02, "Link Verification Supported"},
    { 0, ((void *)0)}
};

static const struct tok lmp_obj_data_link_flag_values[] = {
    { 0x01, "Data Link Port"},
    { 0x02, "Allocated for user traffic"},
    { 0x04, "Failed link"},
    { 0, ((void *)0)}
};

static const struct tok lmp_obj_channel_status_values[] = {
    { 1, "Signal Okay"},
    { 2, "Signal Degraded"},
    { 3, "Signal Fail"},
    { 0, ((void *)0)}
};

static const struct tok lmp_obj_begin_verify_flag_values[] = {
    { 0x0001, "Verify all links"},
    { 0x0002, "Data link type"},
    { 0, ((void *)0)}
};

static const struct tok lmp_obj_begin_verify_error_values[] = {
    { 0x01, "Link Verification Procedure Not supported"},
    { 0x02, "Unwilling to verify"},
    { 0x04, "Unsupported verification transport mechanism"},
    { 0x08, "Link-Id configuration error"},
    { 0x10, "Unknown object c-type"},
    { 0, ((void *)0)}
};

static const struct tok lmp_obj_link_summary_error_values[] = {
    { 0x01, "Unacceptable non-negotiable LINK-SUMMARY parameters"},
    { 0x02, "Renegotiate LINK-SUMMARY parameters"},
    { 0x04, "Invalid TE-LINK Object"},
    { 0x08, "Invalid DATA-LINK Object"},
    { 0x10, "Unknown TE-LINK Object c-type"},
    { 0x20, "Unknown DATA-LINK Object c-type"},
    { 0, ((void *)0)}
};


static const struct tok lmp_obj_service_config_sp_flag_values[] = {
    { 0x01, "RSVP Supported"},
    { 0x02, "LDP Supported"},
    { 0, ((void *)0)}
};


static const struct tok lmp_obj_service_config_cpsa_tp_flag_values[] = {
    { 0x01, "Path/VC Overhead Transparency Supported"},
    { 0x02, "Line/MS Overhead Transparency Supported"},
    { 0x04, "Section/RS Overhead Transparency Supported"},
    { 0, ((void *)0)}
};


static const struct tok lmp_obj_service_config_cpsa_cct_flag_values[] = {
    { 0x01, "Contiguous Concatenation Types Supported"},
    { 0, ((void *)0)}
};


static const struct tok lmp_obj_service_config_nsa_transparency_flag_values[] = {
    { 0x01, "Standard SOH/RSOH Transparency Supported"},
    { 0x02, "Standard LOH/MSOH Transparency Supported"},
    { 0, ((void *)0)}
};


static const struct tok lmp_obj_service_config_nsa_tcm_flag_values[] = {
    { 0x01, "Transparent Tandem Connection Monitoring Supported"},
    { 0, ((void *)0)}
};


static const struct tok lmp_obj_service_config_nsa_network_diversity_flag_values[] = {
    { 0x01, "Node Diversity Supported"},
    { 0x02, "Link Diversity Supported"},
    { 0x04, "SRLG Diversity Supported"},
    { 0, ((void *)0)}
};
// # 181 "./print-lmp.c"
static const struct tok lmp_msg_type_values[] = {
    { 1, "Config"},
    { 2, "Config ACK"},
    { 3, "Config NACK"},
    { 4, "Hello"},
    { 5, "Begin Verify"},
    { 6, "Begin Verify ACK"},
    { 7, "Begin Verify NACK"},
    { 8, "End Verify"},
    { 9, "End Verify ACK"},
    { 10, "Test"},
    { 11, "Test Status Success"},
    { 12, "Test Status Failure"},
    { 13, "Test Status ACK"},
    { 14, "Link Summary"},
    { 15, "Link Summary ACK"},
    { 16, "Link Summary NACK"},
    { 17, "Channel Status"},
    { 18, "Channel Status ACK"},
    { 19, "Channel Status Request"},
    { 20, "Channel Status Response"},
    { 50, "Service Config"},
    { 51, "Service Config ACK"},
    { 52, "Service Config NACK"},
    { 0, ((void *)0)}
};
// # 222 "./print-lmp.c"
struct lmp_object_header {
    u_int8_t ctype;
    u_int8_t class_num;
    u_int8_t length[2];
};
// # 246 "./print-lmp.c"
static const struct tok lmp_obj_values[] = {
    { 1, "Control Channel ID" },
    { 2, "Node ID" },
    { 3, "Link ID" },
    { 4, "Interface ID" },
    { 5, "Message ID" },
    { 6, "Configuration" },
    { 7, "Hello" },
    { 8, "Verify Begin" },
    { 9, "Verify Begin ACK" },
    { 10, "Verify ID" },
    { 11, "TE Link" },
    { 12, "Data Link" },
    { 13, "Channel Status" },
    { 14, "Channel Status Request" },
    { 20, "Error Code" },
    { 51, "Service Config" },

    { 0, ((void *)0)}
};




static const struct tok lmp_data_link_subobj[] = {
    { 1, "Interface Switching Type" },
    { 2 , "Wavelength" },
    { 0, ((void *)0)}
};
// # 318 "./print-lmp.c"
static const struct tok lmp_ctype_values[] = {
    { 256*1 +1, "Local" },
    { 256*1 +2, "Remote" },
    { 256*2 +1, "Local" },
    { 256*2 +2, "Remote" },
    { 256*3 +1, "IPv4 Local" },
    { 256*3 +2, "IPv4 Remote" },
    { 256*3 +3, "IPv6 Local" },
    { 256*3 +4, "IPv6 Remote" },
    { 256*3 +5, "Unnumbered Local" },
    { 256*3 +6, "Unnumbered Remote" },
    { 256*4 +1, "IPv4 Local" },
    { 256*4 +2, "IPv4 Remote" },
    { 256*4 +3, "IPv6 Local" },
    { 256*4 +4, "IPv6 Remote" },
    { 256*4 +5, "Unnumbered Local" },
    { 256*4 +6, "Unnumbered Remote" },
    { 256*5 +1, "1" },
    { 256*5 +2, "2" },
    { 256*6 +1, "1" },
    { 256*7 +1, "1" },
    { 256*8 +1, "1" },
    { 256*9 +1, "1" },
    { 256*10 +1, "1" },
    { 256*11 +1, "IPv4" },
    { 256*11 +2, "IPv6" },
    { 256*11 +3, "Unnumbered" },
    { 256*12 +1, "IPv4" },
    { 256*12 +2, "IPv6" },
    { 256*12 +3, "Unnumbered" },
    { 256*13 +1, "IPv4" },
    { 256*13 +2, "IPv6" },
    { 256*13 +3, "Unnumbered" },
    { 256*14 +1, "IPv4" },
    { 256*14 +2, "IPv6" },
    { 256*14 +3, "Unnumbered" },
    { 256*20 +1, "1" },
    { 256*20 +2, "2" },
    { 256*51 +1, "1" },
    { 256*51 +2, "2" },
    { 256*51 +3, "3" },
    { 256*51 +4, "4" },
    { 0, ((void *)0)}
};

void
lmp_print(register const u_char *pptr, register u_int len) {

    const struct lmp_common_header *lmp_com_header;
    const struct lmp_object_header *lmp_obj_header;
    const u_char *tptr,*obj_tptr;
    int tlen,lmp_obj_len,lmp_obj_ctype,obj_tlen;
    int hexdump;
    int offset,subobj_type,subobj_len,total_subobj_len;
    int link_type;

    union {
        float f;
        u_int32_t i;
    } bw;

    tptr=pptr;
    lmp_com_header = (const struct lmp_common_header *)pptr;
    if (!(gndo->ndo_snapend - (sizeof(*lmp_com_header)) <= gndo->ndo_snapend && (const u_char *)&(*lmp_com_header) <= gndo->ndo_snapend - (sizeof(*lmp_com_header)))) goto trunc;




    if ((((lmp_com_header->version_res[0])&0xf0)>>4) != 1) {
 printf("LMP version %u packet not supported",
               (((lmp_com_header->version_res[0])&0xf0)>>4));
 return;
    }


    if (gndo->ndo_vflag < 1) {
        printf("LMPv%u %s Message, length: %u",
               (((lmp_com_header->version_res[0])&0xf0)>>4),
               tok2str(lmp_msg_type_values, "unknown (%u)",lmp_com_header->msg_type),
               len);
        return;
    }



    tlen=((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(lmp_com_header->length)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })));

    printf("\n\tLMPv%u, msg-type: %s, Flags: [%s], length: %u",
           (((lmp_com_header->version_res[0])&0xf0)>>4),
           tok2str(lmp_msg_type_values, "unknown, type: %u",lmp_com_header->msg_type),
           bittok2str(lmp_header_flag_values,"none",lmp_com_header->flags),
           tlen);

    tptr+=sizeof(const struct lmp_common_header);
    tlen-=sizeof(const struct lmp_common_header);

    while(tlen>0) {

        if (!(gndo->ndo_snapend - (sizeof(struct lmp_object_header)) <= gndo->ndo_snapend && (const u_char *)&(*tptr) <= gndo->ndo_snapend - (sizeof(struct lmp_object_header))))
            goto trunc;

        lmp_obj_header = (const struct lmp_object_header *)tptr;
        lmp_obj_len=((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(lmp_obj_header->length)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })));
        lmp_obj_ctype=(lmp_obj_header->ctype)&0x7f;

        if(lmp_obj_len % 4 || lmp_obj_len < 4)
            return;

        printf("\n\t  %s Object (%u), Class-Type: %s (%u) Flags: [%snegotiable], length: %u",
               tok2str(lmp_obj_values,
                       "Unknown",
                       lmp_obj_header->class_num),
               lmp_obj_header->class_num,
               tok2str(lmp_ctype_values,
                       "Unknown",
                       ((lmp_obj_header->class_num)<<8)+lmp_obj_ctype),
               lmp_obj_ctype,
               (lmp_obj_header->ctype)&0x80 ? "" : "non-",
               lmp_obj_len);

        obj_tptr=tptr+sizeof(struct lmp_object_header);
        obj_tlen=lmp_obj_len-sizeof(struct lmp_object_header);


        if (!(gndo->ndo_snapend - (lmp_obj_len) <= gndo->ndo_snapend && (const u_char *)&(*tptr) <= gndo->ndo_snapend - (lmp_obj_len)))
            goto trunc;
        hexdump=0;

        switch(lmp_obj_header->class_num) {

        case 1:
            switch(lmp_obj_ctype) {
            case 1:
            case 2:
                printf("\n\t    Control Channel ID: %u (0x%08x)",
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))),
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));
                break;

            default:
                hexdump=1;
            }
            break;

        case 3:
        case 4:
            switch(lmp_obj_ctype) {
            case 1:
            case 2:
                printf("\n\t    IPv4 Link ID: %s (0x%08x)",
                       getname((const u_char *)(obj_tptr)),
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));
                break;
// # 479 "./print-lmp.c"
            case 5:
            case 6:
                printf("\n\t    Link ID: %u (0x%08x)",
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))),
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));
                break;
            default:
                hexdump=1;
            }
            break;

        case 5:
            switch(lmp_obj_ctype) {
            case 1:
                printf("\n\t    Message ID: %u (0x%08x)",
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))),
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));
                break;
            case 2:
                printf("\n\t    Message ID Ack: %u (0x%08x)",
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))),
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));
                break;
            default:
                hexdump=1;
            }
            break;

        case 2:
            switch(lmp_obj_ctype) {
            case 1:
            case 2:
                printf("\n\t    Node ID: %s (0x%08x)",
                       getname((const u_char *)(obj_tptr)),
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));
                break;

            default:
                hexdump=1;
            }
            break;

        case 6:
            switch(lmp_obj_ctype) {
            case 1:
                printf("\n\t    Hello Interval: %u\n\t    Hello Dead Interval: %u",
                       ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))),
                       ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+2)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))));
                break;

            default:
                hexdump=1;
            }
            break;

        case 7:
            switch(lmp_obj_ctype) {
     case 1:
                printf("\n\t    Tx Seq: %u, Rx Seq: %u",
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))),
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+4)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));
                break;

            default:
                hexdump=1;
            }
            break;

        case 11:
  printf("\n\t    Flags: [%s]",
  bittok2str(lmp_obj_te_link_flag_values,
   "none",
   ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))>>8));

     switch(lmp_obj_ctype) {
     case 1:
  printf("\n\t    Local Link-ID: %s (0x%08x) 			\n\t    Remote Link-ID: %s (0x%08x)",

                       getname((const u_char *)(obj_tptr+4)),
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+4)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))),
                       getname((const u_char *)(obj_tptr+8)),
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+8)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));
  break;




     case 3:
            default:
                hexdump=1;
            }
            break;

        case 12:
  printf("\n\t    Flags: [%s]",
  bittok2str(lmp_obj_data_link_flag_values,
   "none",
   ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))>>8));

     switch(lmp_obj_ctype) {
     case 1:
     case 3:
                printf("\n\t    Local Interface ID: %s (0x%08x) 			\n\t    Remote Interface ID: %s (0x%08x)",

                       getname((const u_char *)(obj_tptr+4)),
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+4)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))),
                       getname((const u_char *)(obj_tptr+8)),
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+8)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));

  total_subobj_len = lmp_obj_len - 16;
  offset = 12;
  while (total_subobj_len > 0 && hexdump == 0 ) {
   subobj_type = ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+offset)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))>>8;
   subobj_len = ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+offset)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))&0x00FF;
   printf("\n\t    Subobject, Type: %s (%u), Length: %u",
    tok2str(lmp_data_link_subobj,
     "Unknown",
     subobj_type),
     subobj_type,
     subobj_len);
   switch(subobj_type) {
   case 1:
    printf("\n\t      Switching Type: %s (%u)",
     tok2str(gmpls_switch_cap_values,
      "Unknown",
      ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+offset+2)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))>>8),
     ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+offset+2)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))>>8);
    printf("\n\t      Encoding Type: %s (%u)",
     tok2str(gmpls_encoding_values,
      "Unknown",
      ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+offset+2)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))&0x00FF),
     ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+offset+2)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))&0x00FF);
    bw.i = ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+offset+4)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })));
    printf("\n\t      Min Reservable Bandwidth: %.3f Mbps",
                                       bw.f*8/1000000);
    bw.i = ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+offset+8)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })));
    printf("\n\t      Max Reservable Bandwidth: %.3f Mbps",
                                       bw.f*8/1000000);
    break;
   case 2:
    printf("\n\t      Wavelength: %u",
     ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+offset+4)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));
    break;
   default:

    hexdump=1;
    break;
   }
   total_subobj_len-=subobj_len;
   offset+=subobj_len;
  }

  break;



            default:
                hexdump=1;
            }
            break;

        case 8:
     switch(lmp_obj_ctype) {
            case 1:
  printf("\n\t    Flags: %s",
  bittok2str(lmp_obj_begin_verify_flag_values,
   "none",
   ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))));
  printf("\n\t    Verify Interval: %u",
   ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+2)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))));
  printf("\n\t    Data links: %u",
   ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+4)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));
                printf("\n\t    Encoding type: %s",
   tok2str(gmpls_encoding_values, "Unknown", *(obj_tptr+8)));
                printf("\n\t    Verify Tranport Mechanism: %u (0x%x) %s",
   ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+10)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))),
   ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+10)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))),
   ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+10)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))&8000 ? "(Payload test messages capable)" : "");
                bw.i = ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+12)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })));
  printf("\n\t    Transmission Rate: %.3f Mbps",bw.f*8/1000000);
  printf("\n\t    Wavelength: %u",
   ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+16)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));
  break;

            default:
                hexdump=1;
            }
            break;

        case 9:
     switch(lmp_obj_ctype) {
            case 1:
                printf("\n\t    Verify Dead Interval: %u 				\n\t    Verify Transport Response: %u",

                       ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))),
                       ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+2)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))));
                break;

            default:
                hexdump=1;
            }
            break;

 case 10:
     switch(lmp_obj_ctype) {
            case 1:
                printf("\n\t    Verify ID: %u",
                       ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));
                break;

            default:
                hexdump=1;
            }
            break;

 case 13:
            switch(lmp_obj_ctype) {
     case 1:
     case 3:
  offset = 0;

  while (offset < (lmp_obj_len-(int)sizeof(struct lmp_object_header)) ) {
   printf("\n\t    Interface ID: %s (0x%08x)",
   getname((const u_char *)(obj_tptr+offset)),
   ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+offset)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));

   printf("\n\t\t    Active: %s (%u)", (((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+offset+4)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })))>>31) ?
      "Allocated" : "Non-allocated",
    (((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+offset+4)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })))>>31));

   printf("\n\t\t    Direction: %s (%u)", (((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+offset+4)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })))>>30)&0x1 ?
      "Transmit" : "Receive",
    (((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+offset+4)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })))>>30)&0x1);

   printf("\n\t\t    Channel Status: %s (%u)",
     tok2str(lmp_obj_channel_status_values,
      "Unknown",
     ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+offset+4)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })))&0x3FFFFFF),
   ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+offset+4)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })))&0x3FFFFFF);
   offset+=8;
  }
                break;



            default:
                hexdump=1;
            }
            break;

 case 14:
            switch(lmp_obj_ctype) {
     case 1:
     case 3:
  offset = 0;
  while (offset < (lmp_obj_len-(int)sizeof(struct lmp_object_header)) ) {
   printf("\n\t    Interface ID: %s (0x%08x)",
   getname((const u_char *)(obj_tptr+offset)),
   ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+offset)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));
   offset+=4;
  }
                break;



     default:
                hexdump=1;
            }
            break;

        case 20:
     switch(lmp_obj_ctype) {
            case 1:
  printf("\n\t    Error Code: %s",
  bittok2str(lmp_obj_begin_verify_error_values,
   "none",
   ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })))));
                break;

            case 2:
  printf("\n\t    Error Code: %s",
  bittok2str(lmp_obj_link_summary_error_values,
   "none",
   ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })))));
                break;
            default:
                hexdump=1;
            }
            break;

 case 51:
     switch (lmp_obj_ctype) {
     case 1:

  printf("\n\t Flags: %s",
         bittok2str(lmp_obj_service_config_sp_flag_values,
      "none",
      ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))>>8));

  printf("\n\t  UNI Version: %u",
         ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))) & 0x00FF);

  break;

            case 2:

  link_type = ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))>>8;

  printf("\n\t Link Type: %s (%u)",
         tok2str(lmp_sd_service_config_cpsa_link_type_values,
          "Unknown", link_type),
         link_type);

  if (link_type == 5) {
      printf("\n\t Signal Type: %s (%u)",
      tok2str(lmp_sd_service_config_cpsa_signal_type_sdh_values,
       "Unknown",
       ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))) & 0x00FF),
      ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))) & 0x00FF);
  }

  if (link_type == 6) {
      printf("\n\t Signal Type: %s (%u)",
      tok2str(lmp_sd_service_config_cpsa_signal_type_sonet_values,
       "Unknown",
       ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))) & 0x00FF),
      ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))) & 0x00FF);
  }

  printf("\n\t Transparency: %s",
         bittok2str(lmp_obj_service_config_cpsa_tp_flag_values,
      "none",
      ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+2)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))>>8));

  printf("\n\t Contiguous Concatenation Types: %s",
         bittok2str(lmp_obj_service_config_cpsa_cct_flag_values,
      "none",
      ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+2)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; })))>>8 & 0x00FF));

  printf("\n\t Minimum NCC: %u",
         ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+4)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))));

  printf("\n\t Maximum NCC: %u",
         ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+6)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))));

  printf("\n\t Minimum NVC:%u",
         ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+8)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))));

  printf("\n\t Maximum NVC:%u",
         ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+10)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))));

  printf("\n\t    Local Interface ID: %s (0x%08x)",
         getname((const u_char *)(obj_tptr+12)),
         ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr+12)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))));

  break;

     case 3:

  printf("\n\t Transparency Flags: %s",
         bittok2str(
      lmp_obj_service_config_nsa_transparency_flag_values,
      "none",
      ((u_int32_t)(__extension__ ({ register unsigned int __v, __x = (*(const u_int32_t *)(obj_tptr)); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })))));

  printf("\n\t TCM Monitoring Flags: %s",
         bittok2str(
      lmp_obj_service_config_nsa_tcm_flag_values,
      "none",
      ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+6)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))) & 0x00FF));

  break;

     case 4:

  printf("\n\t Diversity: Flags: %s",
         bittok2str(
      lmp_obj_service_config_nsa_network_diversity_flag_values,
      "none",
      ((u_int16_t)(__extension__ ({ register unsigned short int __v, __x = (*(const u_int16_t *)(obj_tptr+2)); if (__builtin_constant_p (__x)) __v = ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))) & 0x00FF));
  break;

     default:
  hexdump = 1;
     };

 break;

        default:
            if (gndo->ndo_vflag <= 1)
                print_unknown_data(obj_tptr,"\n\t    ",obj_tlen);
            break;
        }

        if (gndo->ndo_vflag > 1 || hexdump==1)
            print_unknown_data(tptr+sizeof(struct lmp_object_header),"\n\t    ",
                               lmp_obj_len-sizeof(struct lmp_object_header));

        tptr+=lmp_obj_len;
        tlen-=lmp_obj_len;
    }
    return;
trunc:
    printf("\n\t\t packet exceeded snapshot");
}
