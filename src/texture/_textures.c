/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _textures.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:03:29 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/08 11:23:53 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_def.h"
#include "texture.h"

t_texture	*_textures(void)
{
	static t_texture	images[] = {
		{T_ITEM, "./assets/texture/collectible.xpm", FT_NULL},
		{T_EXIT, "./assets/texture/exit.xpm", FT_NULL},
		{T_EMPTY, "./assets/texture/ground.xpm", FT_NULL},
		{T_WALL, "./assets/texture/wall.xpm", FT_NULL},
		{T_PLAYER_UP, "./assets/texture/player_up.xpm", FT_NULL},
		{T_PLAYER_LEFT, "./assets/texture/player_left.xpm", FT_NULL},
		{T_PLAYER_DOWN, "./assets/texture/player_down.xpm", FT_NULL},
		{T_PLAYER_RIGHT, "./assets/texture/player_right.xpm", FT_NULL},
		{T_NONE, FT_NULL, FT_NULL},
	};

	return (images);
}
