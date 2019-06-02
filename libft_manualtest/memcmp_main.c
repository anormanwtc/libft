/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:32:39 by anorman           #+#    #+#             */
/*   Updated: 2019/06/02 13:59:13 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*input = "Helloworls";
	char	*cmp = "HelloOtherstring";
	size_t		len = 14;

	printf("%d\n", ft_memcmp(input, cmp, len));
	printf("%d\n", memcmp(input, cmp, len));
	return (0);
}
