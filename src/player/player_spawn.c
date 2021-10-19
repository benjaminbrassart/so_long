/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_spawn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 06:37:06 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/19 08:12:17 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "player.h"

void	player_spawn(void)
{
	t_map *const	map = _map();
	t_player *const	player = _player();

	player->position_x = map->spawn_x;
	player->position_y = map->spawn_y;
	player_draw();
}
