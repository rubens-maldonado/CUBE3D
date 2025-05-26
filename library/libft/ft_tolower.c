/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:39:33 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:39:34 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)

{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)

{
	unsigned char c;

	c = 20;
	if (ft_tolower(c) == tolower(c))
		printf("OK!!");
	else
		printf("KO!!");
	return (0);
}*/
