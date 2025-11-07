/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:01:24 by thodavid          #+#    #+#             */
/*   Updated: 2025/04/12 16:45:26 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_puthexa(const unsigned int nb)
{
	size_t	i;

	i = 0;
	if (nb / 16)
		i += ft_puthexa(nb / 16);
	if ((nb % 16) < 10)
		i += ft_putchar((nb % 16) + '0');
	else
		i += ft_putchar((nb % 16) - 10 + 'a');
	return (i);
}
