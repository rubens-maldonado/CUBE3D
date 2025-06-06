/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:40:12 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:40:13 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(char c)

{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)

{
	int	i;

	i = 0;
	if (!(str))
	{
		i = write(1, "(null)", 6);
		return (i);
	}
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	ft_putnbr(int num)

{
	static int	count;
	int			sign;

	sign = 0;
	count = 0;
	if (num == -2147483648)
	{
		count = write(1, "-2147483648", 11);
		return (count);
	}
	if (num < 0)
	{
		sign = ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	count += ft_putchar((num % 10) + 48);
	return (count + sign);
}

int	ft_putunbr(unsigned int number)

{
	static int	count;

	count = 0;
	if (number >= 10)
		ft_putunbr(number / 10);
	count += ft_putchar((number % 10) + 48);
	return (count);
}
