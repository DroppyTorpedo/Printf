/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:11:15 by rnorvene          #+#    #+#             */
/*   Updated: 2024/11/20 18:35:15 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int nb, int *count)
{
	unsigned int	num;

	num = (unsigned int)nb;
	if (num >= 10)
	{
		ft_putnbr_unsigned(num / 10, count);
	}
	(*count)++;
	ft_putchar(num % 10 + 48, count);
}