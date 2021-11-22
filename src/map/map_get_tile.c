/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_get_tile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:05:08 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 14:52:23 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "types.h"

t_tile	map_get_tile(t_instance *instance, int x, int y)
{
	t_map *const	map = &instance->map;

	if (x >= map->width || y >= map->height)
		return (WALL);
	return (map->tiles[y][x]);
}
