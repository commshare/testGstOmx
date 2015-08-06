
/* autogenerated from gstvideoconvertorc.orc */

#ifndef _GSTVIDEOCONVERTORC_H_
#define _GSTVIDEOCONVERTORC_H_

#include <glib.h>

#ifdef __cplusplus
extern "C" {
#endif



#ifndef _ORC_INTEGER_TYPEDEFS_
#define _ORC_INTEGER_TYPEDEFS_
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <stdint.h>
typedef int8_t orc_int8;
typedef int16_t orc_int16;
typedef int32_t orc_int32;
typedef int64_t orc_int64;
typedef uint8_t orc_uint8;
typedef uint16_t orc_uint16;
typedef uint32_t orc_uint32;
typedef uint64_t orc_uint64;
#define ORC_UINT64_C(x) UINT64_C(x)
#elif defined(_MSC_VER)
typedef signed __int8 orc_int8;
typedef signed __int16 orc_int16;
typedef signed __int32 orc_int32;
typedef signed __int64 orc_int64;
typedef unsigned __int8 orc_uint8;
typedef unsigned __int16 orc_uint16;
typedef unsigned __int32 orc_uint32;
typedef unsigned __int64 orc_uint64;
#define ORC_UINT64_C(x) (x##Ui64)
#define inline __inline
#else
#include <limits.h>
typedef signed char orc_int8;
typedef short orc_int16;
typedef int orc_int32;
typedef unsigned char orc_uint8;
typedef unsigned short orc_uint16;
typedef unsigned int orc_uint32;
#if INT_MAX == LONG_MAX
typedef long long orc_int64;
typedef unsigned long long orc_uint64;
#define ORC_UINT64_C(x) (x##ULL)
#else
typedef long orc_int64;
typedef unsigned long orc_uint64;
#define ORC_UINT64_C(x) (x##UL)
#endif
#endif
typedef union { orc_int16 i; orc_int8 x2[2]; } orc_union16;
typedef union { orc_int32 i; float f; orc_int16 x2[2]; orc_int8 x4[4]; } orc_union32;
typedef union { orc_int64 i; double f; orc_int32 x2[2]; float x2f[2]; orc_int16 x4[4]; } orc_union64;
#endif
#ifndef ORC_RESTRICT
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define ORC_RESTRICT restrict
#elif defined(__GNUC__) && __GNUC__ >= 4
#define ORC_RESTRICT __restrict__
#else
#define ORC_RESTRICT
#endif
#endif

#ifndef ORC_INTERNAL
#if defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590)
#define ORC_INTERNAL __attribute__((visibility("hidden")))
#elif defined(__SUNPRO_C) && (__SUNPRO_C >= 0x550)
#define ORC_INTERNAL __hidden
#elif defined (__GNUC__)
#define ORC_INTERNAL __attribute__((visibility("hidden")))
#else
#define ORC_INTERNAL
#endif
#endif

void video_convert_orc_memcpy_2d (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_I420_UYVY (guint8 * ORC_RESTRICT d1, guint8 * ORC_RESTRICT d2, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, const guint8 * ORC_RESTRICT s3, const guint8 * ORC_RESTRICT s4, int n);
void video_convert_orc_convert_I420_YUY2 (guint8 * ORC_RESTRICT d1, guint8 * ORC_RESTRICT d2, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, const guint8 * ORC_RESTRICT s3, const guint8 * ORC_RESTRICT s4, int n);
void video_convert_orc_convert_I420_AYUV (guint8 * ORC_RESTRICT d1, guint8 * ORC_RESTRICT d2, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, const guint8 * ORC_RESTRICT s3, const guint8 * ORC_RESTRICT s4, int n);
void video_convert_orc_convert_YUY2_I420 (guint8 * ORC_RESTRICT d1, guint8 * ORC_RESTRICT d2, guint8 * ORC_RESTRICT d3, guint8 * ORC_RESTRICT d4, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, int n);
void video_convert_orc_convert_UYVY_YUY2 (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_planar_chroma_420_422 (guint8 * ORC_RESTRICT d1, int d1_stride, guint8 * ORC_RESTRICT d2, int d2_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_planar_chroma_420_444 (guint8 * ORC_RESTRICT d1, int d1_stride, guint8 * ORC_RESTRICT d2, int d2_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_planar_chroma_422_444 (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_planar_chroma_444_422 (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_planar_chroma_444_420 (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, const guint8 * ORC_RESTRICT s2, int s2_stride, int n, int m);
void video_convert_orc_planar_chroma_422_420 (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, const guint8 * ORC_RESTRICT s2, int s2_stride, int n, int m);
void video_convert_orc_convert_YUY2_AYUV (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_UYVY_AYUV (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_YUY2_Y42B (guint8 * ORC_RESTRICT d1, int d1_stride, guint8 * ORC_RESTRICT d2, int d2_stride, guint8 * ORC_RESTRICT d3, int d3_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_UYVY_Y42B (guint8 * ORC_RESTRICT d1, int d1_stride, guint8 * ORC_RESTRICT d2, int d2_stride, guint8 * ORC_RESTRICT d3, int d3_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_YUY2_Y444 (guint8 * ORC_RESTRICT d1, int d1_stride, guint8 * ORC_RESTRICT d2, int d2_stride, guint8 * ORC_RESTRICT d3, int d3_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_UYVY_Y444 (guint8 * ORC_RESTRICT d1, int d1_stride, guint8 * ORC_RESTRICT d2, int d2_stride, guint8 * ORC_RESTRICT d3, int d3_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_UYVY_I420 (guint8 * ORC_RESTRICT d1, guint8 * ORC_RESTRICT d2, guint8 * ORC_RESTRICT d3, guint8 * ORC_RESTRICT d4, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, int n);
void video_convert_orc_convert_AYUV_I420 (guint8 * ORC_RESTRICT d1, int d1_stride, guint8 * ORC_RESTRICT d2, int d2_stride, guint8 * ORC_RESTRICT d3, int d3_stride, guint8 * ORC_RESTRICT d4, int d4_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, const guint8 * ORC_RESTRICT s2, int s2_stride, int n, int m);
void video_convert_orc_convert_AYUV_YUY2 (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_AYUV_UYVY (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_AYUV_Y42B (guint8 * ORC_RESTRICT d1, int d1_stride, guint8 * ORC_RESTRICT d2, int d2_stride, guint8 * ORC_RESTRICT d3, int d3_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_AYUV_Y444 (guint8 * ORC_RESTRICT d1, int d1_stride, guint8 * ORC_RESTRICT d2, int d2_stride, guint8 * ORC_RESTRICT d3, int d3_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_Y42B_YUY2 (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, const guint8 * ORC_RESTRICT s2, int s2_stride, const guint8 * ORC_RESTRICT s3, int s3_stride, int n, int m);
void video_convert_orc_convert_Y42B_UYVY (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, const guint8 * ORC_RESTRICT s2, int s2_stride, const guint8 * ORC_RESTRICT s3, int s3_stride, int n, int m);
void video_convert_orc_convert_Y42B_AYUV (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, const guint8 * ORC_RESTRICT s2, int s2_stride, const guint8 * ORC_RESTRICT s3, int s3_stride, int n, int m);
void video_convert_orc_convert_Y444_YUY2 (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, const guint8 * ORC_RESTRICT s2, int s2_stride, const guint8 * ORC_RESTRICT s3, int s3_stride, int n, int m);
void video_convert_orc_convert_Y444_UYVY (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, const guint8 * ORC_RESTRICT s2, int s2_stride, const guint8 * ORC_RESTRICT s3, int s3_stride, int n, int m);
void video_convert_orc_convert_Y444_AYUV (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, const guint8 * ORC_RESTRICT s2, int s2_stride, const guint8 * ORC_RESTRICT s3, int s3_stride, int n, int m);
void video_convert_orc_convert_AYUV_ARGB (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_AYUV_BGRA (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_AYUV_ABGR (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_AYUV_RGBA (guint8 * ORC_RESTRICT d1, int d1_stride, const guint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void video_convert_orc_convert_I420_BGRA (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, const guint8 * ORC_RESTRICT s3, int n);
void video_convert_orc_getline_I420 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, const guint8 * ORC_RESTRICT s3, int n);
void video_convert_orc_getline_YUV9 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, const guint8 * ORC_RESTRICT s3, int n);
void video_convert_orc_getline_YUY2 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_getline_UYVY (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_getline_YVYU (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_getline_Y42B (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, const guint8 * ORC_RESTRICT s3, int n);
void video_convert_orc_getline_Y444 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, const guint8 * ORC_RESTRICT s3, int n);
void video_convert_orc_getline_Y800 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_getline_Y16 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_getline_BGRA (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_getline_ABGR (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_getline_RGBA (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_getline_NV12 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, int n);
void video_convert_orc_getline_NV21 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, int n);
void video_convert_orc_getline_A420 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, const guint8 * ORC_RESTRICT s3, const guint8 * ORC_RESTRICT s4, int n);
void video_convert_orc_putline_I420 (guint8 * ORC_RESTRICT d1, guint8 * ORC_RESTRICT d2, guint8 * ORC_RESTRICT d3, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_putline_YUY2 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_putline_YVYU (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_putline_UYVY (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_putline_Y42B (guint8 * ORC_RESTRICT d1, guint8 * ORC_RESTRICT d2, guint8 * ORC_RESTRICT d3, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_putline_Y444 (guint8 * ORC_RESTRICT d1, guint8 * ORC_RESTRICT d2, guint8 * ORC_RESTRICT d3, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_putline_Y800 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_putline_Y16 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_putline_BGRA (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_putline_ABGR (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_putline_RGBA (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_putline_NV12 (guint8 * ORC_RESTRICT d1, guint8 * ORC_RESTRICT d2, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_putline_NV21 (guint8 * ORC_RESTRICT d1, guint8 * ORC_RESTRICT d2, const guint8 * ORC_RESTRICT s1, int n);
void video_convert_orc_putline_A420 (guint8 * ORC_RESTRICT d1, guint8 * ORC_RESTRICT d2, guint8 * ORC_RESTRICT d3, guint8 * ORC_RESTRICT d4, const guint8 * ORC_RESTRICT s1, int n);

#ifdef __cplusplus
}
#endif

#endif

