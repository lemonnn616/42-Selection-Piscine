/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cheker_col.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/24 15:54:56 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/25 13:04:53 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	duplicate_in_col(int grid[4][4], int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (grid[i][col] == grid[row][col])
			return (1);
		i++;
	}
	return (0);
}

int	count_visible_build_col(int grid[4][4], int row, int col)
{
	int	i;
	int	count_view;
	int	tallest;

	i = 0;
	count_view = 0;
	tallest = 0;
	while (i <= row)
	{
		if (grid[i][col] > tallest)
		{
			tallest = grid[i][col];
			count_view++;
		}
		i++;
	}
	return (count_view);
}

int	check_col_up(int grid[4][4], int row, int col, int *value)
{
	int	count_view;

	if (duplicate_in_col(grid, row, col))
		return (0);
	count_view = count_visible_build_col(grid, row, col);
	if (row == 3)
		return (value[col] == count_view);
	else
		return (value[col] >= count_view);
}

int	check_col_down(int grid[4][4], int row, int col, int *value)
{
	int	i;
	int	count_view;
	int	tallest;

	count_view = 0;
	tallest = 0;
	if (row != 3)
		return (1);
	i = 3;
	while (i >= 0)
	{
		if (grid[i][col] > tallest)
		{
			tallest = grid[i][col];
			count_view++;
		}
		i--;
	}
	if (value[col + 4] == count_view)
		return (1);
	return (0);
}
