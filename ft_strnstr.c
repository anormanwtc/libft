/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:37:30 by anorman           #+#    #+#             */
/*   Updated: 2019/05/23 13:33:20 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hay;
	size_t	nee;
	char	*found;

	hay = 0;
	while (haystack[hay] != '\0' && hay < len)
	{
		nee = 0;
		found = (char *)&haystack[hay];
		while (haystack[hay] == needle[nee])
		{
			hay++;
			nee++;
		}
		if (needle[nee] == '\0')
			return (found);
		if (haystack[hay] != needle[nee])
			hay++;
	}
	return (NULL);
}
