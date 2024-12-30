/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:07:46 by rnorvene          #+#    #+#             */
/*   Updated: 2024/12/24 15:31:54 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr, int *count)
{
	unsigned long long	adress;
	char				*hex_digits;
	char				buffer[16];
	int					i;

	adress = (unsigned long long)ptr;
	hex_digits = "0123456789abcdef";
	i = 0;
	if (adress == 0)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	while (adress > 0)
	{
		buffer[i++] = hex_digits[adress % 16];
		adress /= 16;
	}
	while (i > 0)
		ft_putchar(buffer[--i], count);
}
