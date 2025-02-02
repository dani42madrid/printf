/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:02:37 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/01 21:08:56 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int nb, int printedchars)
{
	if (nb == -2147483648)
	{
		ft_putchar('-', printedchars);
		ft_putchar('2', printedchars);
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-', printedchars);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, printedchars);
		ft_putnbr(nb % 10, printedchars);
	}
	else
		printedchars += ft_putchar(nb + '0', printedchars);
	return (printedchars);
}
