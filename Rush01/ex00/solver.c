/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solver.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/24 18:48:02 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/25 10:41:39 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	solver(int grid[4][4], int row, int col, int *value)
{
	int	num;

	if (row == 4)
	{
		print_grid(grid);
		return (1);
	}
	if (col == 4)
		return (solver(grid, row + 1, 0, value));
	num = 1;
	while (num <= 4)
	{
		grid[row][col] = num;
		if (if_all_valid(grid, row, col, value))
		{
			if (solver(grid, row, col + 1, value))
				return (1);
		}
		grid[row][col] = 0;
		num++;
	}
	return (0);
}
