/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:37:30 by anorman           #+#    #+#             */
/*   Updated: 2019/05/24 14:03:49 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hay;
	size_t	nee;
	char	*found;

	hay = 0;
	nee = 0;
	while (haystack[hay] != '\0' && hay < len)
	{
		found = (char *)&haystack[hay];
		while (haystack[hay] == needle[nee] && hay < len)
		{
			hay++;
			nee++;
		}
		if (needle[nee] == '\0' && hay <= len)
			return (found);
		nee = 0;
		if (haystack[hay] != needle[nee])
			hay++;
	}
	return (NULL);
}
