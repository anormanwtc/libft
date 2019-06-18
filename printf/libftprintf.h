/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 12:17:37 by anorman           #+#    #+#             */
/*   Updated: 2019/06/18 13:26:12 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "libft.h"
# include <stdarg.h>

#endif

/*
** stdarg gives va_list and va_start, va_arg, va_copy, va_end to go through them
** Those are used for multiple input variables.
** va_start must be called first to initialize ap. va_end for no more args
** every va_start must match with a va_end.
** last is the last parameter of known type before the va_list
** 
** va_arg is an expression of the next args type and value
** it changes ap to match the arg and *type to match the type
**
** if !next || type is incompatiable, random errors occur.
**
** va_copy makes a copy which must be va_end (-ed) after.
*/
