/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:11:15 by rnorvene          #+#    #+#             */
/*   Updated: 2024/12/24 15:30:19 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int nb, int *count)
{
	if (nb > 9)
	{
		ft_putnbr_unsigned(nb / 10, count);
	}
	ft_putchar((nb % 10) + 48, count);
}
