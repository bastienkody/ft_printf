/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:44:11 by bguillau          #+#    #+#             */
/*   Updated: 2022/12/23 11:26:04 by bguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	putnbr_hexa(unsigned int nbr, int *len, char c)
{
	char	*base;

	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr > 15)
		putnbr_hexa(nbr / 16, len, c);
	ft_putchar_fd(base[nbr % 16], STD_OUT);
	*len += 1;
	return (*len);
}

int	ptr_hexa(unsigned long long nbr, int *len, char c)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr > 15)
		ptr_hexa(nbr / 16, len, c);
	ft_putchar_fd(base[nbr % 16], STD_OUT);
	*len += 1;
	return (*len);
}

int	print_hexa(va_list init, char xX)
{
	unsigned int		nbr;
	int					len;

	nbr = (unsigned int) va_arg(init, unsigned int);
	len = 0;
	if (!nbr)
		return (len + ((int) write(STD_OUT, "0", 1)));
	else
		return (putnbr_hexa(nbr, &len, xX));
}
