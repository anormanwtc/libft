/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:33:49 by anorman           #+#    #+#             */
/*   Updated: 2019/05/21 10:45:42 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (cnt < n && src[cnt] != (unsigned char)c)
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	if (src[cnt] == (unsigned char)c)
	{
		dst[cnt] = src[cnt];
		cnt++;
		return (&dst[cnt]);
	}
	else
		return (NULL);
}
