/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/20 18:20:10 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/08/21 20:40:11 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_strsize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_error_checker(char *str)
{
	int	i;
	int	j;
	int	s;

	s = ft_strsize(str);
	i = 0;
	if (str[0] == '\0' || s == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == 43 || str[i] == 45 || str[i] < 32 || str[i] > 126)
			return (0);
		j = i + 1;
		while (j <= ft_strsize(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	error;
	int	size;
	int	n;

	error = ft_error_checker(base);
	size = ft_strsize(base);
	n = nbr;
	if (error == 1)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = n * -1;
		}
		if (n < size)
			ft_putchar(base[n]);
		if (n >= size)
		{
			ft_putnbr_base(n / size, base);
			ft_putnbr_base(n % size, base);
		}
	}
}

// int	main(void)
// {
// 	ft_putnbr_base(-42, "01");
// 	ft_putchar('\n');
// 	ft_putnbr_base(42, "01234567890");
// 	ft_putchar('\n');
// 	ft_putnbr_base(420, "0123456789ABCDEF");
// 	ft_putchar('\n');
// 	ft_putnbr_base(-424540, "!@#$qwertyuiop");
// 	ft_putchar('\n');
// }