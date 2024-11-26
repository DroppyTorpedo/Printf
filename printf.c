/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:11:41 by rnorvene          #+#    #+#             */
/*   Updated: 2024/11/26 16:37:32 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	fonction_qui_cherche(char zob, va_list va, int *n)
{
	zob = '%';
	if (zob + 1 == 'c')
		ft_putchar((va, int), n);
	else if (zob + 1 == 's')
		ft_putstr((va, int), n);
	else if (zob + 1 == 'p')
		ft_putptr((va, int), n);
	else if (zob + 1 == 'd')
		ft_putnbr((va, int), n);
	else if (zob + 1 == 'i')
		ft_putnbr((va, int), n);
	else if (zob + 1 == 'u')
		ft_putnbr_unsigned((va, int), n);
	else if (zob + 1 == 'x')
		ft_puthexa((va, int), n);
	else if (zob + 1 == 'X')
		ft_puthexa((va, int), n);
	else if (zob + 1 == '%')
		ft_putchar(zob, n);
}

int	ft_printf(const char *format, ...)
{
	int	i;

	i = 0;
	va_list;
	va_start(format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			fonction_qui_cherche(va_arg(format, int));
			i++;
		}
		i++;
	}
	va_end(args);
	return (i);
}
