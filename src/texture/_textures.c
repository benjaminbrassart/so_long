/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _textures.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:03:29 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/16 06:44:18 by bbrassar         ###   ########.fr       */
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
		{T_SPAWN, "./assets/texture/spawn.xpm", FT_NULL},
		{T_WALL, "./assets/texture/wall.xpm", FT_NULL},
		{T_PLAYER, "./assets/texture/player.xpm", FT_NULL},
		{T_NONE, FT_NULL, FT_NULL},
	};

	return (images);
}
