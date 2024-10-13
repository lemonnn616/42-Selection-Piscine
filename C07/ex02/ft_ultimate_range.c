/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/27 16:18:11 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/27 16:38:19 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (size);
}

// int	main(void)
// {
// 	int	*range;
// 	int	size;
// 	int	i;
// 	int	min = 5;
// 	int	max = 10;

// 	size = ft_ultimate_range(&range, min, max);

// 	if (size == -1)
// 	{
// 		printf("fail\n");
// 		return 1;
// 	}
// 	else if (size == 0)
// 	{
// 		printf("min >= max\n");
// 		return 1;
// 	}
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", range[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(range);
// 	return 0;
// }