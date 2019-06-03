/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsubjointrim_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:11:28 by anorman           #+#    #+#             */
/*   Updated: 2019/06/03 15:16:23 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str = {"\t \nstuffmorestuff\t \n"};
	char	*trim;
	char	*sub;
	char	*join = {"addendum"};

	trim = ft_strtrim(str);
	printf("%s\n", trim);
	sub = ft_strsub(trim, 5, 4);
	printf("%s\n", sub);
	free(trim);
	trim = ft_strjoin(sub, join);
	printf("%s", trim);
	free(trim);
	free(sub);
	return (0);
}
