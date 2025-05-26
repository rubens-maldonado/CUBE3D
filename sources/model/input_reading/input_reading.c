/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_reading.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:15:11 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/08 13:15:21 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

static int	error_fd(char *argv)

{
	int	fd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd("Error\n", 2);
		perror(argv);
		exit(0);
	}
	return (fd);
}

// Check valid input and return fd of opened map
int	error_menu(char **argv, int argc)
{
	int	fd;

	fd = -1;
	error_argc(argc);
	error_filename(argv[1]);
	fd = error_fd(argv[1]);
	return (fd);
}

// Print error message
int	error_argc(int argc)
{
	if (argc != 2)
	{
		ft_putstr_fd("Error\n", 2);
		ft_putstr_fd("The game must be initialized ", 2);
		ft_putstr_fd("with the following arguments:\n", 2);
		ft_putstr_fd("./cub3d filename.cub\n", 2);
		exit(0);
	}
	return (1);
}

// Open map argument, check opened file and return fd of file
int	error_permission(char *argv, t_cube *cub)
{
	int	fd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd("Error\n", 2);
		perror(argv);
		block_buster(cub);
		exit(0);
	}
	return (fd);
}

// Check valid map file extension
int	error_filename(char *argv)
{
	int		size;
	int		start;
	char	*res;

	size = ft_strlen(argv);
	start = size - 4;
	res = ft_substr(argv, start, size);
	if (!res || ft_strncmp(res, ".cub", 4))
	{
		ft_putstr_fd("Error\n", 2);
		ft_putstr_fd("The extension of map must be .cub\n", 2);
		free(res);
		exit(0);
	}
	free(res);
	return (1);
}
