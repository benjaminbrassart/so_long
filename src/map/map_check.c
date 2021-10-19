/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 06:51:04 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/19 08:13:09 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "map.h"
#include "slerror.h"

static void	_update_map_props(char tile, t_map_tiles *mt)
{
	if (tile == SPAWN && ++mt->spawns > 1)
		slexit(MAP_SPAWNS);
	if (tile == ITEM)
		++mt->collectibles;
	if (tile == EXIT)
		++mt->exits;
}

static void	_check_map_props(t_map_tiles *mt)
{
	if (mt->spawns != 1)
		slexit(MAP_SPAWNS);
	if (mt->collectibles == 0)
		slexit(MAP_COLLECTIBLES);
	if (mt->exits == 0)
		slexit(MAP_EXITS);
	_map()->collectibles = mt->collectibles;
}

void	map_check(void)
{
	t_map *const	map = _map();
	char const		*tiles = map->tiles;
	unsigned int	x;
	unsigned int	y;
	t_map_tiles		mt;

	ft_bzero(&mt, sizeof (mt));
	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			if (((y == 0 || y == map->height - 1)
					|| (x == 0 || x == map->width - 1))
				&& tiles[map->width * y + x] != WALL)
				slexit(MAP_WALLS);
			_update_map_props(tiles[map->width * y + x], &mt);
			if (tiles[map->width * y + x] == SPAWN)
				map_set_spawn(x, y);
			++x;
		}
		++y;
	}
	_check_map_props(&mt);
}
