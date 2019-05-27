/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:09:42 by anorman           #+#    #+#             */
/*   Updated: 2019/05/27 13:28:26 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			st_intlen(int n)
{
	int	res;

	res = 1;
	if (n < 0)
	{
		res++;
		n = n * -1;
	}
	while ((n = n / 10) > 0)
		res++;
	return (res);
}

static void	st_strrev(char *ans)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = 0;
	while (ans[end + 1])
		end++;
	while (end > start)
	{
		temp = ans[end];
		ans[end] = ans[start];
		ans[start] = temp;
	}
}

char		*ft_itoa(int n)
{
	char	*ans;
	int		cnt;
	int		neg;

	cnt = 0;
	if (!(ans = (char *)malloc((st_intlen(n) + 1) * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		neg = -1;
		n *= -1;
	}
	while ((n / 10) > 0)
	{
		ans[cnt] = (n % 10) + 48;
		cnt++;
		n = n / 10;
	}
	ans[cnt] = (n % 10) + 48;
	cnt++;
	if (neg == -1)
		ans[cnt++] = '-';
	ans[cnt] = '\0';
	st_strrev(ans);
	return (ans);
}
