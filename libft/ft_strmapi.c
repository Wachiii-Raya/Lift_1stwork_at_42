/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:58:15 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 16:04:24 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	length;
	char	*temp;

	i = 0;
	length = ft_strlen(s);
	temp = malloc(sizeof(char) * (length + 1));
	if (!temp)
		return (NULL);
	while (i < length)
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

// char char_plus_one(unsigned int i, char c)
// {
//     return c + (2 + i);
// }

// int main()
// {
//     char *str = "Hello";
//     char *new_str = ft_strmapi(str, char_plus_one);
//     printf("%s\n", new_str);
//     return 0;
// }
