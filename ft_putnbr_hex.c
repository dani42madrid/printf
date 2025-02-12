/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:42:14 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/03 18:00:22 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int nb, char format)
{
	int		printedchars;
	char	*hexstring;

	printedchars = 0;
	if (format == 'x')
		hexstring = "0123456789abcdef";
	else
		hexstring = "0123456789ABCDEF";
	if (nb >= 16)
		printedchars += ft_putnbr_hex(nb / 16, format);
	printedchars += ft_putchar(hexstring[nb % 16]);
	return (printedchars);
}
