/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:32:39 by anorman           #+#    #+#             */
/*   Updated: 2019/06/02 13:55:00 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*test;
	char	*compare;
	char	*input = "Helloworls";
	char	*res;
	int		len = 8;
	int		alloc = 10;
	char	c = 'l';
	
	test = ft_memalloc(alloc);
	compare = ft_memalloc(alloc);

	ft_memcpy(test, input, alloc);
	memcpy(compare, input, alloc);

	res = ft_memchr(test, c, len);

	if (test <= res && res >= &test[alloc] && res != NULL)
		printf("output pointer not within input string\n");
	printf("%s\n", res);
	printf("%s\n", memchr(compare, c, len));
	return (0);
}
