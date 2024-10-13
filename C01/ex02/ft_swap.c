/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/14 17:37:46 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/14 17:51:28 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 24;
	printf("a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("x = %d, y = %d\n", a, b);
	return (0);
}
*/
