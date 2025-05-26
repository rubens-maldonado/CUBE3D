/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:36:26 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:36:27 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	char	*source;
	char	*destiny;
	size_t	i;

	source = (char *) src;
	destiny = (char *) dst;
	if (len == 0 || source == destiny)
		return (dst);
	if (source > destiny)
	{
		i = 0;
		while (i < len)
		{
			destiny[i] = source[i];
			i++;
		}
		return (dst);
	}
	i = len - 1;
	while ((int) i >= 0)
	{
		destiny[i] = source[i];
		i--;
	}
	return (dst);
}
