/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:32:57 by anorman           #+#    #+#             */
/*   Updated: 2019/05/21 09:34:21 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cnt;
	unsigned char	ch;

	cnt = 0;
	ch = (unsigned char)c;
	while (cnt < len)
	{
		b[cnt] = ch;
		cnt++;
	}
	return (b);
}
