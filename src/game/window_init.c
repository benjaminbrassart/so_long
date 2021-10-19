/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:22:19 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/19 08:19:58 by bbrassar         ###   ########.fr       */
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

	game->win = mlx_new_window(game->mlx, map->width * 32,
			map->height * 32 + 16, WIN_TITLE);
	if (!game->win)
		slexit(WINDOW_INIT);
	mlx_hook(game->win, 2, (1 << 0) | (1 << 1), key_handle, FT_NULL);
	mlx_hook(game->win, 17, 0, destroy_handle, FT_NULL);
}
