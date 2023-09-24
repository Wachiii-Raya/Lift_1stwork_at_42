/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:53:48 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 17:58:06 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

// #include <fcntl.h>
// #include <unistd.h>
// int main(void)
// {
// 	// int fd = open("example_fd", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	// printf("fd: %d\n", fd);
// 	ft_putstr_fd("ksdjfkjdsfg", 1);
// 	close(fd);
// }
