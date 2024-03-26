/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:49:01 by clegros           #+#    #+#             */
/*   Updated: 2024/03/26 16:03:36 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	put_str(char *str, int *len)
{
	if (!str)
		str = "(null)";
	while (*str)
		*len += write(1, str++, 1);
}

static void	put_dig(long long int nbr, int base, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr < 0)
	{
		nbr *= -1;
		*len += write(1, "-", 1);
	}
	if (nbr >= base)
		put_dig((nbr / base), base, len);
	*len += write(1, &hex[nbr % base], 1);
}

int	ft_printf(const char *fmt, ...)
{
	int		len;
	va_list	ptr;

	len = 0;
	va_start(ptr, fmt);
	while (*fmt)
	{
		if ((*fmt == '%') && ((*(fmt + 1) == 's') || (*(fmt + 1) == 'd')
				|| (*(fmt + 1) == 'x')))
		{
			fmt++;
			if (*fmt == 's')
				put_str(va_arg(ptr, char *), &len);
			else if (*fmt == 'd')
				put_dig((long long int)va_arg(ptr, int), 10, &len);
			else if (*fmt == 'x')
				put_dig((long long int)va_arg(ptr, unsigned int), 16, &len);
		}
		else
			len += write(1, fmt, 1);
		fmt++;
	}
	va_end(ptr);
	return (len);
}
