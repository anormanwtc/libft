/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:42:09 by anorman           #+#    #+#             */
/*   Updated: 2019/05/21 13:45:18 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		strcmp(const char *s1, const char *s2)
{
	size_t	cnt;

	cnt = 0;
	while ((unsigned char)s1[cnt] == (unsigned char)s2[cnt])
		cnt++;
	return ((unsigned char)s1[cnt] - (unsigned char)s2[cnt]);
}
