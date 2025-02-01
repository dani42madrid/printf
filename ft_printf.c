/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:31:12 by danielm3          #+#    #+#             */
/*   Updated: 2025/02/01 15:12:59 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_checknext(char c, va_list args, int printedchars)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), printedchars);
	/*else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		ft_putptr(va_arg(args, void *));
	else if (c == 'd')
		ft_putnbr(va_arg(args, int));
	else if (c == 'i')
		ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		ft_printunsdec(va_arg(args, unsigned int));
	else if (c == 'x')
		ft_printhexlow(va_arg(args, unsigned int));
	else if (c == 'X')
		ft_printhexup(va_arg(args, unsigned int));*/
	else
		ft_putchar(c, printedchars); // if nextchar is % or anything else
}

int	ft_printf(char *const format, ...)
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
			ft_checknext(format[i++], args, printedchars);
		else
			ft_putchar(format[i++], printedchars);
	}
	va_end(args);
	return (printedchars);
}

int	main(void)
{
	char	*string = "The journey is usually the part that you remember anyways";
	//int		number = 1337;
	int		myresult;
	int		printfresult;
	
	myresult = 0;
	printfresult = 0;
	myresult = ft_printf("char: %c\n", string[0]);
	printfresult = printf("char: %c\n", string[0]);
	ft_printf("\nmyresult = %i", myresult);
	printf("\nprintfresult = %i", printfresult);
	return (0);	
}
