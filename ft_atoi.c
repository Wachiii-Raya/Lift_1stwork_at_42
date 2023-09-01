/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:19:43 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/01 21:24:26 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	n_minus;
	int	num;

	i = 0;
	n_minus = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n_minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	if (n_minus % 2 == 1)
		num = num * -1;
	return (num);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "  ---+++--2434gg2";

	printf("%d\n", ft_atoi(str));
}*/
