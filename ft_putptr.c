/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:29:00 by danielm3          #+#    #+#             */
/*   Updated: 2025/01/31 14:19:28 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

static void	ft_dec_to_hex(int np_char)
{
	char	first_hex;
	char	second_hex;
	int		chmod16;
	int		chmod16_6;

	first_hex = (np_char / 16) + 48;
	chmod16 = np_char % 16;
	chmod16_6 = (chmod16 - 10) % 6;
	if (chmod16 <= 9)
		second_hex = chmod16 + 48;
	else
		second_hex = chmod16_6 + 'a';
	write(1, &first_hex, 1);
	write(1, &second_hex, 1);
}


static void	ft_dec_to_hex(int np_char)
{
	char	first_hex;
	char	second_hex;

	first_hex = (np_char / 16) + '0';  // Primer dígito (0-9 o a-f)
	if (np_char % 16 < 10)
		second_hex = (np_char % 16) + '0';  // Segundo dígito (0-9)
	else
		second_hex = (np_char % 16 - 10) + 'a';  // Segundo dígito (a-f)

	write(1, &first_hex, 1);
	write(1, &second_hex, 1);
}

void	ft_putptr(void *p)
{
	pn = (uintptr_t)p;
	ft_putstr("0x");
	if (pn >= 16)
	{
		ft_putnbr(pn / 16);
		ft_putnbr(pn % 16);
	}
	else
		ft_putchar(nb + '0');
}
int	main(void)
{
	ft_putptr()
}