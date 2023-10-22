/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:49:18 by wchumane          #+#    #+#             */
/*   Updated: 2023/10/16 20:59:56 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!(*lst))
		*lst = new;
	else{
		new->next = *lst;
		(*lst)->next = NULL;
		*lst = new;
	}
}

// void ft_print(t_list *head)
// {
// 	while (head)
// 	{
// 		printf("%s\n",head->content);
// 		head = head->next;
// 	}
// }

// int	main(void)
// {
// 	t_list	*node1 = NULL;
// 	t_list	*node2 = NULL;
// 	t_list	*head = NULL;

// 	node1 = ft_lstnew("hello");
// 	node2 = ft_lstnew("guyyyy");
// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	ft_print(head);
// }
