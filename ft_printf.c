/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:11:41 by rnorvene          #+#    #+#             */
/*   Updated: 2024/12/24 15:51:12 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	fonction_qui_cherche(char zob, va_list va, int *n)
{
	if (zob == 'c')
		ft_putchar(va_arg(va, int), n);
	else if (zob == 's')
		ft_putstr(va_arg(va, char *), n);
	else if (zob == 'p')
		ft_putptr(va_arg(va, void *), n);
	else if (zob == 'd' || zob == 'i')
		ft_putnbr(va_arg(va, int), n);
	else if (zob == 'u')
		ft_putnbr_unsigned(va_arg(va, int), n);
	else if (zob == 'x' || zob == 'X')
		ft_puthexa(va_arg(va, unsigned int), n, zob);
	else if (zob == '%')
		ft_putchar(zob, n);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, format);
	if (!format)
		return (0);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			fonction_qui_cherche(format[i], args, &count);
		}
		else
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
