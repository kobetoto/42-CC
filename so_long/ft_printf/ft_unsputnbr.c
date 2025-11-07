/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:07:39 by thodavid          #+#    #+#             */
/*   Updated: 2025/01/19 11:39:09 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_unsputnbr(const unsigned int nb)
{
	size_t	i;

	i = 0;
	if (nb / 10)
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
