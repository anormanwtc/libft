/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:35:31 by anorman           #+#    #+#             */
/*   Updated: 2019/06/07 14:22:31 by anorman          ###   ########.fr       */
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

static int	st_lstfill(const int fd, t_list **start, t_bmark *place)
{
	t_list	*new;
	char	*str;
	int		red;
	int		len;

	len = 0;
	if (!(str = (char *)malloc((BUFF_SIZE + 1) * sizeof(char))))
		return (-2);
	while ((red = (int)read(fd, str, BUFF_SIZE)) != -1 && red && !len)
	{
		str[red] = '\0';
		if (ft_strstr(str, "\n"))
			len = ft_strlen((ft_strstr(str, "\n")));
		if ((new = ft_lstnew(str, red - len)))
			ft_lstaddend(start, new);
		if (len)
			place->red = ft_strsub(ft_strstr(str, "\n"), 1, len); /*check l-1*/
	}
	if (red)
		return (fd);
	return (-1);
}
/*
** ^ if exit = 2 we found and keep str, 
** if exit = 0 || red = -1 we failed somewhere
*/

t_bmark		*st_regplace(const int fd, t_bmark **bookmark)
{
	t_bmark		*place;

	if (!(*bookmark))
	{
		if (!(*bookmark = (t_bmark *)malloc(sizeof(t_bmark))))
			return (NULL);
		(*bookmark)->fd = fd;
		(*bookmark)->red = NULL;
		return (*bookmark);
	}
	else if (*bookmark)
	{
		place = *bookmark;
		while (place && place->fd != fd)
			place = place->next;		
		if (place)
			return (place);
	}
	if (!(place = (t_bmark *)malloc(sizeof(t_bmark))))
		return (NULL);
	place->fd = fd;
	place->red = NULL;
	ft_lstadd((t_list **)bookmark, (t_list *)place);
	return (*bookmark);
}
/*
** returns the place matching the fd or makes one if not found
*/

int			get_next_line(const int fd, char **line)
{
	static t_bmark	*bookmark;
	t_bmark			*place;
	t_list			*lst;

	if (fd == -1 || !line)
		return (-1);
	place = st_regplace(fd, &bookmark);
	if (place->red)
	{
		ft_putnbr(ft_strlen(place->red));
		ft_putstr(place->red);
		ft_putchar('\n');
		ft_lstnew(place->red, ft_strlen(place->red));
	}
	else
		lst = NULL;
	place->fd = st_lstfill(fd, &lst, place);
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
