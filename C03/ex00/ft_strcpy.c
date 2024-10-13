/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/19 13:25:07 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/19 13:26:04 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Hello how are you!";
	char	dest[99];

	ft_strcpy(dest, src);
	printf("Text = %s\n", src);
	printf("Copy text = %s\n", dest);
	return (0);
}
*/