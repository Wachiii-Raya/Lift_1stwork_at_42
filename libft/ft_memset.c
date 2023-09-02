/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 23:31:18 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/03 01:49:15 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return ((unsigned char *)b);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char str[50] = "GeeksForGeeks is for programming geeks.";
// 	printf("mine: %s\n", ft_memset(str + 13, '.', 8));
// 	printf("func: %s\n", memset(str + 13, '.', 8));
// 	return (0);
// }
