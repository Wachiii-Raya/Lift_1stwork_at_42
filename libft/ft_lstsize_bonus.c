/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:21:18 by wchumane          #+#    #+#             */
/*   Updated: 2023/10/21 18:44:55 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;
	t_list	*ptr;

	count = 0;
	ptr = lst;
	while(ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

void ft_print(t_list *head)
{
	while (head)
	{
		printf("%s\n",head->content);
		head = head->next;
	}
}

int	main(void)
{
	t_list	*node1 = NULL;
	t_list	*node2 = NULL;
	t_list	*head = NULL;
	int		size;

	node1 = ft_lstnew("hello");
	node2 = ft_lstnew("guyyyy");
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	size = ft_lstsize(head);
	printf("size of linked list: %d\n", size);
	ft_print(head);
}
