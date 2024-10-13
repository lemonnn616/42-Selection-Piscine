/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/24 13:22:04 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/25 11:40:43 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

void	ft_putchar(char c);
void	put_error(void);
void	initialize_grid(int grid[4][4]);
void	print_grid(int grid[4][4]);
int		valid_input(char *input1, int input2[16]);
int		duplicate_in_col(int grid[4][4], int row, int col);
int		count_visible_build_col(int grid[4][4], int row, int col);
int		check_col_up(int grid[4][4], int row, int col, int *value);
int		check_col_down(int grid[4][4], int row, int col, int *value);
int		duplicate_in_row(int grid[4][4], int row, int col);
int		count_visible_buld_row(int grid[4][4], int row, int col);
int		check_row_left(int grid[4][4], int row, int col, int *value);
int		check_row_right(int grid[4][4], int row, int col, int *value);
int		if_all_valid(int grid[4][4], int row, int col, int *value);
int		solver(int grid[4][4], int row, int col, int *value);

#endif
