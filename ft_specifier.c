/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:38:19 by osebbar           #+#    #+#             */
/*   Updated: 2024/03/04 00:51:13 by osebbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(const char *s, va_list args, int i)
{
	int	len;

	len = 0;
	if (s[i] == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (s[i] == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (s[i] == 'd' || s[i] == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (s[i] == '%')
		len += ft_percent();
	else if (s[i] == 'u')
		len += ft_putnbr_u(va_arg(args, unsigned int));
	else if (s[i] == 'x')
		len += ft_putnbr_hexa(va_arg(args, int));
	else if (s[i] == 'X')
		len += ft_putnbr_hexa_upp(va_arg(args, int));
	else if (s[i] == 'p')
		len += ft_put_add_p(va_arg(args, unsigned long long));
	else
	{
		len += ft_putchar('%');
		len += ft_putchar(s[i]);
	}
	return (len);
}
