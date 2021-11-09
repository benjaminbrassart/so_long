/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slexit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:20:57 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/09 17:22:07 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "game.h"
#include "map.h"
#include "mlx.h"
#include "slerror.h"
#include "texture.h"
#include <stdlib.h>
#include <string.h>

static struct s_errno_lt	*_get_errno(void)
{
	static struct s_errno_lt	errno_lt[] = {
	{MALLOC_FAILED, "Memory allocation failed"},
	{ARGUMENT_COUNT, "Expected 1 argument"},
	{FILE_EXTENSION, "Map file extension must be '.ber'"},
	{MAP_SHAPE, "Map must be rectangular"},
	{MAP_WALLS, "Map must be surrounded by walls"},
	{MAP_EXITS, "Map must have at least 1 exit"},
	{MAP_COLLECTIBLES, "Map must have at least 1 collectible"},
	{MAP_SPAWNS, "Map must have 1 spawn"},
	{MLX_INIT, "Failed to initialize display"},
	{WINDOW_INIT, "Failed to initialize window"},
	{IMAGE_LOAD, "Failed to load image"},
	{TEXTURE_DIMENSIONS, "Texture dimensions must be 32 by 32 pixels"},
	{NONE, FT_NULL}
	};

	return (errno_lt);
}

static char const	*_get_errno_message(t_errno err)
{
	struct s_errno_lt *const	g_errno = _get_errno();
	int							i;

	i = 0;
	while (g_errno[i].errnum != NONE && g_errno[i].errnum != err)
		++i;
	return (g_errno[i].message);
}

static void	_slexit(char const *message)
{
	t_game *const	game = _game();

	textures_destroy();
	if (game->mlx)
	{
		if (game->win)
			mlx_destroy_window(game->mlx, game->win);
		mlx_destroy_display(game->mlx);
		free(game->mlx);
	}
	map_delete();
	if (message)
	{
		ft_dprintf(2, "Error: %s\n", message);
		exit(1);
	}
	exit(0);
}

void	slexit(t_errno err)
{
	_slexit(_get_errno_message(err));
}

void	slexit_sys(int err)
{
	_slexit(strerror(err));
}
