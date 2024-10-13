/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/27 16:39:08 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/28 19:14:04 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

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

int	calculate_total_len(int size, char **strs, int sep_len)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (size - 1) * sep_len;
	return (total_len + 1);
}

void	concat_strings(char *result, int size, char **strs, char *sep)
{
	int	i;
	int	offset;
	int	sep_len;

	sep_len = ft_strlen(sep);
	offset = 0;
	i = 0;
	while (i < size)
	{
		ft_strcpy(result + offset, strs[i]);
		offset += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(result + offset, sep);
			offset += sep_len;
		}
		i++;
	}
	result[offset] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	total_len = calculate_total_len(size, strs, ft_strlen(sep));
	result = (char *)malloc(total_len);
	if (result == NULL)
		return (NULL);
	concat_strings(result, size, strs, sep);
	return (result);
}

// int main(void)
// {
// 	char *strs[] = {"Hello", "world", "planet"};
// 	char sep[] = " and ";
// 	int size = sizeof(strs) / sizeof(strs[0]);
// 	char *joined_str = ft_strjoin(size, strs, sep);

// 	if (joined_str != NULL)
// 	{
// 		printf("Joined string: %s\n", joined_str);
// 		free(joined_str);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return 0;
// }