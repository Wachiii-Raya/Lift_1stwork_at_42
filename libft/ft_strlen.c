/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:26:18 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 10:53:58 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

// int	main(void)
// {
// 	char *str = "Hello";
// 	char *ptr = str;
// 	unsigned long number = str;
// 	printf("Expect: Hello = %zu\n", number);

// 	printf("Result: Hello = %s\n", number+10);
// 	printf("Result: Hello = %s\n", 4476030846);
// 	return (0);
// }
