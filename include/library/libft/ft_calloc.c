/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:32:38 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:32:42 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	void	*allocate;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	size *= count;
	allocate = malloc(size * sizeof(char));
	if (!(allocate))
		return (NULL);
	ft_bzero(allocate, (size));
	return (allocate);
}
