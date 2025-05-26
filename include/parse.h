/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:52:07 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 12:52:09 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include "cub3d.h"

typedef struct s_cube	t_cube;

char	*create_spaces(int len);
char	*create_vector(char *src, int start, int size);
char	*ft_specialdup(const char *s1, size_t len);
char	*get_ceiling(char **matrix);
char	**get_colors(char **matrix);
char	*get_east(char **matrix);
char	*get_floor(char **matrix);
char	**get_map(char **matrix);
char	*get_north(char **matrix);
char	*get_resolution(char **matrix);
char	*get_south(char **matrix);
char	*get_sprite(char **matrix);
char	**get_texture_map(char **matrix, t_cube *cub);
char	*get_west(char **matrix);
int		**colorstrtoint(char **colors);
int		count_char(char *src, char key);
int		count_comma(char *str, int position);
int		count_matrix(char **matrix);
int		count_n(char *src, int start);
int		count_space(char *src);
int		count_str(char *src, char *key);
int		error_argc(int argc);
int		error_filename(char *argv);
int		error_menu(char **argv, int argc);
int		error_permission(char *argv, t_cube *cub);
int		get_r(char *str, int *position);
int		get_g(char *str, int *position);
int		get_b(char *str, int position);
int		locate_char(char *src, int start, char key);
int		search_max_len(char **matrix, int start);
int		size_map(char **matrix, int start);
int		start_map(char **matrix);
void	color_error(int i, int j, t_cube *cub);
void	color_rgb(int **colors, t_cube *cub);
void	color_validation(int **colors, t_cube *cub);
void	free_matrix(char **matrix);
void	get_file(int fd, t_cube *cube);
void	invalid_lines(char **file, t_cube *cub);
void	lines_error(t_cube *cub);
void	map_validation(char **map, int lines, int columns, t_cube *cub);
void	search_invalid_char(char **map, t_cube *cub);
void	set_scale(char **map, t_cube *cub);
void	texture_null(char **texture, t_cube *cub);
void	texture_path(char **texture, t_cube *cub);
void	texture_validation(char **texture, t_cube *cub);
void	texture_little(char **texture, t_cube *cub);
void	texture_xpm(char **texture, t_cube *cub);
#endif
