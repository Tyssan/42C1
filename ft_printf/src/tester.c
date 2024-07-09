/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrunier <tbrunier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 03:30:53 by tbrunier          #+#    #+#             */
/*   Updated: 2024/05/16 03:30:53 by tbrunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*command to execute the tester:
gcc ./src/test.c -L . libftprintf.a

this tester compares original printf with ft_printf results*/

#include "../include/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char			*str;
	char			*str2;
	char			character;
	char			emptycharacter;
	int				nbr;
	int				emptynbr;
	int				nbrmin;
	unsigned int	up_hexvalue;
	unsigned int	lo_hexvalue;
	unsigned int	unsignednum;

	unsignednum = UINT_MAX;
	lo_hexvalue = UINT_MAX;
	up_hexvalue = UINT_MAX;
	nbr = -INT_MAX;
	nbrmin = INT_MIN;
	character = 'z';
	str = "Hello, World !\n%%%%%strNL.";

	printf("PRINT_F TESTS:\n");
	printf("negative absurd value (%%u): %u\npositive absurd value (%%u): %u\n", -9223372036854775807, 18446744073709551615);
	printf("various mix tests: %u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%Oui%u%%%x%%%X%%%% %c%%\n", -42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("str: %s empty str: %s\n%%char z: %%%c empty char: %c\nnbr: %d empty nbr: %d\nlowercase hex:%x uppercase hex: %X\nmax unsigned: %u\n", str, str2, character, emptycharacter, nbr, emptynbr, lo_hexvalue, up_hexvalue, unsignednum);
	printf("ptr tests: %p empty ptr: %p no ptr: %p", &str, &str2);
	ft_printf("\nFT_PRINTF TESTS:\n");
	ft_printf("negative absurd value (%%u): %u\npositive absurd value (%%u)%u\n", -9223372036854775807, 18446744073709551615);
	ft_printf("various mix tests: %u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%Oui%u%%%x%%%X%%%% %c%%\n", -42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	ft_printf("str: %s empty str: %s\n%%char z: %%%c empty char: %c\nnbr: %d empty nbr: %d\nlowercase hex:%x uppercase hex: %X\nmax unsigned: %u\n", str, str2, character, emptycharacter, nbr, emptynbr, lo_hexvalue, up_hexvalue, unsignednum);
	ft_printf("ptr tests: %p empty ptr: %p no ptr: %p", &str, &str2);
	return (0);
}
