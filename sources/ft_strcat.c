/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:42:03 by anorman           #+#    #+#             */
/*   Updated: 2019/05/21 10:58:57 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	size_t	cnt1;
	size_t	cnt2;

	cnt1 = 0;
	cnt2 = 0;
	while (s1[cnt1])
		cnt1++;
	while (s2[cnt2])
	{
		s1[cnt1] = s2[cnt2];
		cnt1++;
		cnt2++;
	}
	s1[cnt1] = '\0';
	return (s1);
}
