/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_convert_base2.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/28 19:20:07 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/09/03 12:14:00 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	get_num_len(int num, int base_len)
{
	int				len;
	unsigned int	num_abs;

	len = 0;
	if (num < 0)
	{
		num_abs = -num;
		len++;
	}
	else
		num_abs = num;
	if (num_abs == 0)
		return (1);
	while (num_abs > 0)
	{
		num_abs /= base_len;
		len++;
	}
	return (len);
}

char	*int_to_base(int num, char *base, int base_len)
{
	char			*str;
	int				len;
	unsigned int	num_abs;

	len = get_num_len(num, base_len);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		num_abs = -num;
		str[0] = '-';
	}
	else
		num_abs = num;
	while (num_abs > 0)
	{
		str[--len] = base[num_abs % base_len];
		num_abs /= base_len;
	}
	return (str);
}
