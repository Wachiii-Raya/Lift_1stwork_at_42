/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 03:17:28 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 17:55:36 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if ((size != 0) && count > (SIZE_MAX / size))
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char *str1 = calloc(0, 0);
// 	printf("str1: %p\n", str1);
// 	printf("%s\n", str1);

// 	printf("==========================\n");
// 	char *str2 = ft_calloc(0, 0);
// 	printf("str2: %p\n", str2);
// 	printf("%s\n", str2);

// 	return (0);
// }
