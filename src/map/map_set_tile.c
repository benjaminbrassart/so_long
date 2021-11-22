/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_set_tile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 07:20:17 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 15:20:01 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	map_set_tile(t_instance *instance, int x, int y, t_tile tile)
{
	t_map *const	map = &instance->map;

	if (x >= map->width || y >= map->height)
		return ;
	map->tiles[y][x] = tile;
}
