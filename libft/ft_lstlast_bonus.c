/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:29:06 by wchumane          #+#    #+#             */
/*   Updated: 2023/10/22 12:48:55 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (!lst)
		return NULL;
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}

// t_list	*ft_test_lstnew(t_list *lst)
// {
// 	t_list	*node;

// 	node = malloc(sizeof(t_list));
// 	node->content = lst;
// 	node->next = NULL;
// 	return (node);
// }

// void	ft_test_print(t_list *head)
// {
// 	while (head)
// 	{
// 		printf("content inside the linked list: %s\n", head->content);
// 		head = head->next;
// 	}
// }

// int	main(void)
// {
// 	t_list	*node1 = NULL;
// 	t_list	*node2 = NULL;
// 	t_list	*node3 = NULL;
// 	t_list	*head = NULL;
// 	t_list	*last = NULL;

// 	node1 = ft_test_lstnew("hello");
// 	node2 = ft_test_lstnew("my");
// 	node3 = ft_test_lstnew("sunshine");
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node2, node3);
// 	ft_test_print(head);
// 	last = ft_lstlast(head);
// 	ft_test_print(last);
// 	printf("last node: %s\n", last->content);

// }
