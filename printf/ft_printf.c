/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:17:14 by anorman           #+#    #+#             */
/*   Updated: 2019/06/20 17:09:06 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		st_printchek(const char **format, va_list *ap)
{
	int		charsum;
	char	c;

	if (ft_strchr("+0#", **format))
		c = **format++;
	charsum = atoi(*format);
	while (**format > 47 && **format < 58)
		*format++;	
	return (charsum);
}

int		ft_numstring(const char **format, va_list *ap)
{
	int		charsum;
	char	c;
	char	*str;

	if ((charsum = atoi(*format)))
		{
			if (charsum < 0 && charsum != INT_MIN)
				charsum *= -1;
		}
	else if (ft_strchr("dDiouUxX", **format))
		;
	else if (ft_strchr("cC", **format))
		charsum = ft_strlen(str);
	return (charsum);
}

int		ft_printf(const char *format, ...)
{
	int		charsum;
	va_list	ap;

	va_start(ap, format);
	charsum = 0;
	if (ft_strstr(format, "%S")) /*og printf didnt do it when I tried*/
		return (-1);
	while (*format)
	{
		if (*format == '%' && format[1] != '%')
			charsum += st_printchek(&format, &ap); /*manages %s so far*/
		if ((*format == '%' || *format == '\\') && format[1] == '%')
			format++; /*^ manages %% and \% */
		if (*format)
		{
			write(1, format, 1);
			charsum++;
			format++;
		}
	}
	va_end(ap);
	return (charsum);
}

#include <stdio.h>

int		main(void)
{
	ft_printf("Hello %% %s\n", "world");
	return (0);
}
