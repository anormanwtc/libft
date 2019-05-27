/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:26:11 by anorman           #+#    #+#             */
/*   Updated: 2019/05/27 14:15:23 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**st_wordalloc(const char *str, char delim)
{
	int cnt;
	char **wdstr;
	int	wdcnt;
	int	letcnt;

	cnt = 0;
	wdcnt = 0;
	while (str[cnt])
	{
		while (str[cnt] == delim)
			cnt++;
		wdcnt++;
		while (str[cnt] != delim)
			cnt++;
	}
	if (!(wdstr = (char **)malloc((wdcnt) * sizeof(char *))))
		return (NULL);
	cnt = 0;
	wdcnt = 0;
	while (str[cnt])
	{
		letcnt = 0;
		while (str[cnt] == delim)
			cnt++;
		while (str[cnt] != delim)
		{
			cnt++;
			letcnt++;
		}
		if (!(wdstr[wdcnt] = (char *)malloc((letcnt) * sizeof(char))))
			return (NULL);
		wdcnt++;
	}
	wdstr[wdcnt] = NULL;
	return(wdstr);
}

char			**ft_strsplit(char const *s, char c)
{
	int		cnt;
	int		wdcnt;
	int		letcnt;
	char	**arr;

	wdcnt = st_wordcount(s, c);
	if (!(arr = (char **)malloc((wdcnt + 1) * sizeof(char *))))
		return (NULL);

	cnt = 0;
	wdcnt = 0;
	while (s[cnt])
	{
		while (s[cnt] == c)
			cnt++;
		letcnt = 0;
		while (s[cnt] != c)
		{
			arr[wdcnt][letcnt] = s[cnt];
			cnt++;
			letcnt++;
		}
		arr[wdcnt][letcnt] = '\0';
		wdcnt++;
	}
	arr[wdcnt] = NULL;
	return (arr);
}
