/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-v <csilva-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 09:55:59 by csilva-v          #+#    #+#             */
/*   Updated: 2026/06/16 10:11:13 by csilva-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += handle_format(format[i], args);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}	
		i++;
	}
	va_end(args);
	return (count);
}

#include <limits.h>

int main(void)
{
	int count;
	char	*a = "teste";

	count = 0;
	count = ft_printf("%s", "Hello World!");
	ft_printf("\n%d\n", count);
	count = 0;
	count = ft_printf("%c", 'A');
	ft_printf("\n%d\n", count);
	count = 0;
	count = ft_printf("%d", -42);
	ft_printf("\n%d\n", count);
	count = 0;
	count = ft_printf("%d", INT_MIN);
	ft_printf("\n%d\n", count);
	count = 0;
	count = ft_printf("%x", 255);
	ft_printf("\n%d\n", count);
	count = 0;
	count = ft_printf("%X", 255);
	ft_printf("\n%d\n", count);
	count = 0;
	count = ft_printf("%p", a);
	ft_printf("\n%d\n", count);
	count = 0;
	count = ft_printf("%d%%", 255);
	ft_printf("\n%d\n", count);
	count = 0;
	count = ft_printf("%u", INT_MIN);
	ft_printf("\n%d\n", count);
}