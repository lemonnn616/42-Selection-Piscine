/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/25 13:41:03 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/25 13:47:57 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
