/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:36:58 by anorman           #+#    #+#             */
/*   Updated: 2019/05/21 10:43:46 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	cnt;

	count = 0;
	while (src[cnt] != '\0' && cnt < len)
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	while (cnt < len)
	{
		dst[cnt] = '\0';
		cnt++;
	}
	return (dst);
}
