/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsttest_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:25:24 by anorman           #+#    #+#             */
/*   Updated: 2019/06/04 16:58:37 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	del(void *content, size_t size)
{
	free(content);
	content = NULL;
}

int			main(void)
{
	t_list	*lst1;
	char	*str;

	str = ft_strdup("Helloworld");
	free(str);
	lst1 = ft_lstnew(str, 11);
	ft_lstadd(&lst1, ft_lstnew("", 1));
	ft_lstadd(&lst1, ft_lstnew("other", 6));
	str = ft_lstcat(lst1);
	printf("%s\n", str);
	ft_lstdel(&lst1, &del);
	if (lst1)
		printf("del failed");
	return (0);
}
