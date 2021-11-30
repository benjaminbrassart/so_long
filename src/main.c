/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:29:24 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 03:08:21 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_def.h"
#include "ft_string.h"
#include "game.h"
#include "handle.h"
#include "map.h"
#include "mlx.h"
#include "player.h"
#include "texture.h"
#include "slerror.h"
#include "types.h"
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

static t_bool	_check_args(int argc, char *argv[])
{
	if (argc != 2)
		print_error(ERROR_ARGUMENT_COUNT);
	else if (!ft_strrstr(argv[1], ".ber"))
		print_error(ERROR_FILE_EXTENSION);
	else
		return (true);
	return (false);
}

int	main(int argc, char *argv[])
{
	t_instance	instance;
	int			fd;

	if (!_check_args(argc, argv))
		return (EXIT_FAILURE);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error(strerror(errno));
		return (EXIT_FAILURE);
	}
	ft_bzero(&instance, sizeof (instance));
	instance.game.exit_status = EXIT_FAILURE;
	if (display_init(&instance) && map_load(&instance, fd, argv[1])
		&& map_check(&instance) && textures_load(&instance)
		&& window_init(&instance))
	{
		map_draw(&instance);
		update_moves(&instance);
		instance.game.exit_status = EXIT_SUCCESS;
		player_spawn(&instance);
		mlx_loop(instance.game.display);
	}
	destroy_handle(&instance);
}
