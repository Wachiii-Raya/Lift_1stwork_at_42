/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:38:27 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 15:46:17 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	i = ft_strlen(dst);
	j = 0;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char src[] = "Hello5555";
// 	char dst[] = "Hello5555";
// 	printf("mine: %zu\n", ft_strlcat(NULL, src, 0));
// 	printf("func: %zu\n", strlcat(NULL, src, 0));
// }
