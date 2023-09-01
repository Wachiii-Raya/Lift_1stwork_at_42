/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:26:18 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/01 21:37:48 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

int	main(void)
{
	printf("Expect: Hello = %d\n", (int) strlen("Hello"));
	printf("Result: Hello = %d\n", ft_strlen("Hello"));
	return (0);
}
