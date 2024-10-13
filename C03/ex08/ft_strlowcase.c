/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/19 13:25:49 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/19 13:30:50 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "Hello";
	char	str3[] = "0";

	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
	return (0);
}
*/