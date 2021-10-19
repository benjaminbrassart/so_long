/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tile_get_texture.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 06:38:33 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/19 04:52:14 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "texture.h"
#include "tiles.h"

t_texture	*tile_get_texture(t_tile tile)
{
	t_tile_texture *const	tile_textures = _tile_textures();
	int						i;

	i = 0;
	while (tile_textures[i].tile != ERROR && tile_textures[i].tile != tile)
		++i;
	return (get_texture(tile_textures[i].texture_num));
}
