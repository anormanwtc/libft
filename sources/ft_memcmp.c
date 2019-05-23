/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:23:43 by anorman           #+#    #+#             */
/*   Updated: 2019/05/21 10:45:20 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cnt;
	int		res;

	cnt = 0;
	res = 0;
	while (cnt < n)
	{
		res = res + (int)s1[cnt] - (int)s2[cnt];
		cnt++;
	}
	return (res);
}
