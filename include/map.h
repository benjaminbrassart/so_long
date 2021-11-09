/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:37:33 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/09 17:35:57 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "tiles.h"

typedef struct s_map_tiles
{
	int	spawns;
	int	exits;
	int	collectibles;
}	t_map_tiles;

typedef struct s_map
{
	unsigned int	width;
	unsigned int	height;
	char			**tiles;
	unsigned int	spawn_x;
	unsigned int	spawn_y;
	unsigned int	collectibles;
}	t_map;

t_map	*_map(void);

void	map_check(void);

void	map_delete(void);

void	map_draw(void);

void	map_draw_tile(unsigned int x, unsigned int y);

t_tile	map_get_tile(unsigned int x, unsigned int y);

void	map_load(int fd);

void	map_set_spawn(unsigned int x, unsigned int y);

void	map_set_tile(unsigned int x, unsigned int y, t_tile tile);

#endif
