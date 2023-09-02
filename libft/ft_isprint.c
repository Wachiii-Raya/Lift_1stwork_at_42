/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 23:30:25 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/02 23:37:48 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	int c = 'a';
// 	printf("mine: %d\n", ft_isprint(c));
// 	printf("func: %d\n", isprint(c));
//
// 	return (0);
// }
