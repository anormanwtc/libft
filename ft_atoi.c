/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:33:20 by anorman           #+#    #+#             */
/*   Updated: 2019/05/25 16:11:16 by anorman          ###   ########.fr       */
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

int		ft_atoi(const char *str)
{
	int		res;
	int		cnt;
	int		neg;

	cnt = 0;
	res = 0;
	neg = 1;
	while (st_isblank(str[cnt]))
		cnt++;
	if (str[cnt] == '-' || str[cnt] == '+')
	{
		if (str[cnt] == '-')
			neg = -1;
		cnt++;
	}
	while (str[cnt] > 47 && str[cnt] < 58)
	{
		res = res * 10 + neg * (str[cnt] - 48);
		cnt++;
	}
	return (res);
}

/*
** It is my understanding that atoi original can overflow so this can too
*/
