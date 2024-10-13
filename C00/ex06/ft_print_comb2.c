/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/15 12:32:22 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/15 12:56:51 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnumb(int a)
{
	ft_putchar((a / 10) + '0');
	ft_putchar((a % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 +1;
		while (num2 <= 99)
		{
			ft_putnumb(num1);
			ft_putchar(' ');
			ft_putnumb(num2);
			if (!(num1 == 98 && num2 == 99))
			{
				write(1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
	return (0);
}
*/