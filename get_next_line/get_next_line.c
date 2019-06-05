/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:35:31 by anorman           #+#    #+#             */
/*   Updated: 2019/06/05 16:05:49 by anorman          ###   ########.fr       */
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
	if (!(str = (char *)malloc((BUFFSIZE + 1) * sizeof(char))));
	else
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
	if (exit != 2) 
	{
		free(str);
		str = NULL;
	}
	if (!exit || red == -1)
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

	place = st_regplace(fd, &bookmark);
	lst = NULL;
	place->content = (void *)st_lstfill(fd, &lst);
	t = lst;
	while (t->next)
		t = t->next;
	t->content_size = BUFF_SIZE - ft_strlen(ft_strstr(t->content, "\n")) + 1;
	*line = ft_lstcat(lst);
	ft_lstdel(&lst, &del);
	return (0);
}

/*
** returns 1 for read; 0 for end file; -1 for error
*/
