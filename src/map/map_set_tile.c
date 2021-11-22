/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_set_tile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 07:20:17 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 14:54:22 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	map_set_tile(t_map *map, int x, int y, t_tile tile)
{
	if (x >= map->width || y >= map->height)
		return ;
	map->tiles[y][x] = tile;
}
