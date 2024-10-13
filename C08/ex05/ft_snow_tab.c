/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_snow_tab.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/02 16:21:11 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/09/02 17:02:50 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

void	ft_putnbr(int nbr)
{
	char	digit;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	digit = (nbr % 10) + '0';
	write(1, &digit, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

// int	main(int argc, char **argv)
// {
// 	struct s_stock_str	*array;

// 	array = ft_strs_to_tab(argc, argv);
// 	if (array == NULL)
// 		return (1);
// 	array[0].copy = "Hello world";
// 	ft_show_tab(array);
// 	free(array);
// 	return (0);
// }
