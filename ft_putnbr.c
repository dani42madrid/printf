/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:02:37 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/03 12:16:32 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	printedchars;

	printedchars = 0;
	if (nb == -2147483648)
	{
		printedchars += ft_putchar('-');
		printedchars += ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		printedchars += ft_putchar('-');
	}
	if (nb >= 10)
	{
		printedchars += ft_putnbr(nb / 10);
		printedchars += ft_putnbr(nb % 10);
	}
	else
		printedchars += ft_putchar(nb + '0');
	return (printedchars);
}
