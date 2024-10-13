/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/26 17:12:10 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/27 16:17:06 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

// int	main(void)
// {
// 	int	min = 5;
// 	int	max = 10;
// 	int	*range;

// 	range = ft_range(min, max);
// 	printf("%d\n", range[0]);
// 	printf("%d\n", range[1]);
// 	printf("%d\n", range[2]);
// 	printf("%d\n", range[3]);
// 	printf("%d\n", range[4]);
// 	printf("%d\n", range[5]);
// 	free(range);
// 	return (0);
// }