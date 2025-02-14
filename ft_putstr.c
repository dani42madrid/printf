/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 08:28:38 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/03 17:51:31 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	printedchars;

	printedchars = 0;
	if (!s)
	{
		printedchars += ft_putstr("(null)");
		return (printedchars);
	}
	while (*s)
		printedchars += ft_putchar(*s++);
	return (printedchars);
}
