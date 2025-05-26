/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:21:54 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:22:01 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

// Get mapa matrix dimension
void	set_scale(char **map, t_cube *cub)
{
	cub->world.height = size_map(map, start_map(map));
	cub->world.width = search_max_len(map, start_map(map));
	search_invalid_char(map, cub);
	map_validation(map, 0, 0, cub);
	cub->world.height++;
}

void	print_map_error(t_cube *cub)
{
	ft_putstr_fd("Error\nInvalid char\n", 2);
	block_buster(cub);
	exit(0);
}

void	search_invalid_char(char **map, t_cube *cub)
{
	int	i;
	int	j;
	int	words;

	i = -1;
	words = 0;
	while (map[++i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == '0' || map[i][j] == '1' || map[i][j] == ' ')
				j++;
			else if (map[i][j] == 'N' || map[i][j] == 'S'
					|| map[i][j] == 'E' || map[i][j] == 'W')
			{
				j++;
				words++;
			}
			else
				print_map_error(cub);
		}
	}
	if (words != 1)
		print_map_error(cub);
}

void	map_validation(char **map, int lines, int columns, t_cube *cub)
{
	int	width;
	int	height;

	width = cub->world.width;
	height = cub->world.height + 1;
	{
		if ((lines < 0 || columns < 0 || lines >= height
				|| columns >= width)
			|| (map[lines][columns] != ' '
			&& map[lines][columns] != '0'))
			return ;
		if (map[lines][columns] == '0')
		{
			ft_putstr_fd("Error\nThe map must be closed.\n", 2);
			block_buster(cub);
			exit(0);
		}
		map[lines][columns] = '2';
		map_validation(map, lines + 1, columns, cub);
		map_validation(map, lines, columns + 1, cub);
		map_validation(map, lines - 1, columns, cub);
		map_validation(map, lines, columns - 1, cub);
	}
}
