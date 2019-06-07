/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:44:46 by anorman           #+#    #+#             */
/*   Updated: 2019/06/07 16:04:39 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int	main(void)
{
	char	*str;
	int		fd;

	fd = open("input", O_RDONLY);
	get_next_line(fd, &str);
	if (*str)
	{
		ft_putstr(str);
		ft_putchar('\n');
		free(str);
	}
	get_next_line(fd, &str);
	if (*str)
	{
		ft_putstr(str);
		ft_putchar('\n');
		free(str);
	}

	return (0);
}
