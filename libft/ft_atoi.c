/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:19:43 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/03 01:46:04 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * neg);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	str[300];

// 	strcpy(str, "   ---+--+1234ab567");
// 	printf("Input : %s\n", str);
// 	printf("Expect: -1234\n");
// 	printf("Result: %d\n", ft_atoi(str));

// 	strcpy(str, "   --- +--+12a34ab567");
// 	printf("Input : %s\n", str);
// 	printf("Expect: 0\n");
// 	printf("Result: %d\n", ft_atoi(str));

// 	strcpy(str, "   1234ab567");
// 	printf("Input : %s\n", str);
// 	printf("Expect: 1234\n");
// 	printf("Result: %d\n", ft_atoi(str));

// 	strcpy(str, "   ---+--+123-4ab567");
// 	printf("Input : %s\n", str);
// 	printf("Expect: -123\n");
// 	printf("Result: %d\n", ft_atoi(str));
// }
