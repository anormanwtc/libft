/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:35:31 by anorman           #+#    #+#             */
/*   Updated: 2019/06/05 15:16:34 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

static void	del(void *content, size_t size)
{
	free(content);
	content = NULL;
}

static char	*st_lstfill(const int fd, t_list **start)
{
	char	*str;
	t_list	*new;
	int		red;
	int		exit;

	exit = 1;
	if (!(str = (char *)malloc((BUFFSIZE + 1) * sizeof(char))))
		return (-1);
	while ((red = (int)read(fd, str, BUFF_SIZE)) == BUFF_SIZE && exit)
	{
		str[red] = '\0';
		if ((ft_strstr(str, "\n")))
			exit = 2;
		if (!(new = ft_lstnew(str, red + 1)))
			exit = 0;
		else
			ft_lstaddend(start, new);
	}
	if (exit != 2) //if \n found we keep str
	{
		free(str);
		str = NULL;
	}
	if (!exit) //if exit == 0 we failed and free all
		ft_lstdel(start, &del);
	return (str);
}

int			get_next_line(const int fd, char **line)
{
	t_list			*lst;
	static t_bmark	*bookmark;
	int				red;

	if (!(bookmark))
	{
		bookmark = (t_bmark *)malloc(sizeof(t_bmark));
		if (!(bookmark))
			return (-1);
		bookmark->fd = fd;
	}
	else
		st_regplace(&bookmark);
	if (BUFF_SIZE == 0 || !(lst = ft_lstnew(NULL, BUFFSIZE + 1)))
		return (-1);
	bookmark->read = st_lstfill(fd, &lst);
	*line = ft_lstcat(lst);
	free(str);
	*line[ft_strlen(*line) - 2] = '\0';
	ft_lstdel(&lst, &del);
	if (red)
		return (1);
	}
	return (0);
}

/*
** returns 1 for read; 0 for end file; -1 for error
*/
