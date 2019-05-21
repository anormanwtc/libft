/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:02:14 by anorman           #+#    #+#             */
/*   Updated: 2019/05/21 10:07:00 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (cnt < n)
	{
		if (s[cnt] == (unsigned char)c)
			return (&s[cnt]);
		cnt++;
	}
	return (NULL);
}
