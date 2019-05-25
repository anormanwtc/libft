/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:46:39 by anorman           #+#    #+#             */
/*   Updated: 2019/05/25 16:52:33 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	cnt;

	if (!(str = malloc(size + 1)))
		return (NULL);
	while (cnt <= size)
		str[cnt++] = '\0';
	return (str);
}
