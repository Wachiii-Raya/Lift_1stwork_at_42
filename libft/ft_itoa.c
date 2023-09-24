/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:03:41 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 17:57:58 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	count_length_num(long n)
{
	int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = (-1) * n;
		length++;
	}
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int num)
{
	long	n;
	int		i;
	int		len;
	char	*temp;

	n = num;
	i = 0;
	len = count_length_num(n);
	if (n < 0)
		n = -n;
	temp = malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	while (i < len)
	{
		temp[len - 1 - i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	if (num < 0)
		*temp = '-';
	temp[i] = '\0';
	return (temp);
}
// #include <stdio.h>
// int main(void)
// {
// 	// printf("num length: %d\n", count_length_num(0));

// 	int num_1 = 12;
// 	int num_2 = -112;

// 	printf("input_1: %d\n", num_1);
// 	printf("output_1: %s\n", ft_itoa(num_1));
// 	printf("-------------------------\n");
// 	printf("input_2: %d\n", num_2);
// 	printf("output_2: %s\n", ft_itoa(num_2));
// }
