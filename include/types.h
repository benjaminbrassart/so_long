/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:23:31 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 15:09:19 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include "ft_def.h"

typedef enum e_texture_id	t_texture_id;
typedef enum e_tile			t_tile;

typedef struct s_game		t_game;
typedef struct s_map		t_map;
typedef struct s_map_props	t_map_props;
typedef struct s_player		t_player;
typedef struct s_texture	t_texture;
typedef struct s_instance	t_instance;

enum e_texture_id
{
	TEXTURE_ITEM,
	TEXTURE_EXIT,
	TEXTURE_EMPTY,
	TEXTURE_WALL,
	TEXTURE_PLAYER_UP,
	TEXTURE_PLAYER_LEFT,
	TEXTURE_PLAYER_DOWN,
	TEXTURE_PLAYER_RIGHT,
};

enum e_tile
{
	ERROR = 0,
	EMPTY = '0',
	WALL = '1',
	ITEM = 'C',
	EXIT = 'E',
	SPAWN = 'P',
};

struct s_game
{
	void	*display;
	void	*window;
	t_bool	running;
	int		status;
};

struct s_map
{
	int		width;
	int		height;
	char	**tiles;
	int		spawn_x;
	int		spawn_y;
	int		items;
};

struct s_map_props
{
	int	spawns;
	int	exits;
	int	items;
};

struct s_texture
{
	t_texture_id	en;
	char const		*path;
	void			*img;
};

struct s_player
{
	int			position_x;
	int			position_y;
	int			moves;
	int			items;
	t_texture	side;
};

struct s_instance
{
	t_game		game;
	t_map		map;
	t_player	player;
	t_texture	*textures;
};

#endif
