/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:59:16 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 01:34:30 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(char const *s, char c)
{
	int	i;
	int	counter;

	i = 1;
	counter = 0;
	if (s[0] == '\0')
		return (0);
	if (s[0] != c)
		counter++;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			counter++;
		i++;
	}
	return (counter);
}

static	char	**malloc_2dm(char **ptr, char const *s, size_t words, char c)
{
	size_t	i;
	size_t	j;
	size_t	counter;

	i = 0;
	j = 0;
	while (i < words)
	{
		counter = 0;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j++] != '\0' )
			counter++;
		ptr[i] = malloc(sizeof(char) * (counter + 1));
		if (!ptr[i])
		{
			while (--i >= 0)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		i++;
	}
	return (ptr);
}

static	char	**ft_fill_words(char **ptr, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (i < words)
	{
		j = 0;
		while (s[k] == c)
			k++;
		while ((s[k] != c && s[k] != '\0'))
		{
			ptr[i][j] = s[k];
			j++;
			k++;
		}
		ptr[i][j] = '\0';
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	ptr = malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	ptr = malloc_2dm(ptr, s, words, c);
	if (!ptr)
		return (NULL);
	ptr = ft_fill_words(ptr, s, c, words);
	return (ptr);
}
// int    main (void)
// {
//     printf("\n======test =====\n");
// 	// char         arr1[100] = "\0a";
// 	char         arr1[100] = "hello world";
//     char         **ans;
//     unsigned    j;
//     j = 0;
//     ans = ft_split(arr1, ' ');
//     printf("test string : %s\n", arr1 );
//     while (ans[j])
//     {
//             printf("ans[%d] :%s\n", j ,ans[j]);
//             j++;
//     }
// }
