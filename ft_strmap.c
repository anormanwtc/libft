/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 17:19:17 by anorman           #+#    #+#             */
/*   Updated: 2019/05/25 17:24:03 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*res;
	int		cnt;

	if (!(res = malloc(ft_strlen(s) * (sizeof(char) + 1))))
		return (NULL);
	while (s[cnt])
	{
		res[cnt] = f(s[cnt]);
		cnt++;
	}
	res[cnt] = '\0';
	return (res);
}
