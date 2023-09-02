/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 22:58:54 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/02 15:17:10 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
//test with original function ctype.h
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	int c = 'a';
// 	printf("mine: %d\n", ft_isalnum(c));
// 	printf("func: %d\n", isalnum(c));
//
// 	return (0);
// }
