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
/*   mprintf.c                                cclarice@student.21-school.ru   */
/*                                                                            */
/*   Created/Updated: 2021/04/17 20:22:13  /  2021/04/19 21:31:24 @cclarice   */
/*                                                                            */
/* ************************************************************************** */

#include "mprintf.h"

// My Format and print data function
//
// A library that contains mprintf,
// a function that will mimic the real printf
// Conversions: %c %s %p %d %i %u %x %X !%n! !%f! !%g! !%e!
// Flags: - + 0 . *

void	mp_fill_struct(t_printf *s, int *p)
{
	s->ret = 0;
	s->lenght = MINT;
	s->minus = MINT;
	s->plus = MINT;
	s->width = MINT;
	s->zero = MINT;
}

int	mprintf(const char *format, ...)
{
	t_printf	s;
	int			p;

	va_start(s.vargs, format);
	mptf_fill_struct(&s, &p);
	while (format[p])
	{
		if (format[p] == '%')
		{
			mp_parser(format, &p, s);
			mp_writer(format, &p, s);
		}
		else
			mp_putchar(&s, format[p]);
		p++;
	}
	return (s.ret);
}
