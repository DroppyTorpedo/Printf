/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:55:32 by rnorvene          #+#    #+#             */
/*   Updated: 2024/11/26 16:44:14 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *count)
{
	unsigned int	num;

	if (nb == -2147483648)
	{
		ft_putstr_sp("-2147483648", count);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', count);
		num = (unsigned int)(nb * -1);
	}
	else
	{
		num = (unsigned int)nb;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10, count);
	}
	ft_putchar(num % 10 + 48, count);
	(*count)++;
}
