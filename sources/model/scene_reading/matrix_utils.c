/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:16:58 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:17:27 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	count_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		i++;
	return (i);
}

void	free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

void	print_matrix(char **matrix)

{
	int	i;

	i = 0;
	while (matrix[i])
		ft_printf("%s\n", matrix[i++]);
}

char	*create_spaces(int len)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = malloc(sizeof(char) * (len + 2));
	while (i <= len)
	{
		tmp[i] = ' ';
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
