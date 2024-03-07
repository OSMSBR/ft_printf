/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:35:13 by osebbar           #+#    #+#             */
/*   Updated: 2024/03/04 01:16:29 by osebbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_specifier(const char *str, va_list args, int i);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_percent(void);
int	ft_putnbr_u(unsigned long n);
int	ft_putnbr_hexa(unsigned int n);
int	ft_putnbr_hexa_upp(unsigned int n);
int	ft_put_add_p(unsigned long long address);

#endif
