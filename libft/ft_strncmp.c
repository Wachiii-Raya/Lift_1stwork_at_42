/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:32:34 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/10 01:54:26 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0') && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char arr[] = "1234";
// 	char arr2[] = "1235";

// 	printf("mine: %d\n", ft_strncmp(arr, arr2, 3));
// 	printf("func: %d\n", strncmp(arr, arr2, 3));
// //	printf("%d", ft_strncmp("Hello", "HelloWorld", 8));
// }
