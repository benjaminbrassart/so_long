/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 06:51:04 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 14:53:39 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "map.h"
#include "slerror.h"

static void	_update_map_props(char tile, t_map_props *props)
{
	if (tile == SPAWN)
		++props->spawns;
	if (tile == ITEM)
		++props->items;
	if (tile == EXIT)
		++props->exits;
}

static t_bool	_check_map_props(t_map *map, t_map_props *props)
{
	if (props->spawns != 1)
		print_error(ERROR_MAP_SPAWNS);
	else if (props->items == 0)
		print_error(ERROR_MAP_ITEMS);
	else if (props->exits == 0)
		print_error(ERROR_MAP_EXITS);
	else
	{
		map->items = props->items;
		return (true);
	}
	return (false);
}

static t_bool	_should_be_wall(t_map *map, int x, int y)
{
	return (((y == 0 || y == map->height - 1)
			|| (x == 0 || x == map->width - 1)));
}

t_bool	_check_shape(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->height)
	{
		if (map->width != (int)ft_strlen(map->tiles[i++]))
		{
			print_error(ERROR_MAP_SHAPE);
			return (false);
		}
	}
	return (true);
}

t_bool	map_check(t_instance *instance)
{
	t_map *const	map = &instance->map;
	int				x;
	int				y;
	t_map_props		props;

	ft_bzero(&props, sizeof (props));
	if (!_check_shape(map))
		return (false);
	y = -1;
	while (++y < map->height)
	{
		x = -1;
		while (++x < map->width)
		{
			if (_should_be_wall(map, x, y) && map->tiles[y][x] != WALL)
			{
				print_error(ERROR_MAP_WALLS);
				return (false);
			}
			_update_map_props(map->tiles[y][x], &props);
			if ((map->tiles)[y][x] == SPAWN)
				map_set_spawn(instance, x, y);
		}
	}
	return (_check_map_props(map, &props));
}
