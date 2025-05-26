/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_memutils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:46:19 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:46:20 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgc.h"

t_mem	*gc_memnew(void *ptr, char *context)
{
	t_mem	*new;

	new = malloc(sizeof(t_mem));
	if (new)
	{
		new->ptr = ptr;
		new->ctx = gc_strdup(context);
		new->next = 0;
	}
	else
		errno = ENOMEM;
	return (new);
}

void	gc_memadd_back(t_mem **mem, t_mem *new)
{
	t_mem	*lst;

	lst = *mem;
	if (lst)
		while (lst->next)
			lst = lst->next;
	if (!lst)
		*mem = new;
	else
		lst->next = new;
}

int	gc_memsize(t_mem *mem)
{
	int	len;

	len = 0;
	while (mem)
	{
		len++;
		mem = mem->next;
	}
	return (len);
}
