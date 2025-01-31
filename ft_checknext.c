/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknext.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:15:11 by danielm3          #+#    #+#             */
/*   Updated: 2025/01/31 10:28:43 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_checknext(char c)
{
	if (c == 'c')
		ft_putchar(c);
	else if (c == 's')
		ft_putstr(s);
	else if (c == 'p')
		ft_putptr(p);
	else if (c == 'd')
		ft_printdec(c);
	else if (c == 'i')
		ft_putnbr(c);
	else if (c == 'u')
		ft_printunsdec(c);
	else if (c == 'x')
		ft_printhexlow(c);
	else if (c == 'X')
		ft_printhexup(c);
	else if (c == '%')
		ft_putchar('%');
}
