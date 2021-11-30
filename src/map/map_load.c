/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:39:37 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 03:10:31 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errno.h"
#include "ft_stdio.h"
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

static void		print_loading_message(char *path)
{
	ft_puts("Loading map from '");
	ft_puts(path);
	ft_puts("'...\n");
}

t_bool	map_load(t_instance *instance, int fd, char *path)
{
	t_map *const	map = &instance->map;
	char			*line;
	int				gnl;

	print_loading_message(path);
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
		ft_puts("Done.\n");
		free(map->tiles[map->height--]);
		return (true);
	}
	else if (gnl == -1)
		print_error(ERROR_MAP_LOAD);
	return (false);
}
