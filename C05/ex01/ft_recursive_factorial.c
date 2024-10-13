/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/28 11:05:41 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/28 11:14:06 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (!nb);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}

// int	main(void)
// {
// 	printf("OUTPUT: %d\n", ft_recursive_factorial(5));
// 	return (0);
// }