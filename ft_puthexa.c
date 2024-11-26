/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:36:09 by rnorvene          #+#    #+#             */
/*   Updated: 2024/11/26 16:43:04 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_puthexa_non_formel(char n, int *count, unsigned int num)
{
	char	*hex_digits;

	if (n == "x")
	{
		hex_digits = "0123456789abcdef";
	}
	else if (n == "X")
	{
		hex_digits = "0123456789ABCDEF";
	}
	if (n >= 16)
		ft_puthexa_non_formel(num / 16, count, n);
	ft_putchar(hex_digits[num % 16], count);
}

int	ft_puthexa(char n, int *count, unsigned int num)
{
	ft_puthexa_non_formel(n, count, num);
	return (*count);
}
