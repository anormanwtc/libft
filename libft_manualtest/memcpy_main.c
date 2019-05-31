/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:32:39 by anorman           #+#    #+#             */
/*   Updated: 2019/05/31 17:52:37 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	void	*test;
	void	*compare;
	char	*input = "Helloworls";
	int		len = 8;
	int		alloc = 10;
	
	test = ft_memalloc(alloc);
	compare = ft_memalloc(alloc);

	if (test != ft_memcpy(test, input, alloc))
		printf("output not input\n");
	memcpy(compare, input, alloc);

	printf("memcmp:%d\n", memcmp(test, compare, alloc));
	return (0);
}
