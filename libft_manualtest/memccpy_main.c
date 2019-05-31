/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:32:39 by anorman           #+#    #+#             */
/*   Updated: 2019/05/31 17:57:38 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	void	*test;
	void	*compare;
	char	*input = "Helloworls";
	void	*result;
	char	c = 'l';
	int		len = 8;
	int		alloc = 10;
	
	test = ft_memalloc(alloc);
	compare = ft_memalloc(alloc);

	result = ft_memccpy(test, input, c, alloc);
	if ((result < &test[0] || result > &test[alloc]) && result)
		printf("output not pointer to part of test or null");
	memccpy(compare, input, c, alloc);

	printf("memcmp:%d\n", memcmp(test, compare, alloc));
	return (0);
}
