/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   all_vailid.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/25 11:21:01 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/25 11:21:16 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	if_all_valid(int grid[4][4], int row, int col, int *value)
{
	if (!check_col_up(grid, row, col, value)
		|| !check_col_down(grid, row, col, value)
		|| !check_row_left(grid, row, col, value)
		|| !check_row_right(grid, row, col, value))
		return (0);
	return (1);
}
