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
/*   Created/Updated: 2021/04/23 03:20:57  /  2021/04/23 03:21:01 @cclarice   */
/*                                                                            */
/* ************************************************************************** */

#include "mprintf.h"

// My Format and print data function
//
// A library that contains mprintf,
// a function that will mimic the real printf
// Conversions: %c %s %p %d %i %u %x %X !%n! !%f! !%g! !%e!
// Flags: - + 0 . *

void	mp_fill_struct(t_ptf *s, int *p)
{
	s->ret = 0;
	s->plus = MINT;
	s->minus = MINT;
	s->lenght = MINT;
	s->width = MINT;
	s->zero = MINT;
}

void	mp_sreset(t_ptf *s)
{
	s->plus = MINT;
	s->minus = MINT;
	s->lenght = MINT;
	s->width = MINT;
	s->zero = MINT;
}

int	mprintf(const char *format, ...)
{
	t_ptf	s;
	int		p;

	va_start(s.vargs, format);
	mp_fill_struct(&s, &p);
	while (format[p])
	{
		if (format[p] == '%')
		{
			mp_parser(format, &p, &s);
			mp_writer(format, &p, &s);
			mp_sreset(&s);
		}
		else
			mp_putchar(&s, format[p]);
		p++;
	}
	va_end(s.vargs);
	return (s.ret);
}
