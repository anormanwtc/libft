/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:33:20 by anorman           #+#    #+#             */
/*   Updated: 2019/05/23 16:58:39 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	int		res;
	int		cnt;
	int		neg;

	cnt = 0;
	res = 0;
	neg = 1;
	while (str[cnt] == ' ' || str[cnt] == '\t' || str[cnt] == '\n')
		cnt++;
	if (str[cnt] == '-')
	{
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
