/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:19:43 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 10:52:02 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	check_overflow(int i)
{
	if (i == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *s)
{
	int		i;
	int		neg;
	long	num;

	i = 0;
	neg = 1;
	num = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\r' || s[i] == '\v'
		|| s[i] == '\f' || s[i] == ' ')
		i++;
	if (s[i] == '-')
		neg = -1;
	if ((s[i] == '-') || (s[i] == '+'))
		i++;
	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		num = (num * 10) + (s[i] - '0');
		i++;
		if (num < 0)
			return (check_overflow(neg));
	}
	return (num * neg);
}
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
	// char str[] = "9223372036854775807";
	// char str[] = "9223372036854775808878876788767";
	// int result1 = atoi(str);
	// int result2 = ft_atoi(str);
	// printf("original result1 : %d\n", result1);
	// printf("my func result2 : %d\n", result2);

	// char str1[] = "   ---+--+1234ab567";
	// int result11 = atoi(str1);
	// int result21 = ft_atoi(str1);
	// printf("original result1 : %d\n", result11);
	// printf("my func result2 : %d\n", result21);

	// char str2[] = "   1234ab567";
	// int result12 = atoi(str2);
	// int result22 = ft_atoi(str2);
	// printf("original result1 : %d\n", result12);
	// printf("my func result2 : %d\n", result22);
// }
