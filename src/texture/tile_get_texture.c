/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tile_get_texture.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 06:38:33 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 02:45:35 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "texture.h"

t_texture	*tile_get_texture(t_instance *instance, t_tile tile)
{
	t_texture_id	id;

	if (tile == EMPTY || tile == SPAWN)
		id = TEXTURE_EMPTY;
	else if (tile == ITEM)
		id = TEXTURE_ITEM;
	else if (tile == EXIT)
		id = TEXTURE_EXIT;
	else if (tile == WALL)
		id = TEXTURE_WALL;
	else
		return (FT_NULL);
	return (get_texture(instance, id));
}
