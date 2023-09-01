/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 23:29:22 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/01 23:30:11 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
// 	printf("mine: %d\n", ft_isascii(c));
// 	printf("func: %d\n", isascii(c));
//
// 	return (0);
// }
