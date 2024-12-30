/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:55:32 by rnorvene          #+#    #+#             */
/*   Updated: 2024/12/24 15:49:41 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *count)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', count);
		ft_putnbr(-nb, count);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr((nb / 10), count);
		}
		ft_putchar(('0' + nb % 10), count);
	}
}
