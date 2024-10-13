/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   grid.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/24 13:28:28 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/25 10:41:07 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(grid[i][j] + '0');
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	initialize_grid(int grid[4][4])
{
	grid[0][0] = 0;
	grid[0][1] = 0;
	grid[0][2] = 0;
	grid[0][3] = 0;
	grid[1][0] = 0;
	grid[1][1] = 0;
	grid[1][2] = 0;
	grid[1][3] = 0;
	grid[2][0] = 0;
	grid[2][1] = 0;
	grid[2][2] = 0;
	grid[2][3] = 0;
	grid[3][0] = 0;
	grid[3][1] = 0;
	grid[3][2] = 0;
	grid[3][3] = 0;
}
