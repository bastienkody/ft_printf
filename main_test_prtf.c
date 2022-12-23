/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_prtf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:00:00 by bguillau          #+#    #+#             */
/*   Updated: 2022/12/23 14:46:26 by bguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	i;
	int	j;
	char	*str;
	char	*str2;

	str = malloc(12);
	str2 = malloc(120);
	i = ft_printf("salut %i %u %x %X %c %s%s %s %p %p %p %%\n", 0, 2147483647, 42, -420, 'c', "salut", str, NULL, str, NULL, str2);
	ft_putnbr_fd(i, STD_OUT);
	printf("\n");
//	printf("Vrai fct :\n");
	j = printf("salut %i %u %x %X %c %s %s%s %p %p %p %%\n", 0, 2147483647, 42, -420, 'c', "salut", str, NULL, str, NULL, str2);
	ft_putnbr_fd(j, STD_OUT);
	printf("\n");
	free(str);
	free(str2);
}

// para la compilacion (doesnt work without the -L.)
// gccw main_test_prtf.c -L. -lftprintf
// ou 
// gccw main_test_prtf.c libftprintf.a 

