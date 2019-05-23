/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:23:43 by anorman           #+#    #+#             */
/*   Updated: 2019/05/23 14:06:03 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cnt;
	int		*uchars1;
	int		*uchars2;

	cnt = 0;
	uchars1 = (int *)s1;
	uchars2 = (int *)s2;
	while (cnt < n && uchars1[cnt] == uchars2[cnt])
	{
		cnt++;
	}
	return (uchars1[cnt] - uchars2[cnt]);
}
