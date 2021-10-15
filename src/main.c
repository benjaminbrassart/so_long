/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:29:24 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 07:11:50 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "ft_string.h"
#include "map.h"
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

static void	check_args(int argc, char *argv[])
{
	if (argc != 2)
		slexit(ARGUMENT_COUNT);
	if (!ft_strrstr(argv[1], ".ber"))
		slexit(FILE_EXTENSION);
}

int	main(int argc, char *argv[])
{
	int	fd;

	check_args(argc, argv);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		slexit_sys(errno);
	map_load(fd);
	map_check();
	slexit(0);
}
