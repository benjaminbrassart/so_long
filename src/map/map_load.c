/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:39:37 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 02:26:26 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errno.h"
#include "ft_stdlib.h"
#include "ft_string.h"
#include "get_next_line.h"
#include "map.h"
#include "slerror.h"
#include <stdlib.h>
#include <unistd.h>

static t_bool	_map_layer_add(t_map *map, char *layer)
{
	char	**new_layers;

	new_layers = malloc(sizeof (*new_layers) * (map->height + 2));
	if (!new_layers)
	{
		print_error(ERROR_MALLOC);
		return (false);
	}
	ft_memmove(new_layers, map->tiles, sizeof (*new_layers) * map->height);
	new_layers[map->height++] = layer;
	new_layers[map->height] = FT_NULL;
	free(map->tiles);
	map->tiles = new_layers;
	return (true);
}

t_bool	map_load(t_instance *instance, int fd)
{
	t_map *const	map = &instance->map;
	char			*line;
	int				gnl;

	line = FT_NULL;
	gnl = 1;
	while (gnl > 0)
	{
		gnl = get_next_line(fd, &line);
		if (gnl >= 0 && !_map_layer_add(map, line))
			break ;
	}
	close(fd);
	if (gnl == 0)
	{
		free(map->tiles[map->height--]);
		return (true);
	}
	else if (gnl == -1)
		print_error(ERROR_MAP_LOAD);
	return (false);
}
