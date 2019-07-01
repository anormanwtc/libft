/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:44:46 by anorman           #+#    #+#             */
/*   Updated: 2019/07/01 15:00:07 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	int		fd[3];
	int		res[3];
	int		cnt;

	fd[0] = open("input1", O_RDONLY);
	fd[1] = open("input2", O_RDONLY);
	fd[2] = open("input3", O_RDONLY);
	printf("3 files open at the same time going 1 line each till the first ends\n %d %d %d\n", fd[0], fd[1], fd[2]);
	while ((res[0] = get_next_line(fd[0], &(str1))) || res[1] || res[2])
	{
		if (res[0] == -1 || (res[1] = get_next_line(fd[1], &(str2))) == -1
			   || (res[2] = get_next_line(fd[2], &(str3))) == -1)
		{
			printf("error");
			return (0);
		}
		if (str1)
		{
			printf("%s\n", str1);
			ft_strdel(&(str1));
		}
		if (str2)
		{
			printf("%s\n", str2);
			ft_strdel(&(str2));
		}
		if (str3)
		{
			printf("%s\n", str3);
			ft_strdel(&(str3));
		}

	}

	printf("\npaused, enter to continue\n");
	if (get_next_line(0, &str1) == -1)
		printf("errored??\n\n");
	ft_strdel(&(str1));

	printf("gnl given NULL as the **line\n");
	if (get_next_line(fd[0], NULL) == -1)
		printf("errored as expected\n\n");

	close(fd[0]);
	close(fd[1]);
	close(fd[2]);
	printf("gnl on the now closed input1\n");
	if (get_next_line(fd[0], &str1) == -1)
		printf("errored as expected\n\n");

	printf("gnl on fd -1 and 666 (shouldnt exist)\n");
	if (get_next_line(-1, &str1) == -1 && get_next_line(666, &str2) == -1)
		printf("errored as expected\n\n");

	printf("gnl on stdin. If yes, gnl will do the full war&peace\n");
	if (get_next_line(0, &str1) == -1)
		printf("errored??\n\n");
		if (str1)
		{
			printf("%s\n", str1);
		}
	
	cnt = 0;
	if (!ft_strcmp(str1, "yes"))
	{
		fd[0] = open("war-and-peace.txt", O_RDONLY);
		while ((res[0] = get_next_line(fd[0], &(str1))) && res[0] != -1)
		{
			if (res[0] != -1)
				if (str1)
				{
					cnt++;
					printf("%s\n", str1);
					ft_strdel(&(str1));
				}
		}
	}
	printf("%d\n", cnt);
	return (0);
}
