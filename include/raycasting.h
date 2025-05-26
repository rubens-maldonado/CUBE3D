/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:52:28 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:52:29 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAYCASTING_H
# define RAYCASTING_H

# include "cub3d.h"

typedef struct s_text	t_text;

typedef struct s_cube	t_cube;

int		load_engine(t_cube *cub);

//  SET VALUES //

void	set_value(t_cube *cub, int pixel);
void	set_distplayerbox(t_cube *cub);
void	line_start(t_cube *cub);
t_text	*set_texture(t_cube *cub);
void	start_dda(t_cube *cub);
void	init_vars(t_cube *cub);
void	update_vars(t_cube *cub);
void	set_dir(t_cube *cub, char pos);

// SET HOOKS //

void	init_hooks(t_cube *cub);

#endif
