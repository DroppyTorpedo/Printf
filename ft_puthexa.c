/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:36:09 by rnorvene          #+#    #+#             */
/*   Updated: 2024/12/03 17:37:35 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa_non_formel(unsigned int num, int *count, char n)
{
	char	*hex_digits;

	if (n == 'x')
		hex_digits = "0123456789abcdef";
	else if (n == 'X')
		hex_digits = "0123456789ABCDEF";
	if (num >= 16)
		ft_puthexa_non_formel(num / 16, count, n);
	ft_putchar(hex_digits[num % 16], count);
}

int	ft_puthexa(unsigned int num, int *count, char n)
{
	ft_puthexa_non_formel(num, count, n);
	return (*count);
}
