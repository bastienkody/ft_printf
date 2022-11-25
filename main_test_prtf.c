/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_prtf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:00:00 by bguillau          #+#    #+#             */
/*   Updated: 2022/11/25 11:25:43 by bguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	i;
	int	j;
	char	*str;
	str = malloc(12);
	i = ft_printf("%c %s %d %i %u %x %", 'a' , "😉", -443, -443 , 0xFF00 , 0b11110000);
	ft_putnbr_fd(i, STD_OUT);
	printf("\n");
	printf("Vrai fct :\n");
	j = printf("%c %s %d %i %u %x %", 'a' , "😉", -443, -443 , 0xFF00 , 0b11110000);
	ft_putnbr_fd(j, STD_OUT);
	printf("\n");
}
