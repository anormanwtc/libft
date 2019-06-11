/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:44:46 by anorman           #+#    #+#             */
/*   Updated: 2019/06/11 10:22:16 by anorman          ###   ########.fr       */
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
	char	*str2;
	int		fd;
	int		fd2;
	int		error;
	int		i = 1;

	fd = open("war-and-peace.txt", O_RDONLY);
	fd2 = open("input2", O_RDONLY);
	while ((error = get_next_line(fd, &str)))
	{
		if (error == -1 || get_next_line(fd2, &str2) == -1)
		{
			printf("error");
			return (0);
		}
		if (*str2)
		{
			printf("%s\n", str2);
			free(str2);
		}
		if (*str)
		{
			printf("%s\n", str);
			free(str);
		}
	}
	return (0);
}
