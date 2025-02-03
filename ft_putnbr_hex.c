/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:12:05 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/03 10:30:55 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hex(unsigned int nb, char format)
{
	int		printedchars;
	char	*hex_base;

	printedchars = 0;
	if (format == 'x')
		hex_base = "0123456789abcdef";
	else
		hex_base = "0123456789ABCDEF";
	if (nb >= 16)
		printedchars += ft_putnbr_hex(nb / 16, format);
	printedchars += ft_putchar(hex_base[nb % 16]);
	return (printedchars);
}
