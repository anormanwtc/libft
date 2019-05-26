/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:37:55 by anorman           #+#    #+#             */
/*   Updated: 2019/05/26 13:42:20 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	cnt;
	size_t	cnt2;

	cnt = ft_strlen(s1) + ft_strlen(s2);
	if (!(res = (char *)malloc(cnt * (sizeof(char) + 1))))
		return (NULL);
	cnt = 0;
	while (s1[cnt])
	{
		res[cnt] = s1[cnt];
		cnt++;
	}
	cnt2 = 0;
	while (s2[cnt])
	{
		res[cnt + cnt2] = s2[cnt + cnt2];
		cnt2++;
	}
	res[cnt + cnt2] = '\0';
	return (res);
}
