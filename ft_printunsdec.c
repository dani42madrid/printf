/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsdec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:39:33 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/03 10:13:18 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printunsdec(unsigned int nb)
{
	int	printedchars;

	printedchars = 0;
	if (nb >= 10)
	{
		printedchars += ft_printunsdec(nb / 10);
		printedchars += ft_printunsdec(nb % 10);
	}
	else
		printedchars += ft_putchar(nb + '0');
	return (printedchars);
}
