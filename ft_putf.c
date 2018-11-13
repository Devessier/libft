/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:33:42 by bdevessi          #+#    #+#             */
/*   Updated: 2018/11/13 16:31:42 by bdevessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
#define CHAR(C) ((C) == 'c' || (C) == 'd' || (C) == 's' || (C) == '%')

void	ft_putf(const char *format, ...)
{
	va_list		args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (format[1] == 'c')
				ft_putchar((char)va_arg(args, int));
			else if (format[1] == 'd')
				ft_putnbr(va_arg(args, int));
			else if (format[1] == 's')
				ft_putstr(va_arg(args, char *));
			else
				ft_putchar(*format);
			format = format + (CHAR(format[1]) ? 2 : 1);
		}
		else
			ft_putchar(*format++);
	}
	va_end(args);
}
