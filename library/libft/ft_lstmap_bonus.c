/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:35:01 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:35:03 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

{
	t_list	*node;
	t_list	*head;
	t_list	*prev;

	head = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL && node->content == NULL)
		{
			ft_lstclear(&head, del);
			break ;
		}
		if (head == NULL)
			head = node;
		else
			prev->next = node;
		prev = node;
		lst = lst->next;
	}
	return (head);
}
