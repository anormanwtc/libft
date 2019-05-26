/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:39:49 by anorman           #+#    #+#             */
/*   Updated: 2019/05/26 13:43:27 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	cnt;
	void	*mem;

	cnt = 0;
	if (!(mem = malloc(size)))
		return (NULL);
	while (cnt < size)
		mem[cnt++] = 0;
}
