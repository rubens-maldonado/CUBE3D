/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:26:17 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:26:19 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "raycasting.h"

// Initialize cub struct variables
void	init_vars(t_cube *cub)
{
	cub->ray.r_spd = 0.05;
	cub->ray.m_spd = 0.1;
	cub->ray.rad90 = (M_PI / 2);
}

// Constant update of cub struct variables
void	update_vars(t_cube *cub)
{
	cub->ray.time = 0;
	cub->ray.stepx = 0;
	cub->ray.stepy = 0;
	cub->ray.side = 0;
}
