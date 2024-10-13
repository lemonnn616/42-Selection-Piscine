/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/27 10:31:42 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/27 10:33:20 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	len;

	if (argc > 0)
	{
		len = ft_strlen(argv[0]);
		write(1, argv[0], len);
		write(1, "\n", 1);
	}
	return (0);
}
