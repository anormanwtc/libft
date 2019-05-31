/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:02:14 by anorman           #+#    #+#             */
/*   Updated: 2019/05/23 14:10:36 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cnt;
	unsigned char	*chars;

	cnt = 0;
	chars = (unsigned char *)s;
	while (cnt < n)
	{
		if (chars[cnt] == (unsigned char)c)
			return ((void *)&chars[cnt]);
		cnt++;
	}
	return (NULL);
}
