/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:11:16 by anorman           #+#    #+#             */
/*   Updated: 2019/05/31 15:11:51 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list  *(*f)(t_list *elem))
{
	t_list	*result;
	t_list	*new;
	t_list	*temp;
	
	result = NULL;
	if (lst)
	{
		temp = f(lst);
		new = ft_lstnew(temp->content, temp->content_size);
		lst = lst->next;
		result = ft_lstmap(lst, f);
		ft_lstadd(&result, new);
	}
	return (result);
}
