/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:33:20 by anorman           #+#    #+#             */
/*   Updated: 2019/06/25 16:50:48 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	st_isblank(char c)
{
	if (c == ' ' || c == '\t' || c == '\v')
		return (8);
	if (c == '\n' || c == '\r' || c == '\f')
		return (3);
	return (0);
}

static int	st_numcmp(const char *str, char *max)
{
	int over;

	over = 0;
	while (*str > 47 && *str < 58 && *max)
	{
		if (*str > *max)
			over = 1;
		str++;
		max++;
	}
	if (*str > 47 && *str < 58)
		return (1);
	if (!*max)
		return (over);
	return (0);
}

/*
** Returns 1 if abs(atoi(str)) will be less or equal intmax
** Returns 0 if abs(atoi(str)) will be greater than intmax
*/

int			ft_atoi(const char *str)
{
	int		res;
	int		neg;

	res = 0;
	neg = 1;
	if (!str)
		return (0);
	while (st_isblank(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	if (neg == 1 && st_numcmp(str, "2147483647"))
		return (0);
	if (neg == -1 && st_numcmp(str, "2147483648"))
		return (-1);
	while (*str > 47 && *str < 58)
	{
		res = res * 10 + neg * (*str - 48);
		str++;
	}
	return (res);
}

/*
** ft_atoi sets all over/underflows as +-1
** for easy identification.
*/
