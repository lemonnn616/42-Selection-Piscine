/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_convert_base.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/28 19:20:04 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/09/03 12:16:20 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*int_to_base(int num, char *base, int base_len);

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	if (!base || !base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_to_int(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	atoi_help(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign = -sign;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;

	i = 0;
	result = 0;
	base_len = 0;
	sign = 1;
	if (!is_base_valid(base))
		return (0);
	while (base[base_len])
		base_len++;
	sign = atoi_help(str, &i);
	while (base_to_int(str[i], base) != -1)
	{
		result = result * base_len + base_to_int(str[i], base);
		i++;
	}
	return (result * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	int		base_to_len;
	char	*result;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	base_to_len = 0;
	while (base_to[base_to_len])
		base_to_len++;
	result = int_to_base(num, base_to, base_to_len);
	return (result);
}

// int	main(void)
// {
// 	char *nbr = "9ABC9";
// 	char *base_from = "0123456789ABCDEF";
// 	char *base_to = "!@#$";
// 	char *result = ft_convert_base(nbr, base_from, base_to);
// 	if (result)
// 	{
// 		printf("Converted number: %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Conversion failed.\n");
// 	}
// 	return (0);
// }
