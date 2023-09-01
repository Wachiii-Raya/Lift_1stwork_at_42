/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:30:17 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/01 21:36:52 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dest, char *src, unsigned int size)
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

int	main(void)
{
	char	str[] = "Hello there, Venus";
	char	dest[19];
	int		r;

	r = ft_strlcpy(dest, str, 19);
	printf("n=10, r18 = %d, %s", r, dest);
	r = ft_strlcpy(dest, str, 10);
	printf("n=10, r18 = %d, %s", r, dest);
	r = ft_strlcpy(dest, str, 1);
	printf("n=1, r18 = %d, %s", r, dest);
	return (0);
}
