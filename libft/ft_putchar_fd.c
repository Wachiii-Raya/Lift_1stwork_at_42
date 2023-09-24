/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:28:53 by wchumane          #+#    #+#             */
/*   Updated: 2023/09/24 17:10:03 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>
// #include <unistd.h>
// int main(void)
// {
// //	int fd = open("example_fd", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	printf("fd: %d\n", 1);
// 	ft_putchar_fd('C', 1);
// 	close(fd);
// }
