/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene_reading.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:19:52 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:19:55 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

// Get opened map proprieties
void	get_file(int fd, t_cube *cub)
{
	char	*gnl;
	char	*res;
	char	**matrix;

	res = NULL;
	matrix = NULL;
	while (42)
	{
		gnl = get_next_line(fd);
		if (!gnl)
			break ;
		gnl = ft_strjoin_gnl(gnl, "$");
		res = ft_strjoin_gnl(res, gnl);
		free(gnl);
	}
	matrix = ft_split(res, '$');
	cub->world.texture = get_texture_map(matrix, cub);
	cub->world.colors = colorstrtoint(get_colors(matrix));
	cub->world.map = get_map(matrix);
	free_matrix(matrix);
	free(res);
	texture_validation(cub->world.texture, cub);
	color_rgb(cub->world.colors, cub);
	set_scale(cub->world.map, cub);
}

// Read map file matrix and extract texture settings
char	**get_texture_map(char **matrix, t_cube *cub)
{
	char	**texture;

	invalid_lines(matrix, cub);
	texture = ft_calloc(sizeof(char *), 5);
	texture[NO] = get_north(matrix);
	texture[EA] = get_east(matrix);
	texture[SO] = get_south(matrix);
	texture[WE] = get_west(matrix);
	return (texture);
}

// Get ceil/floor setting lines
char	**get_colors(char **matrix)
{
	char	**colors;

	colors = ft_calloc(sizeof(char *), 3);
	colors[F] = get_floor(matrix);
	colors[C] = get_ceiling(matrix);
	if (!colors[F] || !colors[C])
	{
		ft_putstr_fd("Error\n", 2);
		ft_putstr_fd("Any color not defined\n", 2);
		free_matrix(matrix);
		free_matrix(colors);
		exit(0);
	}
	return (colors);
}

// Mount map in a matrix of array
char	**get_map(char **matrix)
{
	int		size;
	int		start;
	int		max;
	int		i;
	char	**map;

	start = start_map(matrix);
	size = size_map(matrix, start);
	max = search_max_len(matrix, start);
	map = malloc(sizeof(char *) * (size + 3));
	map[0] = create_spaces(max);
	i = 1;
	while (i <= size)
	{
		map[i] = ft_specialdup(matrix[start], max);
		i++;
		start++;
		if (matrix[start] == 0)
			break ;
	}
	map[i] = create_spaces(max);
	map[i + 1] = NULL;
	return (map);
}
