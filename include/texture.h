/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:06:00 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 14:47:33 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXTURE_H
# define TEXTURE_H

# include "const.h"
# include "ft_def.h"
# include "types.h"

typedef struct s_tile_texture
{
	t_texture_id	texture_num;
	t_tile			tile;
}	t_tile_texture;

t_tile_texture	*get_tile_textures(void);

t_texture		*get_texture(t_instance *instance, t_texture_id texture_id);

t_bool			textures_load(t_instance *instance);

void			textures_destroy(t_instance *instance);

t_texture		*tile_get_texture(t_instance *instance, t_tile tile);

#endif
