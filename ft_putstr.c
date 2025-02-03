/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 08:28:38 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/02 13:36:57 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s)
{
	int printedchars;

	printedchars = 0;
	if (!s)
		return (0);
	printedchars = 0;
	while (*s)
		printedchars += ft_putchar(*s++);
	return (printedchars);
}
