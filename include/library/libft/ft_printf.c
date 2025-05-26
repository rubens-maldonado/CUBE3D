/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:36:44 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:36:45 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *text, ...)

{
	va_list	arguments;
	int		symbol;
	int		result;

	symbol = 0;
	result = 0;
	va_start(arguments, text);
	while (text[symbol])
	{
		if (text[symbol] == '%' && ft_strchr("cspdiuxX%", text[symbol + 1]))
		{
			result += argument_case(text[symbol + 1], arguments);
			symbol++;
		}
		else
		{
			ft_putchar(text[symbol]);
			result++;
		}
		symbol++;
	}
	va_end(arguments);
	return (result);
}
