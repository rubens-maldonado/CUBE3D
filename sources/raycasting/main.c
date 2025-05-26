/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:27:01 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:27:03 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
	1 - Validação do arquivo e dos dados
	2 - Normalização dos dados e preechimento de dados nas estruturas
	3 - Inicialização da mlx
	4 - Eventos de movimentação - mlx hook
	5 - Eventos de Janela - mlx hook
	6 - Inicialização dos dados do player
	7 - Carregar as texturas
	8 - Vizualização inical do player
	9 - Troca de pixel de textura.
*/

// Don't miss to init textures atributes here
void	init_mlx(t_cube *cub)
{
	t_mlx	*mlx;

	mlx = &cub->mlx;
	mlx->init = mlx_init();
	mlx->win = mlx_new_window(mlx->init, SCREEN_W, SCREEN_H, "Minecasting");
	mlx->img = mlx_new_image(mlx->init, SCREEN_W, SCREEN_H);
	mlx->addr = mlx_get_data_addr(mlx->img, &mlx->bpp, \
		&mlx->line_len, &mlx->endian);
}

// Begin of program
int	main(int argc, char **argv)
{
	t_cube	cub;
	int		fd;

	ft_bzero(&cub, sizeof(t_cube));
	init_vars(&cub);
	fd = error_menu(argv, argc);
	get_file(fd, &cub);
	init_mlx(&cub);
	init_texture(&cub, cub.world.texture);
	init_hooks(&cub);
	integration(&cub);
	mlx_loop_hook(cub.mlx.init, load_engine, &cub);
	mlx_loop(cub.mlx.init);
	return (0);
}
