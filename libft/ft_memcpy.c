/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 02:07:40 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 18:37:55 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*temp;

	temp = dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n)
	{
		n--;
		*temp++ = *(char *)src++;
	}
	return (dest);
}
#include <stdio.h>
#include <string.h>

int main(void) {
//   char str1[10] = "hello";
//   char str2[10];

	long	num1[] = {44,54,66};
	long	num2[3];

	ft_memcpy(num2, num1, sizeof(num1));
	for (int i = 0; i < 3; i++)
	{
		printf("num: %ld\n", num2[i]);
	}
  // Call your own function
//   ft_memcpy(str2, str1, sizeof(str1));

//   // Call the original function
//   memcpy(str2, str1, sizeof(str1));
//   if (strcmp(str2, "hello") == 0) {
//     printf("The functions are equal.\n");
//   } else {
//     printf("The functions are not equal.\n");
  }
