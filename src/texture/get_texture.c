/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_texture.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 06:49:38 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 12:22:18 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "texture.h"

t_texture	*get_texture(t_texture textures[], enum e_texture texture_num)
{
	t_texture *const	textures = get_textures();
	int					i;

	i = 0;
	while (textures[i].en != T_NONE && textures[i].en != texture_num)
		++i;
	return (textures + i);
}
