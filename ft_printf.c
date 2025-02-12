/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:31:12 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/10 19:54:46 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_checknext(char c, va_list args)
{
	int	printedchars;

	printedchars = 0;
	if (c == '%')
		printedchars += ft_putchar('%');
	else if (c == 'c')
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
	{
		printedchars += ft_putchar('%');
		printedchars += ft_putchar(c);
	}
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
	i = -1;
	va_start(args, format);
	while (format[++i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
		{
			va_end(args);
			return (-1);
		}
		if (format[i] == '%' && format[i + 1] != '\0')
			printedchars += ft_checknext(format[++i], args);
		else
			printedchars += ft_putchar(format[i]);
	}
	va_end(args);
	return (printedchars);
}

/*int	main(void)
{
	char			c = '$';
	char			*str = NULL;
	char			*ptr = str;
	int				num = 0;
	unsigned int	unum = 0;
	unsigned int	hexnum = 0;
	int				myresult;
	int				printfresult;
	
	myresult = 0;
	printfresult = 0;
	printfresult = printf("char: %c | string = %s | ptr = %p | number = %i " 
				"| unsigned = %u | hex lower: %x | hex upper: %X\n", c, str,
				 ptr, num, unum, hexnum, hexnum);
	myresult = ft_printf("char: %c | string = %s | ptr = %p | number = %i " 
				"| unsigned = %u | hex lower: %x | hex upper: %X\n", c, str,
				 ptr, num, unum, hexnum, hexnum);
	printf("\nprintf = %i", printfresult);
	printf("\nmyprnt = %i", myresult);
	printf("\n");
	// ft_printf("\n");
	// printf("\n");
	// ft_printf();
	// printf();
	// ft_printf("");
	// printf("");
	return (0);	
}*/