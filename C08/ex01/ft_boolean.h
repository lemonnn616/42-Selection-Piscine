/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_boolean.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iriadyns <iriadyns@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/02 13:55:36 by iriadyns      #+#    #+#                 */
/*   Updated: 2024/09/02 14:04:44 by iriadyns      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

# define EVEN(nbr) nbr % 2 == 0
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 1

typedef int	t_bool;

#endif
