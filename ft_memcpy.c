/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:33:34 by anorman           #+#    #+#             */
/*   Updated: 2019/05/24 16:16:24 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		cnt;
	char		*chardst;
	const char	*charsrc;

	cnt = 0;
	chardst = dst;
	charsrc = src;
	while (cnt < n)
	{
		chardst[cnt] = charsrc[cnt];
		cnt++;
	}
	return (dst);
}
