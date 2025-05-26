/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:38:56 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:38:57 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	size_t	i;
	size_t	j;
	char	*substring;

	substring = (char *) needle;
	i = 0;
	if (needle[i] == '\0')
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == substring[j] && i < len)
		{
			if (substring[j + 1] == '\0')
			{
				if (j + i >= len)
					return (NULL);
				return ((char *) &haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
