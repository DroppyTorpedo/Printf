/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:07:46 by rnorvene          #+#    #+#             */
/*   Updated: 2024/12/04 15:15:52 by rnorvene         ###   ########.fr       */
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
	if (!adress)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	while (adress)
	{
		buffer[i++] = hex_digits[adress % 16];
		adress /= 16;
	}
	while (i--)
		ft_putchar(buffer[i], count);
}
