/* ************************************************************************** */
/*                                                                            */
/*       ::::::    ::::::   :::  ::::::::  ::::::::   :::  ::::::    :::::::  */
/*     :+:   :+: :+:   :+: :+: :+:   :+:  :+:    :+: :+: :+:   :+: :+:    :+: */
/*    +:+       +:+       +:+ +:+   +:+  +:+    +:+     +:+       +:+    +:+  */
/*   +#+       +:+       +#+ +:+   +#+  +:+    +#+ +:+ +#+       +#+:+:+#+:   */
/*  +#+       +#+       +#+   +#+#+#+# #+#+#+#+   +#+ +#+       +#+           */
/* #+#   #+# #+#   #+# #+#            #+#    #+# #+# #+#   #+# #+#    #+#     */
/*  ######    ######  ############## ###    ### ###   ######    #######       */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   limits.c                                 cclarice@student.21-school.ru   */
/*                                                                            */
/*   Created/Updated: 2021/04/19 21:32:56  /  2021/04/19 21:50:04 @cclarice   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <wchar.h>

#include <limits.h>

#include <float.h> 
#include <math.h>

int main(void)
{
	printf("PTRDIFF_MIN     = %td\n", PTRDIFF_MIN);
	printf("PTRDIFF_MAX     = %+td\n", PTRDIFF_MAX);
	printf("SIZE_MAX        = %zu\n", SIZE_MAX);
	printf("SIG_ATOMIC_MIN  = %+jd\n",(intmax_t)SIG_ATOMIC_MIN);
	printf("SIG_ATOMIC_MAX  = %+jd\n",(intmax_t)SIG_ATOMIC_MAX);
	printf("WCHAR_MIN       = %+jd\n",(intmax_t)WCHAR_MIN);
	printf("WCHAR_MAX       = %+jd\n",(intmax_t)WCHAR_MAX);
	printf("WINT_MIN        = %jd\n", (intmax_t)WINT_MIN);
	printf("WINT_MAX        = %jd\n", (intmax_t)WINT_MAX);
	printf("\n");

	printf("CHAR_BIT        = %d\n", CHAR_BIT);
	printf("MB_LEN_MAX      = %d\n", MB_LEN_MAX);
	printf("\n");
 
	printf("CHAR_MIN        = %+d\n", CHAR_MIN);
	printf("CHAR_MAX        = %+d\n", CHAR_MAX);
	printf("SCHAR_MIN       = %+d\n", SCHAR_MIN);
	printf("SCHAR_MAX       = %+d\n", SCHAR_MAX);
	printf("UCHAR_MAX       = %u\n",  UCHAR_MAX);
	printf("\n");
 
	printf("SHRT_MIN        = %+d\n", SHRT_MIN);
	printf("SHRT_MAX        = %+d\n", SHRT_MAX);
	printf("USHRT_MAX       = %u\n",  USHRT_MAX);
	printf("\n");
 
	printf("INT_MIN         = %+d\n", INT_MIN);
	printf("INT_MAX         = %+d\n", INT_MAX);
	printf("UINT_MAX        = %u\n",  UINT_MAX);
	printf("\n");
 
	printf("LONG_MIN        = %+ld\n", LONG_MIN);
	printf("LONG_MAX        = %+ld\n", LONG_MAX);
	printf("ULONG_MAX       = %lu\n",  ULONG_MAX);
	printf("\n");
 
	printf("LLONG_MIN       = %+lld\n", LLONG_MIN);
	printf("LLONG_MAX       = %+lld\n", LLONG_MAX);
	printf("ULLONG_MAX      = %llu\n",  ULLONG_MAX);
	printf("\n");
	printf("FLT_ROUNDS      = %d\n", FLT_ROUNDS);
	printf("FLT_EVAL_METHOD = %d\n", FLT_EVAL_METHOD);
	printf("FLT_RADIX       = %d\n", FLT_RADIX);
	printf("DECIMAL_DIG     = %d\n", DECIMAL_DIG);
	printf("\n");
	printf("FLT_MANT_DIG    = %d\n", FLT_MANT_DIG);
	printf("FLT_DIG         = %d\n", FLT_DIG);
	printf("FLT_MIN_EXP     = %d\n", FLT_MIN_EXP);
	printf("FLT_MIN_10_EXP  = %d\n", FLT_MIN_10_EXP);
	printf("FLT_MAX_EXP     = %d\n", FLT_MAX_EXP);
	printf("FLT_MAX_10_EXP  = %d\n", FLT_MAX_10_EXP);
	printf("FLT_MAX         = %e\n", FLT_MAX);
	printf("FLT_EPSILON     = %e\n", FLT_EPSILON);
	printf("FLT_MIN         = %e\n", FLT_MIN);
	printf("\n");
	printf("DBL_MANT_DIG    = %d\n", DBL_MANT_DIG);
	printf("DBL_DIG         = %d\n", DBL_DIG);
	printf("DBL_MIN_EXP     = %d\n", DBL_MIN_EXP);
	printf("DBL_MIN_10_EXP  = %d\n", DBL_MIN_10_EXP);
	printf("DBL_MAX_EXP     = %d\n", DBL_MAX_EXP);
	printf("DBL_MAX_10_EXP  = %d\n", DBL_MAX_10_EXP);
	printf("DBL_MAX         = %e\n", DBL_MAX);
	printf("DBL_EPSILON     = %e\n", DBL_EPSILON);
	printf("DBL_MIN         = %e\n", DBL_MIN);
	printf("\n");
	printf("LDBL_MANT_DIG   = %d\n", LDBL_MANT_DIG);
	printf("LDBL_DIG        = %d\n", LDBL_DIG);
	printf("LDBL_MIN_EXP    = %d\n", LDBL_MIN_EXP);
	printf("LDBL_MIN_10_EXP = %d\n", LDBL_MIN_10_EXP);
	printf("LDBL_MAX_EXP    = %d\n", LDBL_MAX_EXP);
	printf("LDBL_MAX_10_EXP = %d\n", LDBL_MAX_10_EXP);
	printf("LDBL_MAX        = %Le\n", LDBL_MAX);
	printf("LDBL_EPSILON    = %Le\n", LDBL_EPSILON);
	printf("LDBL_MIN        = %Le\n", LDBL_MIN);
	printf("\n");
}
