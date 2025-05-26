/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:37:08 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:37:09 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexa(unsigned long num, char flag)

{
	static int	count;
	char		*base;
	char		*base2;

	count = 0;
	base = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	if (num >= 16)
		ft_puthexa(num / 16, flag);
	if (flag == 'X')
		count += ft_putchar(base2[num % 16]);
	else
		count += ft_putchar(base[num % 16]);
	return (count);
}

int	ft_puthexa_case(unsigned long num, char flag)

{
	return (ft_puthexa(num, flag));
}
