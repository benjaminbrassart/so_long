/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 06:51:04 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 07:21:18 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "map.h"
#include "slerror.h"

void	map_check(void)
{
	t_map *const	map = _map();
	char const		*tiles = map->tiles;
	unsigned int	x;
	unsigned int	y;

	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			if (((y == 0 || y == map->height - 1 )
					|| (x == 0 || x == map->width - 1))
				&& tiles[map->width * y + x] != WALL)
				slexit(MAP_WALLS);
			++x;
		}
		++y;
	}
}
