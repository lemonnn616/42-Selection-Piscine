/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/24 15:23:21 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/25 11:36:45 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	values[16];

	initialize_grid(grid);
	if (argc != 2 || !valid_input(argv[1], values))
	{
		put_error();
		return (1);
	}
	if (!solver(grid, 0, 0, values))
		put_error();
	return (0);
}
