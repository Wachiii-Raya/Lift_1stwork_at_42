/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:19:43 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/01 21:35:06 by wchumane         ###   ########.fr       */
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

int main(void)
{
	char	str[300];

	strcpy(str, "   ---+--+1234ab567");
	printf("Input : %s\n", str);
	printf("Expect: -1234\n");
	printf("Result: %d\n", ft_atoi(str));

	strcpy(str, "   --- +--+12a34ab567");
	printf("Input : %s\n", str);
	printf("Expect: 0\n");
	printf("Result: %d\n", ft_atoi(str));

	strcpy(str, "   1234ab567");
	printf("Input : %s\n", str);
	printf("Expect: 1234\n");
	printf("Result: %d\n", ft_atoi(str));

	strcpy(str, "   ---+--+123-4ab567");
	printf("Input : %s\n", str);
	printf("Expect: -123\n");
	printf("Result: %d\n", ft_atoi(str));
}
