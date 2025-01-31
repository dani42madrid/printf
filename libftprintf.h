/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 08:42:06 by danielm3          #+#    #+#             */
/*   Updated: 2025/01/30 15:04:15 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

//int		ft_printf(char *const format, ...);
size_t	ft_strlen(const char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *s);

#endif