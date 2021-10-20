/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:07:47 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/20 07:08:41 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "game.h"
#include "map.h"
#include "player.h"

static void	_check_tile(t_tile tile, int x, int y)
{
	t_player *const	player = _player();

	if (tile == ITEM)
	{
		map_set_tile(x, y, EMPTY);
		++player->collectibles;
	}
	if (tile == EXIT && player->collectibles == _map()->collectibles)
	{
		ft_printf("Total moves: %u\n", player->moves);
		slexit(NONE);
	}
}

void	player_move(int motion_x, int motion_y)
{
	t_player *const	player = _player();
	int const		x = player->position_x + motion_x;
	int const		y = player->position_y + motion_y;
	t_tile const	tile = map_get_tile(x, y);

	if (!(motion_x || motion_y) || tile == WALL)
		return ;
	player->position_x = x;
	player->position_y = y;
	++(player->moves);
	_check_tile(tile, x, y);
	map_draw_tile(x - motion_x, y - motion_y);
	map_draw_tile(x, y);
	player_draw();
	update_moves();
}
