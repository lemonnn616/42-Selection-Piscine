/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/14 17:57:05 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/14 18:39:13 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 42;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("result = %d\n", div);
	printf("module = %d\n", mod);
	return (0);
}
*/