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

static int	st_intlen(int n)
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
		end--;
		start++;
	}
}

char		*ft_itoa(int n)
{
	char	*ans;
	int		cnt;

	cnt = 0;
	if (!(ans = (char *)malloc((st_intlen(n) + 1) * sizeof(char))))
		return (NULL);
	ans[st_intlen(n)] = '\0';
	if (n == -2147483648)
	{
		ft_strcpy(ans, "-2147483648");
		return (ans);
	}
	if (n < 0)
	{
		ans[st_intlen(n) - 1] = '-';
		n *= -1;
	}
	while ((n / 10) > 0)
	{
		ans[cnt++] = (n % 10) + 48;
		n = (n / 10);
	}
	ans[cnt] = (n % 10) + 48;
	st_strrev(ans);
	return (ans);
}
