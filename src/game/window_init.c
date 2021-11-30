/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:22:19 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 02:55:43 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_def.h"
#include "game.h"
#include "handle.h"
#include "mlx.h"
#include "slerror.h"
#include <X11/X.h>

t_bool	window_init(t_instance *instance)
{
	t_game *const	game = &instance->game;
	t_map *const	map = &instance->map;

	game->window = mlx_new_window(game->display, map->width * 32,
			map->height * 32 + 16, WIN_TITLE);
	if (!game->window)
	{
		print_error(ERROR_WINDOW_INIT);
		return (false);
	}
	mlx_hook(game->window, KeyPress, KeyPressMask, key_handle, instance);
	mlx_hook(game->window, DestroyNotify, NoEventMask, destroy_handle,
		instance);
	return (true);
}
