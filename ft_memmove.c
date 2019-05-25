/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:32:34 by anorman           #+#    #+#             */
/*   Updated: 2019/05/25 14:26:29 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		cnt;
	char		*unvoiddst;
	char		*charsrc;
	char		*unvoidsrc;

	cnt = 0;
	unvoiddst = dst;
	unvoidsrc = (char *)src;
	charsrc = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (cnt < len)
	{
		charsrc[cnt] = unvoidsrc[cnt];
		cnt++;
	}
	cnt = 0;
	while (cnt < len)
	{
		unvoiddst[cnt] = charsrc[cnt];
		cnt++;
	}
	free(charsrc);
	return (dst);
}

/*
** My online tests of og memmove showed no safety features.
** My understanding is the only difference between this and memcpy is
** speed vs safety: memcpy has restrict and so doesnt check for changes
** ie memmove can work with overlapping strings but is slightly slower.
*/
