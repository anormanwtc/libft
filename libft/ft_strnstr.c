/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:37:30 by anorman           #+#    #+#             */
/*   Updated: 2019/05/30 17:30:55 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	const char	*end;
	size_t		nee;
	char		*found;

	end = &hay[len];
	nee = 0;
	if (!(needle[0]) || needle == hay)
		return ((char *)hay);
	while (*hay != '\0' && hay < end)
	{
		found = (char *)hay;
		while (*hay == needle[nee] && hay < end && *hay)
		{
			hay++;
			nee++;
		}
		if (needle[nee] == '\0' && hay < end)
			return (found);
		nee = 0;
		hay = found + 1;
		if (*hay != needle[nee])
			hay++;
	}
	return (NULL);
}
