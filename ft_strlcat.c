/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:38:27 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/01 21:43:27 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while (src[counter] != '\0')
		counter++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (counter);
}

//compare my function with the original function
// int	main(void)
// {
// 	char	str[] = "Hello there, Venus";
// 	char	dest[19];
// 	int		r;
//
// 	r = ft_strlcat(dest, str, 19);
// 	printf("n=10, r18 = %d, %s", r, dest);
// 	r = ft_strlcat(dest, str, 10);
// 	printf("n=10, r18 = %d, %s", r, dest);
// 	r = ft_strlcat(dest, str, 1);
// 	printf("n=1, r18 = %d, %s", r, dest);
// 	return (0);
// }
