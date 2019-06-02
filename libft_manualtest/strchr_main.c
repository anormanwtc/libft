/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 15:57:15 by anorman           #+#    #+#             */
/*   Updated: 2019/06/02 17:30:51 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	main(void)
{
	char	*dst;
	char	*input = {"Hellowlrd"};
	char	c = 'l';

	dst = ft_strdup(input);
	if (strchr(dst, c) != ft_strchr(dst, c))
		printf("return wrong\n");
	if (strrchr(dst, c) != ft_strrchr(dst, c))
		printf("return wrong\n");
	return (0);
}
