/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsdec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:39:33 by danielm3          #+#    #+#             */
/*   Updated: 2025/01/31 13:40:49 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printunsdec(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_printunsdec(nb / 10);
		ft_printunsdec(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}