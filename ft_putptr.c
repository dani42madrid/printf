/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:29:00 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/01 21:08:01 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int	ft_putptr(void *p, int printedchars)
{
	uintptr_t	pn;
	char		*lowerhex;
	
	lowerhex = "0123456789abcdef";
	pn = (uintptr_t)p;
		if (!p)
	{
		ft_putchar('0', printedchars);
		return (0);
	}
	if (pn >= 16)
		ft_putnbr(pn / 16, printedchars);
	ft_putchar(lowerhex[pn % 16], printedchars);
	return (printedchars);
}
