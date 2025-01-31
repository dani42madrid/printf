/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:29:00 by danielm3          #+#    #+#             */
/*   Updated: 2025/01/31 10:36:44 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

void	ft_putptr(uintptr_t ptrlong)
{
	write(1, "0x", 2);
	if (nb >= 16)
	{
		ft_putnbr(nb / 16);
		ft_putnbr(nb % 16);
	}
	else
		ft_putchar(nb + '0');
}
