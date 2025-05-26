/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:39:44 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:39:45 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)

{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)

{
	unsigned char	c;
	
	c = 122;

	if (ft_toupper(c) == toupper(c))
	{
		printf("OK!!!\n");
		printf("%c\t%c", ft_toupper(c), toupper(c));
	}
	else
	{
		printf("KO!!!\n");
		printf("%c\t%c", ft_toupper(c), toupper(c));
	}

	return (0);
}*/
