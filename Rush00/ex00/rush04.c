/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush04.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/17 11:27:50 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/17 13:26:50 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((j == 0 && i == 0) || (j == x - 1 && i == y - 1))
				ft_putchar('A');
			else if ((j == x - 1 && i == 0) || (j == 0 && i == y - 1))
				ft_putchar('C');
			else if (j == 0 || j == x - 1 || i == 0 || i == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
