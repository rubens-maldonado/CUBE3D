/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:38:41 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:38:42 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

{
	unsigned int	index;
	char			*string;

	if (!(s))
		return (NULL);
	string = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!(string))
		return (NULL);
	index = -1;
	while (s[++index])
		string[index] = f(index, s[index]);
	return (string);
}
