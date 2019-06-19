/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:17:14 by anorman           #+#    #+#             */
/*   Updated: 2019/06/19 13:17:27 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_vprintf(va_list ap)
{
	va_list cp;
	int		charsum;
	char	c;
	char	*str;

	va_cp(cp, ap);
	charsum = 0;
	

	return (charsum);
}

int		st_format(char c)
{
	char	*str = "diouxXDOU";

	while (*str)
	{
		if (*str == c)
			return (1);
	}
	return (0);
}

int		ft_printf(const char *format, ...)
{
	int		charsum;
	va_list	ap;

	va_start(ap, format);
	while (*format)
	{
		if (format == '%')
		{
			ft_vprintf(format, p);
			while (format 
		if (*format == '\' && format[1] == '%')
			format++
		write(1, format, 1);
		format++;
	va_end(ap);
	return (charnum);
}
