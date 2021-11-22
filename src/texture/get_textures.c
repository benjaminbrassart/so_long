/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_textures.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:03:29 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 14:48:03 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_def.h"
#include "texture.h"

t_texture	*get_textures(void)
{
	static t_texture	images[] = {
	{TEXTURE_ITEM, "./assets/texture/collectible.xpm", FT_NULL},
	{TEXTURE_EXIT, "./assets/texture/exit.xpm", FT_NULL},
	{TEXTURE_EMPTY, "./assets/texture/ground.xpm", FT_NULL},
	{TEXTURE_WALL, "./assets/texture/wall.xpm", FT_NULL},
	{TEXTURE_PLAYER_UP, "./assets/texture/player_up.xpm", FT_NULL},
	{TEXTURE_PLAYER_LEFT, "./assets/texture/player_left.xpm", FT_NULL},
	{TEXTURE_PLAYER_DOWN, "./assets/texture/player_down.xpm", FT_NULL},
	{TEXTURE_PLAYER_RIGHT, "./assets/texture/player_right.xpm", FT_NULL},
	};

	return (images);
}
