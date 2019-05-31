/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:02:29 by anorman           #+#    #+#             */
/*   Updated: 2019/05/30 15:32:40 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **lst, void (*del)(void *, size_t size))
{
	if (*lst)
	{
		if ((*lst)->next)
			ft_lstdel(&((*lst)->next), del);
		ft_lstdelone(lst, del);
	}
	*lst = NULL;
}
