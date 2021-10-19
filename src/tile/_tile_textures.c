/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _tile_textures.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 06:43:18 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/19 06:53:48 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "texture.h"
#include "tiles.h"

t_tile_texture	*_tile_textures(void)
{
	static t_tile_texture	tile_textures[] = {
		{T_ITEM, ITEM},
		{T_EXIT, EXIT},
		{T_EMPTY, EMPTY},
		{T_SPAWN, SPAWN},
		{T_WALL, WALL},
		{T_NONE, ERROR}
	};

	return (tile_textures);
}
