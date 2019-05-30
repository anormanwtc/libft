/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:37:30 by anorman           #+#    #+#             */
/*   Updated: 2019/05/30 17:11:12 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	cnt;
	size_t	nee;
	char	*found;

	cnt = 0;
	nee = 0;
	if (!(needle[0]) || needle == hay)
		return ((char *)hay);
	while (hay[cnt] != '\0' && cnt < len)
	{
		found = (char *)&hay[cnt];
		while (hay[cnt] == needle[nee] && cnt < len && hay[cnt])
		{
			cnt++;
			nee++;
		}
		if (needle[nee] == '\0' && cnt <= len)
			return (found);
		nee = 0;
		if (hay[cnt] != needle[nee])
			cnt++;
	}
	return (NULL);
}
