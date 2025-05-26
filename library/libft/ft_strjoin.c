/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:38:05 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:38:06 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	char	*string;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	string = malloc(len_s1 + len_s2 + 1);
	if (!(string))
		return (NULL);
	ft_strlcpy(string, s1, len_s1 + 1);
	ft_strlcpy(string + len_s1, s2, len_s2 + 1);
	return (string);
}
