/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:21:09 by anorman           #+#    #+#             */
/*   Updated: 2019/05/26 16:55:31 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	cnt;

	if (!(substr = (char *)(malloc(len * (sizeof(char) + 1)))))
		return (NULL);
	cnt = 0;
	while (cnt < len)
	{
		substr[cnt] = s[cnt + (size_t)start];
		cnt++;
	}
	substr[cnt] = '\0';
	return (substr);
}

/*
** if start and len arent valid -> behaviour undefined
** as such I neglected to check for the end of input s
*/
