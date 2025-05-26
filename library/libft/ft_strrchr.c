/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:39:07 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:39:08 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)

{
	size_t	len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *) &s[len]);
	while (len-- > 0)
	{
		if (s[len] == (unsigned char) c)
			return ((char *) &s[len]);
	}
	return (NULL);
}

/* #include <string.h>
#include <stdio.h>

int main(void)

{
    char    *dest;
	char 	*origin;

	origin = strrchr("Victor", '0');
    dest = ft_strrchr("Victor", '0');
	puts(origin) ;
    puts(dest);
}
 */
