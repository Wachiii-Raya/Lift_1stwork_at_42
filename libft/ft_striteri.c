/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:05:10 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 16:27:53 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void char_plus_one(unsigned int i, char c)
// {
//     c + (2 + i);
// }

// int main()
// {
//     char *str = "Hello";
//     // printf("%s\n", ft_striteri(str, char_plus_one));
// 	ft_striteri(str, char_plus_one);
// 	printf("output: %s\n", str);
// }

// #include <stdio.h>
// void cap_even_ascletter(unsigned int i, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z')
// 	{
// 		*c -= ('a' - 'A'); // capitalize the character
// 	}
// }

// int main()
// {
// 	char str[] = "abcdef"; // Using a char array so it's mutable
// 	ft_striteri(str, cap_even_ascletter);
// 	printf("%s\n", str); // Should print "AbCdEf"
// 	return 0;
// }
