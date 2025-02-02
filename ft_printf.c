/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:31:12 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/02 00:37:24 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_checknext(char c, va_list args, int printedchars)
{
	if (c == 'c')
		printedchars += ft_putchar(va_arg(args, int), printedchars);
	/*else if (c == 's')
		printedchars += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		printedchars += ft_putptr(va_arg(args, void *));
	else if (c == 'd')
		printedchars += ft_putnbr(va_arg(args, int));
	else if (c == 'i')
		printedchars += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		printedchars += ft_printunsdec(va_arg(args, unsigned int));
	else if (c == 'x')
		printedchars += ft_printhexlow(va_arg(args, unsigned int));
	else if (c == 'X')
		printedchars += ft_printhexup(va_arg(args, unsigned int));*/
	else
		printedchars += ft_putchar(c, printedchars); // if nextchar is % or anything else
	return (printedchars);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		printedchars;
	
	if (!format)
		return (0);
	printedchars = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			ft_checknext(format[i + 1], args, printedchars);
			i++;
		}
		else
			printedchars += ft_putchar(format[i], printedchars);
		i++;
	}
	va_end(args);
	return (printedchars);
}

int	main(void)
{
	char	c = '$';
	int		myresult;
	int		printfresult;
	
	myresult = 0;
	printfresult = 0;
	myresult = ft_printf("char: %c", c);
	printfresult = printf("char: %c", c);
	printf("\nmyresult = %i", myresult);
	printf("\nprintfresult = %i", printfresult);
	return (0);	
}
