/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/28 11:43:16 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/28 11:55:58 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int	main(void)
// {
// 	printf("OUTPUT: %d\n", ft_fibonacci(5));
// 	return (0);
// }
