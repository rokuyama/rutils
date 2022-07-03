#ifndef __RUTILS_COMPAT_DEFS_H__

#ifndef __UNCONST
#define	__UNCONST(a)	((void *)(unsigned long)(const void *)(a))
#endif

#ifndef IPPORT_ANONMAX
#define	IPPORT_ANONMAX	65535
#endif

#ifndef INFTIM
#define	INFTIM		(-1)
#endif

#ifndef __pid_t
#define	__pid_t		pid_t
#endif

#endif /* !__RUTILS_COMPAT_DEFS_H__ */
