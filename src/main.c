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
/*   main.c                                   cclarice@student.21-school.ru   */
/*                                                                            */
/*   Created/Updated: 2021/04/23 03:17:36  /  2021/04/23 15:34:57 @cclarice   */
/*                                                                            */
/* ************************************************************************** */

#include "mprintf.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	const char*	frm = "%c\n";
	const char	chr = 'c';
	const char*	str = "String";
	const int	dgt = 126;
	const uint	unt = 162;
	const uint	hex = 0x14142;
	const uint*	ptr = (uint*)0x12414;

	printf(" [%d]\n",  printf(frm, chr));
	printf(" [%d]\n", mprintf(frm, chr));

//	while ()
//	if (argc == 2)
//	{
//		printf("[Test]\n");
//		printf(" [%d]\n", (or = printf((const char *)argv[1])));
//		printf(" [%d]\n", (m = mprintf((const char *)argv[1])));
//		if (or != m)
//			printf("\033[31m[ERROR]\n");
//		else
//			printf("\033[33m[GOOOD]\n");
//	}
	return (0);
}