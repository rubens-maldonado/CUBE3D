/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_reading.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:20:10 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:20:11 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

// Check existing north setting, and return her
char	*get_north(char **matrix)
{
	int		i;
	int		size;
	int		start;
	char	*res;

	i = 0;
	start = 0;
	size = 0;
	while (matrix[i])
	{
		if (ft_strnstr(matrix[i], "NO ", ft_strlen(matrix[i])))
		{
			start = count_space(matrix[i]);
			size = count_n(matrix[i], start);
			break ;
		}
		i++;
	}
	res = create_vector(matrix[i], start, size);
	if (res)
		return (res);
	return (NULL);
}

// Check existing south setting, and return her
char	*get_south(char **matrix)
{
	int		i;
	int		size;
	int		start;
	char	*res;

	i = 0;
	start = 0;
	size = 0;
	while (matrix[i])
	{
		if (ft_strnstr(matrix[i], "SO ", ft_strlen(matrix[i])))
		{
			start = count_space(matrix[i]);
			size = count_n(matrix[i], start);
			break ;
		}
		i++;
	}
	res = create_vector(matrix[i], start, size);
	if (res)
		return (res);
	return (NULL);
}

// Check existing west setting, and return her
char	*get_west(char **matrix)
{
	int		i;
	int		size;
	int		start;
	char	*res;

	i = 0;
	start = 0;
	size = 0;
	while (matrix[i])
	{
		if (ft_strnstr(matrix[i], "WE ", ft_strlen(matrix[i])))
		{
			start = count_space(matrix[i]);
			size = count_n(matrix[i], start);
			break ;
		}
		i++;
	}
	res = create_vector(matrix[i], start, size);
	if (res)
		return (res);
	return (NULL);
}

// Check existing east setting, and return her
char	*get_east(char **matrix)
{
	int		i;
	int		size;
	int		start;
	char	*res;

	i = 0;
	size = 0;
	start = 0;
	while (matrix[i])
	{
		if (ft_strnstr(matrix[i], "EA ", ft_strlen(matrix[i])))
		{
			start = count_space(matrix[i]);
			size = count_n(matrix[i], start);
			break ;
		}
		i++;
	}
	res = create_vector(matrix[i], start, size);
	if (res)
		return (res);
	return (NULL);
}
