/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/14 18:42:38 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/15 18:58:18 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a / *b;
	temp_b = *a % *b;
	*a = temp_a;
	*b = temp_b;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 42;
	y = 4;
	ft_ultimate_div_mod(&x, &y);
	printf("result: x = %d\n", x);
	printf("modula: y = %d\n", y);
	return (0);
}
*/