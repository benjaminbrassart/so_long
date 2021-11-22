/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:07:47 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 15:38:44 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "game.h"
#include "map.h"
#include "player.h"
#include "texture.h"

static void	_check_tile(t_instance *instance, t_tile tile, int x, int y)
{
	if (tile == ITEM)
	{
		map_set_tile(&instance->map, x, y, EMPTY);
		++instance->player.items;
	}
	if (tile == EXIT && instance->player.items == instance->map.items)
	{
		ft_puts("Total moves: ");
		ft_putui(instance->player.moves);
		ft_putc('\n');
		instance->game.running = false;
	}
}

static void	_set_side(t_instance *instance, int motion_x, int motion_y)
{
	t_texture_id	texture_id;

	if (motion_x == -1)
		texture_id = TEXTURE_PLAYER_LEFT;
	if (motion_x == 1)
		texture_id = TEXTURE_PLAYER_RIGHT;
	if (motion_y == -1)
		texture_id = TEXTURE_PLAYER_UP;
	if (motion_y == 1)
		texture_id = TEXTURE_PLAYER_DOWN;
	instance->player.side = get_texture();
}

void	player_move(t_instance *instance, int mx, int my)
{
	int const		x = player->position_x + mx;
	int const		y = player->position_y + my;
	t_tile const	tile = map_get_tile(map, x, y);

	_set_side(player, mx, my);
	if ((mx || my) && tile != WALL)
	{
		player->position_x = x;
		player->position_y = y;
		++(player->moves);
		_check_tile(instance, tile, x, y);
		map_draw_tile(map, x - mx, y - my);
		map_draw_tile(map, x, y);
	}
	player_draw(ins);
	update_moves();
}
