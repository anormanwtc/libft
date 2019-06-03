/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsttest_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:25:24 by anorman           #+#    #+#             */
/*   Updated: 2019/06/03 16:31:52 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	del(void *content, size_t size)
{
	free(content);
	content = NULL;
}

static t_list	*map(t_list *elem)
{
	char	*str;
	t_list	*maped;
	str = ft_strjoin(elem->content, "stuff");
	free(elem->content);
	maped = ft_lstnew(str, elem->content_size + 5);
	free(str);
	return(maped);
}

static void	iter(t_list *elem)
{
	free(elem->content);
	elem->content = ft_strdup("newst");
}


int			main(void)
{
	t_list	*lst1;
	t_list	*maped;
	char	*str;

	str = ft_strdup("Helloworld");
	lst1 = ft_lstnew(str, 10);
	printf("%s\n", lst1->content);
	printf("%lu\n", lst1->content_size);
	ft_lstdelone(&lst1, &del);
	if (lst1 != NULL)
		printf("delone failed\n");
	str = ft_strdup("Helloworld");
	lst1 = ft_lstnew(str, 5);
	ft_lstadd(&lst1, ft_lstnew("Stuff", 5));
	ft_lstadd(&lst1, ft_lstnew("other", 5));
	printf("%s -- %s -- %s\n", lst1->next->next->content, lst1->next->content, lst1->content);
	maped = ft_lstmap(lst1, &map);
	printf("%s -- %s -- %s\n", maped->next->next->content, maped->next->content, maped->content);
	ft_lstiter(lst1, &iter);
	printf("%s -- %s -- %s\n", lst1->next->next->content, lst1->next->content, lst1->content);
	ft_lstdel(&maped, &del);
	ft_lstdel(&lst1, &del);
	if (lst1 || maped)
		printf("del failed");
	return (0);
}
