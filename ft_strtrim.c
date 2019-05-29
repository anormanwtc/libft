/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 16:16:07 by anorman           #+#    #+#             */
/*   Updated: 2019/05/27 13:34:28 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_isblank(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*trim;
	size_t	cnt;
	size_t	start;
	size_t	end;

	cnt = 0;
	while (st_isblank(s[cnt]) && s[cnt])
		cnt++;
	start = cnt;
	while (s[cnt])
		cnt++;
	cnt--;
	while (st_isblank(s[cnt]) && cnt >= start)
		cnt--;
	end = cnt;
	if (!(trim = (char *)malloc((end - start + 1) * sizeof(char))))
		return (NULL);
	cnt = 0;
	while (start + cnt < end + 1)
	{
		trim[cnt] = s[start + cnt];
		cnt++;
	}
	trim[cnt] = '\0';
	return (trim);
}
