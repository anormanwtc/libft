/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bezero_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:32:39 by anorman           #+#    #+#             */
/*   Updated: 2019/05/31 17:46:35 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	void	*test;
	void	*compare;
	char	*input = "Helloworls";
	int		len = 4;
	int		alloc = 10;
	
	test = ft_memalloc(alloc);
	compare = ft_memalloc(alloc);

	memcpy(test, input, alloc);
	memcpy(compare, input, alloc);

	ft_bzero(test, len);
	bzero(compare, len);
	printf("memcmp: %d\n", memcmp(test, compare, alloc));
	return (0);
}
