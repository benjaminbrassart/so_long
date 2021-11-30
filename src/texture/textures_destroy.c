/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:26:11 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 02:43:38 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "texture.h"

void	textures_destroy(t_instance *instance)
{
	t_texture *const	textures = instance->textures;
	int					i;

	i = -1;
	while (++i < TEXTURE_COUNT)
	{
		if (textures[i].img)
			mlx_destroy_image(instance->game.display, textures[i].img);
	}
}
