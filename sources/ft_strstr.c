/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:37:30 by anorman           #+#    #+#             */
/*   Updated: 2019/05/21 09:45:05 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		hay;
	int		nee;
	char	*found;

	hay = 0;
	while (haystack[hay] != '\0')
	{
		nee = 0;
		found = &haystack[hay];
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
