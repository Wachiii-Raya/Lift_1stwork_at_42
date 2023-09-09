/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 01:41:16 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/09 15:22:57 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				a;
	int				b;
	unsigned char	d;

	d = c;
	a = 0;
	b = 0;
	if (d == '\0')
	{
		b = ft_strlen(s);
		return ((char *)s + b);
	}
	while (s[a])
	{
		if (s[a] == d)
			return ((char *)s + a);
		a++;
	}
	return (NULL);
}
