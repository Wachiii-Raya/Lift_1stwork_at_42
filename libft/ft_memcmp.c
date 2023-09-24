/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:14:12 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 18:29:51 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((ptr1[i] == ptr2[i]) && i < n - 1)
		i++;
	return ((unsigned char)ptr1[i] - (unsigned char)ptr2[i]);
}

// int main(void)
// {
// 	int		result;

// 	long a[] = {422,333,112,333,222};
// 	long b[] = {422,333,112,333,221};
// 	if ((ft_memcmp(&a, &b, sizeof(a))))
// 		printf("noooooo");
// 	else
// 		printf("okkkie");
// }
