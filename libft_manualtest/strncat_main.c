/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 15:57:15 by anorman           #+#    #+#             */
/*   Updated: 2019/06/02 16:30:02 by anorman          ###   ########.fr       */
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
	int		n = 5;
	int		dstoglen;

	src = ft_strdup(input2);
	compsrc = strdup(input2);

	dstoglen = strlen(dst);
	if (strlen(src) < n)
		n = strlen(src);
	if (dst != ft_strncat(dst, src, n))
		printf("return wrong\n");
	if (dst[dstoglen + n] != '\0')
		printf("no null terminator");
	strncat(compdst, compsrc, n);
	printf("%s\n", dst);
	printf("%s", compdst);
	return (0);
}
/* No overlaps */
/* Both abort if dst too short */
