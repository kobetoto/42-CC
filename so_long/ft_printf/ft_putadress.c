/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:52:52 by thodavid          #+#    #+#             */
/*   Updated: 2025/01/19 13:44:46 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static size_t	printadress(const unsigned long n)
{
	if (n / 16)
		return (printadress(n / 16) + printadress(n % 16));
	else if (!(n / 10))
		ft_putchar(n + '0');
	else
		ft_putchar((char) n - 10 + 'a');
	return (1);
}

size_t	ft_putadress(void *adress)
{
	if (!adress)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (2 + printadress((unsigned long) adress));
}
/*
   size_t	ft_printaddr(const unsigned int nb)
   {
   size_t	i;

   i = 0;
   ft_putchar('0');
   ft_putchar('x');
   if (nb / 16)
   i += ft_puthexa(nb / 16);
   if (nb % 16 < 10)
   i += ft_putchar((nb % 16) + '0');
   else
   i += ft_putchar((nb % 16) - 10 + 'a');
   return (i +2);
   }

   size_t	ft_putadress(void *adress)
   {
   if (!adress)
   return (ft_putstr("(nil)"));
   else
   return (ft_printaddr((unsigned long)adress));
   }
   */
