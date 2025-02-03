/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 08:42:06 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/02 13:38:43 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

//int		ft_printf(char *const format, ...);
int		ft_printunsdec(unsigned int nb);
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_putptr(void *p);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *str);

#endif