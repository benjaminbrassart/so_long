/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_draw.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 06:38:00 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/06 14:38:20 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "mlx.h"
#include "player.h"
#include "texture.h"

static t_texture	*_get_side_texture(t_side side)
{
	enum e_texture	num_texture;

	if (side == UP)
		num_texture = T_PLAYER_UP;
	else if (side == LEFT)
		num_texture = T_PLAYER_LEFT;
	else if (side == DOWN)
		num_texture = T_PLAYER_DOWN;
	else
		num_texture = T_PLAYER_RIGHT;
	return (get_texture(num_texture));
}

void	player_draw(void)
{
	t_player *const	player = _player();

	mlx_put_image_to_window(_game()->mlx, _game()->win,
		_get_side_texture(player->side)->img, player->position_x * 32,
		player->position_y * 32);
}
