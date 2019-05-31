/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:36:35 by anorman           #+#    #+#             */
/*   Updated: 2019/05/26 13:43:48 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;

	len = ft_strlen(s1);
	if (!(dup = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
	{
		dup[len] = s1[len];
		len++;
	}
	dup[len] = '\0';
	return (dup);
}
