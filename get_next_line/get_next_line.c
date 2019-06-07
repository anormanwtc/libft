/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:35:31 by anorman           #+#    #+#             */
/*   Updated: 2019/06/07 17:01:28 by anorman          ###   ########.fr       */
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
	size = 0;
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
	while (!len && (red = (int)read(fd, str, BUFF_SIZE)) != -1 && red)
	{
		str[red] = '\0';
		if (ft_strstr(str, "\n"))
			len = ft_strlen((ft_strstr(str, "\n")));
		if ((new = ft_lstnew(str, red - len)))
			ft_lstaddend(start, new);
		ft_memcpy(&(new->content[red - len]), "\0", 1);
		if (len)
			place->red = ft_strsub(ft_strstr(str, "\n"), 1, len);
	}
	if (red == -1)
		return ((place->fd = -2));
	place->fd = (red == 0 ? -1 : fd);
	return (place->fd);
}

/*
** returns fd for progress or -1 for finished; -2 for error
** puts the first line into a t_list and the unused read part
** into place->content
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
		lst = ft_lstnew(place->red, ft_strlen(place->red));
	else
		lst = NULL;
	place->fd = st_lstfill(fd, &lst, place);
	*line = ft_lstcat(lst);
	ft_lstdel(&lst, &del);
	if (place->fd != -1)
		return (1);
	else
		return (0);
}

/*
** bookmark is the list of in progress reads.
** place->content is unused but read content
** place->content_size is the fd associated or -1 for finished
** returns 1 for read; 0 for end file; -1 for error
*/
