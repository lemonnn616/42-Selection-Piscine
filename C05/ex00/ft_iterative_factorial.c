/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/27 17:14:13 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/28 11:09:32 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 1)
		return (!nb);
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	printf ("OUTPUT: %d\n", ft_iterative_factorial(-4));
// 	return (0);
// }