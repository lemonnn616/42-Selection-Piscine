/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/28 11:16:34 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/28 11:36:11 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power--)
		result *= nb;
	return (result);
}

// int	main(void)
// {
// 	printf("OUTPUT: %d\n", ft_iterative_power(5, 3));
// 	return (0);
// }