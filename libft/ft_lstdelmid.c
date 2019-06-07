/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelmid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:01:43 by anorman           #+#    #+#             */
/*   Updated: 2019/06/07 17:32:24 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	st_delone(t_list **del)
{
	if (*del)
	{
		if ((*del)->content)
			free((*del)->content);
		(*del)->content_size = 0;
		free(*del);
		*del = NULL;
	}
}

void	ft_lstdelmid(t_list **start, t_list *mid)
{
	t_list	*temp;

	temp = *start;
	if (*start && temp == mid)
	{
		if (temp->next)
			*start = temp->next;
		else
			*start = NULL;
		st_delone(&mid);
	}
	else if (temp && mid)
	{
		while (temp->next && temp->next != mid)
			temp = temp->next;
		if (temp->next == mid)
		{
			temp->next = mid->next;
			st_delone(&mid);
		}
	}
}
