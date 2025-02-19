/*
 * $QNXtpLicenseC:
 * Copyright 2007, QNX Software Systems. All Rights Reserved.
 * 
 * You must obtain a written license from and pay applicable license fees to QNX 
 * Software Systems before you may reproduce, modify or distribute this software, 
 * or any work that includes all or part of this software.   Free development 
 * licenses are available for evaluation and non-commercial purposes.  For more 
 * information visit http://licensing.qnx.com or email licensing@qnx.com.
 *  
 * This file may contain contributions from others.  Please review this entire 
 * file for other proprietary rights or license notices, as well as the QNX 
 * Development Suite License Guide at http://licensing.qnx.com/license-guide/ 
 * for other information.
 * $
 */

/*	$NetBSD: keysock.h,v 1.13 2005/12/11 12:25:16 christos Exp $	*/
/*	$KAME: keysock.h,v 1.8 2000/03/27 05:11:06 sumikawa Exp $	*/

/*
 * Copyright (C) 1995, 1996, 1997, and 1998 WIDE Project.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the project nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE PROJECT AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE PROJECT OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _NETKEY_KEYSOCK_H_INCLUDED
#define _NETKEY_KEYSOCK_H_INCLUDED

#ifndef _STDINT_H_INCLUDED
#include <stdint.h>
#endif

#ifndef _SOCKET_H_INCLUDED
#include <sys/socket.h>
#endif

/* statistics for pfkey socket */
struct pfkeystat {
	/* userland -> kernel */
	uint64_t out_total;		/* # of total calls */
	uint64_t out_bytes;		/* total bytecount */
	uint64_t out_msgtype[256];	/* message type histogram */
	uint64_t out_invlen;		/* invalid length field */
	uint64_t out_invver;		/* invalid version field */
	uint64_t out_invmsgtype;	/* invalid message type field */
	uint64_t out_tooshort;		/* msg too short */
	uint64_t out_nomem;		/* memory allocation failure */
	uint64_t out_dupext;		/* duplicate extension */
	uint64_t out_invexttype;	/* invalid extension type */
	uint64_t out_invsatype;		/* invalid sa type */
	uint64_t out_invaddr;		/* invalid address extension */
	/* kernel -> userland */
	uint64_t in_total;		/* # of total calls */
	uint64_t in_bytes;		/* total bytecount */
	uint64_t in_msgtype[256];	/* message type histogram */
	uint64_t in_msgtarget[3];	/* one/all/registered */
	uint64_t in_nomem;		/* memory allocation failure */
	/* others */
	uint64_t sockerr;		/* # of socket related errors */
};

#define KEY_SENDUP_ONE		0
#define KEY_SENDUP_ALL		1
#define KEY_SENDUP_REGISTERED	2
#define KEY_SENDUP_CANWAIT	4

#ifdef _KERNEL
struct keycb {
	struct rawcb kp_raw;	/* rawcb */
	int kp_promisc;		/* promiscuous mode */
	int kp_registered;	/* registered socket */
	int (*kp_receive) (struct socket *, struct mbuf **, struct uio *,
		struct mbuf **, struct mbuf **, int *);
	struct mbuf *kp_queue;	/* queued mbufs, linked by m_nextpkt */
};

extern struct pfkeystat pfkeystat;

extern int key_output __P((struct mbuf *, ...));
#if !defined(__NetBSD__) && !defined(__QNXNTO__)
extern int key_usrreq __P((struct socket *,
	int, struct mbuf *, struct mbuf *, struct mbuf *));
#else
extern int key_usrreq __P((struct socket *,
	int, struct mbuf *, struct mbuf *, struct mbuf *, struct lwp *));
#endif

extern int key_sendup_mbuf __P((struct socket *, struct mbuf *, int));
#endif /* _KERNEL */

#endif /* !_NETKEY_KEYSOCK_H_INCLUDED */

__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/SP1/lib/socket/public/netkey/keysock.h $ $Rev: 233581 $" )
