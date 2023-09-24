/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:21:21 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 01:27:25 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	i;
	size_t	end;
	char	*temp;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (is_set(s1[start], set) && s1[start])
		start++;
	while (end > start && is_set(s1[end - 1], set) == 1)
		end--;
	temp = malloc(sizeof(char) * (end - start + 1));
	if (!temp)
		return (NULL);
	while (start < end)
	{
		temp[i++] = s1[start++];
	}
	temp[i] = '\0';
	return (temp);
}
// // while loop to check if set is in s1 both endpoinds
// // sub while loop to check each char of set in s1
// // trim!! >> count index and remove until that pointer
// // malloc
// int main(void)
// {
// 	char *s1 = "";
// 	char *set = "";

// 	if (printf("eiei") && 0 && printf("yyyy"))
// 		return (0);
// }
