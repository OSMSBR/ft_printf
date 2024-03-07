/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 00:43:54 by osebbar           #+#    #+#             */
/*   Updated: 2024/03/04 01:16:15 by osebbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa_p(unsigned long long n)
{
	char	*hexa;
	int		len;

	len = 0;
	hexa = "0123456789abcdef";
	if (n >= 16)
		len += ft_putnbr_hexa_p(n / 16);
	len += ft_putchar(hexa[n % 16]);
	return (len);
}

int	ft_put_add_p(unsigned long long address)
{
	int	len;

	len = 0;
	if ((void *)address == NULL)
		len += ft_putstr("(nil)");
	else
	{
		len += ft_putstr("0x");
		len += ft_putnbr_hexa_p(address);
	}
	return (len);
}
