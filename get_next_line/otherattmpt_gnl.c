/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:35:31 by anorman           #+#    #+#             */
/*   Updated: 2019/06/07 11:40:43 by anorman          ###   ########.fr       */
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

static char	*st_lstfill(const int fd, t_list **start)
{
	char	*str;

}
/*
** ^ if exit = 2 we found and keep str, 
** if exit = 0 || red = -1 we failed somewhere
*/

t_list		*st_regplace(const int *fd, char **bookmark)
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
	static t_list	*bookmark;
	t_list			*place;

	place = st_regplace(fd, &bookmark);
	lst = NULL;
	place->content = (void *)st_read(&fd, line);

	return (0);
}

/*
** returns 1 for read; 0 for end file; -1 for error
*/
