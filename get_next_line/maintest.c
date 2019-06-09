/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:44:46 by anorman           #+#    #+#             */
/*   Updated: 2019/06/09 17:22:52 by anorman          ###   ########.fr       */
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
	while (get_next_line(fd, &str))
	{
		if (*str)
		{
			printf("%s\n", str);
			free(str);
		}
	}
	return (0);
}
