/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:39:14 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:39:15 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)

{
	size_t	size_start;
	size_t	size_end;
	char	*string;

	if (!(s1) || !(set))
		return (NULL);
	size_end = ft_strlen(s1) - 1;
	size_start = 0;
	while (ft_strchr(set, s1[size_start]))
		size_start++;
	while (ft_strchr(set, s1[size_end]))
		size_end--;
	string = ft_substr(s1, size_start, size_end - size_start + 1);
	return (string);
}
