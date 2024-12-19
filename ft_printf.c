/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:11:41 by rnorvene          #+#    #+#             */
/*   Updated: 2024/12/04 15:07:01 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	fonction_qui_cherche(char zob, va_list va, int *n)
{
	if (zob == 'c')
		ft_putchar(va_arg(va, int), n);
	else if (zob == 's')
		ft_putstr(va_arg(va, char *), n);
	else if (zob == 'p')
		ft_putptr(va_arg(va, void *), n);
	else if (zob == 'd')
		ft_putnbr(va_arg(va, int), n);
	else if (zob == 'i')
		ft_putnbr(va_arg(va, int), n);
	else if (zob == 'u')
		ft_putnbr_unsigned(va_arg(va, int), n);
	else if (zob == 'x')
		ft_puthexa(va_arg(va, unsigned int), n, zob);
	else if (zob == 'X')
		ft_puthexa(va_arg(va, unsigned int), n, zob);
	else if (zob == '%')
		ft_putchar(zob, n);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			fonction_qui_cherche(format[i], args, &count);
		}
		else if (format[i] != '%')
		{
			ft_putchar(format[i], &count);
		}
		i++;
	}
	va_end(args);
	return (count);
}
