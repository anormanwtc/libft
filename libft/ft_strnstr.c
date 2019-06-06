/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:37:30 by anorman           #+#    #+#             */
/*   Updated: 2019/06/06 12:56:38 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	const char	*end;
	size_t		nee;
	char		*found;

	end = &hay[len - 1];
	nee = 0;
	if (!(needle[0]) || needle == hay)
		return ((char *)hay);
	while (*hay && hay <= end)
	{
		found = (char *)hay;
		while (*hay == needle[nee] && hay <= end && *hay)
		{
			hay++;
			nee++;
		}
		if (needle[nee] == '\0')
			return (found);
		nee = 0;
		hay = found + 1;
		if (*hay && *hay != needle[nee] && hay <= end)
			hay++;
	}
	return (NULL);
}
