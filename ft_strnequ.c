/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:15:26 by anorman           #+#    #+#             */
/*   Updated: 2019/05/27 12:14:02 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	while (s1[cnt] && s1[cnt] == s2[cnt] && cnt < (n - 1))
		cnt++;
	if (s1[cnt] == s2[cnt])
		return (1);
	return (0);
}
