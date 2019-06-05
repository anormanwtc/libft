/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isthing_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 14:00:59 by anorman           #+#    #+#             */
/*   Updated: 2019/06/05 17:58:53 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int		main(void)
{
	int c;

	c = -300;
	while (c < 400)
	{
		if (isalpha(c) && ft_isalpha(c));
		else if (!isalpha(c) && !ft_isalpha(c));
		else
			printf("%d\n", c);
		c++;
	}

	c = -300;
	while (c < 400)
	{
		if (isdigit(c) && ft_isdigit(c));
		else if (!isdigit(c) && !ft_isdigit(c));
		else
			printf("%d\n", c);
		c++;
	}

	c = -300;
	while (c < 400)
	{
		if (isalnum(c) && ft_isalnum(c));
		else if (!isalnum(c) && !ft_isalnum(c));
		else
			printf("%d\n", c);
		c++;
	}

	c = -300;
	while (c < 400)
	{
		if (isascii(c) && ft_isascii(c));
		else if (!isascii(c) && !ft_isascii(c));
		else
			printf("%d\n", c);
		c++;
	}

	c = -300;
	while (c < 400)
	{
		if (isprint(c) && ft_isprint(c));
		else if (!isprint(c) && !ft_isprint(c));
		else
			printf("%d\n", c);
		c++;
	}
	return (0);
	
	c = -300;
	while (c < 400)
	{
		if (toupper(c) != ft_toupper(c))
			printf("%d\n", c);
		c++;
	}

	c = -300;
	while (c < 400)
	{
		if (tolower(c) != ft_tolower(c))
			printf("%d\n", c);
		c++;
	}
	return (0);
}
