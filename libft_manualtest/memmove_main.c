/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:32:39 by anorman           #+#    #+#             */
/*   Updated: 2019/05/31 18:01:39 by anorman          ###   ########.fr       */
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

	ft_memcpy(test, input, alloc);
	memcpy(compare, input, alloc);

	if (test != ft_memmove(&test[3], test, len))
		printf("output pointer doesnt match input\n");
	memmove(&compare[3], compare, len);
	printf("%s\n", test);
	printf("%s\n", compare);

	ft_memcpy(test, input, alloc);
	memcpy(compare, input, alloc);

	if (test != ft_memmove(test, &test[3], len))
		printf("output pointer doesnt match input\n");
	memmove(compare, &compare[3], len);
	printf("%s\n", test);
	printf("%s\n", compare);

	return (0);
}
