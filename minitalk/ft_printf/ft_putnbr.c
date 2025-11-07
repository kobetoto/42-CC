/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 08:56:51 by thodavid          #+#    #+#             */
/*   Updated: 2025/01/19 11:07:58 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_putnbr(int nb)
{
	size_t	i;

	i = 0;
	if (nb == -2147483648)
	{
		i += ft_putchar('-');
		i += write(1, "2147483648", 10);
	}
	else if (nb < 0)
	{
		i += ft_putchar('-');
		i += ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		i += ft_putnbr(nb / 10);
		i += ft_putnbr(nb % 10);
	}
	else
	{
		i += ft_putchar(nb + '0');
	}
	return (i);
}
