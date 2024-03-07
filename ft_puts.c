/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:29:32 by osebbar           #+#    #+#             */
/*   Updated: 2024/03/03 21:23:35 by osebbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	long	nb;
	int		len;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		len += ft_putchar('-');
	}
	if (nb < 10)
		len += ft_putchar(nb + 48);
	else
	{
		len += ft_putnbr(nb / 10);
		len += ft_putchar((nb % 10) + 48);
	}
	return (len);
}

int	ft_putnbr_u(unsigned long n)
{
	int		len;

	len = 0;
	if (n < 10)
		len += ft_putchar(n + 48);
	else
	{
		len += ft_putnbr_u(n / 10);
		len += ft_putchar((n % 10) + 48);
	}
	return (len);
}

int	ft_percent(void)
{
	return (ft_putchar('%'));
}
