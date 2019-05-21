/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:33:34 by anorman           #+#    #+#             */
/*   Updated: 2019/05/21 09:33:37 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t cnt;

	cnt = 0;
	while (cnt < n)
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	return (dst);
}
