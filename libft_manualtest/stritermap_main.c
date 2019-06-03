/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stritermap_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:38:07 by anorman           #+#    #+#             */
/*   Updated: 2019/06/03 12:50:53 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	st_doesthing(char *str)
{
	*str = 'y';
}

static void	st_doesthingi(unsigned int ind, char *str)
{
		*str = ind + 48;
}

static char	st_mapthing(char c)
{
	c = 'y';
	return (c);
}

static char	st_mapthingi(unsigned int ind, char c)
{
		c = ind + 48;
		return (c);
}

int			main(void)
{
	char	*str;
	char	*map;
	size_t	size = 15;
	size_t	cnt;

	str = ft_strnew(size);
	cnt = 0;
	while (cnt < size)
		str[cnt++] = 'o';
	ft_striter(str, &st_doesthing);
	printf("%s\n", str);
	ft_striteri(str, &st_doesthingi);
	printf("%s\n", str);
	map = ft_strmap(str, &st_mapthing);
	printf("%s\n", map);
	free(map);
	map = ft_strmapi(str, &st_mapthingi);
	printf("%s", map);
	free(map);
	return (0);
}
