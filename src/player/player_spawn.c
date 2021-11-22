/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_spawn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 06:37:06 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 11:13:40 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "player.h"

void	player_spawn(void)
{
	t_map *const	map = get_map();
	t_player *const	player = get_player();

	player->position_x = map->spawn_x;
	player->position_y = map->spawn_y;
	player_draw();
}
