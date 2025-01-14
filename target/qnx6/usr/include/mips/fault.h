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



/*-
 *  mips/fault.h   - mips fault info.
 *  

 */

#define FLTCACHERR		(_FIRST_CPU_FAULT+0)	/* cache error */
#define FLTUTLBREFILL	(_FIRST_CPU_FAULT+1)	/* 32-bit TLB refill */
#define FLTXTLBREFILL	(_FIRST_CPU_FAULT+2)	/* 64-bit TLB refill */
#define FLTNOFPU		(_FIRST_CPU_FAULT+3) 	/* No Floating Point Device */
#define FLTWATCH		(_FIRST_CPU_FAULT+4) 	/* Watchpoint */


__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/trunk/services/system/public/mips/fault.h $ $Rev: 219613 $" )
