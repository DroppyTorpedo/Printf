/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:25:38 by rnorvene          #+#    #+#             */
/*   Updated: 2024/11/29 17:25:41 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main()
{
    ft_printf("Chaîne de caractères : %s\n", "Bonjour");
	ft_printf("Entier signé : %d\n", 123);
	ft_printf("Entier non signé : %u\n", 456);
	ft_printf("Caractère : %c\n", 'A');
	ft_printf("Pointeur : %p\n", (void *)0x12345678);
	ft_printf("Nombre hexadecimal en minuscules : %x\n", 255);
	ft_printf("Nombre hexadecimal en majuscules : %X\n", 255);
	ft_printf("Pourcentage : %%\n");
	
	return 0;
}