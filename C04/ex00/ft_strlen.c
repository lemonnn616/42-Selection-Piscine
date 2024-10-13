/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/19 17:18:58 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/19 17:31:35 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	str[] = "hello gegegegworld";

// 	printf("%d\n", ft_strlen(str));
// 	return (0);
// }
