/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:41:29 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/01 21:41:47 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	printf("mine: %d\n", ft_strcmp("h", "H"));
// 	printf("mine: %d\n", ft_strcmp("H", "h"));
// 	printf("mine: %d\n", ft_strcmp("H", "H"));
//	printf("func: %d\n", strcmp("Hello", "Hello1"));
//	printf("func: %d\n", strcmp("Hello", "He"));
// }
