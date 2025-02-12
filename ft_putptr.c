/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:29:00 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/12 12:32:20 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print0x(void *p)
{
	if (p)
	{
		ft_putstr("0x");
		return (2);
	}
	return (0);
}

static int	ft_putrestptr(void *p)
{
	int				printedchars;
	unsigned long	pn;
	char			*lowerhex;

	printedchars = 0;
	lowerhex = "0123456789abcdef";
	pn = (unsigned long)p;
	if (!p)
	{
		printedchars += ft_putstr("(nil)");
		return (printedchars);
	}
	if (pn >= 16)
		printedchars += ft_putrestptr((void *)(pn / 16));
	printedchars += ft_putchar(lowerhex[pn % 16]);
	return (printedchars);
}

int	ft_putptr(void *p)
{
	return (ft_print0x(p)+ ft_putrestptr(p));
}
