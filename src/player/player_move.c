/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:07:47 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 05:15:21 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "map.h"
#include "player.h"

void	player_move(int motion_x, int motion_y)
{
	t_player *const	player = _player();
	int const		x = player->position_x + motion_x;
	int const		y = player->position_y + motion_y;
	t_tile			tile;

	if (!(motion_x || motion_y) || map_get_tile(_map(), x, y) == WALL)
		return ;
	player->position_x = x;
	player->position_y = y;
}
