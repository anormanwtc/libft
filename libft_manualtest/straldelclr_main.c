/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   straldelclr_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:23:54 by anorman           #+#    #+#             */
/*   Updated: 2019/06/03 12:36:55 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	size_t	size = 15;
	size_t	cnt = 0;
	char	*res;

	res = ft_strnew(size);
	while (cnt < size + 1)
	{
		if (res[cnt] != '\0')
			printf("not init \'\\0\'");
		cnt++;
	}
	cnt = 0;
	while (cnt < size)
	{
		res[cnt] = 'o';
		cnt++;
	}
	ft_strclr(res);
	while (cnt < size + 1)
	{
		if (res[cnt] != '\0')
			printf("not clred to \'\\0\' \n");
		cnt++;
	}
	ft_strdel(&res);
	if (res != NULL)
		printf("not null after freed");
	return (0);	
}
