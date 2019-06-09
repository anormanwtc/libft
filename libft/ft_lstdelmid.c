/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelmid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:01:43 by anorman           #+#    #+#             */
/*   Updated: 2019/06/09 14:33:26 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		ft_lstdelone(&mid);
	}
	else if (temp && mid)
	{
		while (temp->next && temp->next != mid)
			temp = temp->next;
		if (temp->next == mid)
		{
			temp->next = mid->next;
			ft_lstdelone(&mid);
		}
	}
}
