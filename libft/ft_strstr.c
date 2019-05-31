/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:37:30 by anorman           #+#    #+#             */
/*   Updated: 2019/05/30 17:23:06 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		nee;
	char	*found;

	nee = 0;
	if (!(needle[0]) || needle == haystack)
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		found = (char *)haystack;
		while (*haystack == needle[nee] && *haystack)
		{
			haystack++;
			nee++;
		}
		if (needle[nee] == '\0')
			return (found);
		nee = 0;
		haystack = found + 1;
		if (*haystack != needle[nee] && *haystack != '\0')
			haystack++;
	}
	return (NULL);
}
