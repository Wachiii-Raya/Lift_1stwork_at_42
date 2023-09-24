/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:11:13 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 18:04:49 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (NULL);
}

int main(void)
{
	char memstr2[20] = "/|\x12\xff\x09\0\x42\042\0\42|\\";

	int *a = memchr(memstr2, '\0', 12);

	int *b = ft_memchr(memstr2, '\0', 12);
	printf("func: %p\n", a);
	printf("mine: %p\n", b);
}
