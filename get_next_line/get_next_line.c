/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:35:31 by anorman           #+#    #+#             */
/*   Updated: 2019/06/07 11:56:43 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

#include <stdio.h>
#include <errno.h>

static void	del(void *content, size_t size)
{
	free(content);
	content = NULL;
}

static char	*st_lstfill(const int fd, t_list **start, t_list place)
{
	char	*str;
	t_list	*new;
	int		red;
	int		exit;

	exit = 1;
	if (!(str = (char *)malloc((BUFF_SIZE + 1) * sizeof(char))))
		return (NULL);
	while ((red = (int)read(fd, str, BUFF_SIZE)) != -1 && exit == 1)
	{
		str[red] = '\0';
		if ((new = ft_lstnew(str, red - ft_strlen((ft_strstr(str, "\n"))))))
			ft_lstaddend(start, new);
		else
			exit = 0;
		if (ft_strstr(str, "\n"))
			exit = 2;
	}
	if (exit != 2) 
	{
		free(str);
		str = NULL;
	}
	if (!exit)
		ft_lstdel(start, &del);
	return (str);
}
/*
** ^ if exit = 2 we found and keep str, 
** if exit = 0 || red = -1 we failed somewhere
*/

t_list		*st_regplace(const int fd, t_list **bookmark)
{
	t_list		*place;
	
	if (bookmark)
	{
		place = *bookmark;
		while (place && place->content_size != fd)
			place = place->next;		
		if (place)
			return (place);
	}
	place = (t_list *)malloc(sizeof(t_list));
	ft_lstadd(bookmark, place);
	if (!(bookmark))
		return (NULL);
	place->content_size = fd;
	return (place);
}
/*
** returns the place matching the fd or makes one if not found
*/

int			get_next_line(const int fd, char **line)
{
	t_list			*lst;
	t_list			*t;
	static t_list	*bookmark;
	t_list			*place;

	if (fd = -1 || !line)
		return (-1);
	place = st_regplace(fd, &bookmark);
	lst = NULL;
	place->content_size = (void *)st_lstfill(fd, &lst, place);
	*line = ft_lstcat(lst);
	ft_lstdel(&lst, &del);
	return (0);
}

/*
** bookmark is the list of in progress reads.
** place->content is unused but read content
** place->content_size is the fd associated or -1 for finished
** returns 1 for read; 0 for end file; -1 for error
*/
