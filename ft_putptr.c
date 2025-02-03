/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:29:00 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/02 17:11:54 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int	ft_putptr(void *p)
{
	int			printedchars;
	uintptr_t	pn;
	char		*lowerhex;
		
	printedchars = 0;
		lowerhex = "0123456789abcdef";
	pn = (uintptr_t)p;
	if (!p)
	{
		printedchars += ft_putstr("(nil)");
		return (printedchars);
	}
	if (pn >= 16)
		printedchars += ft_putptr((void *)(pn / 16));
	printedchars += ft_putchar(lowerhex[pn % 16]);
	return (printedchars);
}
