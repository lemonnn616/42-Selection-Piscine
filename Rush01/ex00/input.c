/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/24 15:17:49 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/25 10:33:14 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	valid_input(char *input1, int input2[16])
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (input1[j] != '\0')
	{
		if (input1[j] >= '1' && input1[j] <= '4')
		{
			if (count >= 16)
				return (0);
			input2[i++] = input1[j] - '0';
			count++;
		}
		else if (input1[j] != ' ' || (j > 0 && input1[j - 1] == ' '))
			return (0);
		j++;
	}
	return (count == 16);
}
