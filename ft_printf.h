/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <rnorvene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:59:06 by rnorvene          #+#    #+#             */
/*   Updated: 2024/12/04 15:06:30 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putnbr_unsigned(unsigned int num, int *count);
void	ft_putptr(void *ptr, int *count);
void	ft_putstr(char *s, int *count);
int		ft_puthexa(unsigned int num, int *count, char n);

#endif
