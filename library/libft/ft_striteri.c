/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:37:55 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:37:57 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))

{
	unsigned int	index;

	index = -1;
	if (!(s))
		return ;
	while (s[++index])
		f(index, s + index);
}
