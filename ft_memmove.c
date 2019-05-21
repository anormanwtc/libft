/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:32:34 by anorman           #+#    #+#             */
/*   Updated: 2019/05/21 10:00:52 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	size_t	cnt;

	cnt = 0;
	while (cnt < len)
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	return (dst);
}

/*
** My online tests of og memmove showed no safety features.
** My understanding is the only difference between this and memcpy is
** speed vs safety: memcpy has restrict and so doesnt check for changes
** ie memmove can work with overlapping strings but is slightly slower.
*/
