/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_get_tile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:05:08 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 09:31:39 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "tiles.h"

t_tile	map_get_tile(t_map *map, unsigned int x, unsigned int y)
{
	if (x >= map->width || y >= map->height)
		return (WALL);
	return (map->tiles[y * map->width + x]);
}
