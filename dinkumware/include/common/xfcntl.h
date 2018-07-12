/*****************************************************************
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
*****************************************************************/
/* xfcntl.h Library internal version of Open Group header */
#ifndef _XFCNTL
#define _XFCNTL
#include <sys/types.h>	/* for mode_t, off_t, pid_t */

#ifndef _YVALS
 #include <yvals.h>
#endif /* _YVALS */
_C_STD_BEGIN

		/* fcntl command codes */
#define F_DUPFD		0x0		/* duplicate file descriptor */
#define F_GETFD		0x1		/* get file descriptor flags */
#define F_SETFD		0x2		/* set file descriptor flags */
#define F_GETFL		0x3		/* get file status flags and access modes */
#define F_SETFL		0x4		/* set file status flags */
#define F_GETLK		0x5		/* get record locks */
#define F_SETLK		0x6		/* set record locks */
#define F_SETLKW	0x7		/* set record locks, wait */

		/* fcntl file descriptor flags */
#define FD_CLOEXEC	0x1		/* close on exec */

		/* fcntl record lock codes */
#define F_RDLCK		0x0		/* shared or read lock */
#define F_WRLCK		0x1		/* exclusive or write lock */
#define F_UNLCK		0x2		/* unlock */

		/* open flags */
#define O_CREAT		(0x1 << 6)	/* create file if none exists */
#define O_EXCL		(0x2 << 6)	/* exclusive use */
#define O_NOCTTY	(0x4 << 6)	/* don't make controlling tty */
#define O_TRUNC		(0x8 << 6)	/* truncate file */

		/* fcntl and open file status fiags */
#define O_APPEND	(0x2 << 9)	/* seek to end before each write */
#define O_NONBLOCK	(0x4 << 9)	/* non-blocking */
#define O_DSYNC		(0x8 << 9)	/* sync writes for data integrity */
#define O_RSYNC		(0x8 << 9)	/* sync reads */
#define O_SYNC		(0x8 << 9)	/* sync writes for file integrity */

#define O_RDONLY	0x0		/* open for read only */
#define O_WRONLY	0x1     	/* open for write only */
#define O_RDWR		0x2		/* open for read/write */

#define O_ACCMODE	0x3		/* mask for file access modes */

_C_STD_END
#endif /* _XFCNTL */

/*
 * Copyright (c) 2006 by P.J. Plauger.  ALL RIGHTS RESERVED. 
 * Consult your license regarding permissions and restrictions.
 */

