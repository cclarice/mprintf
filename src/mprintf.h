/* ************************************************************************** */
/*                                                                            */
/*      .::::::.  .::::::.  ::: .:::::::.  ::::::::   .:. .::::::.  .:::::::. */
/*     :+:   :+: :+:   :+: :+: :+:   :+:  :+:   ':+: '+' :+:   :+: :+:    :+: */
/*    +:+       +:+       +:+ +:+   +:+  +:+    +:+     +:+       +:+    +:+  */
/*   +#+       +:+       +#+ +:+   +#+  +:+   .+#+ .:. +#+       +#+:+:+#+:   */
/*  +#+       +#+       +#+  '+#+#+#+# #+#+#+#+   +#+ +#+       +#+           */
/* #+#   #+# #+#   #+# #+#            #+#   '#+# #+# #+#   #+# #+#    #+#     */
/* '######'  '######' ############## ###    ### ###  '######'  '#######'      */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   mprintf.h                                cclarice@student.21-school.ru   */
/*                                                                            */
/*   Created/Updated: 2021/04/17 20:22:36  /  2021/04/17 21:49:01 @cclarice   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MPRINTF_H
# define MPRINTF_H
# include <unistd.h>
# include <stdarg.h>
# define MINT -2147483648

// <unistd.h> write
// <stdarg.h> va_start, va_arg, va_copy, va_end

// My Format and print data function
//
// A library that contains mprintf,
// a function that will mimic the real printf
// Conversions: %c %s %p %d %i %u %x %X !%n! !%f! !%g! !%e!
// Flags: - + 0 . *

typedef struct s_printf
{
	char	**format;
	va_list	vargs;
	int		ret;
	int		lenght;
	int		minus;
	int		plus;
	int		width;
	int		zero;
}			t_printf;

int	mprintf(const char *format, ...);

#endif
