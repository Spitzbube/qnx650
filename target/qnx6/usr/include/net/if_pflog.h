/*	$NetBSD: if_pflog.h,v 1.4 2005/12/11 12:24:25 christos Exp $	*/
/* $OpenBSD: if_pflog.h,v 1.11 2004/05/19 17:50:51 dhartmei Exp $ */
/*
 * Copyright 2001 Niels Provos <provos@citi.umich.edu>
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
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _NET_IF_PFLOG_H_INCLUDED
#define _NET_IF_PFLOG_H_INCLUDED

#ifndef _NET_IF_H_INCLUDED
#include <net/if.h>
#endif

struct pflog_softc {
	struct ifnet	sc_if;  /* the interface */
};

#define PFLOG_RULESET_NAME_SIZE	16

struct pfloghdr {
	uint8_t		length;
	sa_family_t	af;
	uint8_t		action;
	uint8_t		reason;
	char		ifname[IFNAMSIZ];
	char		ruleset[PFLOG_RULESET_NAME_SIZE];
	uint32_t	rulenr;
	uint32_t	subrulenr;
	uint8_t		dir;
	uint8_t		pad[3];
};

#define PFLOG_HDRLEN		sizeof(struct pfloghdr)
/* minus pad, also used as a signature */
#define PFLOG_REAL_HDRLEN	offsetof(struct pfloghdr, pad)

/* XXX remove later when old format logs are no longer needed */
struct old_pfloghdr {
	uint32_t af;
	char ifname[IFNAMSIZ];
	short rnr;
	u_short reason;
	u_short action;
	u_short dir;
};
#define OLD_PFLOG_HDRLEN	sizeof(struct old_pfloghdr)

#ifdef _KERNEL

#if NPFLOG > 0
#define	PFLOG_PACKET(i,x,a,b,c,d,e,f,g) pflog_packet(i,a,b,c,d,e,f,g)
#else
#define	PFLOG_PACKET(i,x,a,b,c,d,e,f,g)	((void)0)
#endif /* NPFLOG > 0 */
#endif /* _KERNEL */
#endif /* _NET_IF_PFLOG_H_INCLUDED */

__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/SP1/lib/io-pkt/sys/dist/pf/net/if_pflog.h $ $Rev: 233581 $" )
