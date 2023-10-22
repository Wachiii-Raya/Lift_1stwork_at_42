/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:57:49 by wchumane          #+#    #+#             */
/*   Updated: 2023/10/16 20:59:52 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	// *lst is a node, **lst is
	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	(*lst)->next = new;
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
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*head = NULL;

// 	node1 = ft_lstnew("hello");
// 	node2 = ft_lstnew("guyyyy");
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_print(head);
// }
