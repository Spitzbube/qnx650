/*
 * This source code may contain confidential information of QNX Software
 * Systems Ltd.  (QSSL) and its licensors. Any use, reproduction,
 * modification, disclosure, distribution or transfer of this software,
 * or any software which includes or is based upon any of this code, is
 * prohibited unless expressly authorized by QSSL by written agreement. For
 * more information (including whether this source code file has been
 * published) please email licensing@qnx.com.
 */

/* ucl.h -- prototypes for the UCL real-time data compression library

   This file is part of the UCL real-time data compression library.

   Copyright (C) 2000 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 1999 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 1998 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 1997 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 1996 Markus Franz Xaver Johannes Oberhumer

   Markus F.X.J. Oberhumer
   <markus.oberhumer@jk.uni-linz.ac.at>
   http://wildsau.idv.uni-linz.ac.at/mfx/ucl.html
 */


#ifndef __UCL_H
#define __UCL_H

#ifndef __UCLCONF_H
#include <ucl/uclconf.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif


/***********************************************************************
//
************************************************************************/

/* note: to use default values pass -1, i.e. initialize
 * this struct by a memset(x,0xff,sizeof(x)) */
struct ucl_compress_config_t
{
    int bb_endian;
    int bb_size;
    ucl_uint max_offset;
    ucl_uint max_match;
    int s_level;
    int h_level;
    int p_level;
    int c_flags;
    ucl_uint m_size;
};

#define ucl_compress_config_p   ucl_compress_config_t __UCL_MMODEL *


/***********************************************************************
// compressors
************************************************************************/

UCL_EXTERN(int)
ucl_nrv2b_99_compress      ( const ucl_bytep src, ucl_uint src_len,
                                   ucl_bytep dst, ucl_uintp dst_len,
                                   ucl_progress_callback_p cb,
                                   int level,
                             const struct ucl_compress_config_p conf,
                                   ucl_uintp result );

UCL_EXTERN(int)
ucl_nrv2d_99_compress      ( const ucl_bytep src, ucl_uint src_len,
                                   ucl_bytep dst, ucl_uintp dst_len,
                                   ucl_progress_callback_p cb,
                                   int level,
                             const struct ucl_compress_config_p conf,
                                   ucl_uintp result );


/***********************************************************************
// decompressors
************************************************************************/

UCL_EXTERN(int)
ucl_nrv2b_decompress_8          ( const ucl_byte *src, ucl_uint  src_len,
                                        ucl_byte *dst, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2b_decompress_le16       ( const ucl_byte *src, ucl_uint  src_len,
                                        ucl_byte *dst, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2b_decompress_le32       ( const ucl_byte *src, ucl_uint  src_len,
                                        ucl_byte *dst, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2b_decompress_safe_8     ( const ucl_byte *src, ucl_uint  src_len,
                                        ucl_byte *dst, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2b_decompress_safe_le16  ( const ucl_byte *src, ucl_uint  src_len,
                                        ucl_byte *dst, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2b_decompress_safe_le32  ( const ucl_byte *src, ucl_uint  src_len,
                                        ucl_byte *dst, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );

UCL_EXTERN(int)
ucl_nrv2d_decompress_8          ( const ucl_byte *src, ucl_uint  src_len,
                                        ucl_byte *dst, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2d_decompress_le16       ( const ucl_byte *src, ucl_uint  src_len,
                                        ucl_byte *dst, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2d_decompress_le32       ( const ucl_byte *src, ucl_uint  src_len,
                                        ucl_byte *dst, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2d_decompress_safe_8     ( const ucl_byte *src, ucl_uint  src_len,
                                        ucl_byte *dst, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2d_decompress_safe_le16  ( const ucl_byte *src, ucl_uint  src_len,
                                        ucl_byte *dst, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2d_decompress_safe_le32  ( const ucl_byte *src, ucl_uint  src_len,
                                        ucl_byte *dst, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );


/***********************************************************************
// assembler decompressors [TO BE ADDED]
************************************************************************/


/***********************************************************************
// test an overlapping in-place decompression within a buffer
//   - try a virtual decompression from buf[src_off] -> buf[0]
//   - size of buf must be src_off + src_len
//   - no data is actually written
//   - only the bytes at buf[src_off .. src_off+src_len] will get accessed
************************************************************************/

UCL_EXTERN(int)
ucl_nrv2b_test_overlap_8        ( const ucl_byte *buf, ucl_uint src_off,
                                        ucl_uint  src_len, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2b_test_overlap_le16     ( const ucl_byte *buf, ucl_uint src_off,
                                        ucl_uint  src_len, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2b_test_overlap_le32     ( const ucl_byte *buf, ucl_uint src_off,
                                        ucl_uint  src_len, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );

UCL_EXTERN(int)
ucl_nrv2d_test_overlap_8        ( const ucl_byte *buf, ucl_uint src_off,
                                        ucl_uint  src_len, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2d_test_overlap_le16     ( const ucl_byte *buf, ucl_uint src_off,
                                        ucl_uint  src_len, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );
UCL_EXTERN(int)
ucl_nrv2d_test_overlap_le32     ( const ucl_byte *buf, ucl_uint src_off,
                                        ucl_uint  src_len, ucl_uint *dst_len,
                                        ucl_voidp wrkmem );


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* already included */


#ifdef __QNXNTO__
#include <sys/srcversion.h>
__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/trunk/lib/ucl/public/ucl/ucl.h $ $Rev: 219996 $" )
#endif
