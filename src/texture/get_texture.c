/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_texture.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 06:49:38 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/27 13:30:04 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "texture.h"

t_texture	*get_texture(t_instance *instance, t_texture_id id)
{
	t_texture *const	textures = instance->textures;
	int					i;

	i = 0;
	while (i < TEXTURE_COUNT && textures[i].id != id)
		++i;
	return (textures + i);
}
