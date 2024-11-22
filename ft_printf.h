/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:20:36 by rnorvene          #+#    #+#             */
/*   Updated: 2024/11/22 18:20:36 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stlib.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putnbr_unsigned(unsigned int nb, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putptr(void *ptr, int *count);
void	ft_putstr(char *s, int *count);
int	ft_puthexa(char n, int *count, unsigned int num);

#endif	FT_PRINTF_H