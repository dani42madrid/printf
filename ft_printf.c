/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:31:12 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/03 10:41:40 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_checknext(char c, va_list args)
{
	int	printedchars;

	printedchars = 0;
	if (c == 'c')
		printedchars += ft_putchar(va_arg(args, int));
	else if (c == 's')
		printedchars += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		printedchars += ft_putnbr(va_arg(args, int));
	else if (c == 'p')
		printedchars += ft_putptr(va_arg(args, void *));
	else if (c == 'u')
		printedchars += ft_printunsdec(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		printedchars += ft_putnbr_hex(va_arg(args, unsigned int), c);
	else
		printedchars += ft_putchar(c);
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
			printedchars += ft_checknext(format[i + 1], args);
			i++;
		}
		else
			printedchars += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (printedchars);
}

int	main(void)
{
	char			c = '$';
	char			*str = "hi";
	char			*ptr = str;
	int				num = 123;
	unsigned int	unum = 4294967295;
	unsigned int	hexnum = 305419896;
	int				myresult;
	int				printfresult;
	
	myresult = 0;
	printfresult = 0;
	myresult = ft_printf("char: %c | string = %s | ptr = %p | number = %i" 
				"| unsigned = %u | hex lower: %x | hex upper: %X\n", c, str,
				 ptr, num, unum, hexnum, hexnum);
	printfresult = printf("char: %c | string = %s | ptr = %p | number = %i" 
				"| unsigned = %u | hex lower: %x | hex upper: %X\n", c, str,
				 ptr, num, unum, hexnum, hexnum);
	printf("\nmyresult = %i", myresult);
	printf("\nprintfresult = %i", printfresult);
	printf("\n");
	// ft_printf("\n");
	// printf("\n");
	// ft_printf();
	// printf();
	// ft_printf("");
	// printf("");
	return (0);	
}
