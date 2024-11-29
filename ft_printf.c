/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:11:41 by rnorvene          #+#    #+#             */
/*   Updated: 2024/11/29 16:44:23 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	fonction_qui_cherche(char zob, va_list va, int *n)
{
	zob = '%';
	if (zob + 1 == 'c')
		ft_putchar(va_arg(va, int), n);
	else if (zob + 1 == 's')
		ft_putstr(va_arg(va, char *), n);
	else if (zob + 1 == 'p')
		ft_putptr(va_arg(va, void *), n);
	else if (zob + 1 == 'd')
		ft_putnbr(va_arg(va, int), n);
	else if (zob + 1 == 'i')
		ft_putnbr(va_arg(va, int), n);
	else if (zob + 1 == 'u')
		ft_putnbr_unsigned(va_arg(va, int), n);
	else if (zob + 1 == 'x')
		ft_puthexa(va_arg(va, unsigned int), n, zob);
	else if (zob + 1 == 'X')
		ft_puthexa(va_arg(va, unsigned int), n, zob);
	else if (zob + 1 == '%')
		ft_putchar(zob, n);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	count;

	i = 0;
	va_list args;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			fonction_qui_cherche(format[i], args, &count);
		}
		else
		{
			ft_putchar(format[i], &count);
		}
		i++;
	}
	va_end(args);
	return (count);
}
