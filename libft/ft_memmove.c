/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:52:28 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/09 01:37:14 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp;

	temp = dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
	{
		while (len--)
			*temp++ = *(char *)src++;
	}
	else
	{
		temp += len;
		src += len;
		while (len--)
			*--temp = *(char *)--src;
	}
	return (dst);
}
