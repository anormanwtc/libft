/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 15:57:15 by anorman           #+#    #+#             */
/*   Updated: 2019/06/02 16:29:36 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	main(void)
{
	char	*src;
	char	*compsrc;
	char	dst[40] = {"Hellowlrd"};
	char	compdst[40] = {"Hellowlrd"};
	char	*input2 = {"stuffnmorestuff"};
	int		n;
	int		dstoglen;

	src = ft_strdup(input2);
	compsrc = strdup(input2);

	dstoglen = strlen(dst);
	n = strlen(src);
	if (dst != ft_strcat(dst, src))
		printf("return wrong\n");
	if (dst[dstoglen + n] != '\0')
		printf("no null terminator\n");
	strcat(compdst, compsrc);
	printf("%s\n", dst);
	printf("%s", compdst);
	return (0);
}
/* No overlaps */
/* Both abort if dst too short */
