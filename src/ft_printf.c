/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:17:52 by ctrinite          #+#    #+#             */
/*   Updated: 2022/05/09 15:04:19 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"
#include <stdint.h>

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list args, const char format)
{
	int	pl;

	pl = 0;
	if (format == 'c')
		pl += ft_printchar((unsigned char)va_arg(args, int));
	if (format == 's')
		pl += ft_printstr(va_arg(args, char *));
	if (format == 'p')
		pl += ft_ptr((uintptr_t)va_arg(args, void *));
	if (format == 'd' || format == 'i')
		pl += ft_printnbr(va_arg(args, int));
	if (format == 'u')
		pl += ft_putunsigned(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		pl += ft_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		pl += ft_printpercent();
	return (pl);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		pl;

	i = 0;
	pl = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			pl += ft_format(args, str[i + 1]);
			i++;
		}
		else
			pl += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (pl);
}
