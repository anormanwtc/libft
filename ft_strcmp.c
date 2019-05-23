/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:42:09 by anorman           #+#    #+#             */
/*   Updated: 2019/05/23 17:17:54 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t	cnt;
	int		exit;

	exit = 0;
	cnt = 0;
	while ((unsigned char)s1[cnt] != '\0' && exit == 0)
	{
		if ((unsigned char)s1[cnt] == (unsigned char)s2[cnt])
			cnt++;
		else
			exit = 1;
	}
	return ((unsigned char)s1[cnt] - (unsigned char)s2[cnt]);
}
