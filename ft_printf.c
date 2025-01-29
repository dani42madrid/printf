/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:31:12 by danielm3          #+#    #+#             */
/*   Updated: 2025/01/29 21:02:17 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	ft_printf(char *const format, ...)
{
	va_list	args;
	int		i;
	
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 's')
		{
			i+++;
			ft_putstr()
		}
	
}

int	main(void)
{
	char	*string = "The journey is usually the part that you remember anyways";
	int		number = 42;
	int		argnumber;
	argnumber = ft_printf("My first try is a string %s and a number %i", string, number);
	printf("\nargnumber = %i", argnumber);
	return (0);	
}