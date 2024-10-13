/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/20 12:10:40 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/20 18:19:13 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10 + (str[i] - 48));
		i++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("     ---+--+1234ab567"));
// 	printf("%d\n", ft_atoi("    +42"));
// 	printf("%d\n", ft_atoi("-00123"));
// 	printf("%d\n", ft_atoi("0"));
// 	return (0);
// }