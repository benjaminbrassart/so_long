/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_get_tile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:05:08 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/16 06:54:10 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "tiles.h"

t_tile	map_get_tile(unsigned int x, unsigned int y)
{
	t_map *const	map = _map();

	if (x >= map->width || y >= map->height)
		return (WALL);
	return (map->tiles[y * map->width + x]);
}
