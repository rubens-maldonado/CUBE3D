/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_strutils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:46:51 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:46:58 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgc.h"

char	*gc_strdup(const char *str)
{
	char	*dup;
	char	*ptr;
	int		len;

	if (!str)
		return (0);
	len = 0;
	while (*(str + len))
		len ++;
	dup = malloc(len + 1);
	if (!dup)
	{
		errno = ENOMEM;
		return (0);
	}
	ptr = dup;
	while (*str)
		*dup++ = *str++;
	*dup = '\0';
	return (ptr);
}
