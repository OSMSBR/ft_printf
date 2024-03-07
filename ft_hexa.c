/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:03:31 by osebbar           #+#    #+#             */
/*   Updated: 2024/03/04 00:43:29 by osebbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned int n)
{
	char	*hexa;
	int		len;

	len = 0;
	hexa = "0123456789abcdef";
	if (n >= 16)
		len += ft_putnbr_hexa(n / 16);
	len += ft_putchar(hexa[n % 16]);
	return (len);
}

int	ft_putnbr_hexa_upp(unsigned int n)
{
	char	*hexa_upp;
	int		len;

	len = 0;
	hexa_upp = "0123456789ABCDEF";
	if (n >= 16)
		len += ft_putnbr_hexa_upp(n / 16);
	len += ft_putchar(hexa_upp[n % 16]);
	return (len);
}
