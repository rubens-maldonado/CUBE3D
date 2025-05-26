/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:25:19 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 13:22:12 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	render_box(t_cube *cub, int x, int y, int color);

void	draw_map(t_cube *cub)
{
	int		y;
	int		x;

	x = 0;
	y = 0;
	while (cub->world.map[y])
	{
		x = 0;
		while (cub->world.map[y][x])
		{
			if (cub->world.map[y][x] != '1')
				render_box(cub, x * 8, y * 8, 0xFFFFFFFF);
			if (cub->world.map[y][x] == '1')
				render_box(cub, x * 8, y * 8, 0xFF000000);
			x++;
		}
		y++;
	}
	render_box (cub, cub->ray.posx * 8, cub->ray.posy * 8, 0xFF0000FF);
}

static void	render_box(t_cube *cub, int x, int y, int color)
{
	int	i;
	int	j;
	int	len;
	int	old_x;

	len = 8;
	if (color == (int)0xFF0000FF)
		len = 4;
	i = y + len;
	j = x + len;
	old_x = x;
	while (y < i)
	{
		x = old_x;
		while (x < j)
			put_pixel(cub, x++, y, color);
		y++;
	}
}
