/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:35:31 by anorman           #+#    #+#             */
/*   Updated: 2019/06/04 16:34:18 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

int	get_next_line(const int fd, char **line)
{
	t_list	*red;

	if (!(red = ft_lstnew(NULL, BUFFSIZE)))
		return (-1);

	return (1) //read
	return (0) //end file
}

/*
** returns 1 for read; 0 for end file; -1 for error
*/
