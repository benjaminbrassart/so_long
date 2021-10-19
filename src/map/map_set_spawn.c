/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_set_spawn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 06:55:40 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/19 06:56:09 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	map_set_spawn(unsigned int x, unsigned int y)
{
	t_map *const	map = _map();

	map->spawn_x = x;
	map->spawn_y = y;
}
