/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 14:40:35 by anorman           #+#    #+#             */
/*   Updated: 2019/06/19 15:25:50 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	st_intlen(int n, unsigned int base)
{
	int	res;

	res = 1;
	if (n < 0)
	{
		res++;
		n = n * -1;
	}
	while ((n = n / base) > 0)
		res++;
	return (res);
}

char		*ft_itoa_base(int n, unsigned int base)
{
	char	*ans;
	int		cnt;
	int		neg;

	cnt = st_intlen(n, base);
	neg = 1;
	if (!base || base > 36 || !(ans = (char *)malloc((cnt + 1) * sizeof(char))))
		return (NULL);
	ans[cnt--] = '\0';
	if (n < 0)
	{
		ans[0] = '-';
		neg = -1;
	}
	while (cnt > -1 && ans[cnt] != '-')
	{
		if ((n % (int)base) * neg < 10)
			ans[cnt--] = ((n % (int)base) * neg) + '0';
		else
			ans[cnt--] = ((n % (int)base) * neg) - 10 + 'A';
		n = (n / (int)base);
	}
	return (ans);
}

/*
** ((n % 10) * neg) + '0' works despite google disagreeing with the maths
** that is google thinks -4 % 10 == 6 but its -4 % 10 == -4 here.
**
** An itoa_base that can work with any negative base :D
** I cut off the max base at 36 (ie 10 + all letters)
*/
