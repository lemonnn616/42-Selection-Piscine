/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cheker_row.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/25 11:12:19 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/25 13:04:28 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	duplicate_in_row(int grid[4][4], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (grid[row][i] == grid[row][col])
			return (1);
		i++;
	}
	return (0);
}

int	count_visible_buld_row(int grid[4][4], int row, int col)
{
	int	i;
	int	count_view;
	int	tallest;

	i = 0;
	count_view = 0;
	tallest = 0;
	while (i <= col)
	{
		if (grid[row][i] > tallest)
		{
			tallest = grid[row][i];
			count_view++;
		}
		i++;
	}
	return (count_view);
}

int	check_row_left(int grid[4][4], int row, int col, int *value)
{
	int	count_view;

	count_view = 0;
	if (duplicate_in_row(grid, row, col))
		return (0);
	count_view = count_visible_buld_row(grid, row, col);
	if (col == 3)
		return (value[row + 8] == count_view);
	else
		return (value[row + 8] >= count_view);
}

int	check_row_right(int grid[4][4], int row, int col, int *value)
{
	int	i;
	int	count_view;
	int	tallest;

	count_view = 0;
	tallest = 0;
	if (col != 3)
		return (1);
	i = 3;
	while (i >= 0)
	{
		if (grid[row][i] > tallest)
		{
			tallest = grid[row][i];
			count_view++;
		}
		i--;
	}
	if (value[row + 12] == count_view)
		return (1);
	return (0);
}
