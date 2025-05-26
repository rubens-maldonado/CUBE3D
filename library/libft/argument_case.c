/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_case.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:31:57 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:32:01 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	argument_case(char c, va_list arguments)

{
	int	count;

	if (c == 'c')
		return (ft_putchar(va_arg(arguments, int)));
	if (c == 's')
		return (ft_putstr(va_arg(arguments, char *)));
	if (c == 'x')
		return (ft_puthexa_case(va_arg(arguments, unsigned int), c));
	if ((c == 'd') || (c == 'i'))
		return (ft_putnbr(va_arg(arguments, int)));
	if (c == 'X')
		return (ft_puthexa_case(va_arg(arguments, unsigned int), c));
	if (c == 'p')
	{
		count = ft_putstr("0x");
		return (count + ft_puthexa_case(va_arg(arguments, unsigned long), c));
	}
	if (c == 'u')
		return (ft_putunbr(va_arg(arguments, unsigned int)));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
