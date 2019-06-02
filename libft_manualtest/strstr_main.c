/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 15:57:15 by anorman           #+#    #+#             */
/*   Updated: 2019/06/02 17:34:30 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*dst;
	char	*nee;
	char	*input = {"Hellowlrd"};
	char	*needle = {"lo"};
	int		len;

	dst = ft_strdup(input);
	nee = ft_strdup(needle);
	if (strstr(dst, nee) != ft_strstr(dst, nee))
		printf("return wrong\n");
	if (strnstr(dst, nee, len) != ft_strnstr(dst, nee, len))
		printf("return wrong\n");
	return (0);
}
