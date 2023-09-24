/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:30:17 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 14:33:05 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char src[] = "Hello";
// 	char dst[] = "Hello";
// 	printf("mine: %zu\n", ft_strlcpy(dst, NULL, 4));
// 	printf("func: %zu\n", strlcpy(dst, "", 4));
// }
