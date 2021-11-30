/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_spawn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 06:37:06 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 02:47:31 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"

void	player_spawn(t_instance *instance)
{
	t_map *const	map = &instance->map;
	t_player *const	player = &instance->player;

	player->side = TEXTURE_PLAYER_DOWN;
	player->position_x = map->spawn_x;
	player->position_y = map->spawn_y;
	player_draw(instance);
}
