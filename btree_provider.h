/*
 * Generated by dtrace(1M).
 */

#ifndef	_BTREE_PROVIDER_H
#define	_BTREE_PROVIDER_H

#include <unistd.h>

#ifdef	__cplusplus
extern "C" {
#endif

#if _DTRACE_VERSION

#define	BTREE_ADD_BEGIN(arg0, arg1) \
	__dtrace_btree___add_begin(arg0, arg1)
#ifndef	__sparc
#define	BTREE_ADD_BEGIN_ENABLED() \
	__dtraceenabled_btree___add_begin()
#else
#define	BTREE_ADD_BEGIN_ENABLED() \
	__dtraceenabled_btree___add_begin(0)
#endif
#define	BTREE_ADD_END(arg0) \
	__dtrace_btree___add_end(arg0)
#ifndef	__sparc
#define	BTREE_ADD_END_ENABLED() \
	__dtraceenabled_btree___add_end()
#else
#define	BTREE_ADD_END_ENABLED() \
	__dtraceenabled_btree___add_end(0)
#endif


extern void __dtrace_btree___add_begin(void *, void *);
#ifndef	__sparc
extern int __dtraceenabled_btree___add_begin(void);
#else
extern int __dtraceenabled_btree___add_begin(long);
#endif
extern void __dtrace_btree___add_end(int);
#ifndef	__sparc
extern int __dtraceenabled_btree___add_end(void);
#else
extern int __dtraceenabled_btree___add_end(long);
#endif

#else

#define	BTREE_ADD_BEGIN(arg0, arg1)
#define	BTREE_ADD_BEGIN_ENABLED() (0)
#define	BTREE_ADD_END(arg0)
#define	BTREE_ADD_END_ENABLED() (0)

#endif


#ifdef	__cplusplus
}
#endif

#endif	/* _BTREE_PROVIDER_H */