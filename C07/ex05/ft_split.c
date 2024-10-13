/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/03 12:18:15 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/09/03 14:00:57 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_charset(str[i], charset))
		i++;
	return (i);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!check_charset(*str, charset) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (check_charset(*str, charset))
			in_word = 0;
		str++;
	}
	return (count);
}

char	*copy_word(char *str, int size)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	while (i < size)
	{
		dest[i] = str[i];
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		word_len;
	int		count_word;
	char	**result;

	count_word = count_words(str, charset);
	result = malloc(sizeof(char *) * (count_word + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && check_charset(str[i], charset))
			i++;
		word_len = count_word_len(str + i, charset);
		if (word_len)
			result[j++] = copy_word(str + i, word_len);
		i += word_len;
	}
	result[j] = 0;
	return (result);
}

// int main(void)
// {
// 	char str[] = "Hello,World!This,is,a,test";
// 	char charset[] = ",!";
// 	char **result = ft_split(str, charset);

// 	if (result)
// 	{
// 		int i = 0;
// 		while (result[i])
// 		{
// 			printf("Word %d: %s\n", i, result[i]);
// 			free(result[i]);
// 			i++;
// 		}
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Error\n");
// 	}
// 	return 0;
// }
