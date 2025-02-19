/*
 * $QNXLicenseC:
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



/*
 *  sh/INTC.h    SH INTC (clock circuit & watchdog timer) definitions
 *

 */


/* ICR */
#define	SH_INTC_ICR_NMIL		_ONEBIT16L(15)
#define	SH_INTC_ICR_MAI			_ONEBIT16L(14)
#define	SH_INTC_ICR_NMIB		_ONEBIT16L(9)
#define	SH_INTC_ICR_NMIE		_ONEBIT16L(8)
#define	SH_INTC_ICR_IRLM		_ONEBIT16L(7)


#ifdef __QNXNTO__
#include <sys/srcversion.h>
__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/SP1/services/system/public/sh/intc.h $ $Rev: 258679 $" )
#endif
