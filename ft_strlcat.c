/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:02:25 by anorman           #+#    #+#             */
/*   Updated: 2019/05/23 13:34:23 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	cntdst;
	size_t	cntsrc;

	cntdst = ft_strlen(dst);
	cntsrc = 0;
	while (cntdst < (dstsize - 1))
	{
		dst[cntdst] = src[cntsrc];
		cntdst++;
		cntsrc++;
	}
	if (cntdst < dstsize)
		dst[cntdst] = '\0';
	return (cntdst);
}
