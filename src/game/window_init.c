/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:22:19 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/19 04:28:19 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "game.h"
#include "map.h"
#include "mlx.h"
#include "texture.h"

void	window_init(void)
{
	t_game *const	game = _game();
	t_map *const	map = _map();

	game->win = mlx_new_window(game->mlx, map->width * 32, map->height * 32 + 32,
			WIN_TITLE);
	if (!game->win)
		slexit(WINDOW_INIT);
	map_draw();
	mlx_key_hook(game->win, key_handle, FT_NULL);
	mlx_hook(game->win, 17, 0, destroy_handle, FT_NULL);
}
