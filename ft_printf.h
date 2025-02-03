/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 08:42:06 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/03 12:59:59 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(char const *format, ...);
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_putnbr_hex(unsigned int nb, char format);
int		ft_printunsdec(unsigned int nb);
int		ft_putptr(void *p);
int		ft_putstr(char *s);

#endif