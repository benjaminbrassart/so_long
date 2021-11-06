/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:06:00 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/06 14:32:41 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXTURE_H
# define TEXTURE_H

# include "tiles.h"

# define TEXTURE_LENGTH 32

enum e_texture
{
	T_NONE = 0,
	T_ITEM,
	T_EXIT,
	T_EMPTY,
	T_SPAWN,
	T_WALL,
	T_PLAYER_UP,
	T_PLAYER_LEFT,
	T_PLAYER_DOWN,
	T_PLAYER_RIGHT,
};

typedef struct s_texture
{
	enum e_texture	en;
	char const		*path;
	void			*img;
}	t_texture;

typedef struct s_tile_texture
{
	enum e_texture	texture_num;
	t_tile			tile;
}	t_tile_texture;

t_tile_texture	*_tile_textures(void);

t_texture		*_textures(void);

t_texture		*get_texture(enum e_texture texture_num);

void			textures_load(void);

void			textures_destroy(void);

t_texture		*tile_get_texture(t_tile tile);

#endif
