/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <zmata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:16:40 by zmata             #+#    #+#             */
/*   Updated: 2025/02/05 14:03:19 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fonction_if(va_list ap, const char *format)
{
	int	somme;

	somme = 0;
	if (*format == 'c')
		somme += ft_putchar(va_arg(ap, int));
	if (*format == 'd' || *format == 'i')
		somme += ft_putnbr(va_arg(ap, int));
	if (*format == 'u')
		somme += ft_putnbr_unsigned(va_arg(ap, unsigned int));
	if (*format == 'x')
		somme += ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
	if (*format == 'X')
		somme += ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
	if (*format == 'p')
		somme += p_case(va_arg(ap, long));
	if (*format == 's')
		somme += ft_putstr(va_arg(ap, char *));
	if (*format == '%')
		somme += ft_putstr("%");
	return (somme);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		somme;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	somme = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			somme += fonction_if(ap, format);
		}
		else
			somme += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (somme);
}

// #include <limits.h>
// int	main(void)
// {
// 	printf("len of mine: %d\n", ft_printf("%p\n", 123));
// 	printf("len of printf: %d\n", printf("%p\n", 123));
//     return(0);
// }