/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 01:52:52 by wchumane          #+#    #+#             */
/*   Updated: 2023/10/16 20:56:57 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *temp;

	temp = malloc(sizeof(t_list));
	temp->content = content;
	temp->next = NULL;
	return (temp);
}

// int	main(void)
// {
// 	char	*str;
// 	t_list	*head;

// 	str = "hell is exam";
// 	head = ft_lstnew(str);
// 	printf("output: %s\n", head->content);
// }
