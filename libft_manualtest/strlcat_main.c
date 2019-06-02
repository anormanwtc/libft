/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 15:57:15 by anorman           #+#    #+#             */
/*   Updated: 2019/06/02 16:35:16 by anorman          ###   ########.fr       */
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
	size_t	n = 15;
	int		dstoglen;

	src = ft_strdup(input2);
	compsrc = strdup(input2);

	dstoglen = strlen(dst);
	if (dstoglen > n)
		dstoglen = n;
	if (strlen(src) < n)
		n = strlen(src);
	printf("%lu vs %lu\n", ft_strlcat(dst, src, n), strlcat(compdst, compsrc, n));
	printf("%s\n", dst);
	printf("%s", compdst);
	return (0);
}
/* No overlaps */
/* Both abort if dst too short */
