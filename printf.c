/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:11:41 by rnorvene          #+#    #+#             */
/*   Updated: 2024/11/20 19:16:08 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdarg.h"
#include <unistd.h>

void	fonction_qui_cherche(char zob, va_list, int *n)
{
	zob = '%';
	if (zob + 1 == 'c')
		ft_putchar((va_list, int), n);
	else if (zob + 1 == 's')
		ft_putstr((va_list, int), n);
	else if (zob + 1 == 'p')
		
	else if (zob + 1 == 'd')
		ft_putnbr((va_list, int), n);
	else if (zob + 1 == 'i')
		ft_putnbr((va_list, int), n);
	else if (zob + 1 == 'u')
		ft_putnbr_unsigned((va_list, int), n);
	else if (zob + 1 == 'x')
		ft_puthexa((va_list, int), n);
	else if (zob + 1 == 'X')
		ft_puthexa((va_list, int), n);
	else if (zob + 1 == '%')
		write(1, '%', 1);
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
	va_end;
	return (i);
}
