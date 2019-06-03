/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memaldel_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:14:22 by anorman           #+#    #+#             */
/*   Updated: 2019/06/03 12:20:49 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	size_t	size = 15;
	char	*str = {"Hello"};
	char	*res;
	int		cnt;

	res = (char *)ft_memalloc(size);
	cnt++;
	while (cnt < size)
	{
		if (res[cnt] != 0)
			printf("Not init 0\n");
		cnt++;
	}
	ft_memdel((void **)&res);
	if (res != NULL)
		printf("res not null after delete\n");
	return (0);
}



