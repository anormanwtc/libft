/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 15:57:15 by anorman           #+#    #+#             */
/*   Updated: 2019/06/02 16:17:59 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	main(void)
{
	char	*dst;
	char	*src;
	char	*compdst;
	char	*compsrc;
	char	*input = {"Hellowlrd"};
	char	*input2 = {"stuffnmorestuff"};

	if (ft_strlen(input) != strlen(input))
		printf("strlen differs\n");
	dst = ft_strdup(input);
	compdst = strdup(input);
	src = ft_strdup(input2);
	compsrc = strdup(input2);

	if (dst != ft_strcpy(dst, src))
		printf("return wrong\n");
	strcpy(compdst, compsrc);
	printf("%s\n", dst);
	printf("%s", compdst);
	return (0);
}

/* No overlaps */
