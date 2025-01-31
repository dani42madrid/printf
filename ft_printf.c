/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielm3 <danielm3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:31:12 by danielm3          #+#    #+#             */
/*   Updated: 2025/01/31 10:47:47 by danielm3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
			ft_checknext(format[i + 1]);
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
