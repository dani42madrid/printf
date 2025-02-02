/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 08:28:38 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/01 21:11:50 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char *s, int printedchars)
{
	printedchars = 0;
	while (*s)
	{
		ft_putchar(*s++, printedchars);
		printedchars++;
	}
}
