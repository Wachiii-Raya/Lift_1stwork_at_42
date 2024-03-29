/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:26:18 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 14:51:33 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

// int	main(void)
// {
// 	printf("ft_strlen: %d\n", ft_strlen("yuooo"));
// 	printf("ft_strlen: %d\n", strlen("yuooo"));
// 	return (0);
// }
