/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strequ_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:02:07 by anorman           #+#    #+#             */
/*   Updated: 2019/06/03 15:07:22 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str = {"Hello"};
	char	*comp = {"Hello"};
	size_t	n = 5;

	if (!ft_strequ(str, comp))
		printf("%s notequ %s\n", str, comp);
	else
		printf("strs are equ\n");

	if (!ft_strnequ(str, comp, n))
		printf("%s notequ (checking %lu) %s\n", str, n, comp);
	else
		printf("strs are equ (checking %lu)\n", n);
	return (0);
}
