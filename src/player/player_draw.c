/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_draw.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 06:38:00 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 02:45:46 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "player.h"
#include "texture.h"

void	player_draw(t_instance *instance)
{
	t_player *const		player = &instance->player;
	t_game *const		game = &instance->game;
	t_texture *const	texture = get_texture(instance, player->side);

	if (!texture)
		return ;
	mlx_put_image_to_window(game->display, game->window, texture->img,
		player->position_x * 32, player->position_y * 32);
}
