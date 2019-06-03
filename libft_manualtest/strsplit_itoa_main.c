/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit_itoa_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:18:31 by anorman           #+#    #+#             */
/*   Updated: 2019/06/03 15:22:43 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		num = 102220330;
	char	*res;
	char	**split;

	res = ft_itoa(num);
	printf("%s\n", res);
	split = ft_strsplit(res, '0');
	while (*split)
	{
		printf("%s\n", *split);
		split++;
	}
	return (0);
}
