/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:38:11 by anorman           #+#    #+#             */
/*   Updated: 2019/06/05 15:13:28 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>

# define BUFFSIZE 120

typedef struct	s_bmark
{
	int				*fd;
	char			*read;
	struct s_bmark	*next;
}				t_bmark;

int		get_next_line(const int fd, char **line);

#endif