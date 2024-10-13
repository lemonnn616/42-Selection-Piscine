/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/26 12:56:25 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/26 17:11:17 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

char	*ft_strcpy(char *dest, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = NULL;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}

// int	main(void)
// {
// 	char	*text;

// 	text = "hello world";
// 	printf("new text: %s\n", ft_strdup(text));
// 	return (0);
// }
