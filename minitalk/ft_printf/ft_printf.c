/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:32:46 by thodavid          #+#    #+#             */
/*   Updated: 2025/04/06 13:53:19 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_putarg(const char *c, size_t *i, va_list *ap)
{
	*i = *i + 1;
	if (*(c + 1) == 'c')
		return (ft_putchar((unsigned char) va_arg(*ap, int)));
	else if (*(c + 1) == 's')
		return (ft_putstr(va_arg(*ap, const char *)));
	else if (*(c + 1) == 'p')
		return (ft_putadress(va_arg(*ap, void *)));
	else if (*(c + 1) == 'd' || *(c + 1) == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	else if (*(c + 1) == 'u')
		return (ft_unsputnbr(va_arg(*ap, unsigned int)));
	else if (*(c + 1) == 'x')
		return (ft_puthexa(va_arg(*ap, unsigned int)));
	else if (*(c + 1) == 'X')
		return (ft_puthexaupp(va_arg(*ap, unsigned int)));
	else if (*(c + 1) == '%')
		return (ft_putchar('%'));
	else if (*(c + 1) && *(c + 2))
		return (ft_putchar(*(c)) + ft_putchar(*(c + 1)));
	else
	{
		*i -= 1;
		return (-1);
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t	i;
	int		len;
	int		tmp;

	if (!str)
		return (-1);
	len = 0;
	va_start(ap, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			tmp = ft_putarg(str + i, &i, &ap);
		else
			tmp = ft_putchar(str[i]);
		if (tmp >= 0)
			len += tmp;
		else
			len = tmp;
		i++;
	}
	va_end(ap);
	return (len);
}
