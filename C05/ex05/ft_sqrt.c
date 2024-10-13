/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/28 11:56:54 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/28 12:05:31 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("OUTPUT: %d\n", ft_sqrt(16));
// 	return (0);
// }
