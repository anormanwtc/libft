/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:02:25 by anorman           #+#    #+#             */
/*   Updated: 2019/05/25 16:03:07 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cnt;
	size_t	dstlen;

	cnt = 0;
	dstlen = ft_strlen(dst);
	while ((dstlen + cnt) < (dstsize - 1))
	{
		dst[dstlen + cnt] = src[cnt];
		cnt++;
	}
	if ((dstsize + cnt) < dstsize)
		dst[dstsize + cnt] = '\0';
	return (ft_strlen(src) + dstlen);
}
