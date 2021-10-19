/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_draw.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 06:38:00 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/19 08:20:26 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "mlx.h"
#include "player.h"
#include "texture.h"

void	player_draw(void)
{
	t_player *const	player = _player();

	mlx_put_image_to_window(_game()->mlx, _game()->win,
		get_texture(T_PLAYER)->img, player->position_x * 32,
		player->position_y * 32);
}
