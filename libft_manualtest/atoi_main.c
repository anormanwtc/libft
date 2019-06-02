/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 17:39:45 by anorman           #+#    #+#             */
/*   Updated: 2019/06/02 17:42:48 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	if (ft_atoi("-2147483648") != atoi("-2147483648"))
		printf("min int differs\n");
	if (ft_atoi("2147483647") != atoi("2147483647"))
		printf("max int differs\n");
	if (ft_atoi("0") != atoi("0"))
		printf("0 differs\n");
	if (ft_atoi("-2340") != atoi("-2340"))
		printf("-2340 differs\n");
	if (ft_atoi("888") != atoi("888"))
		printf("888 differs\n");
	return (0);
}
