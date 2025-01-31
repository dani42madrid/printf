/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:31:12 by danielm3          #+#    #+#             */
/*   Updated: 2025/01/31 14:08:37 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_checknext(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		ft_putptr(va_arg(args, void *));
	else if (c == 'd')
		ft_printdec(va_arg(args, int));
	else if (c == 'i')
		ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		ft_printunsdec(va_arg(args, unsigned int));
	/*else if (c == 'x')
		ft_printhexlow(va_arg(args, unsigned int));
	else if (c == 'X')
		ft_printhexup(va_arg(args, unsigned int));*/
	else if (c == '%')
		ft_putchar('%');
	else
		ft_putstr("wtf did you just entered?");
}

int	ft_printf(char *const format, ...)
{
	va_list	args;
	int		i;
	int		argcount;
	
	argcount = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
				argcount++;
			ft_checknext(format[i + 1], args);
			i++;
		}
		if (format[i - 1] != '%')
			argcount++;
		ft_putchar(format[i++]);
	}
	va_end(args);
	return (argcount);
}

int	main(void)
{
	char	c = 'y';
	char	*string = "The journey is usually the part that you remember anyways";
	void	*ptr;
	int		number = 1337;
	int		myresult;
	int		printfresult;
	
	ptr = malloc(sizeof(void *));
	myresult = ft_printf("char: %c\nstring: %s\npointer: %p\nnumber: %i\n"
			, c, string, ptr, number);
	printfresult = ft_printf("char: %c\nstring: %s\npointer: %p\nnumber: %i\n"
			, c, string, ptr, number);
	ft_printf("\nmyresult = %i", myresult);
	printf("\nprintfresult = %i", printfresult);
	free (ptr);
	return (0);	
}
