/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:26:11 by anorman           #+#    #+#             */
/*   Updated: 2019/05/27 16:28:38 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_wdcnt(const char *str, char delim)
{
	int		cnt;
	int		wd;

	cnt = 0;
	wd = 0;
	while (str[cnt])
	{
		while (str[cnt] == delim && str[cnt])
			cnt++;
		if (str[cnt])
			wd++;
		while (str[cnt] != delim && str[cnt])
			cnt++;
	}
	return (wd);
}

static int	*st_letcnt(const char *str, char delim, int wdcnt)
{
	int		cnt;
	int		wd;
	int		letcnt;
	int		*letres;

	cnt = 0;
	letres = (int *)malloc((wdcnt + 1) * sizeof(int));
	wd = 0;
	while (str[cnt])
	{
		while (str[cnt] == delim && str[cnt])
			cnt++;
		letcnt = 0;
		while (str[cnt] != delim && str[cnt])
		{
			cnt++;
			letcnt++;
		}
		letres[wd] = letcnt;
		if (letcnt)
			wd++;
	}
	letres[wd] = 0;
	return (letres);
}

static char	**st_wordalloc(const char *str, char delim)
{
	int		wd;
	char	**wdstr;
	int		*letcnt;

	if (!(wdstr = (char **)malloc((st_wdcnt(str, delim) + 1) * sizeof(char *))))
		return (NULL);
	letcnt = st_letcnt(str, delim, (st_wdcnt(str, delim)));
	wd = 0;
	while (letcnt[wd])
	{
		if (!(wdstr[wd] = (char *)malloc((letcnt[wd] + 1) * sizeof(char))))
			return (NULL);
		wd++;
	}
	return (wdstr);
}

char		**ft_strsplit(char const *s, char c)
{
	int		cnt;
	int		letcnt;
	int		wdcnt;
	char	**arr;

	cnt = 0;
	arr = st_wordalloc(s, c);
	wdcnt = 0;
	while (s[cnt])
	{
		while (s[cnt] == c && s[cnt])
			cnt++;
		letcnt = 0;
		while (s[cnt] != c && s[cnt])
		{
			arr[wdcnt][letcnt] = s[cnt];
			cnt++;
			letcnt++;
		}
		if (letcnt)
			arr[wdcnt++][letcnt] = '\0';
	}
	arr[wdcnt] = NULL;
	return (arr);
}
