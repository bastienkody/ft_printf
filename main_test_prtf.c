/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_prtf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:00:00 by bguillau          #+#    #+#             */
/*   Updated: 2022/12/23 12:57:04 by bguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	i;
	int	j;
//	char	*str;

//	str = malloc(12);
//	i = ft_printf("salut %i %u %x %X %c %s %s %p %p %%\n", 0, 2147483647, 42, -420, 'c', "salut", str, str, NULL);
	i = ft_printf("%s\n", NULL);
	ft_putnbr_fd(i, STD_OUT);
	printf("\n");
//	printf("Vrai fct :\n");
//	j = printf("salut %i %u %x %X %c %s %s %p %p %%\n", 0, 2147483647, 42, -420, 'c', "salut", str, str, NULL);
	j = printf("%s\n", NULL);
	ft_putnbr_fd(j, STD_OUT);
	printf("\n");
}

// para la compilacion (doesnt work without the -L.)
// gccw main_test_prtf.c -L. -lftprintf
// ou 
// gccw main_test_prtf.c libftprintf.a 

