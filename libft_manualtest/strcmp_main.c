/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 17:35:23 by anorman           #+#    #+#             */
/*   Updated: 2019/06/02 17:39:01 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	*input = {"Stuff"};
	char	*comp = {"Stuff"};
	int		len = 3;

	if (strcmp(input, comp) != ft_strcmp(input, comp))
		printf("return strcmp differs");
	if (strncmp(input, comp, len) != ft_strncmp(input, comp, len))
		printf("return strNcmp differs");
	return (0);
}
