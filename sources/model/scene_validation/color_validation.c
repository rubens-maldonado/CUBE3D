/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:23:03 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:23:10 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

// Validate ceil/floor color setting
void	color_rgb(int **colors, t_cube *cub)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	while (i < 2)
	{
		while (g < 3)
		{
			if (colors[i][g] < 0 || colors[i][g] > 255)
				color_error(i, g, cub);
			g++;
		}
		g = 0;
		i++;
	}
}

void	color_error(int i, int j, t_cube *cub)
{
	ft_putstr_fd("Error\n", 2);
	block_buster(cub);
	if (i == 0 && j == 0)
		ft_putstr_fd("Invalid Red Color of Floor\n", 2);
	if (i == 0 && j == 1)
		ft_putstr_fd("Invalid Green Color of Floor\n", 2);
	if (i == 0 && j == 2)
		ft_putstr_fd("Invalid Blue Color of Floor\n", 2);
	if (i == 1 && j == 0)
		ft_putstr_fd("Invalid Red Color of Ceiling\n", 2);
	if (i == 1 && j == 1)
		ft_putstr_fd("Invalid Green Color of Ceiling\n", 2);
	if (i == 1 && j == 2)
		ft_putstr_fd("Invalid Blue Color of Ceiling\n", 2);
	exit(0);
}
