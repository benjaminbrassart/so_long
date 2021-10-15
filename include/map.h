/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:37:33 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 07:09:51 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "tiles.h"

typedef struct s_map
{
	unsigned int	width;
	unsigned int	height;
	char			*tiles;
	int				spawn_x;
	int				spawn_y;
	int				collectibles;
}	t_map;

t_map	*_map(void);

void	map_check(void);

t_tile	map_get_tile(t_map *map, int x, int y);

void	map_load(int fd);

#endif
