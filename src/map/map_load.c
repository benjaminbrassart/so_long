/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:39:37 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 09:26:41 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errno.h"
#include "ft_stdlib.h"
#include "ft_stdio.h"
#include "ft_string.h"
#include "get_next_line.h"
#include "map.h"
#include "slerror.h"
#include <stdlib.h>

static char	*_str_append(char const *str, char const *appendix)
{
	char	*new_str;
	t_size	sizes[2];

	ft_bzero(sizes, sizeof (t_size) * 2);
	if (str)
		sizes[0] = ft_strlen(str);
	if (appendix)
		sizes[1] = ft_strlen(appendix);
	new_str = ft_calloc(sizes[0] + sizes[1] + 1, sizeof (*new_str));
	if (new_str)
	{
		ft_strncat(new_str, str, sizes[0]);
		ft_strncat(new_str + sizes[0], appendix, sizes[1]);
	}
	return (new_str);
}

static void	_map_append(char *line)
{
	t_map *const	map = _map();
	char			*temp_line;
	t_size			size;
	t_bool			malloc_failed;

	size = ft_strlen(line);
	if (map->width && map->width != size)
		slexit(MAP_SHAPE);
	else if (!map->width)
		map->width = (unsigned int)size;
	temp_line = map->tiles;
	map->tiles = _str_append(temp_line, line);
	malloc_failed = (map->tiles == FT_NULL);
	free(temp_line);
	free(line);
	if (malloc_failed)
		slexit(MALLOC_FAILED);
	++(map->height);
}

void	map_load(int fd)
{
	int		gnl;
	char	*line;

	gnl = 1;
	while (gnl)
	{
		gnl = get_next_line(fd, &line) > 0;
		if (gnl == 1)
			_map_append(line);
		else if (gnl == -1)
			slexit_sys(errno);
		else
			free(line);
	}
	map_check();
}
